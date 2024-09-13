/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/* PSEUDO CODE
findMax function:

Set max to the first element of the array.
Iterate through the array:
For each element but starting from the second element:
If the current element is greater than max:
Update max to the current element.
Return max: After iterating, return the max value.


main function:
Create an array: Define an array of elements.
Get the array size: Calculate the number of elements in the array.
Call findMax: Call the findMax function with the array and its size as arguments.
 Print the maximum value returned by the findMax function.

*/
#include <stdio.h>
// Function to find the maximum element in an array
int findMax(int arr[], int n) {
    int max = arr[0];
    // Iterate through the array from the second element to the last
    for (int i = 1; i < n; ++i) {
    // If the current element is greater than the maximum, update the maximum
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int 
 arr[] = {65, 78, 99, 3,9, 2};
     // Find the maximum element in the array
    int maxElement = findMax(arr, sizeof(arr) / sizeof(arr[0]));

    // Print the maximum element
    printf("The maximum element: %d\n", maxElement);

    return 0;
}

