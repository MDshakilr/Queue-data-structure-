#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
public:
    int *array;
    int front;
    int rear;

    Queue() {
        array = new int[SIZE];
        front = -1;
        rear = -1;
    }

    //empty
    bool isempty() {
        return (front == -1 && rear == -1);
    }

    //enqueue
    void enqueue(int value) {
        if (rear == SIZE - 1)
            cout << "queue is full\n";
        else {
            if (front == -1)
                front = 0;
            rear++;
            array[rear] = value;
        }
    }

    //dequeue
    void dequeue() {
        if (isempty())
            cout << "Queue is empty\n";
        else if (front == rear)
            front = rear = -1;
        else
            front++;
    }

    //showfront
    void showfront() {
        if (isempty())
            cout << "Queue is empty\n";
        else
            cout << "element at front is: " << array[front] << endl;
    }

    void displayQueue() {
        if (isempty())
            cout << "Queue is empty\n";
        else {
            for (int i = front; i <= rear; i++)
                cout << array[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q1;
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q1.displayQueue();
    q1.showfront();
    q1.displayQueue();
    q1.dequeue();
    q1.displayQueue();

    return 0;
}
