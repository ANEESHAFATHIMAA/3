#include <stdio.h>
int main()
{
    int n,i;
    double sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Harmonic Series: ");
    for(i=1;i<=n;i++)
        {
        printf("1/%d", i);
        sum += 1.0 / i;

        if (i < n) {
            printf(" + ");
        }
    }
    printf("\nSum of the series: %.4lf\n", sum);
    return 0;
}
