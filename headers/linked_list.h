#define __LINKED_LIST_H__

#ifndef __NODE_H__
#include"node.h"
#endif

template <typename E>
class linked_list // implements a doubly linked list
{
	public:
		char *name;
		node_linkedList<E> *head;
		node_linkedList<E> *tail;
		unsigned int position;
		unsigned int listSize;

		linked_list()
		{
			name = new char[6];
			name[0]='L';
			name[1]='I';
			name[2]='S';
			name[3]='T';
			name[4]=' ';
			name[5]='\0';
			head = NULL;
			tail = NULL;
			position = 0;
			listSize = 0;
		}

		~linked_list(void)
		{
			delete name;
		}

		//--------------------INSERT BEGINS----------------------------//
		bool insert(E input) //insert at end
		{
			node_linkedList<E> *temp1;
			temp1 = new node_linkedList<E>(input);

			if(temp1 == NULL) // You can use "try" and "catch"
			{
				return false;
			}
			else
			{
				if(head == NULL)
				{
					head = temp1;
					tail = temp1;
					++listSize;
				}
				else
				{
					tail->next = temp1;
					temp1->prev = tail;
					tail = temp1;
					++listSize;
				}
			}

		}
		//--------------------INSERT ENDS----------------------------//
		
		
		//--------------------INSERT AT FRONT BEGINS----------------------------//
		bool insert_at_front(E input)
		{
			node_linkedList<E> *temp1;
			temp1 = new node_linkedList<E>(input);

			if(temp1 == NULL) // You can use "try" and "catch"
			{
				return false;
			}
			else
			{
				if(head == NULL)
				{
					head = temp1;
					tail = temp1;
					++listSize;
				}
				else
				{
					head->prev = temp1;
					temp1->next = head;
					head = temp1;
					++listSize;
				}
			}
		}
		//--------------------INSERT AT FRONT ENDS----------------------------//


		//-------------------REMOVE BEGINS HERE------------------------------//
		E remove( ) //remove from end
		{
			E key;
			if(head == NULL && listSize == 0)
			{
				cout<<"CANNOT REMOVE, "<<name<<"IS EMPTY"<<endl;
				return (E)-1007;
			}
			else if (head == tail)
			{
				key = head->data;
				delete head;
				head = NULL;
				tail = NULL;
				--listSize;
			}
			else
			{
				node_linkedList<E> *temp1;
				temp1 = tail->prev;
				key=tail->data;
				delete tail;
				tail = temp1;
				tail->next=NULL;
				--listSize;
			}
			return key;
		}
		//---------------------REMOVE ENDS HERE------------------------------//



		//-------------------REMOVE FROM FRONT BEGINS HERE---------------------------//
		E remove_from_front( )
		{
			E key;
			if(head == NULL && listSize == 0)
			{
				cout<<"CANNOT REMOVE, "<<name<<"IS EMPTY"<<endl;
				return (E)NULL;
					//-1007;
			}
			else if (head == tail)
			{
				key = head->data;
				delete head;
				head = NULL;
				tail = NULL;
				--listSize;
			}
			else
			{
				node_linkedList<E> *temp1;
				temp1 = head->next;
				key = head->data;
				delete head;
				head = temp1;
				head->prev=NULL;
				--listSize;
			}
			return key;
		}
		//-----------------REMOVE FROM FRONT ENDS HERE-------------------------//


		//-----------------IS LIST EMPTY BEGINS HERE---------------------------//
		bool is_list_empty()
		{
			if(head == NULL && listSize == 0)
				return true; // implies list is empty
			else
				return false;
		}
		//----------------IS LIST EMPTY ENDS HERE--------------------------//


		//----------------PRINT LINKED LIST BEGINS-------------------------//
		void print_linkedList()
		{
			node_linkedList<E> *temp1;
			cout<<name<<"SIZE :"<<listSize<<endl;
			if(is_list_empty())
			{
				cout<<name<<"IS EMPTY"<<endl;
			}
			else
			{
				temp1 = head;
				while(temp1!=NULL)
				{
					cout<<temp1->data;
					if(temp1->next!=NULL)
						cout<<" <-> ";
					temp1 = temp1->next;
				}
				cout<<endl;
			}

		}
		//---------------------PRINT LINKED LIST ENDS----------------------//
};
