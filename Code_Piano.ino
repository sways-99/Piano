int buzzer = 9;
int bt1 = 2; //button1
int bt2 =4; //button 2
int bt3 = 5; //button 3
int bt4 = 6; // button 4

void setup(){
  
  pinMode(buzzer, OUTPUT);
  pinMode(bt1, INPUT_PULLUP);
  pinMode(bt2, INPUT_PULLUP);
  pinMode(bt3, INPUT_PULLUP);
  pinMode(bt4, INPUT_PULLUP);

}

void loop(){
  sound();
}

void sound(){

  if(digitalRead(bt1) == LOW && digitalRead(bt2) == LOW){ // Sol
    tone(buzzer, 382);
  }    
  else if(digitalRead(bt2) == LOW && digitalRead(bt3) == LOW){ //La
    tone(buzzer, 440);
  } 
  else if(digitalRead(bt3) == LOW && digitalRead(bt4) == LOW){ //Si
    tone(buzzer, 500);
  }
  else if(digitalRead(bt1) == LOW && digitalRead(bt4) == LOW){ //DO 
    tone(buzzer, 532);
  } 
  else if(digitalRead(bt1) == LOW){ //DO
    tone(buzzer, 260);
  }
  else if(digitalRead(bt2) == LOW){ //Re
    tone(buzzer, 294);
  }
  else if(digitalRead(bt3) == LOW){ //MI 
    tone(buzzer, 330);
  }
  else if(digitalRead(bt4) == LOW){ //Fa
    tone(buzzer, 350);
  }
  else{
    noTone(buzzer);
}

    
  }



