#include <Arduino.h>

#include <BleKeyboard.h>
const int buttonPin = 12;
const int ledPin = 13;
int buttonState = 0; //Initialise button state as not pressed
BleKeyboard bleKeyboard("ESP32 KB");

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(bleKeyboard.isConnected() && buttonState == HIGH) 
  {
    digitalWrite(ledPin,HIGH);// indicate button press
    Serial.println("Sending button press message");
    bleKeyboard.print("Hi bluetooth world");
    delay(2000);
    buttonState = 0;
  }
else 
{
  Serial.println("Button not pressed");
  digitalWrite(ledPin,LOW);
}
  Serial.println("Waiting 1 seconds...");
  delay(1000);
}
