int speed = 255;
int trigPin = 4;
int echoPin = 2;
int motAF = 5;
int motBF = 6;
int motAB = 9;
int motBB = 10;
int analogPin = 1;
int linePin = 3;


long distance;
long randNumber;

int line1;

 void setup() { 
 pinMode(motAF, OUTPUT);
 pinMode(motBF, OUTPUT);
 pinMode(motAB, OUTPUT);
 pinMode(motBB, OUTPUT);
  
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 
  pinMode(linePin,INPUT);
 
 randomSeed(analogRead(0));
 } 

 void loop() {
 
 speed = analogRead(analogPin) / 4;  
 
 line1 = digitalRead(linePin);
   
 if (line1 > 0)
   {
   analogWrite(motBF, speed);
   analogWrite(motAF, 0);
   }
 else  
   {
   analogWrite(motAF, speed);
   analogWrite(motBF, 0);      
   }  
 delay(100); 
 }
 
