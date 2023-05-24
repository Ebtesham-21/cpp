#include <stdio.h>

int main(void) {
  int ar[5];
  for(int i=0; i<5; i++)
    {
      scanf("%d", &ar[i]);
    }
  for(int i=0;i<5;i++)
    {
      printf("%d\n", ar[i]);
    }
  return 0;
}