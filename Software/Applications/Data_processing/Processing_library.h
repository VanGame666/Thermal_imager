/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __Processing_library_H
#define __Processing_library_H

/* Includes ------------------------------------------------------------------*/
#include "main.h"


typedef enum
{
	MY_UNPASS = 0,
	MY_PASS,
	MY_ERROR = -1
}MY_Return;




MY_Return Historical_Differences(int data, uint8_t sign);	

uint32_t Array_Return_Num(uint16_t array[],uint16_t len);	
uint16_t Array_Return_Max(uint16_t array[],uint16_t len);		
uint16_t Array_Return_Min(uint16_t array[],uint16_t len);		

uint16_t Array_Return_Max_Sub_Z(uint16_t array[],uint16_t len);		


uint16_t Filtering1_Recursive_Average_Z(uint16_t in_data,uint8_t flag);		
uint16_t Filtering2_Median_Average_Z(uint16_t in_data,uint8_t flag);			
uint16_t Filtering3_Weighting_Median_Average_Z(uint16_t in_data,uint8_t flag);	

void Delay_us_Z(__IO uint32_t delay);					
void APP_Jump_Z(uint32_t appxaddr);					
void APP_Jump_Run_Z(uint32_t app_address);			


#endif
