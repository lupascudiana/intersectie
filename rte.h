 /* 
 * File:   hal_linefollower.h
 * Author: Lupascu Diana
 *
 */

#ifndef RTE_H
#define	RTE_H

#include "hal_motor.h"
#include "hal_servo.h"
#include "hal_linefollower.h"

#define RTE_vMotorInit() vMotorInit()
#define RTE_vSetMotorDir(x) vSetMotorDir(x)
#define RTE_vSetMotorSpeed(x) vSetMotorSpeed(x)

#define RTE_vSetAngle(x) vSetAngle(x)

#define RTE_LF_vSetPinsDir(x) LF_vSetPinsDir(x)
#define RTE_LF_vWritePins() LF_vWritePins()
#define RTE_LF_LF_u8ReadPins() LF_u8ReadPins()

#endif