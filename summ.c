#include<stdio.h>
recursion(int n);
main()
{
	int n,s;
	printf("Enter the number: ");
	scanf("%d",&n);
	s=recursion(n);
	printf("The sum of all digits of %d is %d",n,s);
	return 0;
}
recursion(int n)
{
	if (n==0)
	{
		return 0;
	}
	else
	{
		return(n%10+recursion(n/10));
	}
}
