#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a>b) && (a>c))
{
	printf("A IS LARGER");
}
else if((b>a) && (b>c))
{
 	printf("B IS LARGER");

}
else
{
	printf("C IS LARGER");
}
}

	
