//Unit3.hw
//Katie Kwatinetz, Lanaiya Walters

#include <stdio.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0

int main(){
    int array[SIZE] = {1, 56, 4, 0, -1, 5, 4, 1, 9, 78};
    int index;
    int found = FALSE;
    int large = array[0];

    //largest value
    for(index = 0; index < SIZE; index++){
        if (array[index] > large){
            large = array[index];
        }
    }

    printf("1) The largest value is %d \n\n", large);

    //average
    

    //duplicate
    for (index = 0; index < SIZE && found == FALSE; index++){
        for(int j = 1; j < (SIZE - 1) && found == FALSE; j++){
            if (array[index] == array[j]){
                found = TRUE;
            }
        }
    }

    if (found == FALSE){
        printf("3) The array does not have duplicates.");
    } 
    else{
        printf("3) The array has duplicate.");
    }


    return 0;
}
/* Your code is supposed to print the following information:

1)	Largest value
2)	Average value as a float
3)	Whether the array has duplicates or not */
