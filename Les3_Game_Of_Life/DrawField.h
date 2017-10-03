#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "cell.h"

class DrawField {
public:
	void CreateGrid();
	void DrawGrid();
	void CheckAlive();
	bool CheckedField = false;
	Cell board[25][25];
private:
};