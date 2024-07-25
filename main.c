#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n;
  float sum=0.0,average;
  printf("Enter the numbers of elements :");
  scanf("%d",&n);
   int arr[n];
  printf("Enter the elements to calculate the average :");
  for(i=0;i<n;++i){
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  average=sum/n;
  printf("avg=%.2f\n",average);
  return 0;
}
