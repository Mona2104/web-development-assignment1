#include <stdio.h>

int uppcheck(int n, int mat[n][n]) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < j; i++) {
            if (mat[i][j] != 0) return 0;
        }
    }
    return 1;
}

int main() {
    int var;
    printf("Enter the value of integer: ");
    scanf("%d", &var);
    int mat[var][var]; // Declare the array after reading 'var'

    printf("Enter the elements of the matrix row-wise:\n");
    for(int p = 0; p < var; p++) {
        for(int q = 0; q < var; q++) {
            scanf("%d", &mat[p][q]);
        }
    }

    printf("The entered matrix is:\n");
    for (int p = 0; p < var; p++) {
        for(int q = 0; q < var; q++) {
            printf("%d\t", mat[p][q]);
        }
        printf("\n");
    }

    if(uppcheck(var, mat)) {
        printf("The above matrix is an upper triangular matrix\n");
    } else {
        printf("The given matrix is not an upper triangular matrix\n");
    }
    return 0;
}