//Tic  Tac Toe Game Using OOP
#include <iostream>
#include <string>
using namespace std;

//	CREATING A CALSS FOR TIC TAC TOE GAME
class TicTacToe
{
private:
	char board[3][3];
	char player1;
	char player2;
	int counter;
public:

	//	CONSTRUCTOR
	TicTacToe()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				board[i][j] = ' ';
		}
	}

	//	Function To display Board
	void displayBoard()
	{
		cout << endl << endl;
		cout << "     |     |     " << endl;
		cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  " << endl;
		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;
		cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  " << endl;
		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;
		cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  " << endl;
		cout << "     |     |     " << endl;
		cout << endl << endl;
	}

	//	Function To Set Player 1 Symbol
	void setPlayer1(char p1)
	{
		player1 = p1;
	}

	//	Function To Set Player 2 Symbol
	void setPlayer2(char p2)
	{
		player2 = p2;
	}

	//	Function To Get Player 1 Symbol
	char getPlayer1()
	{
		return player1;
	}

	//	Function To Get Player 2 Symbol
	char getPlayer2()
	{
		return player2;
	}

	//	Function To Set Counter
	void setCounter(int c)
	{
		counter = c;
	}

	//	Function To Get Counter
	int getCounter()
	{
		return counter;
	}

	//	Function To Check If The Game Is Draw
	bool checkWin()
	{
		if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] != ' ')
			return true;
		else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] != ' ')
			return true;
		else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] != ' ')
			return true;
		else if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[0][0] != ' ')
			return true;
		else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] != ' ')
			return true;
		else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2] != ' ')
			return true;
		else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
			return true;
		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
			return true;
		else
			return false;
	}
	//	Function To Place Symbol
	void placeSymbol(int num, char player)
	{
		if (num == 1)
			board[0][0] = player;
		else if (num == 2)
			board[0][1] = player;
		else if (num == 3)
			board[0][2] = player;
		else if (num == 4)
			board[1][0] = player;
		else if (num == 5)
			board[1][1] = player;
		else if (num == 6)
			board[1][2] = player;
		else if (num == 7)
			board[2][0] = player;
		else if (num == 8)
			board[2][1] = player;
		else if (num == 9)
			board[2][2] = player;
	}
	//	Function To Check If The Position Is Occupied
	bool checkOccupied(int num)
	{
		if (num == 1)
		{
			if (board[0][0] == ' ')
				return true;
			else
				return false;
		}
		else if (num == 2)
		{
			if (board[0][1] == ' ')
				return true;
			else
				return false;
		}
		else if (num == 3)
		{
			if (board[0][2] == ' ')
				return true;
			else
				return false;
		}
		else if (num == 4)
		{
			if (board[1][0] == ' ')
				return true;
			else
				return false;
		}
		else if (num == 5)
		{
			if (board[1][1] == ' ')
				return true;
			else
				return false;
		}
		else if (num == 6)
		{
			if (board[1][2] == ' ')
				return true;
			else
				return false;
		}
		else if (num == 7)
		{
			if (board[2][0] == ' ')
				return true;
			else
				return false;
		}
		else if (num == 8)
		{
			if (board[2][1] == ' ')
				return true;
			else
				return false;
		}
		else if (num == 9)
		{
			if (board[2][2] == ' ')
				return true;
			else
				return false;
		}
	}
	void resetBoard()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				board[i][j] = ' ';
		}
	}

};

int main()
{
	TicTacToe game;
	int choice;
	char player1, player2;
	cout << "Enter the symbol for player 1: ";
	cin >> player1;
	cout << "Enter the symbol for player 2: ";
	cin >> player2;
	game.setPlayer1(player1);
	game.setPlayer2(player2);
	game.setCounter(0);
	do
	{
		game.displayBoard();
		if (game.getCounter() % 2 == 0)
		{
			cout << "Player 1's turn" << endl;
			cout << "Enter the position to place your symbol: ";
			cin >> choice;
			if (game.checkOccupied(choice))
			{
				game.placeSymbol(choice, player1);
				game.setCounter(game.getCounter() + 1);
			}
			else
			{
				cout << "Position already occupied" << endl;
				continue;
			}
		}
		else
		{
			cout << "Player 2's turn" << endl;
			cout << "Enter the position to place your symbol: ";
			cin >> choice;
			if (game.checkOccupied(choice))
			{
				game.placeSymbol(choice, player2);
				game.setCounter(game.getCounter() + 1);
			}
			else
			{
				cout << "Position already occupied" << endl;
				continue;
			}
		}
	} while (!game.checkWin() && game.getCounter() < 9);
	game.displayBoard();
	if (game.checkWin())
	{
		if (game.getCounter() % 2 == 0)
			cout << "Player 2 wins" << endl;
		else
			cout << "Player 1 wins" << endl;
	}
	else
		cout << "Game Draw" << endl;
	return 0;
}
