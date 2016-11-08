#define __STACK_AND_QUEUE_H__

#ifndef __LINKED_LIST_H__
#include "linked_list.h"
#endif

template <typename E>
class stack:public linked_list<E>
{
	public:
		bool push(E input)
		{
			return this->insert_at_front(input);
		}

		E pop()
		{
			return this->remove_from_front();
		}

		void print_stack()
		{
			this->print_linkedList();
		}

		bool is_stack_empty()
		{
			return this->is_list_empty();
		}

		stack()
		{
			this->name = new char[7];
			this->name[0]='S';
			this->name[1]='T';
			this->name[2]='A';
			this->name[3]='C';
			this->name[4]='K';
			this->name[5]=' ';
			this->name[6]='\0';
			this->head = NULL;
			this->tail = NULL;
			this->position = 0;
			this->listSize = 0;
		}
};


template <typename E>
class queue:public linked_list<E>
{
	public:
		bool enqueue(E input)
		{
			return this->insert(input);
		}

		E dequeue()
		{
			return this->remove_from_front();
		}

		void print_queue()
		{
			this->print_linkedList();
		}

		bool is_queue_empty()
		{
			return this->is_list_empty();
		}

		queue()
		{
			this->name = new char[7];
			this->name[0]='Q';
			this->name[1]='U';
			this->name[2]='E';
			this->name[3]='U';
			this->name[4]='E';
			this->name[5]=' ';
			this->name[6]='\0';
			this->head = NULL;
			this->tail = NULL;
			this->position = 0;
			this->listSize = 0;
		}
};
