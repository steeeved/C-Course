#include <iostream>

using namespace std;

int main()
{
    string phrase = "Learning C plus plus\n";
    cout << phrase << endl;
    //string functions
    cout << phrase.length();
    // indexing
    cout << "The lenghth of phrase is " << phrase.length() << "chracters/n"<< endl;
    phrase[0] == 'F';
    cout << phrase << endl;
    cout << phrase.find("plus", 0) << endl;

    //slicing
    string phrasesub;
    phrasesub = phrase.substr(8, 15);
    cout << phrasesub << endl;
    return 0;
}