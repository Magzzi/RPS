#include <iostream>
#include <string> 
#include <windows.h>
#include <algorithm> 
using namespace std;

int main()
{
    string player1, player2;
    int score1 = 0, score2 = 0;
    const int maxScore = 5;
    string choice1, choice2;
    string winner;
    
    cout << "Please enter Player 1 name: ";
    getline(cin, player1);
    cout << "Please enter Player 2 name: ";
    getline(cin, player2);
    
    cout << "Good luck! First to reach five points wins the game!" << endl;
    Sleep(2000);
    system("cls");
    
    bool isDone = false;
    
    while (!isDone)
    {
        cout << "Please enter your choice Player 1: (Rock, Paper, Scissors) ";
        cin >> choice1;
        transform(choice1.begin(), choice1.end(), choice1.begin(), ::tolower); 
        system("cls");
        cout << "Please enter your choice Player 2: (Rock, Paper, Scissors) ";
        cin >> choice2;
        transform(choice2.begin(), choice2.end(), choice2.begin(), ::tolower); 
        system("cls");
        
        if (choice1 == "rock" && choice2 == "scissors")
        {
            score1 += 1;
        }
        else if (choice1 == "rock" && choice2 == "paper")
        {
            score2 += 1;
        }
        else if (choice1 == "paper" && choice2 == "rock")
        {
            score1 += 1;
        }
        else if (choice1 == "paper" && choice2 == "scissors")
        {
            score2 += 1;
        }
        else if (choice1 == "scissors" && choice2 == "paper")
        {
            score1 += 1;
        }
        else if (choice1 == "scissors" && choice2 == "rock")
        {
            score2 += 1;
        }
        else if (choice1 == choice2)
        {
            cout << "It's a tie! No points awarded." << endl;
        }
        else
        {
            cout << "Invalid Choice" << endl;
            continue; 
        }
        
        cout << "Score: " << "\t" << player1 << ": " << score1 << "\t | " << player2 << ": " << score2 << endl;

        if (score1 == maxScore)
        {
            isDone = true;
            winner = player1;
            system("cls");
            cout << "The winner is " << winner << ". Try again next time " << player2 << endl;
        }
        else if (score2 == maxScore)
        {
            isDone = true;
            winner = player2;
            system("cls");
            cout << "The winner is " << winner << ". Try again next time " << player1 << endl;
        }
    }

    return 0;
}

