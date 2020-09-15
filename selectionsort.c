#include <stdio.h>
int main()
{
  int a[100],i,j,n,min=0,temp=0;
  printf("enter n");
  scanf("%d",&n);
  printf("enter %d elements",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(a[min]>a[j])
        min=j;
    }
    temp=a[min];
    a[min]=a[i];
    a[i]=temp;
  }
  printf("the new array is");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
