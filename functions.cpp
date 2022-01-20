#include <iostream>
#include "functions.h"

using namespace std;

void    turn_checker(int turn_counter)
{
    if (turn_counter % 2 == 1)
        cout << "Player one, what's your move?\n" << endl;
    else
        cout << "Player two, it's your turn!\n" << endl;
}

void    choice_checker(int turn_counter, char moves[9], int choice)
{
    if (choice >= 0 && choice <= 2)
        first_line_move(moves, choice, turn_counter);
    else if (choice <= 5)
        second_line_move(moves, choice, turn_counter);
    else if (choice <= 8)
        third_line_move(moves, choice, turn_counter);
    else
        cout << "Please, enter a valid input!\n\n" << endl;
}

void    first_line_move(char arr[9], int choice, int turn_counter)
{
    if (turn_counter % 2 == 0 && choice == 2 && arr[2] == '0')
        arr[2] = 'O';
    else if (turn_counter % 2 == 1 && choice == 2 && arr[2] == '0')
        arr[2] = 'X';
    else if (turn_counter % 2 == 0 && choice == 1 && arr[1] == '0')
        arr[1] = 'O';
    else if (turn_counter % 2 == 1 && choice == 1 && arr[1] == '0')
        arr[1] = 'X';
    else if (turn_counter % 2 == 0 && choice == 0 && arr[0] == '0')
        arr[0] = 'O';
    else if (turn_counter % 2 == 1 && choice == 0 && arr[0] == '0')
        arr[0] = 'X';
}

void    second_line_move(char arr[9], int choice, int turn_counter)
{
    if (turn_counter % 2 == 0 && choice == 3 && arr[3] == '0')
        arr[3] = 'O';
    else if (turn_counter % 2 == 1 && choice == 3 && arr[3] == '0')
        arr[3] = 'X';
    else if (turn_counter % 2 == 0 && choice == 4 && arr[4] == '0')
        arr[4] = 'O';
    else if (turn_counter % 2 == 1 && choice == 4 && arr[4] == '0')
        arr[4] = 'X';
    else if (turn_counter % 2 == 0 && choice == 5 && arr[5] == '0')
        arr[5] = 'O';
    else if (turn_counter % 2 == 1 && choice == 5 && arr[5] == '0')
        arr[5] = 'X';
}

void    third_line_move(char arr[9], int choice, int turn_counter)
{
    if (turn_counter % 2 == 0 && choice == 8 && arr[8] == '0')
        arr[8] = 'O';
    else if (turn_counter % 2 == 1 && choice == 8 && arr[8] == '0')
        arr[8] = 'X';
    else if (turn_counter % 2 == 0 && choice == 7 && arr[7] == '0')
        arr[7] = 'O';
    else if (turn_counter % 2 == 1 && choice == 7 && arr[7] == '0')
        arr[7] = 'X';
    else if (turn_counter % 2 == 0 && choice == 6 && arr[6] == '0')
        arr[6] = 'O';
    else if (turn_counter % 2 == 1 && choice == 6 && arr[6] == '0')
        arr[6] = 'X';
}

int check_end_conditions(char arr[9])
{
    if (arr[0] != '0' && arr[0] == arr[1] && arr[1] == arr[2])
        return 1;
    else if (arr[3] != '0' && arr[3] == arr[4] && arr[4] == arr[5])
        return 1;
    else if (arr[6] != '0' && arr[6] == arr[7] && arr[7] == arr[8])
        return 1;
    else if (arr[0] != '0' && arr[0] == arr[4] && arr[4] == arr[8])
        return 1;
    else if (arr[6] != '0' && arr[6] == arr[4] && arr[4] == arr[2])
        return 1;
    else if (arr[0] != '0' && arr[0] == arr[3] && arr[3] == arr[6])
        return 1;
    else if (arr[1] != '0' && arr[1] == arr[4] && arr[4] == arr[7])
        return 1;
    else if (arr[2] != '0' && arr[2] == arr[5] && arr[5] == arr[8])
        return 1;
    else
        return 0;
}

