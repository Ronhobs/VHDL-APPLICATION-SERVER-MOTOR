#include <Servo.h>

// C++ code
//
const int sp1=4;
const int sp2=5;
const int sp3=6;
const int sp4=7;
const int Inter=2;

Servo ctrlServo;
volatile int Button=0;
volatile int delayTime=0;
bool Mode=0;

void getButton()
{
  if(digitalRead(sp1)==0)
  	Button= 1;
  else if (digitalRead(sp2)==0)
  	Button= 2;
  else if(digitalRead(sp3)==0)
    Button= 3;
  else if(digitalRead(sp4)==0)
   Button= 4;
  
  delayTime=speedOption();
    Serial.println(Button);
    }
  int speedOption()
  {
    switch(Button)
    { 
        case 1:
        Mode=1;
        return 100;
  
          case 2: 
          Mode=1;
          return 50;
             
            case 3:
            Mode=1;
           return 25;
    
            case 4:
            Mode=1;
          return 5;
                          
           default:
           Mode=0;
           return 0;
    }}

void setup()
{
  Serial.begin(9600);
  ctrlServo.attach(3);
  pinMode(sp1,INPUT_PULLUP);
  pinMode(sp2,INPUT_PULLUP);
  pinMode(sp3,INPUT_PULLUP);
  pinMode(sp4,INPUT_PULLUP);
  pinMode(Inter,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(Inter),getButton,FALLING);
}

void loop()
{
  
  if (Mode==1)
  {
  for(int pos=0; pos<=180; pos++)
  {ctrlServo.write(pos);
    delay(delayTime);
  }
    for(int pos=180;pos>=0; pos--)
    {ctrlServo.write(pos);
    delay(delayTime);
  }
  }}
