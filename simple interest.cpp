// Write a program to display simple interest?
//(with argument with no-return type)

#include<stdio.h>
void interest(int,int,int);
int main()
{
	int p,t,r;
	interest(p,t,r);
	return 0;
}
void interest(int p,int t, int r)
{
	int si;
	printf("enter principle,time and rate");
	scanf("%d%d%d",&p,&t,&r);
	si=p*t*r/100;
	printf("the simple interest is %d",si);
	
	
}
