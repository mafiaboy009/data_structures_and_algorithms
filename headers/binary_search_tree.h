#define __BINARY_SEARCH_TREE_H__

#ifndef __NODE_H__
#include "node.h"
#endif

#ifndef __STACK_AND_QUEUE_H__
#include "stack_and_queue.h"
#endif

/* bst class is defined */
template <typename E>
class binary_search_tree
{
	/* every instance of bst has a root node */
	public:
		node_binaryTree<E> *root;
		unsigned int size_of_tree;


		binary_search_tree() //constructor
		{
			root = NULL;
			size_of_tree = 0;
		}

		~binary_search_tree()
		{}

		// function to search for a node in a tree
		void search() //
		{
		}


		// function to insert a node
		void insert() 
		{
			
			node_binaryTree<E> *temp1, *temp2, *temp3;
			int key;
			cout<<"Enter key: ";
			cin>>key;
			cout<<endl;
			
			temp1 = new node_binaryTree<E>(key);

			if(temp1 == NULL) 
			{
				cout<<"NOT Enough Memory"<<endl;
				return;
			}
			else
			{
				//cout<<"Node created"<<endl;
				if(root == NULL) 
				{
					root = temp1;
					//cout<<"Node inseted as Root"<<endl;;
				} 
				else 
				{
					temp2 = root;
					while(temp2!=NULL)
					{
						temp3 = temp2;

						if(key >= temp2->data)
						{
							temp2=temp2->rightChild;
						}
						else
						{
							temp2=temp2->leftChild;
						}
					}

					if(key >= temp3->data)
						temp3->rightChild = temp1;
					else
						temp3->leftChild = temp1;


				}
			}

			++size_of_tree;
		}     

		void inorder(node_binaryTree<E> *temp_root)
		{
			if(temp_root == NULL ) 
			{
				return;
			}
			else
			{
				inorder(temp_root->leftChild);
				cout<<temp_root->data<<"  ";
				inorder(temp_root->rightChild);
			}

		}

		void preorder()
		{}

		void postorder()
		{}

		void level_order_traversal()
		{
			int count = 0;

			node_binaryTree<E> *temp1;
			queue<node_binaryTree<E>*> q1;			
			if(root != NULL)
			{

				q1.enqueue(root);
				while(!q1.is_queue_empty())
				{
					temp1 = q1.dequeue();
					if(temp1 != NULL && temp1->leftChild != NULL)
						q1.enqueue(temp1->leftChild);
					if(temp1 != NULL && temp1->rightChild != NULL)
						q1.enqueue(temp1->rightChild);
					cout<<temp1->data<<"  ";
				}
			}
			else
			{
				cout<<"BINARY TREE IS EMPTY"<<endl;
			}
		}
};
