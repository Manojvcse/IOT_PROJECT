#define trigPin 2 //Sensor Echo pin connected to Arduino pin 13
#define echoPin 3 //Sensor Trip pin connected to Arduino pin 12
//manojvcse
void setup() 
{  
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(4, OUTPUT);  
 pinMode(5, OUTPUT);  
 pinMode(6, OUTPUT);  
 pinMode(7, OUTPUT);  
 digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
}

void loop() 
{
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

if(distance>=20)
{
 digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  }
else
  if(distance>=15 && distance<20)
{
 digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  }
else
  if(distance>=10 && distance<15)
{
 digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  }
else
  if(distance>=5 && distance<10)
{
 digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  }
 else
  if(distance<5)
{
 digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  delay(250); 
  }
  
