#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 3, 15, 6, 2};
    int n = 5;

    // Part 1: Find the largest number
    int largest = arr[0];
    int comparisons = 0;

    for (int i = 1; i < n; i++) {
        comparisons++;
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest number: " << largest << endl;
    cout << "Comparisons made: " << comparisons << endl;

    // Part 2: Sort the array (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted list: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}