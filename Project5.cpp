
#include <iostream>

using namespace std;

#include "clsMyQueueArr.h"

int main()
{
    clsMyQueueArr<int> MyQueue;

    MyQueue.push(1);
    MyQueue.push(2);
    MyQueue.push(3);
    MyQueue.push(4);
    MyQueue.push(5);

    cout << "Queue: \n";
    MyQueue.Print();

    cout << "\n\nQueue Size : " << MyQueue.Size();
    cout << "\n\nQueue Front: " << MyQueue.front();
    cout << "\n\nQueue back : " << MyQueue.back();

    cout << "\n\nIs Empty() ? : " << MyQueue.IsEmpty();

    MyQueue.pop();
    cout << "\n\nQueue after pop() : \n";
    MyQueue.Print();

    cout << "\n\nQueue Size : " << MyQueue.Size();

    cout << "\n\nItem(2) : " << MyQueue.GetItem(2);

    MyQueue.Reverse();
    cout << "\n\nQueue after Reverse() : \n";
    MyQueue.Print();

    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();


    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after inserting 800 after Item(2) : \n";
    MyQueue.Print();

    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after inserting 1000 at front : \n";
    MyQueue.Print();

    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after inserting 2000 at back : \n";
    MyQueue.Print();


    MyQueue.Clear();
    cout << "\n\nQueue after Clear() : \n";
    MyQueue.Print();

}


