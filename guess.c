#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    int secretNumber, guess, attempts;
    char playAgain;
    
    // Seed the random number generator once
    srand(time(0));
    
    do {
        // Generate random number between 1 and 100
        secretNumber = rand() % 100 + 1;
        attempts = 0;
        
        printf("Welcome to the Number Guessing Game!\n");
        printf("I'm thinking of a number between 1 and 100.\n");
        printf("Can you guess what it is?\n\n");
        
        do {
            printf("Enter your guess (1-100): ");
            scanf("%d", &guess);
            
            // Input validation
            if (guess < 1 || guess > 100) {
                printf("Invalid input! Please enter a number between 1 and 100.\n");
                continue;
            }
            
            attempts++;
            
            if (guess < secretNumber) {
                printf("Too low! Try again.\n");
            } else if (guess > secretNumber) {
                printf("Too high! Try again.\n");
            } else {
                printf("\nCongratulations! You guessed it!\n");
                printf("The secret number was %d.\n", secretNumber);
                printf("You found it in %d attempts.\n", attempts);
            }
            
        } while (guess != secretNumber);
        
        // Ask if user wants to play again
        printf("\nWould you like to play again? (Y/N): ");
        scanf(" %c", &playAgain);
        playAgain = toupper(playAgain);
        printf("\n");
        
    } while (playAgain == 'Y');
    
    printf("Thanks for playing! Goodbye!\n");
    return 0;
}