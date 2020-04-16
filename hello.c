#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int n,p;
 	printf("enter the number");
 	scanf("%d",&n);
 	p=prime(n,n/2);
 	if(p==1)
 	{
 		printf("%d is a prime number");
 		
	 }
	 else
	 {
	 	printf("%d is not a prime number");
	 }
	 return 0;
 }
int prime(int n,int i)
{
	if(i==1)
	return 1;
	if(n%i==0)
	return 0;
	return prime(n,i-1);
	
}
