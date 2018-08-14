// Created by Kaustubh Shivdikar
//
//  (C) All Rights Reserved


# include "../lib/functions.h"
# include "../lib/debugger.h"
# include "cuda_runtime.h"
using namespace std;

// Global Variables





// ************ MAIN FUNCTION ************


int main (int argc, char *argv[]) {

		Input input;
		get_inputs (argc, argv, input, 1);
		cudaDeviceSynchronize();


		cout << "\n\e[1;31mProgram End\e[0m\n\n\n";
		return 0;
}

