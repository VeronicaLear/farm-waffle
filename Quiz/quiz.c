/**
 * Author: Veronica Lear
 * Date: 2026/11/21
 * 
 * This program makes a quiz and lets
 * the user play the quiz - simple verion 
 * right now
 */

 #include <stdlib.h>
 #include <stdio.h>

 /**
  * Function for printing and reading the input for each question
  * Returns a 1 if they get it right and a 0 if it is wrong
  */
 int easyQuestion(int question);

 int main() {
    char response;
    int rightQuestions = 0;
    int totalQuestions = 25;
    printf("Hello, are you ready to start the quiz?\n");
    printf("Enter y or n: ");
    scanf("%c", &response);
    if(response == 'n') {
        printf(":( why would you even run the program then?\n");
        return 0;
    }
    for(int i=1; i<=totalQuestions; i++){
        rightQuestions += easyQuestion(i);
    }
    
    printf("%d/%d\n", rightQuestions, totalQuestions);
    printf("%.2f%%\n", ((double)rightQuestions/totalQuestions * 100));
    return 0;
 }

 int easyQuestion(int question) {
    int expectedAnswer;
    int actualAnswer;

    if(question==1) {
        printf("Which of these is the letter a?\n");
        printf("1) b\n");
        printf("2) a\n");
        printf("3) g\n");
        printf("4) d\n");
        expectedAnswer = 2;
    } else if(question == 2) {
        printf("What is my name?\n");
        printf("1) Veronica\n");
        printf("2) Olivia\n");
        printf("3) Emily\n");
        printf("4) Susam\n");
        expectedAnswer = 1;
    } else if(question == 3) {
        printf("How old am I?\n");
        printf("1) 17\n");
        printf("2) 14\n");
        printf("3) 18\n");
        printf("4) 22\n");
        expectedAnswer = 3;
    } else {
        return 0;
    }

    scanf("%d", &actualAnswer);
    if(expectedAnswer == actualAnswer) {
        return 1;
    } else {
        printf("WRONG!! The correct answer was %d\n", expectedAnswer);
        return 0;
    }

    
 }