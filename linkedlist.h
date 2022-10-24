#pragma once
#include <iostream>
#include <vector>
using namespace std;

struct node {
	int key;
	int occurences;
	node* next=NULL;
};

class Linkedlist {
private:
	node ll;
	node* head;
public:
	Linkedlist();
	void addnode(int data, int counter);
	void removenode(int n);
	void printall();
	void creatll(vector <int> v);
	int calculatesum();
};
