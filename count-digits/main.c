#include <stdio.h>

int countDigits(int n) {
    int result;

    if (n < 10){
        result = 1;
    } else {
        result = countDigits(n / 10) + 1;
    }
    return result;
}

int main() {
    int usuariNumber;
    int result;

    printf("Insert your number: ");
    scanf("%d", &usuariNumber);

    result = countDigits(usuariNumber);
    
    printf ("The result is: %d", result);


    return 0;
}