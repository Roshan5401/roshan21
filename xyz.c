#include<stdio.h>
void main()
{
int n,k;
int a[n],b[n];
printf("Enter size\n");
scanf("%d",&n);
printf("Enter diff\n");
scanf("%d",&k);
int i,e,d;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
e=i+k;
if(e>(n-1))
{
d=(i+k)-n;
b[d]=a[i];
}
else
{
b[e]=a[i];
}
}
for(i=0;i<n;i++)
{
printf("%d ",b[i]);
}
}