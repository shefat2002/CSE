#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";

/*---------------------------------------------------------------------------*/

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node *create_node(item)
{
    Node *newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL){
        exit(1);
    }
    newNode -> data = item;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

void addLeft(Node* node, Node* child)
{
    node ->left = child;
}
void addLeft(Node* node, Node* child)
{
    node ->right = child;
}

Node *create_tree()
{
    Node* root;

    ///operation

    return root;
}

void pre_order(Node* node)
{
    cout << node -> data;
    if(node -> left != NULL)
        pre_order(node ->left);
    if(node -> right != NULL)
        pre_order(node ->right);
}
void pre_order(Node* node)
{
    if(node -> left != NULL)
        pre_order(node ->left);
    if(node -> right != NULL)
        pre_order(node ->right);
    cout << node -> data;
}

void in_order(Node* node)
{
    if(node -> left != NULL)
        pre_order(node ->left);
    cout << node -> data;
    if(node -> right != NULL)
        pre_order(node ->right);
    
}

int main()
{
    Node* root = create_tree();
    cout << root -> data << endl;
    return 0;
}
