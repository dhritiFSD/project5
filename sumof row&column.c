#include <stdio.h>

int main() {
    int a[10][10];
    int r, c, i, j;
    int rowSum, colSum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of each row
    printf("\nSum of each row:\n");
    for(i = 0; i < r; i++) {
        rowSum = 0;
        for(j = 0; j < c; j++) {
            rowSum += a[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    // Sum of each column
    printf("\nSum of each column:\n");
    for(j = 0; j < c; j++) {
        colSum = 0;
        for(i = 0; i < r; i++) {
            colSum += a[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }

}
