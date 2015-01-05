#include  <reg51.h>
void  main(void)
{
unsigned char i;
P1=0xff;
for(;;) {i=P1;P0=i;}
}

