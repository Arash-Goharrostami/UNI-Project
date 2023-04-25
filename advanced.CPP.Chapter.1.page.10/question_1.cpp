#include <iostream>
using namespace std;

int main() {
    float score[6] = {12.5, 17, 15, 8, 19.25, 16.5};

    // assume the first number is the largest
    float largest = score[0]; 

    // start from index 1, since we already checked index 0
    for (int i = 1; i < 6; i++) { 
        if (score[i] > largest) {
            // update largest if we find a bigger number
            largest = score[i]; 
        }
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}