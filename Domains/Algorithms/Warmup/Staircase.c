#include <stdio.h>

int main(){

    int n, outer;
    char hashtag = '#';
    scanf("%d", &n);
    outer = n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j < outer) printf(" ");
            else printf("%c", hashtag);
        }
        printf("\n");
        outer--;
    }

    return 0;
}