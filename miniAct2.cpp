#include <iostream>
#include <limits>

void findMinMax(const int arr[], int size, int& min, int& max) {
    min = std::numeric_limits<int>::max();
    max = std::numeric_limits<int>::min();

    for (int i = 0; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

void modifyElement(int arr[], int size, int index, int newVal) {
    if (index >= 0 && index < size) {
        arr[index] = newVal;
        std::cout << "Element at index " << index << " has been modified to " << newVal << std::endl;
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}

int main() {
    // size of the array
    const int size = 5;
    // array initialization
    int numbers[size] = {10, 20, 30, 40, 50};
    
    std::cout << "Elements in the Array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    
    std::cout << std::endl;
    
    // findMinMax Function
    int minVal, maxVal;
    findMinMax(numbers, size, minVal, maxVal);
    std::cout << "Minimum value: " << minVal << std::endl;
    std::cout << "Maximum value: " << maxVal << std::endl;

    // modifyElement Function
    int index, newVal;
    
    std::cout << "What index do you want to modify: ";
    std::cin >> index;
    std::cout << "Enter the new value: ";
    std::cin >> newVal;
    
    modifyElement(numbers, size, index, newVal);

    std::cout << "Modified Elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}