#include<stdio.h>
int isprime(int,int);

int main()
{
	int num,prime;
	printf("Enter a positive number\n");
	scanf("%d",&num);
	prime=isprime(num,num/2);
	if (prime==1)
	{
		printf("%d is a prime number\n",num);
	}
	else
	{
		printf("%d is not a prime number\n",num);
	}
}


int isprime(int num, int i)
{
	if (i==1)
	{
		return 1;
	}
	else 
	{
		if(num%i==0)
		{
			return 0;
		}
		else
		{
			isprime(num,i-1);
		}
	}
	
}
