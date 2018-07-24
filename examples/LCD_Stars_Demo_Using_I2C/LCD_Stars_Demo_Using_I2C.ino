
// Demo of KS0108B graphics LCD screen connected to MCP23017 16-port I/O expander

// Author: skv
// Date: 19.07.2018


#include <Wire.h>
#include <SPI.h>
#include <I2C_graphical_LCD_display.h>

I2C_graphical_LCD_display lcd;

void setup () 
{
  lcd.begin ();  
  lcd.lighton();
  // black box  
  lcd.clear (0, 0, 63, 63, 0xFF);
}  // end of setup

void loop () 
{
byte x;
byte y;

x = random(128);
y = random(64);
lcd.setPixel(x, y, lcd.getPixel(x, y)^1);
}  // nothing to see here, move along
