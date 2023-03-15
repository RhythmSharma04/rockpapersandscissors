#include<stdio.h>
int add(int x,int y)
{
	int sum=x+y;
	return sum;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int z=add(a,b);
	printf("%d",z);
}
