#include<iostream>
using namespace std;

// File to Database.
void getDataList() {
    
}

// Database to file.
void setDataList() {
    
}

// Linked List Block
class LinkedList {
    public:
        string data;
        LinkedList *next;

    LinkedList(string d, LinkedList *n) {
        data = d;
        next = n;
    }

    // Database Read Operation
    void read(LinkedList *head) {
        LinkedList *t = head;
        int nm = 0;
        do {
            nm++;
            cout<<"| "<<nm<<" | "<<t -> data<<" |"<<endl;
            t = t -> next;
        }while(t != NULL);
    }

    // Database Write Operation
    LinkedList* write(LinkedList *head, string data) {
        LinkedList *temp = new LinkedList(data, NULL);
        if(head == NULL) {
            head = temp;
        }else {
            LinkedList *t = head;
            while(t -> next != NULL){
                t = t -> next;
            }
            t -> next = temp;
        }
        return head;
    }

    // Database Search Operation
    void search(LinkedList *head, int idx) {
        LinkedList *t = head;
        int nm = 0;
        do {
            nm++;
            if(idx == nm) {
                cout<<"Searched: | "<<nm<<" | "<<t -> data<<" |"<<endl;
            }
            t = t -> next;
        }while(t != NULL);
    }
};

// File Handling

int main() {
    // Create a linkedlist.
    LinkedList *head = NULL;
    head = head->write(head, "One");
    head = head->write(head, "Two");
    head->read(head);
    head->search(head, 1);
}