#ifndef _NXP_USART_DRIVER_H_
#define _NXP_USART_DRIVER_H_

#ifdef USART_CH_SIZE
#define USART_DEF_CH_SIZE USART_CH_SIZE
#else 
#ifdef STM32F10X_HD
#define USART_DEF_CH_SIZE  5
#else 
#define USART_DEF_CH_SIZE  3
#endif
#endif

extern uint8 DeviceId_USART_TX[USART_DEF_CH_SIZE];//=DeviceNull;
extern uint8 DeviceId_USART_RX[USART_DEF_CH_SIZE];//=DeviceNull;
extern uint8  USART_TX_TaskID[USART_DEF_CH_SIZE];//=Tos_TaskTotal;
extern uint8  USART_RX_TaskID[USART_DEF_CH_SIZE];//=Tos_TaskTotal;
extern uint8  *USART_RX_Buffer[USART_DEF_CH_SIZE];
extern uint8  *USART_TX_Buffer[USART_DEF_CH_SIZE];
extern uint16 USART_RX_Count[USART_DEF_CH_SIZE];//=Null;
extern uint16 USART_RX_Index[USART_DEF_CH_SIZE];

void USART_Configuration(uint8 UsartCH);


#endif
