#include <stdio.h>

/* Author: Joseph Pietroluongo
// PID: 5901749
// I affirm that I wrote this program myself without any help
// from any other people or sources from the internet
// Summary: This program is designed in C language, for the purpose to
// set or clear a single bit in a number entered by the
// user using the binary representation of the number
*/
// Formatting: Standard formating, opening curly brace on the right end of the line above with the block begins.

int main(){

int userInputNumber;
int ops;
int bit;
int result;
char doAgain = 'Y';
 
    do{
    
        do{

            printf("Enter a number between 1 and 1000: \n");
            scanf("%d", &userInputNumber);

            while (userInputNumber < 1 || userInputNumber > 1000){
                printf("Error, please enter a number between 1 and 1000.\n");
                scanf("%d", &userInputNumber);
            }

        }   while (userInputNumber < 1 || userInputNumber > 1000);
        
        do{

            printf("\nWould you like to clear or set a bit? Enter 1 to Clear, 2 to Set.\n");
            scanf("%d", &ops);

            while (ops < 1 || ops > 2){

                printf("Error, please enter 1 to clear or 2 only to set.\n");
                scanf("%d", &ops);
            }

        }   while (ops < 1 || ops > 2);

           
            if (ops == 1){
                do{

                    printf("\nEnter a bit between 0 and 31 to clear:\n");
                    scanf("%d", &bit);

                    while(bit < 0 || bit > 31){

                        printf("Invalid userInputNumber, please enter a number between 0 and 31.\n");
                        scanf("%d", &bit);
                    }
                    
                }   while (bit < 0 || bit > 31);

                result = userInputNumber & (~(1 << bit));
                printf("\nNumber before clearing: %d\n", userInputNumber);
                printf("Decimal number after clearing: %d\n", result);
            }

            if (ops == 2){
                
                do{
                    printf("\nEnter a bit between 0 and 31 to set:\n");
                    scanf("%d", &bit);

                    while(bit < 0 || bit > 31){

                        printf("Invalid userInputNumber, please enter a number between 0 and 31.\n");
                        scanf("%d", &bit);
                    }

                }   while (bit < 0 || bit > 31);

                result = (1 << bit) | userInputNumber;
                printf("\nNumber before setting: %d\n", userInputNumber);
                printf("Decimal number after setting: %d\n", result);
            }

        printf("\nDo you want to do the entire operation again? If doAgain, press Y or y.\n");
        printf("If no, press any other key to stop this program.\n");
        scanf("%c", &doAgain);

    }   while (doAgain == 'Y' || doAgain == 'y');

return 0;
}