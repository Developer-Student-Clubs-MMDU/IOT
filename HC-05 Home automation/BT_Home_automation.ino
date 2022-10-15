//This code is written by PADMALAYA RAWAL :)

//For testing I have used Arduino Nano board along with HC-05 BT module

/*CONNECTIONS:
 * Connect TX of BT Module to Pin 0 of Arduino board
 * Connect RX of BT Module to Pin 1 of Arduino board
 */



#define appliance1 8  //Connect relay module pin to Pin 8 of microcontroller board
#define appliance2 9  //Connect relay module pin to Pin 9 of microcontroller board
#define appliance3 10 //Connect relay module pin to Pin 10 of microcontroller board
#define appliance4 11 //Connect relay module pin to Pin 11 of microcontroller board

char inputByte;

void setup() {
 Serial.begin(9600);  //to initialize the serial monitor
 pinMode(appliance1,OUTPUT);  //to set the mode of pin 8 as OUTPUT
 pinMode(appliance2,OUTPUT);  //to set the mode of pin 9 as OUTPUT
 pinMode(appliance3,OUTPUT);  //to set the mode of pin 10 as OUTPUT
 pinMode(appliance4,OUTPUT);  //to set the mode of pin 11 as OUTPUT
}

void loop() {
  while(Serial.available()>0){  
  inputByte= Serial.read();   //To read the input on the serial monitor
  Serial.println(inputByte);  //To print the incoming value on serial monitor
  if (inputByte=='A')
    digitalWrite(appliance1,HIGH);
  
  else if (inputByte=='a')
    digitalWrite(appliance1,LOW);

  else if (inputByte=='B')
    digitalWrite(appliance2,HIGH);

  else if (inputByte=='b')
    digitalWrite(appliance2,LOW);

  else if (inputByte=='C')
    digitalWrite(appliance3,HIGH);

  else if (inputByte=='c')
    digitalWrite(appliance3,LOW);

  else if (inputByte=='D')
    digitalWrite(appliance4,HIGH);

  else if (inputByte=='d')
    digitalWrite(appliance4,LOW);
  }
}
