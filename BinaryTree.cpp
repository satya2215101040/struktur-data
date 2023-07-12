#include <iostream>
#include "BinaryTree.h"

Using namespace std;

void BinaryTree::insertNode(int insertVal){
	root = insertNodeRecursive(root, insertVal);	
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertvalue){
	if (currentRoot==Null){
		currentRoot = new Node();
		currentRoot->val = insertValue;
		return currentRoot;
	}
	
	if (insertValue < currentRoot->val){
		cureenrRoot->left = insertNodeRecursive(currentRoot->left, insertValue);
	}
}

Void BinaryTree::inOrder(){
	onOrderRecursive(root);
}

Void BinaryTree::inOrderRecursive(Node* currentRoot){
	if (currentRoot!=NULL){
		inOrderRecursive(cureentRoot->left);
		cout << currentRoot->val << ", ";
		inOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node* currentRoot){
	if (currentRoot!=NULL){
		cout << currentRoot->val << ", ";
		preOrderRecursive(cureentRoot->left);
		preOederRecursive(currentRoot->right);
	}
}

void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

void BinaryTree::postOrderRecursive(Node* currentRoot){
	if (currentRoot!=NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout << currentRoot->val << ", ";
	}
}
