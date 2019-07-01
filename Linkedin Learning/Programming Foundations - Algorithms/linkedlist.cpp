#include <iostream>

using namespace std;

template <typename T>
class Node {
    T val;
    T * next;
public:
    Node(T val);
    T getVal();
    void setVal(T val);
    Node<T> getNext();
    void setNext(Node<T>);
};

template <typename T>
class LinkedList {
protected:
    Node<T> head;
    int size;
    void add_helper(Node<T> start, Node<T> n);
public:
    LinkedList();
    int getSize();
    void add(T val);
    void insert(int idx, Node<T> n);
    Node<T> find(T val);
//    Node<T> find(int idx);
    void remove(Node<T> n);
};

template <typename T>
Node<T>::Node(T val) : val(val), next(nullptr) {};

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr), size(0) {};

template <typename T>
int LinkedList<T>::getSize() { return size; }

template <typename T>
void LinkedList<T>::add(T val) {
    Node<T> n = new Node<T>(val);
    add_helper(head, n);
};

template <typename T>
void LinkedList<T>::add_helper(Node<T> start, Node<T> n) {
    if(start == nullptr) {
        start = n;
    } else if(start.getNext() == nullptr) {
        start.setNext(n);
    } else {
        add_helper(start.getNext(), n);
    }
};

int main() {
    LinkedList<int> * list = new LinkedList<int>();
    cout << list->getSize() << endl;
    list->add(1);
    list->add(2);
    list->add(3);
    cout << list->getSize() << endl;
    return 0;
}
