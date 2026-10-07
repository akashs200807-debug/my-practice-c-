#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if((a%3==0) && (a%5==0))
{
	printf("it is divisible by both 5&3");
	}
else
{
	printf("it is not divisible by both 5&3");
	}
return 0;
}
