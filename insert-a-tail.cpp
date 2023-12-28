// Insert a tail in singly linked list

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node *next;
    
    Node(int val) : value(val), next(NULL) {};
    Node(){};
};

void insert_tail( Node *&head, int value ){

    Node *newNode = new Node(value);
    if( head == NULL ){
        head = newNode;
        return;
    }

    Node *tmp = head;
    while( tmp->next != NULL ){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

// printing linked list
void print_list( Node *head ){
    Node *tmp = head;
    while( tmp != NULL ){
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main(){
    Node *head = NULL;

    while( true ){
        cout << "Option 1: For insert a tail" << endl;
        cout << "Option 2: For printing a list" << endl;
        cout << "Option 3: For terminate" << endl << endl;

        cout << "Enter your choice: ";
        int op; cin >> op;

        if( op == 1 ){
            cout << "Enter a value: ";
            int val; cin >> val;
            insert_tail( head, val);
        }else if( op == 2 ){
            print_list(head);
        }else{
            break;
        }
    }
    return 0;
}