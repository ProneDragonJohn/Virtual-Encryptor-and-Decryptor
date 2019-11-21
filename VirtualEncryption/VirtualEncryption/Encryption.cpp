// Encryption.cpp file
// An Abstract Encryption file using pure virtual functions.
// This class will never be instantiated, but used in
//  derived classes.
#include "Encryption.h"
// Constructor opens the input and output file
Encryption::Encryption(string inFileName, string outFileName)
{
	inFile.open(inFileName);
	outFile.open(outFileName);
	if (!inFile)
	{
		cout << "The file " << inFileName
			 << " cannot be opened.";
		exit(1);
	}
	if (!outFile)
	{
		cout << "The file " << outFileName
			 << " cannot be opened.";
		exit(1);
	}
}
//Destructor closes files
Encryption::~Encryption()
{
	inFile.close();
	outFile.close();
}
/*
 * Encrypt Method uses the virtual transform
 * member function to transform individual characters.
 * At run-time, it calls the version of transform()
 * found in the chile class from which it was called 
 */
void Encryption::encrypt()
{
	char ch;
	char transCh;
	inFile.get(ch);
	while (!inFile.fail())
	{
		transCh = transform(ch);
		outFile.put(transCh);
		inFile.get(ch);
	}
}

void Encryption::setKey(char c)
{
	cKey = c;
}

void Encryption::decrypt()
{
	char ch;
	char transCh;
	inFile.get(ch);
	while (!inFile.fail())
	{
		transCh = deform(ch);
		outFile.put(transCh);
		inFile.get(ch);
	}
}