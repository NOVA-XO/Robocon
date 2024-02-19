const int motor_speed_pin1 = 11;
const int motor_direction_pinA1 = 13;
const int motor_direction_pinB1 = 12;

const int motor_speed_pin2 = 10;
const int motor_direction_pinA2 = 9;
const int motor_direction_pinB2 = 8;

const int motor_speed_pin3 = 5;
const int motor_direction_pinA3 = 7;
const int motor_direction_pinB3 = 6;

const int motor_speed_pin4 = 3;
const int motor_direction_pinA4 = 4;
const int motor_direction_pinB4 = 2;

void setup(){
  pinMode(motor_speed_pin1, OUTPUT);
  pinMode(motor_direction_pinA1, OUTPUT);
  pinMode(motor_direction_pinB1, OUTPUT);

  pinMode(motor_speed_pin2, OUTPUT);
  pinMode(motor_direction_pinA2, OUTPUT);
  pinMode(motor_direction_pinB2, OUTPUT);

  pinMode(motor_speed_pin3, OUTPUT);
  pinMode(motor_direction_pinA3, OUTPUT);
  pinMode(motor_direction_pinB3, OUTPUT);

  pinMode(motor_speed_pin4, OUTPUT);
  pinMode(motor_direction_pinA4, OUTPUT);
  pinMode(motor_direction_pinB4, OUTPUT);
}

void loop(){
  turn_left();
  turn_right();
  //go_left();
  //go_right();
  stop();
}

void forward(){
  for (int speed = 0; speed <= 120; speed += 20){

    digitalWrite(motor_direction_pinA1, HIGH);
    digitalWrite(motor_direction_pinB1, LOW);

    digitalWrite(motor_direction_pinA2, HIGH);
    digitalWrite(motor_direction_pinB2, LOW);

    digitalWrite(motor_direction_pinA3, HIGH);
    digitalWrite(motor_direction_pinB3, LOW);

    digitalWrite(motor_direction_pinA4, HIGH);
    digitalWrite(motor_direction_pinB4, LOW);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }

  delay(800);

    for (int speed = 120; speed >= 0; speed -= 20){

    digitalWrite(motor_direction_pinA1, HIGH);
    digitalWrite(motor_direction_pinB1, LOW);

    digitalWrite(motor_direction_pinA2, HIGH);
    digitalWrite(motor_direction_pinB2, LOW);

    digitalWrite(motor_direction_pinA3, HIGH);
    digitalWrite(motor_direction_pinB3, LOW);

    digitalWrite(motor_direction_pinA4, HIGH);
    digitalWrite(motor_direction_pinB4, LOW);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }

}

void back(){
  for (int speed = 0; speed <= 120; speed += 20){

    digitalWrite(motor_direction_pinA1, LOW);
    digitalWrite(motor_direction_pinB1, HIGH);

    digitalWrite(motor_direction_pinA2, LOW);
    digitalWrite(motor_direction_pinB2, HIGH);

    digitalWrite(motor_direction_pinA3, LOW);
    digitalWrite(motor_direction_pinB3, HIGH);

    digitalWrite(motor_direction_pinA4, LOW);
    digitalWrite(motor_direction_pinB4, HIGH);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }

  delay(800);

  for (int speed = 120; speed >= 0; speed -= 20){

    digitalWrite(motor_direction_pinA1, LOW);
    digitalWrite(motor_direction_pinB1, HIGH);

    digitalWrite(motor_direction_pinA2, LOW);
    digitalWrite(motor_direction_pinB2, HIGH);

    digitalWrite(motor_direction_pinA3, LOW);
    digitalWrite(motor_direction_pinB3, HIGH);

    digitalWrite(motor_direction_pinA4, LOW);
    digitalWrite(motor_direction_pinB4, HIGH);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }
}
  
void turn_right(){
  for (int speed = 0; speed <= 120; speed += 20){

    digitalWrite(motor_direction_pinA1, LOW);
    digitalWrite(motor_direction_pinB1, HIGH);

    digitalWrite(motor_direction_pinA2, HIGH);
    digitalWrite(motor_direction_pinB2, LOW);

    digitalWrite(motor_direction_pinA3, LOW);
    digitalWrite(motor_direction_pinB3, HIGH);

    digitalWrite(motor_direction_pinA4, HIGH);
    digitalWrite(motor_direction_pinB4, LOW);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }

  delay(2000);

  for (int speed = 120; speed >= 0; speed -= 20){

    digitalWrite(motor_direction_pinA1, LOW);
    digitalWrite(motor_direction_pinB1, HIGH);

    digitalWrite(motor_direction_pinA2, HIGH);
    digitalWrite(motor_direction_pinB2, LOW);

    digitalWrite(motor_direction_pinA3, LOW);
    digitalWrite(motor_direction_pinB3, HIGH);

    digitalWrite(motor_direction_pinA4, HIGH);
    digitalWrite(motor_direction_pinB4, LOW);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }
} 

