#include <iostream>

using namespace std;
 Node *right;
   Node(){
   left = right = NULL;

  }		
};
class Binary_tree{
	public:
		void insertNode(int){
			root = insertNodeRecursive(root,int insertval);
			
			Node* insertNodeRecursive(*Node,int);
			
		
		void deleteNode(int);
		
		Node *searchNode(int);
		Node *search
		void PreOrder();
		void inOrder();
		void postOrder();
		
		Node * root;
		void BinaryTree(){
			root = NULL;
		}	
};
 		
 	return 0;
 }
