byte led[8] = {2,3,4,5,6,7,8,9};

void setup()
{
  for(byte pin=0; pin<8; pin++)
  {
    pinMode(led[pin], OUTPUT);
  }
}

void loop()
{
  for(byte s1=0; s1<12; s1++)
  {
    for(int i=0; i<=7; i++)
    {
      digitalWrite(led[i], HIGH);
      delay(100);
      digitalWrite(led[i], LOW);
    }
  }
  leds_off();
  
  for(byte s2=0; s2<12; s2++)
  {
    for(int j=7; j>=0; j--)
    {
      digitalWrite(led[j], HIGH);
      delay(100);
      digitalWrite(led[j], LOW);
    }
  }
  leds_off();
  
  for(byte s3=0; s3<12; s3++)
  {
    int k;
    for(k=0; k<=7; k++)
    {
      digitalWrite(led[k], HIGH);
      delay(100);
      digitalWrite(led[k], LOW);
    }
    for(k=6; k>0; k--)
    {
      digitalWrite(led[k], HIGH);
      delay(100);
      digitalWrite(led[k], LOW);
    }
  }
  digitalWrite(led[0], HIGH);
  delay(100);
  leds_off();
  
  for(byte s4=0; s4<12; s4++)
  {
    for(int l=0; l<3; l++)
    {
      digitalWrite(led[0], HIGH);
      digitalWrite(led[1], HIGH);
      digitalWrite(led[2], HIGH);
      digitalWrite(led[3], HIGH);
      delay(100);
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[3], LOW);
      delay(100);
    }
    for(int m=0; m<3; m++)
    {
      digitalWrite(led[4], HIGH);
      digitalWrite(led[5], HIGH);
      digitalWrite(led[6], HIGH);
      digitalWrite(led[7], HIGH);
      delay(100);
      digitalWrite(led[4], LOW);
      digitalWrite(led[5], LOW);
      digitalWrite(led[6], LOW);
      digitalWrite(led[7], LOW);
      delay(100);
    }
  }
  leds_off();
  
  for(byte s5=0; s5<12; s5++)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    delay(500);
    
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], HIGH);
    delay(500);
  }
  leds_off();
  
  for(byte s6=0; s6<20; s6++)
  {
    for(int n=0; n<4; n++)
    {
      switch(n)
      {
        case 0: 
        digitalWrite(led[0], HIGH);
        digitalWrite(led[7], HIGH);
        digitalWrite(led[3], LOW);
        digitalWrite(led[4], LOW);
        break;
        
        case 1: 
        digitalWrite(led[1], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[0], LOW);
        digitalWrite(led[7], LOW);
        break;
        
        case 2: 
        digitalWrite(led[2], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[1], LOW);
        digitalWrite(led[6], LOW);
        break;
        
        case 3: 
        digitalWrite(led[3], HIGH);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[2], LOW);
        digitalWrite(led[5], LOW);
        break;
      }
      delay(150);
    }
  }
  leds_off();

  for(byte s6=0; s6<20; s6++)
  {
    for(int p=0; p<4; p++)
    {
      switch(p)
      {
        case 0:
        digitalWrite(led[3], HIGH);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[0], LOW);
        digitalWrite(led[7], LOW);
        break;
        
        case 1: 
        digitalWrite(led[2], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[3], LOW);
        digitalWrite(led[4], LOW);
        break;
        
        case 2: 
        digitalWrite(led[1], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[2], LOW);
        digitalWrite(led[5], LOW);
        break;
        
        case 3: 
        digitalWrite(led[0], HIGH);
        digitalWrite(led[7], HIGH);
        digitalWrite(led[1], LOW);
        digitalWrite(led[6], LOW);
        break;
      }
      delay(150);
    }
  }
  leds_off();

  for(byte s6=0; s6<20; s6++)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[1], LOW);
    digitalWrite(led[6], LOW);
    delay(150);
        
    digitalWrite(led[1], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[0], LOW);
    digitalWrite(led[7], LOW);
    delay(150);
        
    digitalWrite(led[2], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[1], LOW);
    digitalWrite(led[6], LOW);
    delay(150);
        
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[2], LOW);
    digitalWrite(led[5], LOW);
    delay(150);

    digitalWrite(led[2], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    delay(150);

    digitalWrite(led[1], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[2], LOW);
    digitalWrite(led[5], LOW);
    delay(150);
  }
  digitalWrite(led[0], HIGH);
  digitalWrite(led[7], HIGH);
  digitalWrite(led[1], LOW);
  digitalWrite(led[6], LOW);
  delay(150);
  leds_off();
}

void leds_off()
{
  for(int f=0; f<8; f++)
  {
    digitalWrite(led[f], LOW);
  }
  delay(150);
}