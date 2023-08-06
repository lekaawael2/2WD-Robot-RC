void setup() {
Serial.begin(9600);
pinMode(2 , OUTPUT);
pinMode(3 , OUTPUT);
pinMode(4 , OUTPUT);
pinMode(5 , OUTPUT);

pinMode(6 , OUTPUT);
pinMode(9 , OUTPUT);

}

void loop() {
  Serial.available();
char x =Serial.read();
  switch (x)
  {
    case 'f':
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    analogWrite(6 , 128);
    analogWrite(9 , 128);
    break ;
    case 'r':
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    analogWrite(6 , 128);
    analogWrite(9 , 0);
    break;
     case 'l':
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    analogWrite(6 , 0);
    analogWrite(9 , 128);
    break;
     case 's':
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    analogWrite(6 , 0);
    analogWrite(9 , 0);
    break;
        case 'b':
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 1);
    analogWrite(6 , 128);
    analogWrite(9 , 128);
    break;

  }}