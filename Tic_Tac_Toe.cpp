#include <iostream>
#include<limits>
using namespace std;

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

bool checkWin();
void printBoard();
bool isDraw = false;

int main()
{
	bool winner = false;
	int difficulty = 0;
	
	//loop to obtain the computer difficulty level
	do{
		cout << "Choose the difficulty of computer!(1 = Easy, 2 = Medium, 3 = Hard)" << endl;
		cin >> difficulty;
		if(difficulty == 1 || difficulty == 2 || difficulty == 3)
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		
	}while(true);
	
	int turn = 0;
	
	//Main loop to distribute turns, display the board and check for a winner
	do{
		printBoard();
		
		//Players Turn
		if(turn % 2 == 0)
		{
			int location = 0;
			bool validInput = false;
			//loop to check for valid location chosen by player
			do{
				
				cout << "Player's turn:  Please enter location!" << endl;
				cin >> location;
				
				if(location > 0 && location < 10)
				{
					if(board[location] != 'X' || board[location] != 'O')
					{
						validInput = true;
					}
					else{
						cout << "The location has already been played! Please enter a new location." << endl;
					}
				}
				else
				{
					cout << "That location does not exist!  Please enter a new location." << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}while(!validInput);
			
		}
		//Computer's Turn
		else{
			
		}
		
		//checks for winner
		winner = checkWin();
		
		//increments the turn counter
		turn++;
		
		break;
	}while(!winner);
	
	return 0;
}

//Displays the Tic Tac Toe board to the player
void printBoard()
{
	cout << "\n\tTic Tac Toe\n\n";
	
	cout << "Player 1(X) vs Computer(O)" << endl << endl;
	
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

//Function that checks for a winner, and also determines if there is a draw
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
		if(board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && 
		board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && 
		board[9] != '9')
		{
			isDraw = true;
		}
		return false;
	}
}