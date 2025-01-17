// Created by Kaustubh Shivdikar
// (C) All Rights Reserved

#include <iostream>
#include "../lib/functions.h"   // Ensure this header declares get_inputs() and the Input struct
#include "../lib/debugger.h"    // Ensure this header declares debugging/logging functionalities

int main(int argc, char* argv[])
{
    // Create an Input structure to hold parsed command-line arguments
    Input input;

    // Attempt to parse command-line arguments.
	// Only number inputs are expected.
    // The 4th parameter (1) indicates if inputs are to be printed.
    get_inputs(argc, argv, input, 1);

    // Print a greeting
    std::cout << "HELLO " << YELLOW_START << "World" << COLOR_RESET << "!" << std::endl;

	// YOUR CODE HERE


    // Indicate program termination
    std::cout << "\n\e[1;31mProgram End\e[0m\n\n\n";
    
    // Return success status
    return 0;
}
