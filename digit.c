
#include<stdio.h>
int main()
{
	int n,temp,i=0;
	scanf("%d",&n);
	while(n!=0)
	{
	  temp=n%10;
	  n=n/10;
	  ++i;
	}
	printf("%d",i);
	return 0;

}
