//unit3.hw
//Group Members: Lanaiya Walters, Katie Kwatinetz

#include <stdio.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0

int main(){
    int array[SIZE] = /*{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};*/ {1, 56, 4, 0, -1, 5, 4, 1, 9, 78};
    int index;
    int large = array[0];

    //largest value
    for(index = 0; index < SIZE; index++){
        if (array[index] > large){
            large = array[index];
        }
    }

    printf("1) The largest value is %d. \n\n", large);

    //average
    
    printf("2) The average is \n\n");

    //duplicate
    int found = FALSE;
    int temp;
    for (index = 0; index < SIZE && found == FALSE; index++){
        for(temp = index + 1; temp < SIZE  && found == FALSE; temp++){
            if (array[index] == array[temp]){
                found = TRUE;
            }
        }
    }

    if (found == TRUE) printf("3) The array has duplicates."); 
    else printf("3) The array does not have duplicates.");


    return 0;
}
