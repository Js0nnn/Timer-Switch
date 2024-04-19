#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 20, 4);


int i;

void setup()
{
  // initialize the LCD
  lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("Hello, world!");
  delay(2000);
  lcd.clear();
}

void loop()
{
  for(i=0;i<100000;i++)
  {
  lcd.setCursor(0,0);
  lcd.print(i);
  }
  delay(100);
}
