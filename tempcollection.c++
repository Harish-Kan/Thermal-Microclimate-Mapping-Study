#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <RTClib.h>

#define BME_ADDRESS 0x76
#define CHIP_SELECT 10

Adafruit_BME280 bme;
RTC_DS3231 rtc;

File dataFile;

unsigned long logInterval = 60000; // 60 seconds
unsigned long previousMillis = 0;

void setup() {

  Serial.begin(9600);
  delay(2000);

  Wire.begin();

  Serial.println("Initializing system...");

  // Initialize BME280
  if (!bme.begin(BME_ADDRESS)) {
    Serial.println("ERROR: BME280 sensor not found");
    while (1);
  }

  Serial.println("BME280 initialized");

  // Initialize RTC
  if (!rtc.begin()) {
    Serial.println("ERROR: RTC not detected");
    while (1);
  }

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, setting time");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  Serial.println("RTC initialized");

  // Initialize SD card
  if (!SD.begin(CHIP_SELECT)) {
    Serial.println("ERROR: SD card failed");
    while (1);
  }

  Serial.println("SD card initialized");

  // Create file and header
  dataFile = SD.open("climate.csv", FILE_WRITE);

  if (dataFile) {
    dataFile.println("Date,Time,Temperature_C,Humidity_pct,Pressure_hPa");
    dataFile.close();
    Serial.println("CSV file created");
  } else {
    Serial.println("Error creating file");
  }

  Serial.println("System ready");
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= logInterval) {

    previousMillis = currentMillis;

    DateTime now = rtc.now();

    float temperature = bme.readTemperature();
    float humidity = bme.readHumidity();
    float pressure = bme.readPressure() / 100.0F;

    String dataString = "";

    dataString += String(now.year()) + "-";
    dataString += String(now.month()) + "-";
    dataString += String(now.day()) + ",";

    dataString += String(now.hour()) + ":";
    dataString += String(now.minute()) + ":";
    dataString += String(now.second()) + ",";

    dataString += String(temperature, 2) + ",";
    dataString += String(humidity, 2) + ",";
    dataString += String(pressure, 2);

    Serial.println(dataString);

    dataFile = SD.open("climate.csv", FILE_WRITE);

    if (dataFile) {
      dataFile.println(dataString);
      dataFile.close();
      Serial.println("Data logged");
    } else {
      Serial.println("Error writing to SD card");
    }
  }
}