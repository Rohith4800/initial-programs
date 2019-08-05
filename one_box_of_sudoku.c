#include <stdio.h>

int main()
{
   int a[3][3],i,j,d[9],s=0,n=0,x[9];
   int c[]={1,2,3,4,5,6,7,8,9};
printf("\nEnter the elements and use 0 for blanks:\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);

  printf("Given Matrix \n");
for(i=0;i<3;i++)
{	for(j=0;j<3;j++)
   {
       if(a[i][j]!=0)
       {
printf("%d ",a[i][j]);
       d[s]=a[i][j];
       s++;     
       }
else
printf("* ");
   }
   printf("\n");
}

  printf("Solved Matrix \n");
for ( i = 0; i < 9; i++) 
    { 
        for (j = 0; j < s; j++) 
            if (c[i] == d[j]) 
                break; 
  
        if (j == s) 
           {
               x[n]=c[i];
               n++;
           }
    } 
n=0;
for(i=0;i<3;i++)
{	for(j=0;j<3;j++)
   {
       if(a[i][j]!=0)
       {
printf("%d ",a[i][j]);
       d[s]=a[i][j];
       s++;     
       }
else {
printf("%d ",x[n]);
n++; }
   }
   printf("\n");
}           
    return 0;
}
