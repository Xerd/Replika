#include <Arduino.h>

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(5, 4, 3, 2, 1, 0);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Made by: Dupkacz");
  lcd.setCursor(9,1);
  lcd.print("Xerd!");
  delay(10000); // boot up screen 10s
  
}

void loop() {

  analogWrite(0,HIGH);
  
  analogWrite(1,HIGH);
  
  analogWrite(2,HIGH);
}
 