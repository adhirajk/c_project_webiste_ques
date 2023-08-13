// Enter an array from user and display all the value

#include <stdio.h>

int main()
{

    int length, i, j;

    printf("enter the length of array : ");
    scanf("%d", &length);
    printf("\n");

    int arr[length];

    for (i = 0; i < length; i++){
        printf("enter your %d element : ", i+1);
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < length; j++){
        printf("\nelement at %d position is : %d\n", j+1, arr[j]);
    }
    
        return 0;
}