int buzzer = 9;
int bt1 = 2;
int bt2 =4;
int bt3 = 5;
int bt4 = 6;

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
  
  if(digitalRead(bt1) == LOW && digitalRead(bt2) == LOW){
    tone(buzzer, 382);
  }
  else if(digitalRead(bt2) == LOW && digitalRead(bt3) == LOW){
    tone(buzzer, 440);
  } 
  else if(digitalRead(bt3) == LOW && digitalRead(bt4) == LOW){
    tone(buzzer, 500);
  }
  else if(digitalRead(bt1) == LOW && digitalRead(bt4) == LOW){
    tone(buzzer, 532);
  } 
  else if(digitalRead(bt1) == LOW){
    tone(buzzer, 260);
  }
  else if(digitalRead(bt2) == LOW){
    tone(buzzer, 294);
  }
  else if(digitalRead(bt3) == LOW){
    tone(buzzer, 330);
  }
  else if(digitalRead(bt4) == LOW){
    tone(buzzer, 350);
  }
  else{
    noTone(buzzer);
}

    
  }


}
