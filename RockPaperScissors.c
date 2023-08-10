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
  printf("Human choice is: "); 
// print computer choice
  switch(userChoice) {
    case 'r':
      printf("rock\n");
      break;
    case 'p':
      printf("paper\n");
      break;
    case 's':
      printf("scissors\n");
      break;
  }
// get computer choice
  char choice = getComputerChoice();
  printf("Computer choice is: ");
 
// print computer choice
  switch(choice) {
    case 'r':
      printf("rock\n");
      break;
    case 'p':
      printf("paper\n");
      break;
    case 's':
      printf("scissors\n");
      break;
  }
  //get result
  char result = getResult(userChoice,choice);
     
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