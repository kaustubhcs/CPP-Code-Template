// Created by Kaustubh Shivdikar
//
//  (C) All Rights Reserved

#include "../lib/functions.h"
#include "../lib/debugger.h"

using namespace std;

// Global Variables

// ************ MAIN FUNCTION ************

int main(int argc, char *argv[])
{

	Input input;
	get_inputs(argc, argv, input, 1);

	cout << "I am King of the " << YELLOW_START << "World" << COLOR_RESET << "!" << endl;

	cout << "\n\e[1;31mProgram End\e[0m\n\n\n";
	return 0;
}
