#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Welcome to the time tables machine: ");


    int usersNumber;
    printf("Please enter an integer: ");
    scanf("%d", &usersNumber);  
    //printf("The %d",usersNumber, " times table is:");
    int result;

    for(int i=0; i<10; i++) 
        
        result = usersNumber * i;
        printf("%d", result, "\n");        
    return 0;
}

