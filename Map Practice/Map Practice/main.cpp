#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "PhoneNumber.h"
std::vector<std::map<int, std::string>> mapInit()
{
	std::vector<std::map<int, std::string>> mapContainer;
	std::map<int, std::string> nameMap;
	mapContainer.push_back(nameMap);
	std::map<int, std::string> locationMap;
	mapContainer.push_back(locationMap);
	std::map<int, std::string> birthdayMap;
	mapContainer.push_back(birthdayMap);

	return mapContainer;
}

int main()
{
	PhoneNumber phonenumMap;

	std::cout << phonenumMap.getSize();
	//std::cout << phonenumMap.viewElement("Tom");

	std::string jNum = "07508308555";
	phonenumMap.add("Josh", jNum);
	std::cout << "\n" << phonenumMap.getSize();
	
	//std::vector<std::map<int, std::string>> localMapData = mapInit();
	////std::cout << localMapData.size();

	//localMapData[0].insert(std::pair<int, std::string>(1, "Tom"));
	//localMapData[1].insert(std::pair<int, std::string>(1, "London"));
	//localMapData[2].insert(std::pair<int, std::string>(1, "August 25 1997"));

	////std::cout << localMapData[0][1];//accessing the map array, accessing specifically the first map and that first maps first data entry
	////std::cout << localMapData[1][1];//accessing the second maps first data entry
	////std::cout << localMapData[2][1];//accessing the third maps first data entry
	//
	//std::cout << "My name is: " << localMapData[0][1] << ", I am from " << localMapData[1][1] << ". \nMy birthday is " << localMapData[2][1];
	//
	return 0;
}