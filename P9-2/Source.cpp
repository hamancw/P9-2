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
}
