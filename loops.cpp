#include <iostream>
using namespace std;

int main()
{
    int secretNum = rand();
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    cout << secretNum << endl;

    while(secretNum != guess and not outOfGuesses){
        if (guessCount < guessLimit){
            cout << "Enter Guess: ";
            cin >> guess;
            guessCount ++;
            }
        else{
            outOfGuesses = true;
        }
    }
    if(outOfGuesses){
        cout << "You Lose!";
    } else {
        cout << "You win!";
    }
    return 0;
}