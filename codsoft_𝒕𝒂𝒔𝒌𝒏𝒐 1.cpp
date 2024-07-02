#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber;
    int guess;
    srand(time(0)); 
    randomNumber = rand() % 100 + 1; 
    cout << "\tWelcome to Guess the Number Game" << endl;

    do
    {
        cout << "Enter your guess between 1 and 100: ";
        cin >> guess;

        if (guess > randomNumber){
            cout << "The "<< guess <<" is too high" << endl;
        }
        else if (guess < randomNumber){
            cout << "The "<< guess << " is too low" << endl;
        }
        else{
            cout << "\nVoila! You got the right guess "<< guess << endl;
        }
    } 
        while (guess != randomNumber);

	return 0;
}
