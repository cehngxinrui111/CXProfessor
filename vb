#include <stdio.h>
main()
{
int num;
printf("Program indicates whether number is +ve or -ve\n");
printf("Enter a number between -5 and +5 :");
scanf("%d", &num);
switch(num)
{
case 1 :
case 2 :
case 3 :
case 4 :
case 5 :
printf("number is +ve"); break;
case -1 :
case -2 :
case -3 :
case -4 :
case -5 :
printf("number is -ve"); break;
default:printf("wrong");
}



getch();
}
