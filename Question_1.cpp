///////////////////////////////////////////////////////////////////////
//     Name => Pramatma Vishwakarma            Roll No. => 32       //
//     Reg. No. => 12103282                    Program => MSc. IT   //
//                         ** Question 1 **                         //
//////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
class Tree {
    public:
        int data;
        Tree* left = NULL,*right = NULL;
        // Constructor initialised
        Tree(int x) {
            data = x;
            left = NULL;
            right = NULL;
        }
};
void preorder_traversal (Tree *root) {
    if (root == NULL) return;
    // Print the data
    cout << root -> data << " ";
    // Visit Left subtree
    preorder_traversal(root -> left);
    // Visit right subtree
    preorder_traversal(root -> right);
}

int main() {
    Tree *root = new Tree(17);
    root -> left = new Tree(10);
    root -> right = new Tree(11);
    root -> left -> left = new Tree(7);
    root -> right -> left = new Tree(27);
    root -> right -> right = new Tree(9);
    cout << "Preorder – ";
    preorder_traversal(root);
    cout << endl;
    return 0;
}