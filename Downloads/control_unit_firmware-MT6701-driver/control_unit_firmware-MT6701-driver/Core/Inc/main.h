/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RES_Pin GPIO_PIN_6
#define RES_GPIO_Port GPIOA
#define CS_Pin GPIO_PIN_1
#define CS_GPIO_Port GPIOB
#define BLK_Pin GPIO_PIN_11
#define BLK_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#ifndef USART_HANDLER
	#define COMP1_Pin       GPIO_PIN_10
	#define COMP1_GPIO_Port GPIOA
	#define COMP2_Pin       GPIO_PIN_9
	#define COMP2_GPIO_Port GPIOA
#endif
#ifndef I2C_HANDLER
	#define COMP3_Pin       GPIO_PIN_8
	#define COMP3_GPIO_Port GPIOA
	#define COMP4_Pin       GPIO_PIN_11
	#define COMP4_GPIO_Port GPIOC
#endif
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
