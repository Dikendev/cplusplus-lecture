#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{

  while (l <= r)
  {
    int m = 1 + (r - 1) / 2;

    if (arr[m] == x)
    {
      return m;
    }
    if (arr[m] < x)
    {
      l = m + 1;
    }
    else
    {
      r = m - 1;
    }
  }

  return -1;
}

int main()
{

  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = binarySearch(arr, 0, n - 1, x);
  printf("SOI");

  return 0;
}