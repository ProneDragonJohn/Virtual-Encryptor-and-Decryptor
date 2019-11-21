#pragma once
// SimpleEncryption.h file
// The derived class overides the virtual transform method
#include "Encryption.h"
class SimpleEncryption : public Encryption
{
public:
	char transform(char ch) const
	{	return ch + cKey;	} // Shifts char ASCII code up by key
	char deform(char ch) const
	{ return ch - cKey; } // Shifts char ASCII code up by key
	SimpleEncryption(string inFileName, string outFileName)
		: Encryption(inFileName, outFileName)
	{}
};