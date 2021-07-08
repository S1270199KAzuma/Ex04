#include<stdio.h>
#include<stdlib.h>
int main(){
    int Dice1,Dice2;

    srand((unsigned int)time(NULL));
    
    Dice1 = rand() % 6 + 1;
    Dice2 = rand() % 6 + 1;

    printf("Rolling the Dice...\n");
    printf("Die 1: %d\n",Dice1);
    printf("Die 2: %d\n",Dice2);
    printf("Total value: %d\n",Dice1 + Dice2);
    
    if((Dice1 + Dice2) > 7){
        printf("You won\n");
    }
    else{
        printf("You lose\n");
    }
    
    return 0;
}
