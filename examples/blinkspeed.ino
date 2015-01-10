/*
  Blink an LED at a rate determined by a potentiometer
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:

int led = 13;   // Set the led to pin 13
int potVal = 2; // Set up the pot
int value = 0;  // starting value for pot

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  value = analogRead(potVal);// Read the pot
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(value);               // wait for a time controlled by value
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(value;               // wait for value time

// And that's it. 

}
