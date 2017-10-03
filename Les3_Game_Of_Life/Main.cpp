#include "DrawField.h"
#include <iostream>
#include <string>

int main() {
	//Define scripts
	DrawField D;
	int x;
	int y;
	D.CreateGrid();
	while (D.CheckedField)
	{
		D.DrawGrid();
		D.CheckAlive();
		system("cls");
	};
	//std::cout << "Please fill in the X and the Y where you want to place the cell";
	//std::cout << std::endl;
	//std::cin >> x >> y;
	//D.InsertPlayer(x, y);
	system("pause");
}
