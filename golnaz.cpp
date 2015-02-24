/*
* Program Tools Course - HW4
* by Golnaz Sarram
* February 22th, 2015
* The repository address is: https://github.com/Golnaz15/HW4_hpc_git_code

* This progrem checks the access into the necessary computer resources
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <ostream>

using namespace std;

// Declaring functions:

// void functions to open the input and output files

void open_input(ifstream & inputfile, string inputfilename) {
    inputfile.open(inputfilename);
	}

void open_output(ofstream & outputfile, string outputfilename) {
    outputfile.open(outputfilename);
}

void open_errorfile(ofstream & errorfile, string errorfilename) {
    errorfile.open(errorfilename);
}

// void functions for printing the results into the output file and terminal

void print_output(ofstream outputfile, ofstream & stream, long long Fibonacci_Table) {
    outputfile << Fibonacci_Table;
    stream << Fibonacci_Table;
}

// void function for printing the errors into the error file and terminal

void print_error(ofstream & errorfile, ostream & stream, string statement) {
    errorfile << statement;
    stream << statement;
}


int main() {

    // The first tasks of the homework
	
	cout << "\n"
		"I was able to compile this code using the HPC at the University of Memphis. When I compiled it there, "
		"it did not produce any warning message. The HPC uses a GNU C++ compiler that can be considered a good "
		"up-to-date standard. I also version-controlled this code using git, and used a remote repository hosted "
		"by github. If I can do this, so can you!!!" << "\n";
	cout << "\n"
		"I am so cool that I was also able to write a code that produces the first M numbers of the Fibonacci sequence. Here they are:" << "\n";
	cout << endl;

    // Declare variables within the main

	string inputfilename, outputfilename, errorfilename;
	ifstream inputfile;
	ofstream outputfile;
	ofstream errorfile;
    long long N, long long M, first_number = 0, second_number = 1, fibseries = 0;
    int i;

    // Calling the functions:
    // generating the related files

    open_input(inputfile, "golnaz.in");
    open_output(outputfile, "golnaz.out");
    open_errorfile(errorfile, "golnaz.err");
	
	// sanity check for the inputfile
	
	if ( !inputfile ) {
        print_error(errorfile, cout, "input cannot be open");
	} else {
		inputfile >> N;
		
        // check if N is valid

		if (N < 1) {
            print_error(errorfile, cout, "N is not valid");
		} else { 
		M = 10*N;
		for ( i = 0 ; i < N ; i++ ) {
			if ( i = 1) {
				fibseries = i;
			} else {
				fibseries = first_number + second_number;
				first_number = second_number;
				second_number = fibseries;
			}
			cout << fibseries;
			outputfile << fibseries <<


				return 0;
		}
