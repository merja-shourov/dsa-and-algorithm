#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node *next;
    
    Node(int val) : value(val), next(NULL) {};
    Node(){};
};

void insert_value( Node *head, int val,int pos){

    Node *tmp = head;
    Node *newNode = new Node(val);

    for( int i=1; i<= pos-1; i++ ){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Insert Successfull::\n";

};

void insert_at_tail( Node *head, int val){
    Node *newNode = new Node(val);
    
    Node *tmp = head;
    while( tmp->next != NULL ){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_list( Node *head){
    
    Node *tmp = head;
    while( tmp != NULL ){
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
};
int main(){
    Node *head = new Node(10);
    
    while( true ){
        cout << "Enter 1: for insert value: " << endl;
        cout << "Enter 2: for terminate value: " << endl;
        cout << "Enter 3: for printing list." << endl;
        cout << "Enter 4: for insert at tail" <<endl;

        int choice;
        cout << endl << "Enter your choice: ";
        cin >> choice; 

        if( choice == 1 ){
            cout << "Enter a value for insert: ";
            int val; cin >> val;
            cout << "Enter a postiton: ";
            int pos; 
            cin >> pos;
            insert_value(head, val, pos);

        }else if( choice == 2 ){
            break;
        }else if( choice == 3 ){
            cout << "print your list: " << endl;
            print_list( head );
            cout << endl << endl;
        }else if( choice == 4 ){
            cout << "Enter a value: ";
            int v;
            cin >> v;
            insert_at_tail( head, v);
        }
            
    }
    return 0;
}