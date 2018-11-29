#include "hal_servo.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"

#define OFFSET 4
#define REZ 0.04375
#define ANGLE 10

void vSetAngle(T_U8 u8Angle)
{
	T_F16 duty;
	if(u8Angle<60)	u8Angle=60;
		else if(u8Angle>120)	u8Angle=120;
	duty=OFFSET+REZ*(u8Angle-ANGLE);
	PWM1_vSetDuty(duty,1);
}