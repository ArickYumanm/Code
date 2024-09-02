#include <stdio.h>
void cal(int arr[], int arSize)
{
  int min, shift, y, index;
  for (y = 0; y < arSize; y++)
  {
    min = arr[y];
    for (int j = y; j < arSize; j++)
    {
      if (arr[j] < min)
      {
        min = arr[j];
        index = j;
      }
      else
      {
        min = min;
      }
    }
    for (int i = 0; i < arSize; i++)
    {
      if (arr[i] == min)
        index = i;
    }
    shift = arr[index];
    arr[index] = arr[y];
    arr[y] = shift;
  }
}

void printArr(int arr[], int arSize)
{
  for (int x = 0; x < arSize; x++)
  {
    printf(" %d ", arr[x]);
  }
  printf("\n");
}

int main()
{
  int arr[] = {5, 9, 3, 2, 7, 4};
  int arSize = sizeof(arr) / sizeof(arr[0]);
  int flag;
  printf("Before the Shift : ");
  printArr(arr, arSize);
  cal(arr, arSize);
  printf("After the Shift : ");
  printArr(arr, arSize);

  return 0;
}