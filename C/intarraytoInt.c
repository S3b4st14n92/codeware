#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* arrayToInteger(int arr[], int size) {
    int result = 0;

    for (int i = 0; i < size; i++) {
        result += arr[i] * pow(10, size - i - 1);
    }

    return result;
}*/



char* array_to_string(int array[], int array_size) {
  char* str = malloc(sizeof(char) * (array_size + 1));
  int i;
  for (i = 0; i < array_size; i++) {
    str[i] = (char) (array[i] + '0');
  }
  str[array_size] = '\0';
  return str;
}

int array_in_int(int array[], int array_size) {
  char* str = array_to_string(array, array_size);
  int result = atoi(str);
  free(str);
  return result;
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int result = array_in_int(myArray, arraySize);

    printf("Resulting Integer: %d\n", result);

    return 0;
}