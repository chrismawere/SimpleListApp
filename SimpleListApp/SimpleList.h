#pragma once
#include<iostream>
#include"Node.h"

using namespace std;

class simpleList
{
private:
	Node* head, *tail;

public:
	simpleList();
	virtual ~simpleList() {};

	void QueueItem(int);
	int  DeQueueItem();
	void DisplayList();
};

