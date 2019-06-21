#include "DigiKeyboard.h"

int P0 = 0;
int P2 = 0;

void setup() {
     pinMode(2, INPUT);
     pinMode(0, INPUT); //0 is P0, 1 is P1, 2 is P2, etc. - unlike the analog inputs, for digital inputs the pin number matches.
}

void loop() {

  if(P0 = digitalRead(0))
  { 
    digitalWrite(1, HIGH);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(250);
    DigiKeyboard.print("iexplore.lnk");
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(1, LOW);
  }  


   if(P2 = digitalRead(2))
  { 
    digitalWrite(1, HIGH);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(200);
    DigiKeyboard.print("shutdown /p");
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(1, LOW);
  }  
}
