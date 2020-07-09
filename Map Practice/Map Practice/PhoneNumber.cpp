#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{
	phoneNumbers.insert(std::pair<std::string, std::string>(tom, tomNumber));
}

long int PhoneNumber::getSize()
{
	return phoneNumbers.size();
}

void PhoneNumber::add(std::string name, std::string number)
{
	phoneNumbers.insert(std::pair<std::string, std::string>(name, number));
}

