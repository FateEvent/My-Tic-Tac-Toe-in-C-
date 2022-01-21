#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    char moves[9] = {
                        '0', '0', '0',
                        '0', '0', '0',
                        '0', '0', '0'
                    };
    int choice = 0;
    int turn_counter = 1;  // I want to take the count of the turns to check who's playing
    cout << endl;
    cout << "Tic-Tac-Toe is a paper-and-pencil game for two players that takes place on a 3x3 grid." << endl;
    cout << endl;
    cout << "The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game.\n" << endl;
    while (turn_counter < 9)
    {
        print_first_line(moves);
        print_second_line(moves);
        print_third_line(moves);
        turn_checker(turn_counter);
        cout << "Choose your next move!" << endl;
        cin >> choice;
        while (choice < 0 || choice > 9 || moves[choice] != '0')
        {
            if (choice < 0 || choice > 9)
            {
                cout << "Please enter a valid input!" << endl;
                cin >> choice;
            }
            else if (moves[choice] != '0')
            {
                cout << "This position is already taken." << endl;
                cin >> choice;
            }
        }
        choice_checker(turn_counter, moves, choice);
        if (check_end_conditions(moves))
        {
            if (turn_counter % 2 == 1)
            {
                print_first_line(moves);
                print_second_line(moves);
                print_third_line(moves);
                cout << "Bravo, Player 1! You won!\n" << endl;
            }

            else
            {
                print_first_line(moves);
                print_second_line(moves);
                print_third_line(moves);
                cout << "Bravo, Player 2! You won!\n" << endl;
            }
            return 0;
        }
        turn_counter++;
    }
    cout << "It's a draw!" << endl;
    return 0;
}
