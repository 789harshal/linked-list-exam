#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class linked{
    public:
        Node *head;
        int count;

        linked(){
            this->head = nullptr;
            this->count = 0;
        }

        void addAtStart(int data){
            Node *newNode = new Node(data); 
            newNode->next = this->head; 
            this->head = newNode;       
            this->count++;

            cout << "New node add at start..." << endl;
        }

        void addAtEnd(int data){
            Node *newNode = new Node(data);

            if (count == 0){                         
                this->head = newNode; 
            }
            else{
                Node *temp = head; 

                while (temp->next != nullptr)
                { 
                    temp = temp->next;
                }

                temp->next = newNode;
                cout << "New node add at end...." << endl;
            }
            this->count++;
        }

        void updatenode(int data, int pos){
            if (this->count == 0){
                cout << "Linked List empty" << endl;
                return;
            }

            Node *temp = head;

            for(int i=0; i<pos; i++){
                temp = temp->next;
            }
            temp->data = data;
        }

        void viewallnode(){
            if (count == 0){
                cout << "Linked List is empty...." << endl;
                return;
            }

            Node *ptr=head;

            while (ptr != NULL){
                cout<<ptr->data<<"  ";
                ptr = ptr->next;
            }
            cout << endl;
        }
};  

int main()
{
    int choice;
    linked list;
    do{
        cout << endl;
        cout << "Enter 1 for add at start.." << endl;
        cout << "Enter 2 for add at end.." << endl;
        cout << "Enter 3 for delete.." << endl;
        cout << "Enter 4 for update.." << endl;
        cout << "Enter 5 for view all.." << endl;
        cout << "Enter 6 for exit.." << endl;
        cout << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:{
            int data;
            cout << "Enter your data : ";
            cin >> data;

            list.addAtStart(data);

            break;
        }
        case 2:{
            int data;
            cout << "Enter your data : ";
            cin >> data;

            list.addAtEnd(data);
        break;
        }
        case 3:{
            
        }
        case 4 :{
            int data;
            int pos;
            cout << "Enter your data : ";
            cin >> data;
            cout << "Enter the position : ";
            cin >> pos;

            list.updatenode(data,pos);
            break;
        }
        case 5:{
            cout << endl;
            list.viewallnode();
            cout << endl;

            break;
        }        
        case 6:{
            cout << "Thank you.."<< endl;
            return 0;
        }
        default:{
            cout << "invalid choice..";
        }
        }

    } while (choice != 0);

    return 0;
}
