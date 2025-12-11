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
    
    // n = 3
    //   *
    //  ***
    // *****

    return 0;
}