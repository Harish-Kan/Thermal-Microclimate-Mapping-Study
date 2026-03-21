#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2  // DAT connected to digital pin 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);

  float timeSec = millis() / 1000.0;

  Serial.print("Time: ");
  Serial.print(timeSec);
  Serial.print(" s | Temp: ");
  Serial.print(tempC);
  Serial.println(" C");

  delay(2000);
}
