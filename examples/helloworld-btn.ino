// Simple interface to an LCD display module compatible with the 
//  Hitachi HD44780 driver.
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  const int  buttonPin = 2;
  int buttonState = 0;         // current state of the button
  int lastButtonState = 0;     // previous state of the button

  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  ButtonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print("Peekaboo!");
      sleep(5);
    }
    else {
      // if the current state is LOW then the button
      // went from on to off:
      lcd.setCursor(0, 1);
      lcd.print(millis()/1000);
    }
  }
  // save the current state as the last state, 
  //for next time through the loop
  lastButtonState = buttonState;



}

