# DHT11-Sensor-with-NodeMCU-IoT-Project
Read the Readme.md file for description on how to use it, over the internet project.

Overview
This project showcases a simple Internet of Things (IoT) application using the NodeMCU development board and the DHT11 temperature and humidity sensor. The DHT11 sensor is interfaced with the NodeMCU, which then transmits the collected data to the Blynk IoT platform.

Components Used
NodeMCU Development Board
DHT11 Temperature and Humidity Sensor
Wiring
The DHT11 sensor is connected to the NodeMCU as follows:

DHT11 GND to NodeMCU GND
DHT11 DATA to NodeMCU D2
DHT11 VCC to NodeMCU 3V
Dependencies
DHT Sensor Library for Arduino
ESP8266WiFi Library for NodeMCU
Blynk Library for IoT connectivity
Project Description
The NodeMCU reads temperature and humidity data from the DHT11 sensor.
The data is sent to the Blynk IoT platform using the Blynk library over Wi-Fi.
A Blynk app is created to visualize and monitor the real-time temperature and humidity readings.
Additionally, a button is added to the Blynk app, allowing users to remotely control the power to the DHT11 sensor.
Getting Started
To replicate this project:

Clone this repository to your local machine.
Set up a Blynk account and obtain your authentication token.
Install the required libraries in the Arduino IDE.
Open the Arduino sketch (DHT11_NodeMCU_Blynk.ino) and update the Wi-Fi credentials and Blynk authentication token.
Upload the sketch to your NodeMCU.
Run the Blynk app on your mobile device, scan the QR code, and start monitoring the sensor data.
