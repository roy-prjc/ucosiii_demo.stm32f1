/*
 * user_led.h
 *
 *	������ͨIO���
 *
 *  Created on: 2022-6-12
 *      Author: tly
 */

#ifndef __USER_LED_H
#define __USER_LED_H


#include "sys.h"


#define LED0_OFF		GPIO_SetBits(GPIOB,GPIO_Pin_5)		//��1
#define LED0_ON			GPIO_ResetBits(GPIOB,GPIO_Pin_5)	//��0
#define LED1_OFF		GPIO_SetBits(GPIOE,GPIO_Pin_5)		//��1
#define LED1_ON			GPIO_ResetBits(GPIOE,GPIO_Pin_5)	//��0


void LED_Init(void);



#endif /* USER_LED_H_ */
