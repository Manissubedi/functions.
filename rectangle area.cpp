// Write a program to display area of rectangle 
//(with the argument with return type)

#include<stdio.h>
int area(int,int);
int main()
{
	int l,b,A;
	printf("enter length:l ");
	scanf("%d",&l);
	printf("enter breadth:b");
	scanf("%d",&b);
	A=area(l,b);
	printf("area of rectangle is %d",A);
	return 0;
}
int area(int l,int b)
{
	int a;
	a=l*b;
	return a;
}

