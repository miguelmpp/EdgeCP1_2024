#include <ArduinoJson.h>
#include "DHT.h"

const int TAMANHO = 50;

int cm = 0;
int triggerPin = 7;
int echoPin = 8;
int ldrPin = A0; 

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ldrPin, INPUT); 
  dht.begin();
  Serial.begin(9600);
}

long readUltrasonicDistance(int triggerPin, int echoPin) {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void loop() {
  cm = 0.01723 * readUltrasonicDistance(triggerPin, echoPin);

  float temp = dht.readTemperature();
  float umi = dht.readHumidity();


  int ldrValue = analogRead(ldrPin);

  
  StaticJsonDocument<TAMANHO> json;

  
  json["Distância"] = cm;

  
  json["temperatura"] = temp;
  json["umidade"] = umi;

  
  json["Luz"] = ldrValue;

  
  serializeJson(json, Serial);
  Serial.println();

  
  delay(100);
}
