#include "general.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"
#include "hal_linefollower.h"
#include "mcal_gpio.h"

void LF_vSetPinsDir(BOOL bDir)
{
	int i;
	for(i = 0;i<6;i++)
		GPIO_u8SetPortPin(PORT_C,i,DIGITAL,bDir);
}
void LF_vWritePins(void)
{
	LF_vSetPinsDir(OUTPUT);
	int i;
	for(i = 0;i<6;i++)
		GPIO_u8WritePortPin(PORT_C,i,HIGH);
}

T_U8 LF_u8ReadPins(void)
{
	LF_vSetPinsDir(OUTPUT)
	LF_vWritePins();
	__delay_us(10);
	LF_vSetPinsDir(INPUT);
	__delay_us(250);
	T_U8 port=GPIO_u16ReadPort(C);
	return (port&0x3f);
}