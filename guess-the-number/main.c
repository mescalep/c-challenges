#include <stdio.h>

int main () {
    int secretNumber = 42;
    int guessNumber = 0;
    int attemptsCount = 0;
    
    while(secretNumber != guessNumber) {
        printf("Enter your number: ");
        scanf("%d", &guessNumber);
        attemptsCount++;
        if(guessNumber < secretNumber) {
            printf("Your number is lower than the secret number\n");
        } else if(guessNumber > secretNumber) {
            printf("Your number is higher than the secret number\n");
        } else {
            printf("Congratulations! You found the number\n");
            printf("You did it with %d attempts\n", attemptsCount);
        }
    }
        return 0;
}
    
    
    

