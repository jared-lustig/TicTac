#include "MainHeader.h"

class TicTacToe
{
private:
	char piece;
	//char y;

	//char board[3][3];

public:
	//Constructor 
	TicTacToe();

	//Secondary Constructor
	TicTacToe(char);

	//Display Board
	void DisplayBoard(char board[3][3]);

	//Inserts Position
	bool insertPos(int, int, char board[3][3]);

	////Checks position
	//void checkPos(int, int, char board[3][3]);

	//Game Logic
	bool Win(char board[3][3]);


};

void initBoard(char board[3][3]);