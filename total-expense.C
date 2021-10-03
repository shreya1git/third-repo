#include<stdio.h>
#include<conio.h>
void main()
{
int quan,dis;
float rate,total;
clrscr();
printf("enter quantity and rate: ");
scanf("%d%f",&quan,&rate);
if(quan>1000)
   dis=10;
else
   dis=0;
total=(quan*rate)-(quan*rate*dis/100);
printf("total expense=%d",total);
getch();
}