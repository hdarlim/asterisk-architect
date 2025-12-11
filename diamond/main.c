#include <stdio.h>

int main() {
    int n = 0;
    char symbol = '*';
    char space = ' ';

    printf("Enter n: \n");
    scanf("%d", &n);

    while (n < 1) {
        printf("Number cannot be negative or equal to 0. Enter n: \n");
        scanf("%d", &n);
    }
    
    for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n - 1 - i; j++) {
            printf("%c", space);
	    }
	    for (int k = 0; k < (2 * i) + 1; k++) {
	        printf("%c", symbol);
	    }
	    printf("\n");
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = n - i; j > 0; j--) {
            printf("%c", space);
	    }
	    for (int k = (2 * i) - 1; k > 0; k--) {
	        printf("%c", symbol);
	    }
	    printf("\n");
    }

    return 0;
}