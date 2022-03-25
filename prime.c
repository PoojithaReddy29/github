#include<stdio.h>
int main()
{
int n,i,c=0;
printf("Enter the n\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	if(n%i==0)
	{
	c++;
	}
}
if(c==2)
{
	printf("%d is a prime no.",n);
}
else
{
	printf("%dis not a prime no.",n);
}
return 0;
}
