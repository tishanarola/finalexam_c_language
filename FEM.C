#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,max;
clrscr();
printf("\enter three number:");
scanf("%d%d%d",&a,&b,&c);
max=a>b?a>c?a:c:b>c?b:c;
printf("\nbiggest number is %d max");
getch();
}