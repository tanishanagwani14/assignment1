#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
        count++;
    }

    cout << "\nLoop runs " << count << " times.";

    return 0;
