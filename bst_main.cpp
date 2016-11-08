
#include <iostream>
#include <cstdlib>

using namespace std;

#include "headers/binary_search_tree.h"

int main()
{
	int no_of_nodes=0,i;
	binary_search_tree<int> b1;

	cout<<"Enter number of nodes :"<<endl;
	cin>>no_of_nodes;

	for(i=0;i<no_of_nodes;i++)
		b1.insert();

	b1.level_order_traversal();

	return 0;
}
