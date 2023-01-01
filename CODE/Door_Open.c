                      /*Main program*/
#include <lpc214x.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>

#include"timerdelay.h"
#include"lcd.h"
#include"keypad.h"
#include"stepper_motor.h"

#define bit(x) (1<<x)
char flag=0;
char pwd[]="7678";
void lock(void);
int main(void)
{
 char key[5];
 int con=0;
 lcd_init();
 lcd_cmd(0x01);
 lcd_string("PRESS 1 TO ");
 lcd_cmd(0x01);
 lcd_string("CHANGE PASSWORD: ");
 flag=get_key();
 if(flag=='1')
 { 
  lcd_cmd(0x01);
  lcd_string("NEW PASS: ");
  for(con=0;con<4;con++){
  pwd[con]=get_key();
  lcd_string("*");}
     pwd[con]=0;
   }
  while(1){
 lcd_cmd(0x01);
 lcd_string("PASSWORD: ");
 //lcd_cmd(0xc0);
 for(con=0;con<4;con++){
  key[con]=get_key();
  lcd_string("*");}
  key[con]=0;
  if(strcmp(key,pwd)!=0)
  {
  lcd_cmd(0x20);
    lcd_cmd(0x01);
  lcd_string("WRONG PASSWORD");
 }
 else {
  lock();
 }
}
}
void lock(void)
{
 IO0DIR|=bit(19)|bit(20);
 lcd_cmd(0x01);
 lcd_string("UNLOCKING");
	clockWiseRotate();
 IO0SET|=bit(19);
 timemdel(50);
 IO0CLR|=bit(19);
 timemdel(100);
 lcd_cmd(0x01);
 lcd_string("LOCKING");
	antiClockWiseRotate();
 IO0SET|=bit(20);
 timemdel(50);
 IO0CLR|=bit(20);
}
