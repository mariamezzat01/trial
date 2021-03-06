#include "code.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int treesize;
    int numofoperation;
    int elem;
    vector<int> v;
    cin >> treesize >> numofoperation;
    for (int i = 0; i < treesize; i++)
    {
        cin >> elem;
        v.push_back(elem);
    }
    MyTree <int> tree(treesize,v);
    for (int i = 0; i < numofoperation; i++)
    {
        int x;
        cin >> x;
        switch (x) {
            case 1:
                cin >> elem;
                tree.insert(elem);
                break;
            case 2: {
                cin >> elem;
                bool ss = tree.search(elem);
                if (ss)
                    cout << 1 << " " << endl;
                else
                    cout << 0 << " " << endl;
                break;
            }
            case 3:
                cin >> elem;
                if (elem == 1) {
                    tree.inorder_rec();
                    cout << endl;
                }
                if (elem == 2) {
                    tree.inorder_it();
                    cout << endl;
                }
                break;
            case 4:
                cin >> elem;
                if (elem == 1) {
                    tree.preorder_rec();
                    cout << endl;
                }
                if (elem == 2) {
                    tree.preorder_it();
                    cout << endl;
                }
                break;
            case 5:
                cin >> elem;
                if (elem == 1) {
                    tree.postorder_rec();
                    cout << endl;
                }
                if (elem == 2) {
                    tree.postorder_it();
                    cout << endl;
                }
                break;
            case 6:
                tree.breadth_traversal();
                cout << endl;
                break;
            case 7:
                cout << tree.Size();
                cout << " " << endl;
                break;
        }


    }
}

