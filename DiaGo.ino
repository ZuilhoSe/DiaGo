#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //LCD Display pins

const int sensorPin = A0; //Temperature sensor pin
float temp = 0; //Temperature variable
const int buttonPin = 8; //Button pin
int estado = 0; // Pushbutton variable
               
void setup(){
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
}
 
void loop(){
   temp = (analogRead(sensorPin) * 0.0048828125 * 100); //Temperature measure
   estado = digitalRead(buttonPin); //Button read
   
   if (estado == 1) {
    lcd.clear();
    lcd.print("Temperatura = "); //Write on LCD
    lcd.print(temp); //Write on LCD
    lcd.print(" C"); //Write on LCD
    delay(2000); //Wait 2 secs
  }else{
    lcd.print("Aguardando leitura"); //Write on LCD
  }
}
