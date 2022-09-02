#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    // Creating Constractor
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

int main()
{
    Node *head = NULL;
    int value;
    cout << "Choice 1: Insertion at Head" << endl;
    cout << "Choice 2: Insertion at Head" << endl;
    cout << "Choice 3: Insertion at Specific Position" << endl;
    cout << "Choice 4: Search a value (Unique List)" << endl;
    cout << "Choice 5: Search a value (Duplication Enabled List)" << endl;
    cout << "Choice 6: Insertion After a Specific Value (Unique List)" << endl;
    cout << "Choice 7: Insertion After a Specific Value (Duplication Enabled List)" << endl;
    cout << "Choice 8: Deletion at Head" << endl;
    cout << "Choice 9: Deletion at Tail" << endl;
    cout << "Choice 10: Deletion at a Specific Position" << endl;
    cout << "Choice 11: Deletion by value (Unique List)" << endl;
    cout << "Choice 12: Deletion by value (Duplication Enabled List)" << endl;

    return 0;
}