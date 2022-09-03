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

// Function Initialization
void display(Node *n);
int countLength(Node *&head);
void insertAtHead(Node *&head, int value);
void insertAtTail(Node *&head, int value);
void insertAtSpecificPosition(Node *&head, int position, int value);

// Function Making
void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
            cout << " -> ";
        n = n->Next;
    }
    cout << endl
         << endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->Next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void insertAtSpecificPosition(Node *&head, int position, int value)
{
    int i = 0;
    Node *newNode = new Node(value);
    Node *temp = head;
    while (i < position - 2)
    {
        temp = temp->Next;
        i++;
    }

    newNode->Next = temp->Next;
    temp->Next = newNode;
}

int main()
{
    Node *head = NULL;
    int value, choice, position;
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2: Insertion at Tail" << endl
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
            cout << "Enter the Value: ";
            cin >> value;
            insertAtHead(head, value);
            break;

        case 2:
            cout << "Enter the Value: ";
            cin >> value;
            insertAtTail(head, value);
            break;

        case 3:
            cout << "Enter the Desired Position: ";
            cin >> position;
            cout << "Enter the Value: ";
            cin >> value;
            insertAtSpecificPosition(head, position, value);
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
        cout << "Next Choice: ";
        cin >> choice;
    }
    cout << endl
         << "Linked List: ";
    display(head);
    cout << "Length of the list: " << countLength(head) << endl;
    return 0;
}