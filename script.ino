int w = 4;
int a = 5;
int s = 6;
int d = 7;
  int wState = 0;
  int aState = 0;
  int sState = 0;
  int dState = 0;
  
void setup(){
  Serial.begin(9600);
  pinMode(w, INPUT);
  pinMode(a, INPUT);
  pinMode(s, INPUT);
  pinMode(d, INPUT);
}

void loop(){
  wState = digitalRead(w);
  aState = digitalRead(a);
  sState = digitalRead(s);
  dState = digitalRead(d);

if(wState == HIGH){
  Serial.print("w");
  } if(aState == HIGH){
    Serial.print("a");
  }  if(sState == HIGH){
    Serial.print("s");
  }
     if(dState == HIGH) {
      Serial.print("d");
    }
  if ((wState == LOW) && (aState == LOW) && (sState == LOW) && (dState == LOW)){ 
     Serial.print("z");
  }
  Serial.print(" ");
  Serial.print(0);
  Serial.print(" ");
  Serial.print(0);
  Serial.print(" ");
  Serial.println("m");

delay(150);
}
