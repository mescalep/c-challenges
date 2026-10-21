#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int secretNumber;
    int guessNumber = 0;
    int attemptsCount = 0;
    
    
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;
    while(secretNumber != guessNumber) {
        printf("Enter your number: ");
        scanf("%d", &guessNumber);
        
        
        if (guessNumber > 0 && guessNumber <= 100) {
            attemptsCount++;
            if(guessNumber < secretNumber) {
                printf("Your number is lower than the secret number\n");
            } else if(guessNumber > secretNumber) {
                printf("Your number is higher than the secret number\n");
                
            } else {
                printf("Congratulations! You found the number\n");
                printf("You did it in %d attempts\n", attemptsCount);
                
            }
        
        } else {
            printf("The number must be between 1 and 100\n");
        }
    }
    return 0;
}
    
    
    

