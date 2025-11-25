#include <stdio.h>

int main() {
    int score=0;

    printf("welcome to the quiz game!\n");
    printf("Question 1: What is the capital of france?\n");
    printf("A) Madrid\nB) Paris\nC) Rome\nD) Berlin\n");
    char answer1 = 'B';

    printf("Your answer: ");
    char userAnswer1;
    scanf(" %c", &userAnswer1);
    userAnswer1 = toupper(userAnswer1);

    if (userAnswer1 == answer1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
     
    printf("Question 2: What is the chemical element with the symbol fe?\n");
    printf("A) Magnesium\nB) Iron\nC) Copper\nD) Aluminium\n");
    char answer2 = 'B';

    printf("Your answer: ");
    scanf(" %c", &userAnswer1);
    userAnswer1 = toupper(userAnswer1);
    if (userAnswer1 == answer2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("Question 3: Which planet is known as the red planet?\n");
    printf("A) Mars\nB) Moon\nC) Earth\nD) Neptune\n");
    char answer3 = 'A';

    printf("Your answer: ");
    scanf(" %c", &userAnswer1);
    userAnswer1 = toupper(userAnswer1);

    if (userAnswer1 == answer3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("Question 4:what is the largest mammal in the world?\n");
    printf("A) Dolphin\nB) Shark\nC) Blue whale\nD) goldfish\n");
    char answer4 = 'C';

    printf("Your answer: ");
    scanf(" %c", &userAnswer1);
    userAnswer1 = toupper(userAnswer1);

    if (userAnswer1 == answer4) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("Question 5: What is the largest ocean on earth?\n");
    printf("A) Pacific ocean\nB) Atlantic ocean\nC) Arctic ocean\nD) Southern ocean\n");
    char answer5 = 'A';

    printf("Your answer: ");
    scanf(" %c", &userAnswer1);
    userAnswer1 = toupper(userAnswer1);

    if (userAnswer1 == answer5) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("your score: %d out of 5\n", score);

    if (score == 5) {
        printf("Excellent!Perfect score!\n");
    }
    else if (score >= 3) {
        printf("Good job! but you can improve.\n");
    }
    else if (score >= 1) {
        printf("You got some answers right. Keep practicing!\n");
    }
    else {
        printf("Don't worry! Try again and you'll get better!\n");
    }

    return 0;
}

