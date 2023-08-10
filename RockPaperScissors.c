#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

char getComputerChoice();
char getUserChoice();
char getResult(char, char);
int main(){

// get user choice
  char userChoice = getUserChoice();    
// get computer choice
  char choice = getComputerChoice();    
  //get result
  char result = getResult(userChoice,choice);

  switch (result)
  {
  case 'w':
    printf("Computer's pick: %c\n",choice);
    printf("Your pick: %c\n", userChoice);
    printf("You won");
    break;
  case 'l':
    printf("Computer's pick: %c\n",choice);
    printf("Your pick: %c\n", userChoice);
    printf("You lost");
    break;
  case 'd':
    printf("Computer's pick: %c\n",choice);
    printf("Your pick: %c\n", userChoice);
    printf("Friendship");
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

char getUserChoice(){
    char userChoice;
    printf("Enter your choice(r/p/s): ");
    scanf("%c", &userChoice);
    userChoice = tolower(userChoice);
    return userChoice;
}

char getResult(char userC, char compC){
    
    if(userC == compC){
        return 'd';
    }else if((userC == 'p' && compC == 'r')|| (userC == 's' && compC == 'p')|| (userC == 'r' && compC == 's')){
        return 'w';
    }else{
        return 'l';
    }
}