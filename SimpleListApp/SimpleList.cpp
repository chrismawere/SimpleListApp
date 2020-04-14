#include "SimpleList.h"

simpleList::simpleList()
{
	
	Node* temp;
	temp = head;// new node

	//create temporary node
	while (head != NULL)     //checkk if not at the end of the list
	{


		Node* temp = head;//creates node called head
		head = temp->next;
		delete temp;
	}
}

//Add to queue 
void simpleList::QueueItem(int newValue)
{
	Node* temp = new Node;//ponter to node
	temp->value = newValue;//pointer to value of node
	temp->next = NULL;//pointer to

	if (head == NULL)//empty list
	{
		head = tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
	cout << "Queued Item" << endl;
}

int simpleList::DeQueueItem()
{
	//is empty
	if(head==NULL)

		return -1;
		Node* temp = head;
		head = temp->next;
		//set the new head to maintain the list
		//even if the next it is NULL(empty)
		if (head == NULL)
			tail = NULL;

		int nReturn = temp->value;
		delete temp;

}