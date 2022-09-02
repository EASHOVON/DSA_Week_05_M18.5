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
    int value, choice;
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2: Insertion at Head" << endl
         << "Choice 3: Insertion at Specific Position" << endl
         << "Choice 4: Search a value (Unique List)" << endl
         << "Choice 5: Search a value (Duplication Enabled List)" << endl
         << "Choice 6: Insertion After a Specific Value (Unique List)" << endl
         << "Choice 7: Insertion After a Specific Value (Duplication Enabled List)" << endl
         << "Choice 8: Deletion at Head" << endl
         << "Choice 9: Deletion at Tail" << endl
         << "Choice 10: Deletion at a Specific Position" << endl
         << "Choice 11: Deletion by value (Unique List)" << endl
         << "Choice 12: Deletion by value (Duplication Enabled List)" << endl
         << "Choice 0: Exit" << endl
         << endl;
    cout << "Next Choice: ";
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            /* code */
            break;

        case 2:
            /* code */
            break;

        case 3:
            /* code */
            break;

        case 4:
            /* code */
            break;

        case 5:
            /* code */
            break;

        case 6:
            /* code */
            break;

        case 7:
            /* code */
            break;

        case 8:
            /* code */
            break;

        case 9:
            /* code */
            break;

        case 10:
            /* code */
            break;

        case 11:
            /* code */
            break;

        case 12:
            /* code */
            break;

        default:
            break;
        }
    }
    return 0;
}