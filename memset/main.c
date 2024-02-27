

#include <stdio.h>  // Include the standard input/output library for using printf
#include <stdlib.h> // Include the standard library for using EXIT_SUCCESS
#include <memory.h> // Include the memory management library for using memset

int main(void)
{
  // Declare an integer array 'a' with 5 elements
  int a[5];
  // Initialize all elements of array 'a' to 0 using memset
  // The 'sizeof a' calculates the total size of the array in bytes
  memset(a, 0, sizeof a);

  // Loop through each element of the array
  for (int i = 0; i < 5; i++) {
    // Print the current element's index and value
    printf("Element at index %d is %d\n", i, a[i]);
  }

  // Return EXIT_SUCCESS to indicate the program ended successfully
  return EXIT_SUCCESS;
}
