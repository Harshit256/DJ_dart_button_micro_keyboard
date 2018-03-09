3#include <Keyboard.h>

void setup() {
  pinMode(2, INPUT);
  Keyboard.begin();
}

void loop() {
  //if the button is pressed
  if(digitalRead(2)==HIGH){
    // e.g. Apple's CMD key
    // Keyboard.press(KEY_LEFT_GUI);
    //Keyboard.println("Pressed 1");
    Keyboard.press('1');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    //111111111111111111111
//    
    }
}
