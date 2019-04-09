int pin_GND = A1;
int pin_VCC = A2;
int pin_TOUCH_A = A0;
int pin_TOUCH_D = A3;
long timer1 = 0, timer2 = 0;
int Touch_flag = 1;
int pin_LED[8]={13,12,11,10,9,8,7,6};

void setup() {
 Serial.begin(9600);
 pinMode(pin_GND, OUTPUT);
 pinMode(pin_VCC, OUTPUT);
 pinMode(pin_TOUCH_D, INPUT);
 digitalWrite(pin_GND, LOW);
 digitalWrite(pin_VCC, HIGH);
 int i;
 for(i=0; i<8;i++){
  pinMode(pin_LED[i],OUTPUT);
 }
}
void loop()
{
  int i;
 // put your main code here, to run repeatedly:
 if(digitalRead(pin_TOUCH_D))
 {
  timer1 = millis();
  // 16.6ms High read
  if((timer1 - timer2) < 18)
  {
  if(Touch_flag == 0)
  {
  // print "Touch On"
  Serial.println("Touch On");
  for(i=0; i<8; i++){
    digitalWrite(pin_LED[i],HIGH);
  }
 
  
  Touch_flag = 1;
  }
  }
  timer2 = timer1;
 }
 
else
 {
  // always Low
  if((millis() - timer1) > 18)
  {
  if(Touch_flag)
  {
  // print "Touch Off"
  Serial.println("Touch Off");
  for(i=0; i<8; i++){
    digitalWrite(pin_LED[i],LOW);
  }
  
  Touch_flag = 0;
  }
  }
  }
}
