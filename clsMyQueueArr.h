#pragma once

#include <iostream>


#include "clsDynamicArray.h"

using namespace std;

template <class T>
class clsMyQueueArr
{
protected:
    clsDynamicArray<T> _MyList;

public:

    void push(T value) 
    {
        _MyList.InsertAtEnd(value);
    }

    void Print() 
    {
        _MyList.PrintList();
    }

    bool IsEmpty() 
    {
       return _MyList.IsEmpty();
    }

    int Size() 
    {
       return _MyList.Size();
    }

    T front() 
    {
        return _MyList.GetItem(0);
    }

    T back()
    {
        return _MyList.GetItem(Size() - 1);
    }

    void pop() 
    {
        _MyList.DeleteFirstItem();
    }

    T GetItem(int index) 
    {
       return _MyList.GetItem(index);
    }

    void Reverse() 
    {
       return _MyList.Reverse();
    }

    bool UpdateItem(int index, T value)
    {
         return _MyList.SetItem(index , value);
    }

    bool InsertAfter(int index, T value)
    {
        return _MyList.InsertAfter(index, value);
    }

    bool InsertAtFront(T value)
    {
        return _MyList.InsertAtBeginning(value);
    }

    bool InsertAtBack(T value)
    {
        return _MyList.InsertAtEnd(value);
    }

    void Clear() 
    {
        _MyList.Clear();
    }

};

