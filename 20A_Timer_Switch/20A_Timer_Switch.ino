#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define ON_LED_PIN 5
#define OFF_LED_PIN 13
#define BUTTON_PIN 7
#define relayPin 3
#define INCR 12
#define DECR 10

int t,m;
int mins=4;
long secs=0;
byte lastButtonState = LOW;
byte onLedState = LOW;
byte offLedState = HIGH;
byte relayState = LOW;

unsigned long debounceDuration = 50; // millis
unsigned long lastTimeButtonStateChanged = 0;

void setup() {

  lcd.begin();
  lcd.backlight();
  pinMode(ON_LED_PIN, OUTPUT);
  pinMode(OFF_LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(relayPin, OUTPUT);
  delay(1000);
}

void loop() 
{
  digitalWrite(ON_LED_PIN, LOW);
  digitalWrite(OFF_LED_PIN, HIGH);
  digitalWrite(relayPin, LOW );

   if(digitalRead(12)==LOW) 
        {
          while(digitalRead(12)==LOW){}
          if(mins>9) mins=1;
          else mins+=1; 
        }
    if(digitalRead(10)==LOW) 
        {
          while(digitalRead(10)==LOW){}
          if(mins<2) mins=10;
          else mins-=1;     
        }
  secs=mins*60;
  lcd.setCursor(0,0);
  lcd.print("SET DURATION  ");
  lcd.setCursor(1,1);
  lcd.print(mins);
  lcd.print(" minute(s)  ");
  
  if (millis() - lastTimeButtonStateChanged > debounceDuration) 
  {
    byte buttonState = digitalRead(BUTTON_PIN);
    if (buttonState != lastButtonState) 
    {
      lastTimeButtonStateChanged = millis();
      lastButtonState = buttonState;

      lcd.setCursor(0,0);
      lcd.print("TIME REMAINING");

            
      if (buttonState == LOW) 
      {
        long s=secs;
        digitalWrite(ON_LED_PIN, HIGH);
        digitalWrite(OFF_LED_PIN, LOW);
        digitalWrite(relayPin, HIGH);
        for(long count = 0; count < secs ; count++)
        {   
            secondsToMS(s--);
          delay(1000);
        }
        
      }
    }
  }
}

void secondsToMS( long s )
{
    uint32_t t = s;

    s = t % 60;
    t = (t - s)/60;
    m = t % 60;

            lcd.setCursor(1,1);
            lcd.print(m);
            lcd.print(" min ");
            lcd.print(s);
            lcd.print(" sec");

}
