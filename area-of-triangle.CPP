#include<stdio.h>
#include<conio.h>
void area(float *a,float *b, float *c)
{
 *c = ((*a)*(*b))/2;
 }

void main(){
float a,b,c;
clrscr();
printf("enter base");
scanf("%f",&a);
printf("enter height: ");
scanf("%f",&b);
area(&a,&b,&c);
printf("area of triangle: %f\n",c);
getch();
}
