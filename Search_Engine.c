#include <stdio.h>
int main() {
  int n, x, i, flag = 0;
  
  scanf("%d", &n);
  int arr[n];
  
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
 
  scanf("%d", &x);
  for (i = 0; i < n; i++) {
    if (arr[i] == x) {
      printf("%d %d\n", x, i+1);
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    printf("Not Found\n");
  }
  return 0;
}