#include <stdio.h>
int main()
{
  int arr[100],size,sum=0;
 //get size of the array
  printf("Enter size of the array: ");
  scanf("%d",&size);
 // enter the array elemets
  printf("Enter the elements of the array: ");
  for(int i=0; i<size; i++)
  {
    scanf("%d",&arr[i]);
  }
  //calculating sum of entered array elements
  for(int i=0; i<size; i++)
  {
    sum+=arr[i];
  }
  printf("Sum of array elements is: %d",sum);

  return 0;
}