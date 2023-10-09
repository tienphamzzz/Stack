using namespace std;


template <typename T>
class Node {
    public:
        T data;
        Node<T> *next;
        Node(T data) {
            this->data = data;
            next = NULL;
        }
};

template <typename T>
class Stack {
    Node<T> *head;
    int size;
    public:

        Stack() {
            head = NULL;
            size = 0;
        }

        int getSize() {
            return size;
        }

        bool isEmpty() {
            return size == 0;
        }

        void push(T element) {
            Node<T> *newNode = new Node<T>(element);
            newNode->next = head;
            head = newNode;
            size++;
        }

        void pop() {
            if(isEmpty()) {
                cout << "Stack rong !!!" << endl;
            }
            T ans = head->data;
            Node<T> *temp = head;
            head = head->next;
            delete temp;
            size--;
        }

        T top() {
            if(isEmpty()) {
                return 0;
            }
            return head->data;
        }
        
        void showStack() {
            Node<T> *temp = head;
            while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};