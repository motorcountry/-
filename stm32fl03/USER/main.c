#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
 

 int main(void)
 {		

	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 //���ڳ�ʼ��Ϊ115200
// 	LED_Init();			     //LED�˿ڳ�ʼ��

	 TIM3_PWM_Init(19999,71);//GPIOB_5
	 
   	while(1)
	{
	
		delay_ms(1000);	
		TIM_SetCompare2(TIM3,500);	//0
    delay_ms(1000);		
    TIM_SetCompare2(TIM3,1000);
    delay_ms(1000);		
    TIM_SetCompare2(TIM3,1500); //90
    delay_ms(1000);		
    TIM_SetCompare2(TIM3,2000);
    delay_ms(1000);				
    TIM_SetCompare2(TIM3,2500); //180
    delay_ms(1000);		
	}	 
	
 }

