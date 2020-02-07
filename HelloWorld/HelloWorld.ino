#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
const int colorR = 255;
const int colorG = 77;
const int colorB = 154;
void setup() {
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    lcd.setRGB(colorR, colorG, colorB);
    // Print a message to the LCD.
    lcd.print("Metallica - One");
    lcd.print("DARKNES!! IMPRISONING ME!! ALL THAT I SEE!! ABSOLUTE HORROR!! I CANNOT LIVE!! I CANNOT DIE!! TRAPPED IN MYSELF!! BODY MY HOLDING CELL!!");
    lcd.print("LANDMINE!! HAS TAKEN MY SIGHT!! TAKEN MY SPEECH!! TAKEN MY HEARING!! TAKEN MY ARMS!! TAKEN MY LEGS!! TAKEN MY SOUL!! LEFT ME WITH LIFE IN HELL!!");
    delay(1000);
}
void loop() {
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    lcd.print(millis() / 1000);
    delay(100);
}
