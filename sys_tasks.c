/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"

#include "hal_motor.h"

//T_U8 duty=10;
#define STANGA 60
#define DREAPTA 120

int counter=0;

void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
 	vMotorInit();
    ADC_vInit();
}

void TASK_1ms()
{

}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 

}

void TASK_500ms()
{ 	

}

void TASK_1000ms()
{
    /*
	vSetMotorDir(INAINTE);
	vSetMotorSpeed(50);
	counter++;
	if(counter<3)
	{
		vSetAngle(STANGA);
	}
	if(counter>3)
	{
		vSetAngle(DREAPTA);
	}
	if(counter==6)
	{
		counter=0;
	}
    */
}