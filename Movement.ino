void setup() {
for(int i=5;i<9;i++)
    pinMode(i,OUTPUT);
}
void forward() {
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}
void backward(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
 void left(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
void right(){
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
void clockwise(){
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
void stopp()
{
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}

void loop(){

//Square

forward();
delay(2000);
right();
delay(1200);

forward();
delay(2000);
right();
delay(1200);

forward();
delay(2000);
right();
delay(1200);

forward();
delay(2000);
right();
delay(1200);

stopp();
delay(1000);

//Rectangle

forward();
delay(2000);
right();
delay(1200);

forward();
delay(4000);
right();
delay(1200);

forward();
delay(2000);
right();
delay(1200);

forward();
delay(4000);
right();
delay(1200);

stopp();
delay(1000);

//Hexagon 
forward();
delay(2000);
right();
delay(680);

forward();
delay(2000);
right();
delay(1300);

forward();
delay(2000);
right();
delay(680);

forward();
delay(2000);
right();
delay(680);

forward();
delay(2000);
right();
delay(1300);

forward();
delay(2000);
right();
delay(680);

stopp();
delay(1000);

//Circle

for(int i=0;i<1000;i++){
forward();
delay(100);
clockwise();
delay(25);
}

 int i=1;
 while(i=1)
 stopp();
}
 

 