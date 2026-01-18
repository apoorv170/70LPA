#include<iostream>
using namespace std;

int scoreOfString(const string &s) {
    int score = 0;
    for (int i = 1 ; i <= s.length()-1; i++) {
        int diff = abs(s[i] - s[i-1]);
        score = score + diff;
    }
    return score;
}

int main() {
    string input;
    cout << "Enter a lowercase string: ";
    cin >> input;
    int result = scoreOfString(input);
    cout << "The score of the string is: " << result << endl;
    return 0;
}