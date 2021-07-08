#include<stdio.h>
#define N 4
int main(){

    int i;
    char name[N+1];

    printf("What is your name? \n");
    scanf("%s",name);

    printf("Hello, ");
    for(i = 0; i < N; i++){
        printf("%c",name[i]);
    }
    printf("!\n");
    return 0;
}