#include <iostream>
using namespace std;

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void printBoard()
{
	cout << "\n\tTic Tac Toe\n\n";
	
	cout << "Player 1(X) vs Player 2(O)" << endl << endl;
	
	cout << "     |     |     " << endl;
	cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << "  " << endl;
	
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << "  " << endl;
	
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << "  " << endl;
	
	cout << "     |     |     " << endl;
	

	
	return;
}

int main()
{
	
	printBoard();
	
	return 0;
}