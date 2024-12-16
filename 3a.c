#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Cube of numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("Cube of %d is %d\n", i, i * i * i);
    }

    return 0;
}
