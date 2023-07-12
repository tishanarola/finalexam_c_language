#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,sum=0,end;
printf("enter number:");
scanf("%d",&end);
for(i=2;i<=end;i++){
if(i%2==0)
{
sum=sum+i;
}
}
printf("sum of even number");
getch();
}
