#ifndef USART_H
#define USART_H

//#define USART_BAUDRATE 9600
//#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)

void USART0Init(int baud_rate);
void USART0SendByte(uint8_t u8Data);
void USART0SendString(char string[], uint8_t size);
uint8_t USART0ReceiveByte();




#endif