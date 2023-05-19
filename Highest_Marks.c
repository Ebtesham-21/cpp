#include <stdio.h>
int main() {
    int n, highest = -1;
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", highest - marks[i]);
    }
    return 0;
}
