#include <Arduino.h> 
#include <BleKeyboard.h>
#include "BLEHIDDevice.h"
BleKeyboard bleKeyboard;

const int buttonPin = 12;
const int ledPin = 13;
int buttonState = 0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  Serial.begin(115200);
  Serial.println("Starting Bluetooth");
  bleKeyboard.begin();
   
}

// the loop function runs over and over again forever
void loop() {
buttonState = digitalRead(buttonPin);

if (buttonState == HIGH) 
{
  digitalWrite(ledPin,HIGH);
   if(bleKeyboard.isConnected()) {
    Serial.println("Button Pressed. Sending Hi..."); // for serial monitor. To debugging purpose
    bleKeyboard.print("Welcome to the bluetooth world");
     }
}
 else {
  digitalWrite(ledPin,LOW);
  Serial.println("Button Off..."); // for serial monitor. To debugging purpose
  bleKeyboard.print("Hello no world");
}

  delay(1000);
}
