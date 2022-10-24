#include <vector>
#include <iostream>
#include "linkedlist.h"
using namespace std;

Linkedlist::Linkedlist() {
	head = NULL;
	ll.key = 0;
	ll.next = NULL;
}

void Linkedlist::addnode(int data, int counter) {
	node* newnode = new node;
	newnode->key = data;
	newnode->occurences = counter;
	if (head == NULL){
		head = newnode;
	}
	else {
		node* current;
		current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newnode;
	}
}
void Linkedlist::removenode(int key) {
	if (head->key == key) {
		if (head->next == NULL) {
			head = NULL;
		}
		else {
			node* curr;
			curr = head;
			head = head->next;
			curr->next = NULL;
		}
	}
	else {
		node* current;
		node* previous;
		current = head;
		previous = current;
		while (current->key != key) {
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		current->next = NULL;
	}
}
void Linkedlist::printall() {
	node* curr = head;
	while (curr != NULL) {
		cout <<"The element is: " << curr->key << endl;
		cout << "With occurence: " << curr->occurences << endl;
		curr = curr->next;
	}
	cout << endl;
}

void Linkedlist::creatll(vector<int>vec) {
	int temp;
	for (int i = 0; i < vec.size(); i++) {
		for (int j = i + 1; j < vec.size(); j++) {
			if (vec[j] < vec[i]) {
				temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;}}}
	
	int nsize;
	nsize = vec.size();
	int * temp2 = new int[nsize];
	for (int i = 0; i < nsize; i++) {
		temp2[i] = vec[i];
	}
	int counter=1;
	for (int i = 0; i < nsize; i++) {
		if (temp2[i] == temp2[i + 1]) {
			counter++;
		}
		else {
			node n;
			n.key = temp2[i];
			n.occurences = counter;
			addnode(temp2[i], counter);
			counter = 1;
		}
	}
}

int Linkedlist::calculatesum() {
	int sum = 0;
	node* curr = head;
	while (curr != NULL) {
		sum = sum + (curr->key * curr->occurences);
		curr = curr->next;
	}
	return sum;
}