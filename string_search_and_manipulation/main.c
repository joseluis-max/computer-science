#include <stdio.h>
#include <string.h>

void naive(char* text, char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);

    for (int i = 0; i <= n - m; i++) {
        for (int j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }

            if (j == m - 1) {
                printf("Pattern found at index %d\n", i);
            }
        }
    }
}


int main() {
    char text[] = "Hello, World !";
    char pattern[] =  "World";

    naive(text, pattern);

    return 0;
}