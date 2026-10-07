#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a<b) && (a<c))
{
	printf("A IS SMALLER");
}
else if((b<a) && (b<c))
{
 	printf("B IS SMALLER");

}
else
{
	printf("C IS SMALLER");
}
}


