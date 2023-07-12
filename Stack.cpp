#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Stack {
private:
    int top;
    int data[MAX_SIZE];
public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow. Cannot push element." << endl;
        } else {
            data[++top] = value;
            cout << "Pushed " << value << " to the stack." << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow. Cannot pop element." << endl;
        } else {
            int value = data[top--];
            cout << "Popped " << value << " from the stack." << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    stack.pop();
    stack.pop();

    stack.display();

    return 0;
}
