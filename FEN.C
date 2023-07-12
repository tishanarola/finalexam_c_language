#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
int a[10],i;
for(i=0;i<10;i++)
{
printf("enter %d elements");
scanf("%d",&a[i]);
}
printf("array value is\n");
for(i=0;i<10;i++);
{
printf("a[%d]=%d\n",i,a[i]);
}
getch();
}