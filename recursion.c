// this program find the add of first 10 natural number....
// this program is using recrsion function.....

// recursion means call functon again and again......

	#include<stdio.h>
	#include<conio.h>
	
	main()
{

	int k;
	k=sum(10);
	printf("%d",k);
	
}

// function call

int sum(int a)
{
	int s;
	if (a==0)
	return(a);
	s=a+sum(a-1);
	return(s);

}