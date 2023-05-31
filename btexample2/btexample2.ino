#include <SoftwareSerial.h>

// Initialize the Rx and Tx pins for Bluetooth communication
SoftwareSerial BTSerial(10, 11); // RX, TX

// Initialize the potentiometer pin
const int potPin = A0;

void setup() {
  // Set the baud rate for Bluetooth serial communication
  BTSerial.begin(9600);
}

void loop() {
  // Read the value of the potentiometer
  int potValue = analogRead(potPin);

  // Add a unique character before and after the potentiometer value
  BTSerial.print("<");
  BTSerial.print(potValue);
  BTSerial.print(">");

  // Wait for 5 seconds before sending the next potentiometer value
  delay(5000);
}