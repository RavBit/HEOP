// Schedule.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include "Objects.h"


char name;
char teacher;
int classroom;
char classnumber;



int main()
{
	// Multidimensional array to create a grid for the time table
	// 7 days a week and 9 blocks (so an hour of lessons)
	int MultiDimArray[7][9];
	
	//Here will be the input for you to look it up
	std::cout << "What do you want to look up?" << std::endl;
	std::cin >> name;
	std::cin >> teacher;
	std::cin >> classroom;
	std::cin >> classnumber;
	system("pause");

	//Output een Multidimenisional grid with the blocks that are filled are lessons
	std::cout << "Here is the schedule for this teacher/class/classroom/student" << std::endl;
	MultiDimArray = LookitUp(name, teacher, classnumber, classroom);

}

