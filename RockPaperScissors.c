#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char getComputerChoice();
int main(){
// get computer choice
  char choice = getComputersChoice();
 
// print computer choice
  switch(choice) {
    case 'r':
      printf("rock");
      break;
    case 'p':
      printf("paper");
      break;
    case 's':
      printf("scissors");
      break;
  }
     
    return 0;
}
char getComputerChoice(){
    //generate random number based on time
    srandom(time(NULL));
    int number = (rand() % 3) + 1;
    char compChoice;
    switch (number)
    {
    case 1:
        compChoice = 'r'; //computer choice is rock
        break;
    case 2:
        compChoice = 'p'; //computer choice is paper
        break;
    case 3:
        compChoice = 's'; //computer choice is scissors
        break;
    }
    return compChoice;
}