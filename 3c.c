#include <stdio.h>
int main()
{
    int i,j,rows,number = 1;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf("%d",number++);
        }
        printf("\n");
    }

    return 0;
}
