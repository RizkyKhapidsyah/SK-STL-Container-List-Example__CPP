#include <iostream>
#include <list>
#include <conio.h>

using namespace std;

void addElement(list<int>&, int);
void display_list(list<int>&, string);
void deleteEndsElement(list<int>&);
void reverseList(list<int>&);

int main(int argc, char** argv) {
	list<int> listContainer;
	addElement(listContainer, 0);
	addElement(listContainer, 10);
	addElement(listContainer, 20);
	addElement(listContainer, 30);
	addElement(listContainer, 40);
	addElement(listContainer, 50);
	addElement(listContainer, 60);
	addElement(listContainer, 70);
	addElement(listContainer, 80);
	addElement(listContainer, 90);

	display_list(listContainer, "The orignial list is:");

	addElement(listContainer, 5);
	addElement(listContainer, 15);
	addElement(listContainer, 25);
	addElement(listContainer, 35);
	addElement(listContainer, 45);
	addElement(listContainer, 55);
	addElement(listContainer, 65);
	addElement(listContainer, 75);
	addElement(listContainer, 85);

	listContainer.sort();
	display_list(listContainer, "The list with the additional numbers is:");

	reverseList(listContainer);
	display_list(listContainer, "The list in reverse is:");

	deleteEndsElement(listContainer);
	display_list(listContainer, "The list with ends removed:");

	_getch();
	return 0;
}

void addElement(list<int>& myList, int no) {
	myList.push_back(no);
}

void display_list(list<int>& myList, string msg) {
	cout << "\n" << msg << endl;
	for (list<int>::const_iterator ci = myList.begin(); ci != myList.end(); ++ci)
		cout << *ci << " ";

	cout << "\nThe number of  list nodes is: " << myList.size() << endl;
}

void deleteEndsElement(list<int>& myList) {
	myList.remove(0);
	myList.remove(90);
}

void reverseList(list<int>& myList) {
	myList.reverse();
}