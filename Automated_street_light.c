#include<reg51.h>
sbit sensor1=P1^0;     //declaration of infrared sensor
sbit sensor2=P1^1;
sbit sensor3=P1^2;    

sbit load1=P2^0;      //decleration of leds
sbit load2=P2^1;
sbit load3=P2^2;
void main()
{
	load1=load2=load3=0;                 //initial condition
	sensor1=sensor2=sensor3=0;           //optional
	while(1)
	{
		if(sensor1==1)                  //if person is below sensor1
		{
			load1=1;
			load2=0;
			load3=0;
		}
		if(sensor2==1)                 //if person is below sensor2
		{
			load1=0;
			load2=1;
			load3=0;	
		}
		if(sensor3==1)                //if person is below sensor3
		{
			load1=0;
			load2=0;
			load3=1;
		}
		
	}
}

