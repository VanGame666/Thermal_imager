#include "Processing_library.h"


/*******************************************************************************
 * @name:				Delay_us_Z
 * @instructions:		微秒延时
 * @input:				delay:延时时间
 * @output:				NULL
 *****************************************************************************/
	#define CPU_FREQUENCY_MHZ    (SystemCoreClock/1000000)
void Delay_us_Z(__IO uint32_t delay)
{
    int last, curr, val;
    int temp;

    while (delay != 0)
    {
        temp = delay > 900 ? 900 : delay;
        last = SysTick->VAL;
        curr = last - CPU_FREQUENCY_MHZ * temp;
        if (curr >= 0)
        {
            do
            {
                val = SysTick->VAL;
            }
            while ((val < last) && (val >= curr));
        }
        else
        {
            curr += CPU_FREQUENCY_MHZ * 1000;
            do
            {
                val = SysTick->VAL;
            }
            while ((val <= last) || (val > curr));
        }
        delay -= temp;
    }
}

