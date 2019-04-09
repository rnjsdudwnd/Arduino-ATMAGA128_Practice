int pin_ROW[4] = {13, 12, 11, 10};
int pin_COLUMN[4] = {9, 8, 7, 6};
int pin_GND = 5;
int Pitch_data[16]={131,147,165,175,196,220,247,262,293,329,350,391,440,493,523,1046};
int pin_BUZZER=5;
void setup() {
 // put your setup code here, to run once:
 Serial.begin(9600);

  int i;
  for(i=0; i<4; i++)
    {
      pinMode(pin_ROW[i], OUTPUT);
      pinMode(pin_COLUMN[i], INPUT);
    }
  pinMode(pin_GND, OUTPUT);
  digitalWrite(pin_GND, LOW);
}
void loop() {
   // put your main code here, to run repeatedly:
  int i, j;
  int ROW, COLUMN, Number;

   for(i=0; i<4; i++)
      {
        digitalWrite(pin_ROW[i], HIGH);
        ROW = 0;
        ROW = i*4; // ROW = 0, 4, 8, 12
            for( j=0; j<4; j++)
                {
                   COLUMN = 0;
                   COLUMN += j; // COLUMN = 0, 1, 2, 3
                   if(digitalRead(pin_COLUMN[j]))
                        {
                            Number = ROW + COLUMN;
                            Serial.print("KEY [");
                            Serial.print(Number, HEX); 
                            Serial.println("] PUSH");
                            tone(pin_BUZZER,Pitch_data[Number]);
                            delay(800);
                            noTone(pin_BUZZER);
                        }
                        
                }
        digitalWrite(pin_ROW[i], LOW);
        delay(100);
      }
}
