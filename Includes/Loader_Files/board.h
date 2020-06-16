/*
 * board.h
 *
 *  Created on: Jun 5, 2020
 *      Author: spide
 */

#ifndef INCLUDES_LOADER_FILES_BOARD_H_
#define INCLUDES_LOADER_FILES_BOARD_H_

#ifdef __cplusplus
 extern "C" {
#endif

typedef enum {
  LED1 = 0,
  LED2 = 1,
} Led_TypeDef;

#define LEDn                             2

#define LED1_PIN                         GPIO_Pin_15
#define LED1_GPIO_PORT                   GPIOA
#define LED1_GPIO_CLK                    RCC_AHB1Periph_GPIOA

#define LED2_PIN                         GPIO_Pin_7
#define LED2_GPIO_PORT                   GPIOB
#define LED2_GPIO_CLK                    RCC_AHB1Periph_GPIOB

#define BUTTONn                          1

/**
 * @brief Key push-button
 */
#define KEY_BUTTON_PIN                   GPIO_Pin_0
#define KEY_BUTTON_GPIO_PORT             GPIOA
#define KEY_BUTTON_GPIO_CLK              RCC_APB2Periph_GPIOA
#define KEY_BUTTON_EXTI_LINE             EXTI_Line0
#define KEY_BUTTON_EXTI_PORT_SOURCE      GPIO_PortSourceGPIOA
#define KEY_BUTTON_EXTI_PIN_SOURCE       GPIO_PinSource0
#define KEY_BUTTON_EXTI_IRQn             EXTI0_IRQn

#define COMn                             0

 /**
   * @brief  M25P FLASH SPI Interface pins
   */
#define sFLASH_SPI                       SPI1
#define sFLASH_SPI_CLK                   RCC_APB2Periph_SPI1
#define sFLASH_SPI_SCK_PIN               GPIO_Pin_5                  /* PA.05 */
#define sFLASH_SPI_SCK_GPIO_PORT         GPIOA                       /* GPIOA */
#define sFLASH_SPI_SCK_GPIO_CLK          RCC_AHB1Periph_GPIOA
#define sFLASH_SPI_MISO_PIN              GPIO_Pin_6                  /* PA.06 */
#define sFLASH_SPI_MISO_GPIO_PORT        GPIOA                       /* GPIOA */
#define sFLASH_SPI_MISO_GPIO_CLK         RCC_AHB1Periph_GPIOA
#define sFLASH_SPI_MOSI_PIN              GPIO_Pin_7                  /* PA.07 */
#define sFLASH_SPI_MOSI_GPIO_PORT        GPIOA                       /* GPIOA */
#define sFLASH_SPI_MOSI_GPIO_CLK         RCC_AHB1Periph_GPIOA
#define sFLASH_CS_PIN                    GPIO_Pin_4                  /* PA.04 */
#define sFLASH_CS_GPIO_PORT              GPIOA                       /* GPIOA */
#define sFLASH_CS_GPIO_CLK               RCC_AHB1Periph_GPIOA


void Board_LEDInit(Led_TypeDef Led);
void Board_LEDOn(Led_TypeDef Led);
void Board_LEDOff(Led_TypeDef Led);
void Board_LEDToggle(Led_TypeDef Led);
//void STM_EVAL_PBInit(Button_TypeDef Button, ButtonMode_TypeDef Button_Mode);
//uint32_t STM_EVAL_PBGetState(Button_TypeDef Button);
void sFLASH_LowLevel_DeInit(void);
void sFLASH_LowLevel_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* INCLUDES_LOADER_FILES_BOARD_H_ */
