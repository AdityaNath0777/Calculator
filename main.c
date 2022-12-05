#include<stdio.h> /* for basic io */
#include<stdlib.h>

// for -> ADD(), subtract(), multiply(), divide()
//     -> MyAdd(), MySUbtract()
//     -> MyMultiply(), MyDivide()
#include "resources.c" 


int main(int argc, char* argv[]){
    puts("\n\n\t ***  Simple Calculator  ***\n\n");
        printf(" 1) Add     \t 2) Subtract \n 3) Multiply \t 4) Divide\n 5) Exit\n\n -> ");
        int choice=0;
        scanf(" %d", &choice);
    // while(1){

        switch(choice){
            case 1: {
                        printf("you've chosen Addition\n");
                        MyAdd();
                        break;
                    }

            case 2: {   
                        printf("you've chosen Subtraction\n");
                        MySubtract();
                        break;
                    }

            case 3: {
                        printf("you've chosen Multiplication\n");
                        MyMultiply();
                        break;
                    }
            case 4: {
                        printf("you've chosen Division\n");
                        MyDivide();
                        break;
                    }
            case 5: exit(0);
            default: printf("invalid choice\n");
                    break;
        }

    // }

    
return 0;
}




    // int a=2, b=9, c=9;
    // printf("sum is %d\n", ADD(a,b,c));
    // printf("sum is %d\n", ADD(3,b,c, 5));

    // printf("\nsubtract is %d\n", subtract(4,150, 25, 50, 74));

    // printf("\nMULTIPLY: %d\n", multiply(5, 1,2,3,4,5));

    // printf("\nDivision: %d\n", divide(4, 100,2,5,4));