void    print_first_line(char arr[9])
{
    if (arr[0] == '0' && arr[1] == '0' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T           T           " << endl;
        cout << "     0     I     1     I    2      " << endl;
        cout << "           C           C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == '0' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T           " << endl;
        cout << "     X     I     1     I    2      " << endl;
        cout << "   X   X   C           C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T           " << endl;
        cout << "     X     I     X     I    2      " << endl;
        cout << "   X   X   C   X   X   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T   X   X   " << endl;
        cout << "     X     I     X     I     X     " << endl;
        cout << "   X   X   C   X   X   C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == '0' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T           " << endl;
        cout << "   O    O  I     1     I    2      " << endl;
        cout << "    O  O   C           C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T           " << endl;
        cout << "   O    O  I  O    O   I    2      " << endl;
        cout << "    O  O   C   O  O    C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T   O  O    " << endl;
        cout << "   O    O  I  O    O   I  O    O   " << endl;
        cout << "    O  O   C   O  O    C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == '0' && arr[1] == 'X' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T           " << endl;
        cout << "     0     I     X     I     2     " << endl;
        cout << "           C   X   X   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == '0' && arr[1] == '0' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T           T   X   X   " << endl;
        cout << "     0     I     1     I     X     " << endl;
        cout << "           C           C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == '0' && arr[1] == 'X' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T   X   X   " << endl;
        cout << "     0     I     X     I     X     " << endl;
        cout << "           C   X   X   C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == '0' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T   X   X   " << endl;
        cout << "     X     I     1     I     X     " << endl;
        cout << "   X   X   C           C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == '0' && arr[1] == 'O' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T    O  O   T           " << endl;
        cout << "     0     I   O    O  I    2      " << endl;
        cout << "           C    O  O   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == '0' && arr[1] == '0' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T           T   O  O    " << endl;
        cout << "     0     I     1     I  O    O   " << endl;
        cout << "           C           C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == '0' && arr[1] == 'O' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T    O  O   T   O  O    " << endl;
        cout << "     0     I   O    O  I  O    O   " << endl;
        cout << "           C    O  O   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == '0' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T   O  O    " << endl;
        cout << "   O    O  I     1     I  O    O   " << endl;
        cout << "    O  O   C           C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == 'O' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T    O  O   T   O  O    " << endl;
        cout << "     X     I   O    O  I  O    O   " << endl;
        cout << "   X   X   C    O  O   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T   O  O    " << endl;
        cout << "     X     I     X     I  O    O   " << endl;
        cout << "   X   X   C   X   X   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T   X   X   " << endl;
        cout << "   O    O  I  O    O   I     X     " << endl;
        cout << "    O  O   C   O  O    C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == 'X' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T   X   X   " << endl;
        cout << "   O    O  I     X     I     X     " << endl;
        cout << "    O  O   C   X   X   C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == 'O' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T    O  O   T   X   X   " << endl;
        cout << "     X     I   O    O  I     X     " << endl;
        cout << "   X   X   C    O  O   C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == 'X' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T   O  O    " << endl;
        cout << "   O    O  I     X     I  O    O   " << endl;
        cout << "    O  O   C   X   X   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == 'O' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   O  O    T           " << endl;
        cout << "     X     I  O    O   I     2     " << endl;
        cout << "   X   X   C   O  O    C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == '0' && arr[1] == 'O' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T   O  O    T   X   X   " << endl;
        cout << "     0     I  O    O   I     X     " << endl;
        cout << "           C   O  O    C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == 'X' && arr[2] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T           " << endl;
        cout << "   O    O  I     X     I     2     " << endl;
        cout << "    O  O   C   X   X   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'X' && arr[1] == '0' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T   O  O    " << endl;
        cout << "     X     I     1     I  O    O   " << endl;
        cout << "   X   X   C           C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == '0' && arr[1] == 'X' && arr[2] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T   O  O    " << endl;
        cout << "     0     I     X     I  O    O   " << endl;
        cout << "           C   X   X   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[0] == 'O' && arr[1] == '0' && arr[2] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T   X   X   " << endl;
        cout << "   O    O  I     1     I     X     " << endl;
        cout << "    O  O   C           C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
};

void    print_second_line(char arr[9])
{
    if (arr[3] == '0' && arr[4] == '0' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T           T           " << endl;
        cout << "     3     A     4     A    5      " << endl;
        cout << "           C           C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == '0' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T           " << endl;
        cout << "     X     A     4     A    5      " << endl;
        cout << "   X   X   C           C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T           " << endl;
        cout << "     X     A     X     A    5      " << endl;
        cout << "   X   X   C   X   X   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T   X   X   " << endl;
        cout << "     X     A     X     A     X     " << endl;
        cout << "   X   X   C   X   X   C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == '0' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T           " << endl;
        cout << "   O    O  A     4     A    5      " << endl;
        cout << "    O  O   C           C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T           " << endl;
        cout << "   O    O  A  O    O   A    5      " << endl;
        cout << "    O  O   C   O  O    C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T   O  O    " << endl;
        cout << "   O    O  A  O    O   A  O    O   " << endl;
        cout << "    O  O   C   O  O    C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == '0' && arr[4] == 'X' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T           " << endl;
        cout << "     3     A     X     A     5     " << endl;
        cout << "           C   X   X   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == '0' && arr[4] == '0' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T           T   X   X   " << endl;
        cout << "     3     A     4     A     X     " << endl;
        cout << "           C           C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == '0' && arr[4] == 'X' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T   X   X   " << endl;
        cout << "     3     A     X     A     X     " << endl;
        cout << "           C   X   X   C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == '0' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T   X   X   " << endl;
        cout << "     X     A     4     A     X     " << endl;
        cout << "   X   X   C           C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == '0' && arr[4] == 'O' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T    O  O   T           " << endl;
        cout << "     3     A   O    O  A    5      " << endl;
        cout << "           C    O  O   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == '0' && arr[4] == '0' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T           T   O  O    " << endl;
        cout << "     3     A     4     A  O    O   " << endl;
        cout << "           C           C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == '0' && arr[4] == 'O' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T    O  O   T   O  O    " << endl;
        cout << "     3     A   O    O  A  O    O   " << endl;
        cout << "           C    O  O   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == '0' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T   O  O    " << endl;
        cout << "   O    O  A     4     A  O    O   " << endl;
        cout << "    O  O   C           C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == 'O' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T    O  O   T   O  O    " << endl;
        cout << "     X     A   O    O  A  O    O   " << endl;
        cout << "   X   X   C    O  O   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T   O  O    " << endl;
        cout << "     X     A     X     A  O    O   " << endl;
        cout << "   X   X   C   X   X   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T   X   X   " << endl;
        cout << "   O    O  A  O    O   A     X     " << endl;
        cout << "    O  O   C   O  O    C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == 'X' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T   X   X   " << endl;
        cout << "   O    O  A     X     A     X     " << endl;
        cout << "    O  O   C   X   X   C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == 'O' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T    O  O   T   X   X   " << endl;
        cout << "     X     A   O    O  A     X     " << endl;
        cout << "   X   X   C    O  O   C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == 'X' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T   O  O    " << endl;
        cout << "   O    O  A     X     A  O    O   " << endl;
        cout << "    O  O   C   X   X   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == 'O' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   O  O    T           " << endl;
        cout << "     X     I  O    O   I     5     " << endl;
        cout << "   X   X   C   O  O    C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == '0' && arr[4] == 'O' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T   O  O    T   X   X   " << endl;
        cout << "     3     I  O    O   I     X     " << endl;
        cout << "           C   O  O    C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == 'X' && arr[5] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T           " << endl;
        cout << "   O    O  I     X     I     5     " << endl;
        cout << "    O  O   C   X   X   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'X' && arr[4] == '0' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T   O  O    " << endl;
        cout << "     X     I     4     I  O    O   " << endl;
        cout << "   X   X   C           C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == '0' && arr[4] == 'X' && arr[5] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T   O  O    " << endl;
        cout << "     3     I     X     I  O    O   " << endl;
        cout << "           C   X   X   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[3] == 'O' && arr[4] == '0' && arr[5] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T   X   X   " << endl;
        cout << "   O    O  I     4     I     X     " << endl;
        cout << "    O  O   C           C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
};

void    print_third_line(char arr[9])
{
    if (arr[6] == '0' && arr[7] == '0' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T           T           " << endl;
        cout << "     6     O     7     O    8      " << endl;
        cout << "           E           E           " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == '0' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T           " << endl;
        cout << "     X     O     7     O    8      " << endl;
        cout << "   X   X   E           E           " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T           " << endl;
        cout << "     X     O     X     O    8      " << endl;
        cout << "   X   X   E   X   X   E           " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T   X   X   " << endl;
        cout << "     X     O     X     O     X     " << endl;
        cout << "   X   X   E   X   X   E   X   X   " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == '0' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T           " << endl;
        cout << "   O    O  O     7     O    8      " << endl;
        cout << "    O  O   E           E           " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T           " << endl;
        cout << "   O    O  O  O    O   O    8      " << endl;
        cout << "    O  O   E   O  O    E           " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T   O  O    " << endl;
        cout << "   O    O  O  O    O   O  O    O   " << endl;
        cout << "    O  O   E   O  O    E   O  O    " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == '0' && arr[7] == 'X' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T           " << endl;
        cout << "     6     O     X     O     8     " << endl;
        cout << "           E   X   X   E           " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == '0' && arr[7] == '0' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T           T   X   X   " << endl;
        cout << "     6     O     7     O     X     " << endl;
        cout << "           E           E   X   X   " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == '0' && arr[7] == 'X' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T   X   X   " << endl;
        cout << "     6     O     X     O     X     " << endl;
        cout << "           E   X   X   E   X   X   " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == '0' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T   X   X   " << endl;
        cout << "     X     O     7     O     X     " << endl;
        cout << "   X   X   E           E   X   X   " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == '0' && arr[7] == 'O' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "           T    O  O   T           " << endl;
        cout << "     6     O   O    O  O    8      " << endl;
        cout << "           E    O  O   E           " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == '0' && arr[7] == '0' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T           T   O  O    " << endl;
        cout << "     6     O     7     O  O    O   " << endl;
        cout << "           E           E   O  O    " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == '0' && arr[7] == 'O' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T    O  O   T   O  O    " << endl;
        cout << "     6     O   O    O  O  O    O   " << endl;
        cout << "           E    O  O   E   O  O    " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == '0' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T   O  O    " << endl;
        cout << "   O    O  O     7     O  O    O   " << endl;
        cout << "    O  O   E           E   O  O    " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == 'O' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T    O  O   T   O  O    " << endl;
        cout << "     X     O   O    O  O  O    O   " << endl;
        cout << "   X   X   E    O  O   E   O  O    " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   X   X   T   O  O    " << endl;
        cout << "     X     O     X     O  O    O   " << endl;
        cout << "   X   X   E   X   X   E   O  O    " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   O  O    T   X   X   " << endl;
        cout << "   O    O  O  O    O   O     X     " << endl;
        cout << "    O  O   E   O  O    E   X   X   " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == 'X' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T   X   X   " << endl;
        cout << "   O    O  O     X     O     X     " << endl;
        cout << "    O  O   E   X   X   E   X   X   " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == 'O' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T    O  O   T   X   X   " << endl;
        cout << "     X     O   O    O  O     X     " << endl;
        cout << "   X   X   E    O  O   E   X   X   " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == 'X' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T   O  O    " << endl;
        cout << "   O    O  O     X     O  O    O   " << endl;
        cout << "    O  O   E   X   X   E   O  O    " << endl;
        cout << "                                   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == 'O' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T   O  O    T           " << endl;
        cout << "     X     I  O    O   I     8     " << endl;
        cout << "   X   X   C   O  O    C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[6] == '0' && arr[7] == 'O' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "           T   O  O    T   X   X   " << endl;
        cout << "     6     I  O    O   I     X     " << endl;
        cout << "           C   O  O    C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == 'X' && arr[8] == '0')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T   X   X   T           " << endl;
        cout << "   O    O  I     X     I     8     " << endl;
        cout << "    O  O   C   X   X   C           " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[6] == 'X' && arr[7] == '0' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "   X   X   T           T   O  O    " << endl;
        cout << "     X     I     7     I  O    O   " << endl;
        cout << "   X   X   C           C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[6] == '0' && arr[7] == 'X' && arr[8] == 'O')
    {
        cout << "                                   " << endl;
        cout << "           T   X   X   T   O  O    " << endl;
        cout << "     6     I     X     I  O    O   " << endl;
        cout << "           C   X   X   C   O  O    " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
    else if (arr[6] == 'O' && arr[7] == '0' && arr[8] == 'X')
    {
        cout << "                                   " << endl;
        cout << "    O  O   T           T   X   X   " << endl;
        cout << "   O    O  I     7     I     X     " << endl;
        cout << "    O  O   C           C   X   X   " << endl;
        cout << "   T  I  C    T  A  C    T  O  E   " << endl;
    }
};
