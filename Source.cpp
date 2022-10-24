#include <iostream>
#include <vector>
#include "linkedlist.h"
using namespace std;

vector<int> insertAfter(vector<int> vec, int firsttVal, int Secondval) {
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == firsttVal) {
			vec.insert((vec.begin()+i+1), Secondval);
		}
	}
	cout << "Vector elements are: " << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	return vec;
}
int main() {
	vector <int> vec;
	int size;
	cout << "Please enter the number of elements: " << endl;
	cin >> size;
	cout << "Please fill the vector" << endl;
	int ans=0;
	for (int i = 0; i < size; i++) {
		cout << "Enter element number ( " << i + 1 << " ):" << endl;
		cin >> ans;
		vec.push_back(ans);
	}
	Linkedlist ll;
	ll.creatll(vec);
	cout << "Created a linked list using the vector. " << endl;
	cout << "Now printing the linked list" << endl;
	ll.printall();
	cout << "And their sum is: " << ll.calculatesum() << endl;
	int key = 0;
	cout << "enter the element you wish to remove: " << endl; cin >> key;
	ll.removenode(key);
	cout << "Now printing the linked list" << endl;
	ll.printall();
	cout << "And their sum is: " << ll.calculatesum() << endl;
	return 0;
}