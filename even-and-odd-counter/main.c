#include <stdio.h>

int main() {
    int number = 1;
    int evenNumber = 0;
    int oddNumber = 0;
    
    while(number != 0) {
        printf("Enter your number: \n");
        scanf("%d", &number);
        if(number !=0) {
            if(number %2 == 0) {
                printf("Your number is an even: %d\n", number);
                evenNumber++;
            } else {
                printf("Your number is an odd: %d\n", number);
                oddNumber++;
            }
        }
    }
    printf("\nCounter even numbers: %d\n", evenNumber);
    printf("Counter odd numbers: %d\n", oddNumber);
    
    return 0;
}