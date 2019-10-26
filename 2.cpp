//unsorted singly linked list
//reference file
#include 
using namespace std;


struct Node
{
    int data;
    Node *link;
    
    
    Node(int data=0)
    {
        link = nullptr;
        this->data = data;
    }
};


class linked_list
{
private:
    Node *head,*current;
public:
     //constructor
    linked_list()
    {
        head = NULL;//the head pointer
        current = NULL;//acts as the tail of the list
    }

    //destructor - IMPORTANT
    ~linked_list() {
        current = head;
        while( current != NULL ) {//the loop stops when both current and head are NULL
                head  = head->link;
                delete current;
                current = head;
        }

    }

    void insertBack(int n)// to add a node at the end of the list
    {
        if(head == NULL)
        {
            head = new Node(n);
            current = head;
        } else {
            current->link = new Node(n);
            current = current->link;
        }
        
    }
    

    void print() // to display all nodes in the list
    {
        Node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->link;
        }
    }
};



int main()
{
    linked_list a;
    a.insertBack(1);
    a.insertBack(2);

        a.print();
        
    
    return 0;
}