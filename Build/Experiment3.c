#include <stdio.h>

int main() {
    int n = 10;
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = i * n + j + 1;
            printf("debug");
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%6d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
