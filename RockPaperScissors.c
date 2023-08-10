#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        number = (rand() % 3) + 1; //ensures that the random number generated will be in range 0 to 2
        printf("%d\n", number);
    }
     
    return 0;
}