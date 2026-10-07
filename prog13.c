#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>((b*75)+(c*50)))
	{
	printf("the boat is stable");
	}
	else
	{
	printf("the boat is drown");
	}
	return 0;
}
