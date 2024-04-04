#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    cout << "Stone Paper Scissor  " << endl;
    cout << "1) Rock " << endl;
    cout << "2) Paper " << endl;
    cout << "3) Scisser " << endl;
    cin >> user;

    if (user == 1)
    {
        cout << " You Choose Rock " << endl;
    }
    else if (user == 2)
    {
        cout << " You Choose Paper " << endl;
    }
    else
        {
            cout << " You Choose Scissor " << endl;
        }
    computer = rand() % 3 + 1;

    // Testing
    if (computer == 1)
    {
        cout << "Computer Choose Rock" << endl;
    }
    else if (computer == 2)
    {
        cout << "Computer Choose PAper" << endl;
    }
    else
        {
            cout << "Computer Choose scissor" << endl;
        }
    // match
    if (user == computer)
    {
        cout << "Match Tied " << endl;
    }
    // User ROCK
    else if (user == 2)
    {
        if (computer == 2)
        {
            cout << "You Winn " << endl;
        }
        if (computer == 3)
        {
            cout << "You Lose" << endl;
        }
    }
    // User Scissor
    else if (user == 3)
    {
        if (computer == 1)
        {
            cout << "You Lose" << endl;
        }
        if (computer == 2)
        {
            cout << "You Winn " << endl;
        }
    }
    else if(user == 1)
    {
        if (computer == 2)
        {
            cout << "You Lose" << endl;
        }
        if (computer == 31)
        {
            cout << "You Winn " << endl;
        }
    }
    return 0;
}
