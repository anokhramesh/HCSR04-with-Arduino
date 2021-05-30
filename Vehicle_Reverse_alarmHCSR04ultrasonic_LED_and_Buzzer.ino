const int trig = 2;//Trigger pin of Hcsr04 is connected to Digital Pin 2 of arduino.
const int echo = 3;//Echo pin of Hcsr04 is connected to digital Pin 3 of Arduino.

const int LED1 = 8;//LED1(Yellow)connected to digital pin 8 of Arduino.
const int LED2 = 7;//LED2(Green)connected to digital pin 7 of Arduino.
const int LED3 = 6;//LED3(Blue)connected to digital pin 6 of Arduino.
const int LED4 = 5;//LED4(Red)connected to digital pin 5 of Arduino.
const int Buzzer = 4;//Buzzer connected to digital pin 4 of arduino
//const int LED5 = 11;//optional
//const int LED6 = 12;//optional
//const int LED7 = 13;//optional

int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trig , OUTPUT);//Initialized Trigger Pin is an Output
  pinMode(echo , INPUT);//Initialized Echo Pin is an input.
  
  pinMode(LED1 , OUTPUT);//Initialized Led1 is an Output
  pinMode(LED2 , OUTPUT);//Initialized Led2 is an Output
  pinMode(LED3 , OUTPUT);//Initialized Led3 is an Output
  pinMode(LED4 , OUTPUT);//Initialized Led4 is an Output
  pinMode(Buzzer , OUTPUT);//Initialized buzzer is an Output
//  pinMode(LED5 , OUTPUT);
 // pinMode(LED6 , OUTPUT);
  
  Serial.begin(9600);//boud rate of serila monitor (9600)

}

void loop()
{
  digitalWrite(trig , HIGH);//continuesly sending a high pulse to trigger pin .
  delayMicroseconds(1000);// after a delay of  1 second 
  digitalWrite(trig , LOW);//swithing off Trigger pin lo low


  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ;// formula for distance in centimetre.
  Serial.println(distance);
  

  if ( distance <= 17 )//condition checking if distance is lessthan or equal to 17??
  {
    digitalWrite(LED1, HIGH);// command for on the Led 1 and Buzzer
    tone(Buzzer,450);delay(500);noTone(Buzzer);delay(500);
  }
  else
  {
    digitalWrite(LED1, LOW);// command for off the Led 1 and Buzzer
    
  }
  if ( distance <= 24 )//condition checking if distance is lessthan or equal to 24cm??
  {
    digitalWrite(LED2, HIGH);// command for on the Led 2
  }
  else
  {
    digitalWrite(LED2, LOW);// command for off the Led 2
  }
  if ( distance <= 31 )//condition checking if distance is lessthan or equal to 31cm??
  {
    digitalWrite(LED3, HIGH);// command for on the Led 3 
  }
  else
  {
    digitalWrite(LED3, LOW);// command for off the Led 3
  }
  if ( distance <= 48 )//condition checking if distance is lessthan or equal to 48cm??
  {
    digitalWrite(LED4, HIGH);// command for on the Led 4
  }
  else
  {
    digitalWrite(LED4, LOW);// command for on the Lee4
  }
  if ( distance <= 55 )//condition checking if distance is lessthan or equal to 55cm??
  {
    // digitalWrite(LED5, HIGH);// command for on the Led 5 
  }
  
  else
  {
   // digitalWrite(LED5, LOW);// command for off the Led 5   
  }
  if ( distance <= 62 )//condition checking if distance is lessthan or equal to 62cm??
  {
   // digitalWrite(LED6, HIGH);// command for on the Led 6 
  }
  else
  {
    //digitalWrite(LED6, LOW);// command for off the Led6
  }
  if ( distance <= 79 )//condition checking if distance is lessthan or equal to 79 cm??
  {
   // digitalWrite(LED7, HIGH);// command for on the Led 7
  }
  else
  {
   // digitalWrite(LED7, LOW);// command for off the Led 7
  }
}
