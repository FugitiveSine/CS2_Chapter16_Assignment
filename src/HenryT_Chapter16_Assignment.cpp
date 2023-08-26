//============================================================================
// Name        : HenryT_Chapter16_Assignment.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SortedArray.hpp"
#include "ErrorClass.hpp"
#include <iomanip>
using namespace std;

int main() {

	SortedArray<int> elf(10, true);
	try {


//		elf.AddEnd("A");
//		elf.AddEnd("B");
//		elf.AddBegin("C");

		elf.AddBegin(8);
		elf.AddEnd(4);
		elf.AddBegin(20);
		elf.AddBegin(9);
		elf.AddEnd(6);
		elf.AddEnd(3);

		elf.AddEnd(1);




		//elf.AddBegin(-1);
		//elf.AddEnd(1);

	}

	catch(ErrorClass* &errorThrown){
		cout << "00" << errorThrown->ErrorCode << ", " << errorThrown->Message << endl;

		}

	//elf.SortArray();
	elf.PrintArray();



	cout << "Program ending, have a nice day!" << endl; // prints Program ending, have a nice day!
	return 0;
}
