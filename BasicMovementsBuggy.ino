void forward()
{
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
void backward()
{

Page 12 of 20

digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
void right()
{
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
void left()
{
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
void anticlockwise()
{
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
void clockwise()
{
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7,LOW);

Page 13 of 20

digitalWrite(8, HIGH);
}
void setup()
{

Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}
void loop() {
forward();
delay(1000);
backward();
delay(1000);
left();
delay(1000);
right();
delay(1000);
clockwise();
delay(1000);
anticlockwise();
delay(1000);
}