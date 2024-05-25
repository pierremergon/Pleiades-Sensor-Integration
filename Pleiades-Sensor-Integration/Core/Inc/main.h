/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32h5xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Air_INT_Pin GPIO_PIN_14
#define Air_INT_GPIO_Port GPIOC
#define PIR1_IN_Pin GPIO_PIN_15
#define PIR1_IN_GPIO_Port GPIOC
#define AA_LVL_Pin GPIO_PIN_1
#define AA_LVL_GPIO_Port GPIOA
#define LIPO_LVL_Pin GPIO_PIN_6
#define LIPO_LVL_GPIO_Port GPIOA
#define VCP1_T_TX_Pin GPIO_PIN_4
#define VCP1_T_TX_GPIO_Port GPIOC
#define PROX1_SIG_Pin GPIO_PIN_5
#define PROX1_SIG_GPIO_Port GPIOC
#define PROX2_SIG_Pin GPIO_PIN_0
#define PROX2_SIG_GPIO_Port GPIOB
#define Light_Level_Pin GPIO_PIN_1
#define Light_Level_GPIO_Port GPIOB
#define IR1_DRIVE_Pin GPIO_PIN_2
#define IR1_DRIVE_GPIO_Port GPIOB
#define ESP32_EN_Pin GPIO_PIN_12
#define ESP32_EN_GPIO_Port GPIOB
#define LED_DRV_EN_Pin GPIO_PIN_14
#define LED_DRV_EN_GPIO_Port GPIOB
#define IR2_DRIVE_Pin GPIO_PIN_6
#define IR2_DRIVE_GPIO_Port GPIOC
#define PROTO_PIR_Pin GPIO_PIN_7
#define PROTO_PIR_GPIO_Port GPIOC
#define VCP1_T_RX_Pin GPIO_PIN_8
#define VCP1_T_RX_GPIO_Port GPIOA
#define nCHG_TIME_EN_Pin GPIO_PIN_9
#define nCHG_TIME_EN_GPIO_Port GPIOA
#define CHG_SOURCE_Pin GPIO_PIN_10
#define CHG_SOURCE_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_10
#define LED2_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOC
#define ACC_INT2_Pin GPIO_PIN_12
#define ACC_INT2_GPIO_Port GPIOC
#define ACC_INT1_Pin GPIO_PIN_2
#define ACC_INT1_GPIO_Port GPIOD
#define Air_Sensor_Disable_Pin GPIO_PIN_6
#define Air_Sensor_Disable_GPIO_Port GPIOB
#define COMP_OUT_Pin GPIO_PIN_7
#define COMP_OUT_GPIO_Port GPIOB
#define HALL_Pin GPIO_PIN_8
#define HALL_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
