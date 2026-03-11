# Thermal-Microclimate-Mapping-Study

Goal: Measure air temperatures at different locations around campus and demonstrate that some areas are consistently warmer or colder due to basic heat transfer physics (while taking into account surface, snow, atmospheric temperature) using a sensor that Harish is building, we will compare our results to the temperature in Kingston and describe how the various microclimates differ compared to the climate

Method:
- Choose several representative locations around campus (near building walls, open areas, snow covered grass, sheltered courtyards)
- Measure air temperature at each location at a consistent height, two times a day over a period of time.
- Record all data in a table, and analyze.

Materials: 
- Digital thermometer
- WHITE plastic bucket, 2-5 L, ~18-25 cm diameter, ~15-25 cm height
- Heat exchange with buildings: buildings release heat into nearby-Arduino (Uno/Nano)
- Temperature sensor (BME280) 
- DFRobot DFR0229 MICROSD CARD MODULE FOR ARDUINO
- DS3231 Real-Time Clock Module (RTC) 
- Breadboard
- Jumper wires
- Micro SD card (16 gb) 

- Battery or power bank
- Protective enclosure air

Goal: Measure air temperatures at different locations around campus and demonstrate that some areas are consistently warmer or colder due to basic heat transfer physics (while taking into account surface, snow, atmospheric temperature) using a sensor that Harish is building, we will compare our results to the temperature in Kingston and describe how the various microclimates differ compared to the climate

Method:
- Choose several representative locations around campus (near building walls, open areas, snow covered grass, sheltered courtyards)
- Measure air temperature at each location at a consistent height, two times a day over a period of time.
- Record all data in a table, and analyze.

Materials: 
- Digital thermometer
- WHITE plastic bucket, 2-5 L, ~18-25 cm diameter, ~15-25 cm height
- Heat exchange with buildings: buildings release heat into nearby-Arduino (Uno/Nano)
- Temperature sensor (BME280) 
- DFRobot DFR0229 MICROSD CARD MODULE FOR ARDUINO
- DS3231 Real-Time Clock Module (RTC) 
- Breadboard
- Jumper wires
- Micro SD card (16 gb) 

- Battery or power bank
- Protective enclosure air


<img width="1536" height="1024" alt="689cc582-8356-40f0-bd5e-e1908f86437b" src="https://github.com/user-attachments/assets/da060a38-d37c-4d0c-b22c-b3b5a43cbb5a" />


<img width="1536" height="1024" alt="01fdf578-c030-4c71-b633-1ac5730a593e" src="https://github.com/user-attachments/assets/2c5ab2f6-67c9-4f6b-8e02-9c649a4f7a25" />



Physics concepts
- Heat transfer: radiation (sun warming surfaces), convection (wind removing heat)
- Surface properties: different materials absorb and retain heat differently


Python concepts (Harish)
- Import the temperature data
- Clean and organize the data
- Calculate averages, temperature differences, and uncertainties
- Generate graphs

GIS concepts (Sam)
- Plot each measurement location on a campus map
- Use a color gradient map and point references to visualize warmer and cooler zones on campus

End goal:
In the end, we need a clear, quantitative demonstration that basic heat transfer physics explains real, measurable temperature differences across different campus environments, supported by data, graphs and GIS.

We should have:
- Clean table of temperature measurements
- 2-3 graphs comparing temperatures between locations and times 
- Campus map showing warm and cool zones
- Report demonstrating physics calculations
- One final, structured lab report that includes all this


Lab Design Proposal
Summary and Goal:
The objective of this lab is to identify microclimates and measure air temperature differences at multiple locations around the Queen’s campus, and demonstrate that individual sites are consistently warmer or colder due to heat transfer effects, such as radiation, convection/wind exposure, and proximity to buildings and surfaces. Air temperature measurement will be conducted via a student-built Arduino-based air temperature logger (BME280 sensor). These measurements will be compared to a baseline air temperature of the city of Kingston recorded by Environment Canada at the same time, to quantify the temperature anomalies of microclimates around the Queen’s campus. The goal is to determine whether the observed microclimate trends agree with both site-based quantitative and qualitative predictions based on heat transfer physics.


