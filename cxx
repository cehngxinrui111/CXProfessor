#include <stdio.h>
main()
{   int n[2]={0},i,j,k=2;
    for(i=0;i<k;i++)
        for(j=0;j<k;j++) n[j]=n[i]+1;
    printf("%d\n",n[k]);
    getch();
}
