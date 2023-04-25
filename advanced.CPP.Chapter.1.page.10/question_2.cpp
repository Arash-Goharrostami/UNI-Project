#include <iostream>
using namespace std;

float findLargest(float arr[], int size);


int main() {
    float score[6] = {12.5, 17, 15, 8, 19.25, 16.5};

    float largest = findLargest(score, 6);

    cout << "The largest number is: " << largest << endl;

    return 0;
}

float findLargest(float arr[], int size) {
    // assume the first number is the largest
    float largest = arr[0];

    // start from index 1, since we already checked index 0
    for (int i = 1; i < size; i++) { 
        if (arr[i] > largest) {
            // update largest if we find a bigger number
            largest = arr[i]; 
        }
    }

    return largest;
}