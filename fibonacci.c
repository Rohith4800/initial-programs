#include<stdio.h>
#include<conio.h>
int main()
{
int n1=-1,n2=1,n3,i,n;
printf("Enter the number of elements:");
scanf("%d",&n);

for(i=0;i<n;i++) {
n3=n1+n2;
printf("%d",n3);
n1=n2;
n2=n3;
}
return 0;
}
