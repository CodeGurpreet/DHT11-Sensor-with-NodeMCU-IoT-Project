#define BLYNK_TEMPLATE_ID "ID"
#define BLYNK_TEMPLATE_NAME "NAME"
#define BLYNK_AUTH_TOKEN "TOKEN "
#include <DHT.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>



#define DHTPIN 4
#define DHTTYPE DHT11

char auth[] = "TOKEN";  // Your Blynk Auth Token
char ssid[] = "WIFI ID";  // Your WiFi SSID
char pass[] = "WIFI PASSWORD";  // Your WiFi Password

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
}

void loop() {
  Blynk.run();
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Blynk.virtualWrite(V5, temperature);   // Virtual pin V5 for temperature
  Blynk.virtualWrite(V6, humidity);      // Virtual pin V6 for humidity

  delay(2000);
}
