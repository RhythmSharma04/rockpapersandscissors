#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,n,temp,count=0,sum=0,digit;
	scanf("%d",&n);
	temp=n;
	while (temp>0)
	{
		temp=temp/10;
		count++;
	}
	temp=n;
	for (i=0;i<count;i++)
	{
		digit=temp%10;
		sum=sum+pow(digit,count);
		temp=temp/10;
	}
	if (sum==n)
	{
		printf("armstrong no.");
	}
	else
	{
		printf("not an armstrong no.");
	}
	return 0;
	
}
