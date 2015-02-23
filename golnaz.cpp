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

using namespace std;

int main () {

    string inputfilename, outputfilename, errorfilename;
    ifstream inputfile;
    ofstream outputfile;
    ofstream errorfile;

	cout << "\n"
		"I was able to compile this code using the HPC at the University of Memphis. When I compiled it there, "
		"it did not produce any warning message. The HPC uses a GNU C++ compiler that can be considered a good "
		"up-to-date standard. I also version-controlled this code using git, and used a remote repository hosted "
		"by github. If I can do this, so can you!!!" << "\n";
	cout << "\n"
		"I am so cool that I was also able to write a code that produces the first M numbers of the Fibonacci sequence. Here they are:" << "\n";
	cout << endl;

	// prompt the user for an inputfile

	cout << "Enter inputfilename:";
	cin >> inputfilename;

	// creating output and error files

	outputfile.open("golnaz.txt");
	errorfile.open("golnaz.err");

	// sanity check for the inputfile

	inputfile.open(inputfilename.c_str());
	if ( !inputfilename.is_open() ) {
		cout << "cannot open input file:"
			<< inputfilename
			<< endl;
		return 1;
	}

	// initializing the variables

	int i;
	long long N, long long M, first_number = 0, second_number = 1, fibseries = 0;
	inputfile >> N;
	if (N < 1) {
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
			cout << fibseries
				outputfile << fibseries <<


				return 0;
		}
