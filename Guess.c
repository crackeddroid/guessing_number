#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int random, guess;
    int num_choice = 0;
    srand(time(NULL)); // Initialize random number generator

    random = rand() % 100 + 1;

    printf("🎉 Welcome to the world of Guessing Numbers! 🎉\n");

    do {
        printf("Please enter your Guess between (1 to 100): 🤔 ");
        scanf("%d", &guess);
        num_choice++;

        if (guess < random) {
            printf("📈 Guess a larger number! 🔼\n");
        } else if (guess > random) {
            printf("📉 Guess a smaller number! 🔽\n");
        } else {
            printf("🎊 Congratulations!!! 🎉 You have successfully guessed the number in %d attempts! 🏆\n", num_choice);
        }
    } while (guess != random);

    printf("\nThanks for playing! 🙏\nThis game is developed By A._.d 💻👨‍💻\n");
    return 0;
}