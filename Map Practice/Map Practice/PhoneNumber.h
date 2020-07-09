#pragma once
#include <map>
#include <string>
class PhoneNumber
{
	std::map<std::string, std::string> phoneNumbers;
	std::string tom = "Tom";
	std::string tomNumber = "07713604122";
public:
	PhoneNumber();
	long int getSize();
	void add(std::string name, std::string number);

};

