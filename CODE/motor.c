#include<lpc214x.h>
unsigned long int delay;
void delay(unsigned int delay);
int i;

int main(void){
	IO0DIR = 0XFFFFFFFF;
	dir_flg = 0;
	whike(1){
		if(dir_flg == 0){
			IO0SET = 0X3;
			delay(2);
			IO0CLR = 0x3;
			IO0SET = 0x6;
			delay(2);
			IO0CLR = 0X6;
			IO0SET = 0xC;
			delay(2)
			IO0CLR = 0XC;
			IO0SET = 0X9;
			delay(2);
			IO0CLR = 0X9;			
		}
		
		else if(dir_flg == 1){
			IO0SET = 0X9;
			delay(2);
			IO0CLR = 0x9;
			IO0SET = 0xC;
			delay(2);
			IO0CLR = 0XC;
			IO0SET = 0x6;
			delay(2)
			IO0CLR = 0X6;
			IO0SET = 0X3;
			delay(2);
			IO0CLR = 0X3;
		}
	}
}

void delay(unsigned int delay){
	for(i = 0; i<= delay; i++){
		for(delay = 0; delay<=50000; delay++)
	}
}

