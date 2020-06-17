#include "shiftreg.h"
#include "shiftreg.c"

int main(void)
{
  DDRB |= 0x07;
  _delay_us(10000);
  SET_ENB();
  InitLCD();

  _delay_us(10000);

  drawBar(0);
  iconBar();

  GoToXY(97,0);
  Write("12:34", 5, 1);
  //for(int i=48;i<73;i++)drawDot(i,55);
  GoToXY(0,56);
  Write("Menu", 4, 0);
  GoToXY(48,56);
  Write("Home", 4, 1);
  GoToXY(91,56);
  Write("Rolety", 6, 0);

  while(1)
  {

  }
  return 0;
}

