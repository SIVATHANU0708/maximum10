
  
#include<stdio.h>
int main()
{
int n=10,i,a[10],maximum;
printf("enter the element:");
  for(i=0;i<=10;i++)
  {
    scanf("%d",&a[i]);
  }
  maximum=a[0];
  for(i=0;i<=10;i++)
  {
    if(a[i]<maximum)
    {
      maximum=a[i];
    }
  }
  printf("the maximum element among ten number is %d",maximum);
  retutn 0;
}
