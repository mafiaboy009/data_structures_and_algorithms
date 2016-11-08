#define __NODE_H__

template <typename E>
class node_linkedList
{
	public:
		E data;
		node_linkedList *prev;
		node_linkedList *next;

		node_linkedList()
		{
			prev = NULL;
			next = NULL;

		}
		node_linkedList(E key)
		{
			data = key;
			prev = NULL;
			next = NULL;
		}

		~node_linkedList()
		{}
};


template <typename E>
class node_binaryTree
{
	public:
		E data;
		node_binaryTree *parent;
		node_binaryTree *leftChild;
		node_binaryTree *rightChild;
		node_binaryTree()
		{
			parent = NULL;
			leftChild = NULL;
			rightChild = NULL;
		}
		node_binaryTree(E key)
		{
			data = key;
			parent = NULL;
			leftChild = NULL;
			rightChild = NULL;
		}
		~node_binaryTree()
		{}

};



//Under construction -- directed graphs
class node_graphs
{
	public:
		unsigned int nodeNumber;
		node_graphs *adjacency;
};
