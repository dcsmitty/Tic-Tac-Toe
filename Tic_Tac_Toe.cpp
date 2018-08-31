#include <iostream>
using namespace std;

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

bool checkWin();
void printBoard();

int main()
{
	bool winner = false;
	int difficulty = 0;
	
	do{
		cout << "Choose the difficulty of computer!(1 = Easy, 2 = Medium, 3 = Hard)" << endl;
		cin >> difficulty;
		if(difficulty == 1 || difficulty == 2 || difficulty == 3)
		{
			break;
		}
		
	}while(true);
	
	do{
	
		printBoard();
		break;
	}while(!winner);
	
	return 0;
}

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

bool checkWin()
{
	if(board[1] == board[2] && board[2] == board[3])
	{
		return true;
	}
	else if(board[4] == board[5] && board[5] == board[6])
	{
		return true;
	}
	else if(board[7] == board[8] && board[8] == board[9])
	{
		return true;
	}
	else if(board[1] == board[4] && board[4] == board[7])
	{
		return true;
	}
	else if(board[2] == board[5] && board[5] == board[8])
	{
		return true;
	}
	else if(board[3] == board[6] && board[6] == board[9])
	{
		return true;
	}
	else if(board[1] == board[5] && board[5] == board[9])
	{
		return true;
	}
	else if(board[3] == board[5] && board[5] == board[7])
	{
		return true;
	}
	else
	{
		return false;
	}
}