#ifndef __UART_H__
#define __UART_H__

void uart_init(void);
void uart_puts(const char* str);
void uart_putc(char c);
char uart_getc(void);
void uart_printf(char* fmt,...);

#endif