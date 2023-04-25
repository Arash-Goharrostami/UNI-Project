#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int MAX_LENGTH = 256;
    char sentence[MAX_LENGTH];
    int sentence_length = 0;
    int num_expressions = 0;

    cout << "Enter a sentence (up to " << MAX_LENGTH - 1 << " characters): ";
    cin.getline(sentence, MAX_LENGTH);

    // Calculate sentence length
    sentence_length = strlen(sentence);

    // Calculate number of expressions
    for (int i = 0; i < sentence_length; i++) {
        if (sentence[i] == '.') {
            num_expressions++;
        }
    }

    cout << "The length of the sentence is: " << sentence_length << endl;
    cout << "The number of expressions after each period is: " << num_expressions << endl;

    return 0;
}
