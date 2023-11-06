#include <iostream>
#include <vector>

void findMaxIndex(const std::vector<int>& arr) {
    int maxIndex = 0;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    std::cout << "Index of the maximum element: " << maxIndex << std::endl;
}

void productBetweenZeros(const std::vector<int>& arr) {
    int firstZero = -1;
    int secondZero = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            if (firstZero == -1) {
                firstZero = i;
            }
            else if (secondZero == -1) {
                secondZero = i;
                break;
            }
        }
    }

    if (firstZero == -1 || secondZero == -1) {
        std::cout << "There are no two 0 elements" << std::endl;
        return;
    }

    int product = 1;
    for (int i = firstZero + 1; i < secondZero; ++i) {
        product *= arr[i];
    }
    std::cout << "Product between the first and second zero elements: " << product << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of elements (n): ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    findMaxIndex(arr);
    productBetweenZeros(arr);

    std::vector<int> transformedArray(n);

    int lastEvenPos = n / 2;
    int lastOddPos = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            transformedArray[lastEvenPos] = arr[i];
            lastEvenPos += 1;
        }
        else {
            transformedArray[lastOddPos] = arr[i];
            lastOddPos += 1;
        }
    }

    std::cout << "Transformed array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << transformedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}