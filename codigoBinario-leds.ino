const int ledUno = 13;
const int ledDos = 12;
const int ledTres = 11;
const int ledCuat = 10;
const int tiempoEs = 2000;

void setup() {
  pinMode(ledUno,OUTPUT);
  pinMode(ledDos,OUTPUT);
}

void loop() {
  numCero();
  delay(tiempoEs);
  numUno();
  delay(tiempoEs);
  numDos();
  delay(tiempoEs);
  numTres();
  delay(tiempoEs);
  numCuat();
  delay(tiempoEs);
  numCinc();
  delay(tiempoEs);
  numSeis();
  delay(tiempoEs);
  numSiet();
  delay(tiempoEs);
  numOcho();
  delay(tiempoEs);
  numNuev();
  delay(tiempoEs);
  numDiez();
  delay(tiempoEs);
  numOnce();
  delay(tiempoEs);
  numDoce();
  delay(tiempoEs);
  numTrec();
  delay(tiempoEs);
  numCator();
  delay(tiempoEs);
  numQuin();
  delay(tiempoEs);
}

void numCero(){
  digitalWrite(ledUno,LOW);
  digitalWrite(ledDos,LOW);
  analogWrite(ledTres,0);
  analogWrite(ledCuat,0);
}

void numUno(){
  numCero();
  analogWrite(ledCuat,255);
}

void numDos(){
  numCero();
  analogWrite(ledTres,255);
}

void numTres(){
  numCero();
  analogWrite(ledCuat,255);
  analogWrite(ledTres,255);
}

void numCuat(){
  numCero();
  digitalWrite(ledDos,HIGH);
}

void numCinc(){
  numCero();
  digitalWrite(ledDos,HIGH);
  analogWrite(ledCuat,255);
}

void numSeis(){
  numCero();
  digitalWrite(ledDos,HIGH);
  analogWrite(ledTres,255);
}

void numSiet(){
  numCero();
  digitalWrite(ledDos,HIGH);
  analogWrite(ledTres,255);
  analogWrite(ledCuat,255);
}

void numOcho(){
  numCero();
  digitalWrite(ledUno,HIGH);
}

void numNuev(){
  numCero();
  digitalWrite(ledUno,HIGH);
  analogWrite(ledCuat,255);
}

void numDiez(){
  numCero();
  digitalWrite(ledUno,HIGH);
  analogWrite(ledTres,255);
}

void numOnce(){
  numCero();
  digitalWrite(ledUno,HIGH);
  analogWrite(ledTres,255);
  analogWrite(ledCuat,255);
}

void numDoce(){
  numCero();
  digitalWrite(ledUno,HIGH);
  digitalWrite(ledDos,HIGH);
}

void numTrec(){
  numCero();
  digitalWrite(ledUno,HIGH);
  digitalWrite(ledDos,HIGH);
  analogWrite(ledCuat,255);
}

void numCator(){
  numCero();
  digitalWrite(ledUno,HIGH);
  digitalWrite(ledDos,HIGH);
  analogWrite(ledTres,255);
}

void numQuin(){
  numCero();
  digitalWrite(ledUno,HIGH);
  digitalWrite(ledDos,HIGH);
  analogWrite(ledTres,255);
  analogWrite(ledCuat,255);
}