Method & Equipment:
Air temperature will be measured at ten fixed sites around campus, each of which represents a unique microclimate that is based upon its features (near building walls, exposed/windy areas, sheltered areas, snow-covered areas, etc.) Air temperature measurements will be taken at a constant height of one metre above the ground at two fixed times per day over a period of seven days. During measurements, a simple ventilated white shield will be placed over the sensor in order to reduce environmental biases that could alter results, such as direct radiation and precipitation. At each individual site and time, three readings will be recorded and averaged after allowing the sensor to be equilibrated. Each measurement will be timestamped and directly compared to the Kingston air temperature recorded by Environment Canada at that same timestamp. The data collected will be analyzed quantitatively within Python in order to calculate site averages and uncertainties. Python will also be used to create graphs and plots to better visualize the collected data. ArcGIS pro will be utilized to plot the collected data and create a thermal microclimate map of the Queen’s campus.

Equipment: 
- White plastic bucket (2-5 L, ~18-25 cm diameter) with side ventilation holes
- Arduino (Uno/Nano)
- BME280 temperature sensor
- MicroSD card module (e.g., DFRobot DFR0229)
- DS3231 Real-Time Clock (RTC)
- Breadboard
- Jumper wires
- MicroSD card (≥16 GB)
- Battery or power bank
- Protective enclosure for electronics
- Digital thermometer


Theory & Model:
Air temperature at a site is influenced by its individual heat transfer processes. During the winter season, differences between microclimates are driven by radiative effects (sun and shade), convection (wind mixing and cooling) and heat exchange with nearby surfaces. This lab makes use of a quantitative baseline model based on the official Environment Canada air temperature of Kingston at the same time. We define the microclimate temperature anomaly as: ΔTmicro = Tsite - Tkingston, where Tsite is the measured air temperature at an individual site and Tkingston is the air temperature of Kingston, recorded by Environment Canada at the same timestamp. Exposed/windy sites are expected to have ΔTmicro = 0, due to high exposure to ambient air. Sheltered areas and near-building/surface sites are expected to have ΔTmicro > 0 due to reduced convective cooling, and heat leakage. Shaded and snow-covered areas are expected to have ΔTmicro < 0 due to higher rates of convective cooling. As the air temperature of each site will be measured using three repeated measurements, the formula used to obtain the mean temperature is T=1ni=1nTi , with the formula for the uncertainty in the mean being σT=sn, where s is the standard deviation. The uncertainty in the anomaly will be estimated using the formula σΔT=σTsite2+σTkingston2 .  The lab model will be assessed by determining whether the measured ΔTmicro values are consistent with the quantitative and qualitative predictions and if they exceed estimated uncertainties.


Experimental Procedure:
First, the air temperature sensor and data logger will be assembled in the physics lab. It will then be brought outside for a short calibration check, by comparing its readings to a digital thermometer in order to identify systematic offsets. Ten locations around campus will be selected and labelled from s1 to s10. Site descriptors will also be recorded based on the site's proximity to a building, whether the site is exposed/windy or sheltered, snow-covered or cleared, and if it is in the sun or shaded. To measure the air temperature at a site, the sensor will be held at approximately one metre above the ground. The sensor will be placed underneath the ventilated white bucket, in order to shield it from radiation and precipitation. It will be allowed to equilibrate for 60-120 seconds before recording temperature values. A total of three readings will be recorded at a time at each site, and the mean of those values will be the accepted temperature value for the site at that time. This process will be repeated at each site at two fixed times per day over a period of seven days. Once complete, the data will be stored with timestamps and matched to the baseline temperatures of Kingston from Environment Canada at the same timestamp. Means and uncertainties from the data will then be calculated inside Python. The data will then be transferred to ArcGIS Pro, where a thermal microclimate map of the Queen’s campus will be created.


