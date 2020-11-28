#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("Before swapping a=%d,b=%d",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("\nAfter swapping a=%d,b=%d",a,b);
	return 0;
}
