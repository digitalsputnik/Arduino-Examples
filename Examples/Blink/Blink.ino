/*
  Blink

  Based off the original Blink:
  Turns the RED LED on for one second, then off for one second, repeatedly.

  This code has been adapted to fit DS Apollo line products. You can find more info about the products:
  https://www.digitalsputnik.com

  Use the board from: https://dl.espressif.com/dl/package_esp32_index.json
  ESP32 Wroom Module (default 4MB with spifffs)

  modified 24 Aug 2021
  by Kaspar Kallas

  This example code is in the public domain.

  Original example:
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the number of the LED pin
const int ledPin = 33;  // RED LED

// the setup function runs once when you press reset or power the board
void setup() {
  // setup analog output for the white chanel
  ledcSetup(0, 19000, 12);
  ledcAttachPin(ledPin, 0);
}

// the loop function runs over and over again forever
void loop() {
  ledcWrite(0, 64);   // max is 2048, remember how much current can Your USB support...
  delay(1000);        // wait for a second
  ledcWrite(0, 0);    // turn the LED off by making the voltage 0
  delay(1000);        // wait for a second
}
