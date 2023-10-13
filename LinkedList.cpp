#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = nullptr;
	}
	Node(int d)
	{
		data = d;
		next = nullptr;
	}
};
class LinkedList
{
public:
	Node* head;
	Node* tail;
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	void insertAtTail(int value)
	{
		Node* ptr = new Node(value);
		if (tail == nullptr)
		{
			head = tail = ptr;
		}
		else
		{
			tail->next = ptr;
			tail = ptr;
		}
	}
	void insertAtHead(int value)
	{
		Node* ptr = new Node(value);
		if (head == nullptr)
		{
			head = tail = ptr;
		}
		else
		{
			ptr->next = head;
			head = ptr;
		}
	}
	void display()
	{
		Node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
	void deleteFromHead()
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	void deleteFromTail()
	{
		Node* temp = head;
		while (temp->next != tail)
		{
			temp = temp->next;
		}
		temp->next = tail;
		tail = temp;
		temp = temp->next;
		delete temp;
	}
};
int main()
{
	LinkedList ll;
	ll.insertAtTail(1);
	ll.insertAtTail(2);
	ll.insertAtTail(3);
	ll.insertAtHead(0);
	ll.insertAtHead(-1);
	ll.display();
	return 0;
}