
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();

  lcd.print("Balonku ada lima");
  lcd.setCursor(0, 1);
  lcd.print("Beraneka warna");

  delay(2000);

  lcd.clear();
  lcd.print("Meletus satu");
  lcd.setCursor(0, 1);
  lcd.print("Jadi tinggal 4");

  delay(2000);
}
