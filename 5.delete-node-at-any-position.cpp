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

void insert_value_at_any_pos( Node *head, int pos, int val ){
    Node *newNode = new Node(val);

    Node* tmp = head;
    for( int i=1; i<= pos-1; i++ ){
            tmp = tmp ->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// insert_at_head
void insert_at_head( Node *&head, int val ){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Insert Successful on head\n\n";
}
// delete value of any position
void delete_value_at_any_pos( Node *head, int pos ){
    
    Node *tmp = head;
    for( int i=1; i<pos; i++ ){
        tmp = tmp->next;
    }

    Node *delNode = tmp->next;
    tmp->next = tmp->next->next;

    delete delNode;
}
// Delete head
void delete_head( Node *&head ){
    Node *delHead = head;
    
    head = head -> next;

    delete delHead;
}

int main(){
    Node *head = NULL;

    while( true ){
        cout << "Option 1: For insert a tail" << endl;
        cout << "Option 2: For printing a list" << endl;
        cout << "Option 3: for insert value at any position" <<endl;
        cout << "Option 4: for insert value at head" << endl;
        cout << "Option 5: for delete value at any position" << endl;
        cout << "Option 6: delete head" << endl;

        cout << "Option 9: For terminate" << endl << endl;

        cout << "Enter your choice: ";
        int op; 
        cin >> op;

        if( op == 1 ){
            cout << "Enter a value: ";
            int val; cin >> val;
            insert_tail( head, val);
        }else if( op == 2 ){
            print_list(head);
        }else if( op == 9 ){
            break;
        }else if( op == 3 ){
            cout << "Enter position & value: ";
            int pos, val;
            cin >> pos >> val;

            if( pos == 0 ){
                insert_at_head( head, val );
            }else
                insert_value_at_any_pos(head, pos, val);
        }else if( op == 4 ){
            int val; cout << "Enter value for head: "; cin >> val;
            insert_at_head( head, val);
        }else if( op == 5 ){
            int pos; cout << "Enter position for delete value: ";
            cin >> pos;

            delete_value_at_any_pos( head, pos );
        }else if( op == 6 ){
            delete_head( head );
        }
    }
    return 0;
}