#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,j,i,p=0,s=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=n;i>0;i/=10)
{
p++;
}
for(j=n;j>0;j/=10)
{
s=s+pow(j%10,p);
p--;
}
if(s==n)
printf("dasium number");
else
printf("not a dasium number");
getch();
}