Team & Timeline:
The project will be completed by a three-person team, but tasks can be fairly divided between more people. The responsibilities that will be divided amongst the team include sensor construction, maintenance and calibration, field measurements and report standardisation, and finally data analysis and GIS mapping. The proposed timeline for this lab is spread over six weeks. In week 1, materials are ordered and organised in order to successfully build the sensor. In week 2, the sensor will be assembled and calibrated. In week 3, the ten sites around campus will be selected and evaluated based on their environmental traits. Week 4 will be when data collection at each site is completed. During week 5, project members will conduct data analysis and uncertainty estimation, as well as mapping the data using GIS. During week 6, the final lab report will be prepared and completed.


Progress Report 1
Last week, our group completed and submitted our lab proposal. Contained within the proposal was our lab outline, list of materials, data measurement procedure, and timeline. Harish has identified and created a list of materials that will be needed in order to build the air temperature sensor and data logging system. Eilean focused on writing the proposal outline and theory. Sam focused on creating the lab timeline, as well as helping create the list of materials and describing the data collection and processing process. He also described where GIS will be used in the final report. Our plan next week is to assemble the Arduino temperature sensor and data logging system as soon as the materials arrive. Once the sensor is assembled we will test the sensor as outlined in the process written in our lab proposal. We will confirm that temperature readings are accurate and that the data is actually being saved to the microSD card. We will then calibrate the sensor in order for it to be ready to start collecting data in the field. Our main issue is that the materials for the sensor have not arrived, so we have not begun assembling it and collecting field measurements. Our plan is to assemble the sensor immediately after receiving the parts and to test and calibrate it as soon as possible after.





Physics concepts
- Heat transfer: radiation (sun warming surfaces), convection (wind removing heat)
- Surface properties: different materials absorb and retain heat differently


Python concepts (Harish)
- Import the temperature data
- Clean and organize the data
- Calculate averages, temperature differences, and uncertainties
- Generate graphs

GIS concepts (Sam)
- Plot each measurement location on a campus map
- Use a color gradient map and point references to visualize warmer and cooler zones on campus

End goal:
In the end, we need a clear, quantitative demonstration that basic heat transfer physics explains real, measurable temperature differences across different campus environments, supported by data, graphs and GIS.

We should have:
- Clean table of temperature measurements
- 2-3 graphs comparing temperatures between locations and times 
- Campus map showing warm and cool zones
- Report demonstrating physics calculations
- One final, structured lab report that includes all this


Lab Design Proposal
Summary and Goal:
The objective of this lab is to identify microclimates and measure air temperature differences at multiple locations around the Queen’s campus, and demonstrate that individual sites are consistently warmer or colder due to heat transfer effects, such as radiation, convection/wind exposure, and proximity to buildings and surfaces. Air temperature measurement will be conducted via a student-built Arduino-based air temperature logger (BME280 sensor). These measurements will be compared to a baseline air temperature of the city of Kingston recorded by Environment Canada at the same time, to quantify the temperature anomalies of microclimates around the Queen’s campus. The goal is to determine whether the observed microclimate trends agree with both site-based quantitative and qualitative predictions based on heat transfer physics.


Method & Equipment:
Air temperature will be measured at ten fixed sites around campus, each of which represents a unique microclimate that is based upon its features (near building walls, exposed/windy areas, sheltered areas, snow-covered areas, etc.) Air temperature measurements will be taken at a constant height of one metre above the ground at two fixed times per day over a period of seven days. During measurements, a simple ventilated white shield will be placed over the sensor in order to reduce environmental biases that could alter results, such as direct radiation and precipitation. At each individual site and time, three readings will be recorded and averaged after allowing the sensor to be equilibrated. Each measurement will be timestamped and directly compared to the Kingston air temperature recorded by Environment Canada at that same timestamp. The data collected will be analyzed quantitatively within Python in order to calculate site averages and uncertainties. Python will also be used to create graphs and plots to better visualize the collected data. ArcGIS pro will be utilized to plot the collected data and create a thermal microclimate map of the Queen’s campus.

Equipment: 
- White plastic bucket (2-5 L, ~18-25 cm diameter) with side ventilation holes
- Arduino (Uno/Nano)
- BME280 temperature sensor
- MicroSD card module (e.g., DFRobot DFR0229)
- DS3231 Real-Time Clock (RTC)
- Breadboard
- Jumper wires
- MicroSD card (≥16 GB)
- Battery or power bank
- Protective enclosure for electronics
- Digital thermometer


