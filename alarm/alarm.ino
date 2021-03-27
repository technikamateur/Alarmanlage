#include <LiquidCrystal.h>

static const uint8_t red_led = 14;
static const uint8_t yellow_led = 15;
static const uint8_t green_led = 16;
static const uint8_t rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led, HIGH);
  delay(1000);
  digitalWrite(red_led, LOW);
  delay(1000);

}