void turn_left(){
  for (int speed = 0; speed <= 120; speed += 20){

    digitalWrite(motor_direction_pinA1, HIGH);
    digitalWrite(motor_direction_pinB1, LOW);

    digitalWrite(motor_direction_pinA2, LOW);
    digitalWrite(motor_direction_pinB2, HIGH);

    digitalWrite(motor_direction_pinA3, HIGH);
    digitalWrite(motor_direction_pinB3, LOW);

    digitalWrite(motor_direction_pinA4, LOW);
    digitalWrite(motor_direction_pinB4, HIGH);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }

  delay(2000);

  for (int speed = 120; speed >= 0; speed -= 20){

    digitalWrite(motor_direction_pinA1, HIGH);
    digitalWrite(motor_direction_pinB1, LOW);

    digitalWrite(motor_direction_pinA2, LOW);
    digitalWrite(motor_direction_pinB2, HIGH);

    digitalWrite(motor_direction_pinA3, HIGH);
    digitalWrite(motor_direction_pinB3, LOW);

    digitalWrite(motor_direction_pinA4, LOW);
    digitalWrite(motor_direction_pinB4, HIGH);


    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }
}

void go_right(){
  for (int speed = 0; speed <= 120; speed += 20){

    digitalWrite(motor_direction_pinA1, LOW);
    digitalWrite(motor_direction_pinB1, HIGH);

    digitalWrite(motor_direction_pinA2, HIGH);
    digitalWrite(motor_direction_pinB2, LOW);

    digitalWrite(motor_direction_pinA3, HIGH);
    digitalWrite(motor_direction_pinB3, LOW);

    digitalWrite(motor_direction_pinA4, LOW);
    digitalWrite(motor_direction_pinB4, HIGH);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }

  delay(2000);

  for (int speed = 120; speed >= 0; speed -= 20){

    digitalWrite(motor_direction_pinA1, LOW);
    digitalWrite(motor_direction_pinB1, HIGH);

    digitalWrite(motor_direction_pinA2, HIGH);
    digitalWrite(motor_direction_pinB2, LOW);

    digitalWrite(motor_direction_pinA3, HIGH);
    digitalWrite(motor_direction_pinB3, LOW);

    digitalWrite(motor_direction_pinA4, LOW);
    digitalWrite(motor_direction_pinB4, HIGH);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(200);
  }
}

void go_left(){
      for (int speed = 0; speed <= 120; speed += 20){

    digitalWrite(motor_direction_pinA1, HIGH);
    digitalWrite(motor_direction_pinB1, LOW);

    digitalWrite(motor_direction_pinA2, LOW);
    digitalWrite(motor_direction_pinB2, HIGH);

    digitalWrite(motor_direction_pinA3, LOW);
    digitalWrite(motor_direction_pinB3, HIGH);

    digitalWrite(motor_direction_pinA4, HIGH);
    digitalWrite(motor_direction_pinB4, LOW);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }

  delay(2000);

  for (int speed = 120; speed >= 0; speed -= 20){

    digitalWrite(motor_direction_pinA1, HIGH);
    digitalWrite(motor_direction_pinB1, LOW);

    digitalWrite(motor_direction_pinA2, LOW);
    digitalWrite(motor_direction_pinB2, HIGH);

    digitalWrite(motor_direction_pinA3, LOW);
    digitalWrite(motor_direction_pinB3, HIGH);

    digitalWrite(motor_direction_pinA4, HIGH);
    digitalWrite(motor_direction_pinB4, LOW);

    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
    delay(100);
  }
}

void stop(){
  while (true){
    int speed = 0;
    analogWrite(motor_speed_pin1, speed);
    analogWrite(motor_speed_pin2, speed);
    analogWrite(motor_speed_pin3, speed);
    analogWrite(motor_speed_pin4, speed);
  }
}