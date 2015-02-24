/*
* Program Tools Course - HW4
* by Golnaz Sarram
* February 22th, 2015
* The repository address is: https://github.com/Golnaz15/HW4_hpc_git_code

* This progrem checks the access into the necessary computer resources
* and prints the Fibonacci sequence in an output tabel and terminal
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <ostream>
#include <istream>

using namespace std;

// Declare functions:

// void functions to open the input and output files

void open_input(ifstream &inputfile, string inputfilename) {
    inputfile.open(inputfilename);
	}

void open_output(ofstream &outputfile, string outputfilename) {
    outputfile.open(outputfilename);
}

void open_errorfile(ofstream &errorfile, string errorfilename) {
    errorfile.open(errorfilename);
}

// function for printing the results into the output/errors into files and terminal

void print_output(ofstream outputfile, ofstream errorfile, ofstream &stream, long long & Fibonacci_Table, int & position, string statement) {
    outputfile << setw (20) << right << Fibonacci_Table;
	if ( position % 10 == 0 ) {
		outputfile << "\n";
	}
	
	stream << setw (20) << right << Fibonacci_Table;
	if ( position % 10 == 0 ) {
		stream << "\n";
	}
	
	errorfile << statement << "\n";
    stream << statement << "\n";
    return;
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
    int i, sequence_index = 0;

    // Call the functions:
    // generate the related files

    open_input(inputfile, "golnaz.in");
    open_output(outputfile, "golnaz.out");
    open_errorfile(errorfile, "golnaz.err");
	
	// sanity check for the inputfile
	
	if ( !inputfile || !outputfile || !errorfile ) {
        print_output(outputfile, errorfile, cout, fibseries, sequence_index, "input cannot be open");
	} else {
		inputfile >> N;
		
        // check if N is valid

		if (N < 1) {
            print_error(errorfile, cout, "N is not valid");
		} else { 
		M = 10*N;
		for ( i = 0 ; i < M ; i++ ) {
			if ( i = 1) {
				fibseries = i;
			} else {
				fibseries = first_number + second_number;
				first_number = second_number;
				second_number = fibseries;
                sequence_index++;
                if (sequence_index/10 = 0)
                print_output(outputfile, cout, fibseries);


			}
        

				return 0;
		}
