#include <Arduino.h>
#include "LiquidCrystal.h"
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void config()
{
    lcd.begin(16, 2);
   
}

int a = 0;

void count()
{
    lcd.setCursor(0, 1);
    delay(500);
    lcd.print(a);
    a++;
}
void printLED_ON()
{
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
}
void printLED_OFF()
{
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
}

void printLED_STATE()
{lcd.setCursor(0, 0);
    lcd.print("ESTADO DEL LED");
}
 

