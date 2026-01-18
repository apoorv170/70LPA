#include<iostream>
using namespace std;

string concatenateArray(const string arr[], int size) {
    string result = "";
    for (int i = 0; i < size; i++) {
        result += arr[i];
    }
    return result;
}
int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    string* arr = new string[n];
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    string result = concatenateArray(arr, n);
    cout << "The concatenated string is: " << result << endl;
    delete[] arr;
    return 0;
}