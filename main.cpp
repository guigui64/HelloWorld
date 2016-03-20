#include <iostream>
#include <vector>

#include "split.h"

using namespace std;

int main() {
    string empty = "not empty !"; // copy initialization
    string empty2("not empty !"); // direct initialization
    string empty3{"not empty !"}; // list initialization
    cout << "Hello, World! + \"" << empty << "\"" << endl;
    cout << (empty == empty2) << " " << (empty == empty3) << endl;

    string sentence;
    cout << endl << "Enter some sentence and I will parse it !" << endl;
    getline(cin, sentence);
    cout << sentence << endl;

    const vector<string> splitWords = split(sentence, ' ');
    for (auto i: splitWords)
        cout << i << endl;

    for (auto &c : sentence)
        c = (char) toupper(c);
    cout << sentence << endl;

    return 0;
}