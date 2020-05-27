#include<stdio.h>
int sum(int num)
{
	if(num!=0)
	{
		return(num%10 + sum(num/10));
	}
	else
	{
		return 0;
	}
}

int main()
{
	int num;
	printf("enter a num:");
	scanf("%d",&num);
	printf("sum of digits is:%d",sum(num));	
}
