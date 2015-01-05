#include <stdio.h>
main()
{int choice;
printf("How many stars (1 to 10) do you want? ");
scanf("%d", &choice);
if (choice>1&&choice<10)
switch (choice)
{
case 10:
printf("*");
case 9:
printf("*");
case 8:
printf("*");
case 7:
printf("*");
case 6:
printf("*");
case 5:
printf("*");
case 4:
printf("*");
case 3:
printf("*");
case 2:
printf("*");
case 1:
printf("*");
}
else printf("The number you asked for is out of range\n");

getch();
}
