/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
int count = 41;
int pushButton = 22;
int OldState = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:

  for(int i = pushButton ;i <= count; i++)
  {
   pinMode(i, INPUT);
  }
 
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  for(int i = pushButton ;i <= count; i++)
  {
   //Serial.print( i-21 +" ");
   buttonState = digitalRead(i);
   if((buttonState == LOW) && (i != OldState))
   {
    Serial.print("play_" );
    Serial.println( i-21 );
    OldState = i;
   }
  }
  
  // print out the state of the button:
  
  delay(300);        // delay in between reads for stability
}




