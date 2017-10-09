#include<stdio.h>
int main()
{
 int a[101],i,n,pos,lar;

 printf("Enter the value of n not more than 100\n");
 scanf("%d",&n);

 printf("Enter n numbers \n");

 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 lar=a[0];
 for(i=0;i<n;i++)
 {
     if(a[i]>lar)
     {
       lar=a[i];
        pos=i;
     }

 }

 for(i=pos;i<n-1;i++)
a[i]=a[i+1];

lar=a[0];
for(i=0;i<n-1;i++)
 {
     if(a[i]>lar)
     {
       lar=a[i];
     }

 }
 printf("The second largest number is %d",lar);
    return 0;
}

