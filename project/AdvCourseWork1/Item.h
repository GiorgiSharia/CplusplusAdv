#pragma once
#include "Date.h"
#include <string>
#include <vector>

class Item{
public:
	Item();
	Item(char Group, int SubGroup, std::string Name,Date TimeStamp);
	~Item();
	const char getGroup();
	int getSubGroup();
	std::string getName();
	void setGroup(char group);
	const bool operator==(const Item& two);
	const bool operator<(const Item& two);
	Date getDate();
	
private:
	std::vector<std::string> vec = { "Britni", "Gustin","Macy","Rizo","Teena","Frisby","Jeannine","Bolenbaugh","Christy","Lichtenberger","Jerrica","Hagel","Ira","Pederson","Arlen","Carlos","My","Amburn","Aisha","Seaton","Chelsie","Ankrom","Randolph","Marriner","Hedy","Demaria","Stephania","Shows","Zachery","Kaczmarski","Marisol","Reichman","Mitzie","Newsome","Inge","Cude","Natasha","Rebelo","Jonie", "Gile" };
	char Group = NULL;
	int SubGroup = NULL;
	std::string Name;
	Date TimeStamp;
	
};

