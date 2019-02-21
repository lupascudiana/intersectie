#include "hal_acumulator.h"
#include "mcal_adc.h"

T_U16 Acc()
{
    T_U16 Vcit,x,rez,Vbatt,Charge;
    x=ADC_u16Read(0);
    Vcit=x/4095*3.07;
    Vbatt=Vcit*4;
    if(Vbatt>7)
    {
        rez=(100-20)/(8.4-7);
        Charge=100-((8.4-Vbatt)*rez);
    }
    else  if(Vbatt>6.5)
    {
        rez=(20-10)/(7-6.5);
        Charge=100-((8.4-Vbatt)*rez);
    }
    else
    {
        rez=10/(6.5-6);
        Charge=100-((8.4-Vbatt)*rez);
    }
    return Charge;
}
