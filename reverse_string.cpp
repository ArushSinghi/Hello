#include<bits/stdc++.h>
using namespace std;

// Reverse a string and return the result
string reverseString(const string &str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    string input = "Describe how your problem is affecting your use of Copilot in detail";
    string output = reverseString(input);
    cout << "Original : " << input << endl;
    cout << "Reversed : " << output << endl;
    return 0;
}
