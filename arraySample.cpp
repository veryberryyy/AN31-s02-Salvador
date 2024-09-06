/*
    Code Along
        - declare and initialize array
        - print array element
        - find the sum of array elements
        - modify an array element
        - find the maximum and minimum value
*/

#include <iostream>
//numeric limits
#include <limits>

//prints the whole array
void printArray(const int arr[], int size){
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int findSum(const int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    //size of the array
    const int size = 5;

    //array initialization
    int numbers[size] = {10, 20, 30, 40, 50};

    //print the elements inside the array
    printArray(numbers, size);

    //find the sum and print
    int sum = findSum(numbers, size);
    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}


