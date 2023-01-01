void delay_ms(uint16_t);

void clockWiseRotate()
{
	IO0DIR = (IO0DIR | 0x0000000F);	/* Configure P0.0-P0.3 as output(used for controlling stepper motor) */
	IO0PIN = ( (IO0PIN | 0x00000008) & 0xFFFFFFF8 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x0000000C) & 0xFFFFFFFC );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000004) & 0xFFFFFFF4 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000006) & 0xFFFFFFF6 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000002) & 0xFFFFFFF2 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000003) & 0xFFFFFFF3 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000001) & 0xFFFFFFF1 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000009) & 0xFFFFFFF9 );
	delay_ms(10);		
	
	IO0PIN = ( (IO0PIN | 0x00000008) & 0xFFFFFFF8 );
	delay_ms(10);
}	

void antiClockWiseRotate() 
{
	IO0DIR = (IO0DIR | 0x0000000F);	/* Configure P0.0-P0.3 as output(used for controlling stepper motor) */
	
	IO0PIN = ( (IO0PIN | 0x00000009) & 0xFFFFFFF9 );
	delay_ms(10);	
	
	IO0PIN = ( (IO0PIN | 0x00000001) & 0xFFFFFFF1 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000003) & 0xFFFFFFF3 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000002) & 0xFFFFFFF2 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000006) & 0xFFFFFFF6 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x00000004) & 0xFFFFFFF4 );
	delay_ms(10);
	
	IO0PIN = ( (IO0PIN | 0x0000000C) & 0xFFFFFFFC );
	delay_ms(10);
}


void delay_ms(uint16_t j)
{
    uint16_t x,i;
	for(i=0;i<j;i++)
	{
    for(x=0; x<6000; x++);    /* loop to generate 1 milisecond delay with Cclk = 60MHz */
	}
}