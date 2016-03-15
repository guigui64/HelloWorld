#include <iostream>
#include <vector>

#include "split.h"

using namespace std;

int main() {
    string empty{"not empty !"};
    cout << "Hello, World! + \"" << empty << "\"" << endl;

    string sentence;
    cout << endl << "Enter some sentence and I will parse it !" << endl;
    getline(cin, sentence);
    cout << sentence << endl;

//    istringstream iss{sentence};
//    copy(istream_iterator<string>(iss),
//         istream_iterator<string>(),
//         ostream_iterator<string>(cout, "\n"));

    const vector<string> splitWords{split(sentence, ' ')};
    for (auto i: splitWords)
        cout << i << endl;

    return 0;
}