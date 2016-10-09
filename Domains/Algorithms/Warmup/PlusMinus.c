#include <stdio.h>

int main() {

    double n, positive = 0, negative = 0, zero = 0;
    scanf("%lf", &n);
    int numbers[(int) n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++) {
        if (numbers[i] < 0) negative++;
        if (numbers[i] > 0) positive++;
        if (numbers[i] == 0) zero++;
    }

    printf("%.6f\n", positive / n);
    printf("%.6f\n", negative / n);
    printf("%.6f\n", zero / n);

    return 0;
}