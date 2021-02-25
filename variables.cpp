#include <iostream>

using namespace std;

int main()
{
    string characterName = "Tom";
    int characterAge = 20;

    cout << "There once was a man named " << characterName << endl;
    cout << "Steve was " << characterAge <<" years old" << endl;

    characterName = "Carol";
    cout << "She liked the name "<< characterName << endl;
    cout << "But she did not like being "<< characterAge << endl;

    return 0;
}