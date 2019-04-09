
#include <iostream>
#include"Data.h"
#include <algorithm>

void testCreateAndPrint() {
	Data dat = Data(100);
	dat.printAll();
	cout << endl;
	int count = dat.countAll();
	cout << count << endl;
}

void testGetGroup() {
	Data dat = Data(1000);

	list<Item>* it = dat.getGroup('A');

	cout << it->size() << endl;

	list<Item>* itSub = dat.getSubGroup('Q', 98);
	if (itSub != nullptr) {
		std::for_each(itSub->begin(), itSub->end(), [](Item& s) {std::cout << s.getName() << " has parameters: Date - " << s.getDate().ToString() << " Group - " << s.getGroup() << " Subgroup " << s.getSubGroup() << "\n";
		});
		cout << itSub->size() << endl;
	}


}

void printSubgroup() {
	Data dat = Data(1000);
	dat.printSubGroupByNames('Q', 98);
	cout << endl;
	cout << endl;
	dat.printSubGroupByDates('Q', 98);
}

void testPrintandGetItem() {
	Data dat = Data(1000);
	Date dt = Date(24, 2, 1999);
	Item* testItemSearchDate = dat.GetItem('Q', 98, dt);
	std::cout << testItemSearchDate->getName() << " has parameters: Date - " << testItemSearchDate->getDate().ToString() << " Group - " << testItemSearchDate->getGroup() << " Subgroup " << testItemSearchDate->getSubGroup() << "\n";
	dat.PrintItem('Q', 98, "Teena");
	dat.PrintItem('Q', 98, dt);
	cout << endl;
}

void testRemoves() {

	Data dat = Data(100);
	dat.printAll();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	dat.RemoveGroup('A');
	dat.pringGroup('A');
	dat.RemoveSubgroup('C', 16);
	Date dt = Date(11, 10, 2005);
	dat.RemoveItem('B', 44, dt);
	dat.printAll();
}


int main(){
	
	testRemoves();
	/*
	
	int count = dat.countAll();
	cout << count << endl;

	
	list<Item>* it = dat.getGroup('A');
	
	cout << it->size() << endl;
	dat.pringGroup('A');
	cout << dat.countGroup('A') << endl;
	
	list<Item>* itSub = dat.getSubGroup('Q', 98);
	if (itSub != nullptr) {
		std::for_each(itSub->begin(), itSub->end(), [](Item& s) {std::cout << s.getName() << " has parameters: Date - " << s.getDate().ToString() << " Group - " << s.getGroup() << " Subgroup " << s.getSubGroup() << "\n";
		});
		cout << itSub->size() << endl;
	}
	
	
	
	dat.printSubGroupByNames('Q', 98);
	cout << endl;
	dat.printSubGroupByDates('Q', 98);
	cout << dat.countSubGroup('Q', 98) << endl;
	Item* testItemSearch = dat.GetItem('Q', 98, "Teena");
	std::cout << testItemSearch->getName() << " has parameters: Date - " << testItemSearch->getDate().ToString() << " Group - " << testItemSearch->getGroup() << " Subgroup " << testItemSearch->getSubGroup() << "\n";
	
	Date dt = Date(24, 2, 1999);
	Item* testItemSearchDate = dat.GetItem('Q', 98,dt );
	std::cout << testItemSearchDate->getName() << " has parameters: Date - " << testItemSearchDate->getDate().ToString() << " Group - " << testItemSearchDate->getGroup() << " Subgroup " << testItemSearchDate->getSubGroup() << "\n";
	dat.PrintItem('Q', 98, "Teena");
	dat.PrintItem('Q', 98, dt);
	cout << endl;
	dat.RemoveGroup('A');
	dat.printAll();
	char a;
	cin >> a;
    /*
	Data dat = Data(100);
	dat.printAll();
	list<Item>* bla = dat.getGroup('Z');
	auto testPrintGroup = dat.pringGroup('A');
	cout << dat.countGroup('A') << "\n";
	if (bla == nullptr) {
		std::cout << "No group";
	}
	else {
		for (auto s : *bla) {
			std::cout << s.getName() << " has parameters: Date - " << s.getDate().ToString() << " Group - " << s.getGroup() << " Subgroup " << s.getSubGroup() << "\n";
		}
	}
	*/


	
	return 0;
}

