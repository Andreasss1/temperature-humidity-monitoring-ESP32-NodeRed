#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

// -------------------- WiFi and MQTT Configuration --------------------
const char* ssid = "Osiiiii";   
const char* password = "12032343";

const char* mqtt_server = "broker.emqx.io";
const int mqtt_port = 1883;
const char* topic_temperature = "12032343/dht22/temperature";
const char* topic_humidity = "12032343/dht22/humidity";

// -------------------- DHT22 Setup --------------------
#define DHTPIN 33
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// -------------------- WiFi and MQTT Client Setup --------------------
WiFiClient espClient;
PubSubClient client(espClient);

// -------------------- WiFi Connection Function --------------------
void setup_wifi() {
    Serial.print("Connecting to: ");
    Serial.println(ssid);
    
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nWiFi Connected!");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
}

// -------------------- MQTT Reconnect Function --------------------
void reconnect() {
    while (!client.connected()) {
        Serial.print("Trying to connect to MQTT...");
        if (client.connect("ESP32_DHT22_Client")) {
            Serial.println("Connect to a Broker!");
        } else {
            Serial.print("Gagal, rc=");
            Serial.print(client.state());
            Serial.println(" try again 5 seconds...");
            delay(5000);
        }
    }
}

void setup() {
    Serial.begin(115200);
    dht.begin();
    setup_wifi();
    client.setServer(mqtt_server, mqtt_port);
}

void loop() {
    if (!client.connected()) {
        reconnect();
    }
    client.loop();
    
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    if (isnan(temperature) || isnan(humidity)) {
        Serial.println("Failed to read DHT22!");
        return;
    }

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C | humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    // Send data to MQTT
    char temperature_str[6];
    char humidity_str[6];
    dtostrf(temperature, 4, 2, temperature_str);
    dtostrf(humidity, 4, 2, humidity_str);

    client.publish(topic_temperature, temperature_str);
    client.publish(topic_humidity, humidity_str);

    delay(5000);
}
