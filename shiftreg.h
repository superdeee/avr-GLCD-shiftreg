#ifndef shiftreg_
#define shiftreg_

#include <avr/io.h>
#include <stdbool.h>
#include <stdint.h>

#define SET_DATA() (PORTB |= (1 << 1))
#define CLR_DATA() (PORTB &= ~(1 << 1))
#define SET_CLK() (PORTB |= (1 << 0))
#define CLR_CLK() (PORTB &= ~(1 << 0))
#define SET_ENB() (PORTB |= (1 << 2))
#define CLR_ENB() (PORTB &= ~(1 << 2))


uint8_t pos_x, pos_y;

void Send16(unsigned int data);
void CleanLCD1();
void CleanLCD2();
void GoToXY(uint8_t x, uint8_t y);
void InitLCD();
void Write(char text[], uint8_t textSize, bool neg);
void drawLetter(int x, bool neg);
void iconBar();
void drawBar(uint8_t y);
void drawDot(uint8_t x, uint8_t y);

#endif

