//Howdy
#include "MainHeader.h"
#include "TicTacToe.h"



int main()
{
	char board[3][3];
	bool win;
	initBoard(board);
	TicTacToe Player1('X');
	TicTacToe Player2('O');


	//These are just checks to make sure the game functions work
	Player1.DisplayBoard(board);
	Player1.insertPos(0, 0, board);
	

	Player2.DisplayBoard(board);
	Player2.insertPos(0, 1, board);
	

	Player1.DisplayBoard(board);
	Player1.insertPos(0, 1, board);
	Player1.insertPos(1, 0, board);
	Player1.insertPos(2, 0, board);
	win = Player1.Win(board);
	if (win == true)
		std::cout << "Win" << std::endl;
	else
		std::cout << "Lose" << std::endl;

	return 0;
}