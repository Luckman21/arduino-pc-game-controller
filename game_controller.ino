#include <Keyboard.h>  // Include the required libraries for this project
#include <HID_Buttons.h>

// Assigns sensors to pins on the Arduino board
const uint8_t pushButton = 8; //Physical Switch
const uint8_t micButton = 12; //Microphone
const int photoLED1 = 3;
const int photoLED2 = 4;
const int pushLED = 5;
const int micLED = 6;


// Assigns keyboard keys to buttons
//Code for this block sourced from https://www.insertcontrollerhere.com/example-code/button
const uint8_t ok = 'i'; 
const uint8_t cancel = 'o';
const uint8_t menu = 'p';
const uint8_t up = 'w';
const uint8_t down = 's';
const uint8_t left = 'a';
const uint8_t right = 'd';
/*
const uint8_t startB = 'enter';
const uint8_t switchB = 'right';
const uint8_t pgUp = 'right';
const uint8_t pgDown = 'right';
const uint8_t target = 'right';
const uint8_t assist = 'right';
const uint8_t camera = 'right';
*/
// Creates a relationship between buttons and keyboard keys
//Code for this block sourced from https://www.insertcontrollerhere.com/example-code/button
KeyboardButton okB(ok); 
KeyboardButton cancelB(cancel);
KeyboardButton menuB(menu);
KeyboardButton upKey(up);
KeyboardButton downKey(down);
KeyboardButton leftKey(left);
KeyboardButton rightKey(right);
/*
KeyboardButton startKey(startB);
KeyboardButton switchKey(switchB);
KeyboardButton pgUpB(pgUp);
KeyboardButton pgDownB(pgDownB);
KeyboardButton targetB(target);
KeyboardButton assistB(assist);
KeyboardButton camera(cameraB);*/

void setup() {
  // Sets Arduino button pins as inputs
  pinMode(pushButton, INPUT_PULLUP);  
  pinMode(micButton, INPUT_PULLUP);

  //Sets up the Serial Monitor to list brightness intensity values
  Serial.begin(9600);

  pinMode(pushLED, OUTPUT);
  pinMode(photoLED1, OUTPUT);
  pinMode(photoLED2, OUTPUT);
  pinMode(micLED, OUTPUT);
  
  // Causes the Arduino to emulate a keyboard for the connected computer
  Keyboard.begin(); 
}

void loop() {
  /*
  For Initial Testing of Input Transmission from Board to Computer
  okB.set(true);
  delay(100);
  okB.set(false);
  delay(100);
  okB.set(true);
  delay(100);
  okB.set(false);
  //Battle speed formula (Normal): [32768 / (120 + [BattleSpeed x 15 / 8])]
  //Default BattleSpeed = 128 (Ranges from 0-255)
  //Therefore, using the formula the delay will be 32408
  delay(9102);
  */

  digitalWrite(pushLED, LOW);
  digitalWrite(photoLED1, LOW);
  digitalWrite(photoLED2, LOW);
  digitalWrite(micLED, LOW);

  //Sets up Photoresistor to store data as an int 'value' obtaining information from pin A4
  int value = analogRead(A4);
  
  //Checks if buttons are pressed or released
  boolean pressed1 = !digitalRead(pushButton);
  boolean pressed2 = !digitalRead(micButton);

  //If the button is pressed, run the attack macro
  if (pressed1){
    digitalWrite(pushLED, HIGH);
    attack();
  }

  //If the photoresistor value drops to or below 550 (gets dark), execute the magic macro
  if (value <= 550){
    digitalWrite(photoLED1, HIGH);
    magic();
  }

  //If there is a high volume of sound detected by the mic, perform the ability macro
  if (pressed2){
    digitalWrite(micLED, HIGH);
    ability();
  }

  //If the photoresistor value reaches 950 or above, run the item macro
  if (value >= 950){
    digitalWrite(photoLED2, HIGH);
    item();
  }
}

//attack macro
void attack(){
  //Presses the "OK" button twice to select attack and the enemy
  okB.set(true);
  delay(100);
  okB.set(false);
  delay(100);
  okB.set(true);
  delay(100);
  okB.set(false);
}

void magic(){
  //Presses the arrow key down once to hover the cursor over magic
  downKey.set(true);
  delay(100);
  downKey.set(false);
  delay(100);
  //Presses the "OK" button 3x to select the spell and cast it
  okB.set(true);
  delay(100);
  okB.set(false);
  delay(100);
  attack(); 
}

void ability(){
  //Presses the arrow key down once to hover the cursor over magic
  downKey.set(true);
  delay(100);
  downKey.set(false);
  delay(100);
  //Presses the arrow key down once more to hover the cursor over ability, then executes it
  magic();
}

void item(){
  //Presses the arrow key down once to hover the cursor over magic
  downKey.set(true);
  delay(100);
  downKey.set(false);
  delay(100);
  //Presses the arrow key down 2 more times to hover the cursor over item, then uses the first item
  ability();
}
