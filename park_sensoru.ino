#define echoPin 6
#define trigPin 7
#define buzzerPin 8
#define RedledPin 9
#define YellowledPin 10
#define GreenledPin 11

int maximumRange= 50;
int minimumRange= 0;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(RedledPin, OUTPUT);
  pinMode(GreenledPin, OUTPUT);
  pinMode(YellowledPin, OUTPUT);

}

void loop() {
  
  int measurement = mesafe(maximumRange, minimumRange);
  if (measurement > 0) {
        melodi(measurement * 10);
        if (measurement < 10 ) { 
            digitalWrite(RedledPin, HIGH);
            digitalWrite(YellowledPin, LOW);
            digitalWrite(GreenledPin, LOW);

        }
        else if(measurement <= 20 && measurement > 10){
            digitalWrite(YellowledPin, HIGH);
            digitalWrite(GreenledPin, LOW);
            digitalWrite(RedledPin, LOW);
        }
        else if(measurement <= 30 && measurement > 20){
            digitalWrite(GreenledPin, HIGH);
            digitalWrite(YellowledPin, LOW);
            digitalWrite(RedledPin, LOW);
        }
        else{
          digitalWrite(GreenledPin, LOW);
          digitalWrite(RedledPin, LOW);
          digitalWrite(YellowledPin, LOW);
        }
    } 

}

int mesafe(int maxrange, int minrange){
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  delay(50);

  if(distance >= maxrange || distance <= minrange)
  return 0;
  return distance;
}

int melodi(int dly)
{
    tone(buzzerPin, 440);
    delay(dly);
    noTone(buzzerPin);
    delay(dly);
}