Theory & Model:
Air temperature at a site is influenced by its individual heat transfer processes. During the winter season, differences between microclimates are driven by radiative effects (sun and shade), convection (wind mixing and cooling) and heat exchange with nearby surfaces. This lab makes use of a quantitative baseline model based on the official Environment Canada air temperature of Kingston at the same time. We define the microclimate temperature anomaly as: ΔTmicro = Tsite - Tkingston, where Tsite is the measured air temperature at an individual site and Tkingston is the air temperature of Kingston, recorded by Environment Canada at the same timestamp. Exposed/windy sites are expected to have ΔTmicro = 0, due to high exposure to ambient air. Sheltered areas and near-building/surface sites are expected to have ΔTmicro > 0 due to reduced convective cooling, and heat leakage. Shaded and snow-covered areas are expected to have ΔTmicro < 0 due to higher rates of convective cooling. As the air temperature of each site will be measured using three repeated measurements, the formula used to obtain the mean temperature is T=1ni=1nTi , with the formula for the uncertainty in the mean being σT=sn, where s is the standard deviation. The uncertainty in the anomaly will be estimated using the formula σΔT=σTsite2+σTkingston2 .  The lab model will be assessed by determining whether the measured ΔTmicro values are consistent with the quantitative and qualitative predictions and if they exceed estimated uncertainties.


Experimental Procedure:
First, the air temperature sensor and data logger will be assembled in the physics lab. It will then be brought outside for a short calibration check, by comparing its readings to a digital thermometer in order to identify systematic offsets. Ten locations around campus will be selected and labelled from s1 to s10. Site descriptors will also be recorded based on the site's proximity to a building, whether the site is exposed/windy or sheltered, snow-covered or cleared, and if it is in the sun or shaded. To measure the air temperature at a site, the sensor will be held at approximately one metre above the ground. The sensor will be placed underneath the ventilated white bucket, in order to shield it from radiation and precipitation. It will be allowed to equilibrate for 60-120 seconds before recording temperature values. A total of three readings will be recorded at a time at each site, and the mean of those values will be the accepted temperature value for the site at that time. This process will be repeated at each site at two fixed times per day over a period of seven days. Once complete, the data will be stored with timestamps and matched to the baseline temperatures of Kingston from Environment Canada at the same timestamp. Means and uncertainties from the data will then be calculated inside Python. The data will then be transferred to ArcGIS Pro, where a thermal microclimate map of the Queen’s campus will be created.


Team & Timeline:
The project will be completed by a three-person team, but tasks can be fairly divided between more people. The responsibilities that will be divided amongst the team include sensor construction, maintenance and calibration, field measurements and report standardisation, and finally data analysis and GIS mapping. The proposed timeline for this lab is spread over six weeks. In week 1, materials are ordered and organised in order to successfully build the sensor. In week 2, the sensor will be assembled and calibrated. In week 3, the ten sites around campus will be selected and evaluated based on their environmental traits. Week 4 will be when data collection at each site is completed. During week 5, project members will conduct data analysis and uncertainty estimation, as well as mapping the data using GIS. During week 6, the final lab report will be prepared and completed.


Progress Report 1
Last week, our group completed and submitted our lab proposal. Contained within the proposal was our lab outline, list of materials, data measurement procedure, and timeline. Harish has identified and created a list of materials that will be needed in order to build the air temperature sensor and data logging system. Eilean focused on writing the proposal outline and theory. Sam focused on creating the lab timeline, as well as helping create the list of materials and describing the data collection and processing process. He also described where GIS will be used in the final report. Our plan next week is to assemble the Arduino temperature sensor and data logging system as soon as the materials arrive. Once the sensor is assembled we will test the sensor as outlined in the process written in our lab proposal. We will confirm that temperature readings are accurate and that the data is actually being saved to the microSD card. We will then calibrate the sensor in order for it to be ready to start collecting data in the field. Our main issue is that the materials for the sensor have not arrived, so we have not begun assembling it and collecting field measurements. Our plan is to assemble the sensor immediately after receiving the parts and to test and calibrate it as soon as possible after.
