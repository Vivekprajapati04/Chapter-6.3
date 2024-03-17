#include<stdio.h>

main()
{
	int i,n,fact=1;
	printf("Enter the last valu for loop n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("%d\n",fact);
}