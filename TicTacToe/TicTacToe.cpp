#include "TicTacToe.h"

//Constructor
TicTacToe::TicTacToe()
{
	piece = '-';
}

//Constructor
TicTacToe::TicTacToe(char token)
{
	piece = token;
}

//Will display the board on the terminal
void TicTacToe::DisplayBoard(char board[3][3])
{
	//Will make the board
	for (int i = 0; i < 3; i++)
	{
		if(i!=0)
			std::cout << std::endl;
		for (int j = 0; j < 3; j++)
			std::cout << board[i][j];
	}
	std::cout << std::endl << std::endl;
}

//Will insert position on the tic tac toe board
bool TicTacToe::insertPos(int posX, int posY,char board[3][3])
{
	bool Valid = true;
	if (board[posX][posY] == '-')
		board[posX][posY] = piece;
	else
	{
		std::cout << "Cannot Place Piece Here" << std::endl;
		Valid = false;
	}
	return Valid;
}


//Checks to see if you Won
bool TicTacToe::Win(char board[3][3])
{
	bool Win = false;
	//Diagnol Left to Right
	if (board[0][0] == piece
		&& board[1][1] == piece
		&& board[2][2] == piece)
		Win = true;
	//Diagnol Right to Left
	else if (board[0][2] == piece
		&& board[1][1] == piece
		&& board[2][0] == piece)
		Win = true;
	//Down the Left
	else if (board[0][0] == piece
		&& board[1][0] == piece
		&& board[2][0] == piece)
		Win = true;
	//Down the Middle
	else if (board[0][1] == piece
		&& board[1][1] == piece
		&& board[2][1] == piece)
		Win = true;
	//Down the Right
	else if (board[0][2] == piece
		&& board[1][2] == piece
		&& board[2][2] == piece)
		Win = true;
	//Straight across the top
	else if (board[0][0] == piece
		&& board[0][1] == piece
		&& board[0][2] == piece)
		Win = true;
	//Across the middle
	else if (board[1][0] == piece
		&& board[1][1] == piece
		&& board[1][2] == piece)
		Win = true;
	//Straight across the bottom
	else if (board[2][0] == piece
		&& board[2][1] == piece
		&& board[2][2] == piece)
		Win = true;
	else
		Win = false;

	return Win;
}

void initBoard(char board[3][3])
{
	//Will make the board
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			board[i][j] = '-';
}