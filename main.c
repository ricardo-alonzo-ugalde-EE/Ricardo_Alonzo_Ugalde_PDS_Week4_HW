#include <stdio.h>
#include <stdlib.h>




//This is a user defined sorting function used to print the second element of its array
void setDifference(int* S, int count_S, int* T, int count_T)
{
    // setDifference set A function local variables
    int i;
    int j;
    int temp;

    // setDifference set B function local variables
    int x;
    int y;
    int temp_b;

    for (i = 0; i < count_S; i++) // loops until array_size is reached
    {
        for (j = i + 1; j < count_S; j++)
        {
            if (S[i] > S[j])
            {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }

        }
    }

    for (x = 0; x < count_T; x++) // loops until array_size is reached
    {
        for (y = x + 1; y < count_T; y++)
        {
            if (T[x] > T[y])
            {
                temp_b = T[x];
                T[x] = T[y];
                T[y] = temp_b;
            }

        }
    }


    printf("\nI've sorted the elements in set A from smallest to largest below:\n");
    for (i = 0; i < count_S; i++)
    {
        printf("%d\t", S[i]); // print all sorted elements in the array with a tab in between

    }


    printf("\nI've sorted the elements in set B from smallest to largest below:\n");
    for (x = 0; x < count_T; x++)
    {
        printf("%d\t", T[x]); // print all sorted elements in the array with a tab in between

    }


    for (i = 0; i < count_S; i++)
    {
        if (S[i] == T[x])
        {
            printf("All the elements are the same!"); // print all sorted elements in the array with a tab in between
        }
        else
        {
            printf("%d%d\t", T[x], S[i]); // print all sorted elements in the array with a tab in between)
        }


    }
    return;
}

// Subsets and Proper Subsets

#include <stdio.h>

// Function for user defined Set A
void userSetA(int arr[], int size)
{
    int i = 0;
    printf("\n\nHello There! Please enter the elements of set A below:\n");
    for (i = 0; i < size; i++)
    {
        scanf_s("%d", &arr[i]);
    }
}

// Function for user defined Set B
void userSetB(int arr[], int size)
{
    int i = 0;
    printf("\nHello There! Please enter the elements of set B below:\n");
    for (i = 0; i < size; i++)
    {
        scanf_s("%d", &arr[i]);
    }
}

// Function to sort all array elements in ascending order
void sortArray(int arr[], int size)
{

    int i;
    int j;
    int temp;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }
}
// Function to print user defined arrays
void printArray(int arr[], int size)
{
    int i = 0;
    printf("\n Here is your sorted set: ");
    for (i = 0; i < size; i++)
    {
        printf("\n\tarr[%d] : %d", i, arr[i]);
    }
    printf("\n");
}


// Function to compare if elements in set A exist in set B
int compareArray(int a[], int b[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (a[i] == b[i])
        {
            return 0;
        }

    }
    return 1;
}



int main() 
{
    

    /*Question 1 main program start*/
    // setDifference set A passing in variables
    int array_a[5];
    int array_size;
    int i = 0;
    int j = 0;

    // setDifference set B variables
    int array_b[5];
    int array_size_b;
    int x = 0;
    int y = 0;

  
    // setDifference user defined set variables
    printf("\n Question 1: Hello there! How many elements should set A have?\n");
    scanf_s("%d", &array_size); // elements of array stored in variable size
    printf("\nGreat! Now go ahead and enter all the elements of set A here: \n", array_size);
    for (i = 0; i < array_size; i++) // loop to store values in array_a until array_size is full
    {
        scanf_s("%d", &array_a[i]); // stores the values from position 0 to n of array with loop
    }
      
    printf("\nTerrific! Now how many elements should set B have?\n");
    scanf_s("%d", &array_size_b); // elements of array stored in variable size
    printf("\nOk got it. Enter all the elements of set B here: \n", array_size_b);
    for (i = 0; i < array_size_b; i++) // loop to store values in array_a until array_size is full
    {
        scanf_s("%d", &array_b[i]); // stores the values from position 0 to n of array with loop
    }
    // pass set A variables to setDifference function as arguments
    setDifference(array_a, array_size, array_b, array_size_b);
    /*Question 1 main program end*/


    /*Question 2 main start*/
    int a[5], b[5];

    userSetA(a, 5);
    userSetB(b, 5);
    sortArray(a, 5);
    sortArray(b, 5);
    printArray(a, 5);
    printArray(b, 5);
    if (compareArray(a, b, 5) == 0)  // if the return value is 0 set A is a subset of set B because all elements in both sets match
    {
        printf("Set A is a Subset of Set B.\n");

    }
    else {
        printf("The sets have different elements.\n");
    }
    /*Question 2 main end*/



   

    return 0;

}









