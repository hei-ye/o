#include <stdio.h>
int main()
{
	int n=10;
	int i=0;
	for(i=31;i>=1;i-=2)     //打印偶数位
	{
	
		printf("%d ",((n>>i)&1));
	}
	printf("\n");
	for(i=30;i>=0;i-=2)      //打印奇数位
	{
		printf("%d ",((n>>i)&1));
	}
	return 0;
}
