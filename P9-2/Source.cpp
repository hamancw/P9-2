#include <iostream>

using namespace std;

bool isSortedIncreasing(const int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isSortedDecreasing(const int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] < arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool hasAdjacentDuplicates(const int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    const int SIZE = 6;
    int arr[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter integer #" << i << ": ";
        cin >> arr[i];
    }

    if (isSortedIncreasing(arr, SIZE)) {
        cout << "The data are increasing." << endl;
    }
    else {
        cout << "The data are not increasing." << endl;
    }

    if (isSortedDecreasing(arr, SIZE)) {
        cout << "The data are decreasing." << endl;
    }
    else {
        cout << "The data are not decreasing." << endl;
    }

    if (hasAdjacentDuplicates(arr, SIZE)) {
        cout << "The data has adjacent duplicates." << endl;
    }
    else {
        cout << "The data does not have adjacent duplicates." << endl;
    }
}
