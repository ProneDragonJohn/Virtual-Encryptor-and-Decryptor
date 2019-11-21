#pragma once
// Encryption.h file
// An Abstract Encryption file using pure virtual functions.
// This class will never be instantiated, but used in
//  derived classes.
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Encryption
{
protected:
	ifstream inFile;
	ofstream outFile;
	char cKey;
public:
	Encryption(string inFileName, string outFileName);
	~Encryption();
	// Pure virtual function
	virtual char transform(char ch) const = 0;
	virtual char deform(char ch) const = 0;
	// Do the actual work in child class
	void encrypt();
	void setKey(char c);
	void decrypt();
};