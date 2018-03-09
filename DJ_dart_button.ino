
#include <Keyboard.h>

const int inPin2 = 2; // choose the input pin (for a pushbutton)
const int inPin3 = 3;
const int inPin7 = 7;
const int inPin8 = 8;

//enum Pin {inPin2 = 2,inPin4 = 4,inPin7 = 7,inPin8 = 8}checkPin;

void setup() {
  Serial.begin(115200);
  pinMode(inPin2, INPUT); // declare pushbutton as input
  pinMode(inPin3, INPUT);
  pinMode(inPin7, INPUT);
  pinMode(inPin8, INPUT);
  //DDRD = B00000000;
  Keyboard.begin();
}

void loop(){
  //PORT = B11110000;
    
    if (digitalRead(inPin2) == HIGH) {         // check if the input is HIGH (button pressed)
    Serial.println("2 Pressed");
    Keyboard.press('2');
    delay(100);
    Keyboard.releaseAll();
    //delay(200);
    }
 
    if (digitalRead(inPin3) == HIGH) {         // check if the input is HIGH (button pressed)
    Serial.println("3 Pressed");
    Keyboard.press('3');
    delay(100);
    Keyboard.releaseAll();
    //delay(200);
    }

    if (digitalRead(inPin7) == HIGH) {         // check if the input is HIGH (button pressed)
    Serial.println("7 Pressed");
    Keyboard.press('7');
    delay(100);
    Keyboard.releaseAll();
    //delay(200);
    }
   
    if(digitalRead(inPin8) == HIGH) {         // check if the input is HIGH (button pressed)
    Serial.println("8 Pressed");
    Keyboard.press('8');
    delay(100);
    Keyboard.releaseAll();
    //delay(200);
      }
 }

