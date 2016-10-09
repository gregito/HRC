#include <stdio.h>
#include <stdlib.h>

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            printf("[%d] ", matrix[i][j]);
        }
    }
}

int getMainDiagSum(int n, int matrix[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
    }
    return sum;
}

int getSummarizedDiags(int n, int matrix[n][n]) {
    int sum = 0;
    int firstDiag = getMainDiagSum(n, matrix);
    for (int i = n - 1; i >= 0; i--) {
        sum += matrix[i][(n - 1) - i];
    }
    return (sum > firstDiag) ? abs(firstDiag - sum) : abs(sum - firstDiag);
}

int main() {

    int n, sum;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d", getSummarizedDiags(n, matrix));

    return 0;
}