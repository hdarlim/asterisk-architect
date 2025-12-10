#include <stdio.h>

int main() {
    int n = 0;
    char symbol = '*';
    
    printf("Enter n: \n");
    scanf("%d", &n);

    while (n < 1) {
        printf("Number cannot be negative or equal to 0. Enter n: \n");
        scanf("%d", &n);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    
    return 0;
}
