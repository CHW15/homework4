/*
* Program Tools Course - HW4
* by Golnaz Sarram
* February 22th, 2015

* This progrem checks the access into the necessary computer resources
*/

#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

cout << "\n"
	"I was able to compile this code using the HPC at the University of Memphis. When I compiled it there, "
	"it did not produce any warning message. The HPC uses a GNU C++ compiler that can be considered a good "
	"up-to-date standard. I also version-controlled this code using git, and used a remote repository hosted "
	"by github. If I can do this, so can you!!!" << "\n";
cout << "\n"
	"I am so cool that I was also able to write a code that produces the first M numbers of the Fibonacci sequence. Here they are:" << "\n";
cout << endl;

// declaring functions
// void function to open the input and output files

void open_input(ifstream & inputfile, int tot_fib_num);
void open_output(ofstream & outputfile, int fib_series);
void open_errorfile(ofstream & errorfile, string error_statement);

// void functions to print results in the the output and error files 

void print_output(ofstream outfutfile, long long Fibonacci_Table) {
    outputfile << Fibonacci_Table;
}

void print_error(ofstream errorfile, string & statement) {
    errorfile << "N is not valid";
}

// void functions to print the results and errors on the terminal

void printerror_terminal(ofstream & statement);
void printout_terminal(ofstream & results);

int main() {

    // declare variables within the main

	string inputfilename, outputfilename, errorfilename;
	ifstream inputfile;
	ofstream outputfile;
	ofstream errorfile;
    long long N, long long M, first_number = 0, second_number = 1, fibseries = 0;
    int i;

    void open_input(inputfile, N) {
		inputfile.open(golnaz.in);
	}
	
	// sanity check for the inputfile
	
	if ( !inputfile ) {
		void printout_terminal(ofstream & results) {
			cout << "Cannot open input file golnaz.in"
				<< endl;
			return false;
		}
	}
	return false;

		inputfile >> N;
		
        // checking if N is valid

		if (N < 1) {
			
            // openning the outputfile

			void open_errorfile(ofstream & errorfile, string golnaz.err);
			errorfile.open("golnaz.err");
        
		cerr << "N is not valid" << "\n";
		errorfile << "N is not valid" << "\n";
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
