//============================================================================
// Name        : Graph_Basic.cpp
// Author      : Anish Acharya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Node
{
public:
	int data;
    vector<Node*> Friends;
};

class AdjList
{
    vector<Node*>Adj;
};

class Graph
{
    private:
        AdjList Adj;

    public:
        Graph()
        {
        	//vector<node*>Adj;
        }

        Node* node(int data)
        {
            Node* node = (struct Node*)malloc(sizeof(struct Node));
            node->data = data;
            vector<Node*> Friends;
            return node;
        }

        void addEdge(Node* n1, Node* n2)
        {
        	n1->Friends.push_back(n2);
        	n2->Friends.push_back(n1);
        }

};


int main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
*/