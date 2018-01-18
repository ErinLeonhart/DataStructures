// *********************************************************************************
// node.h
// *********************************************************************************

#pragma once

#ifndef NULL
#define NULL 0
#endif

template<typename T>
class Node
{
    public:
        // *************************************************
        //
        // constructors default/copy/paramatized/destruct
        //
        // *************************************************
        Node();
        Node(const Node& copy);
        Node(const int key, const T item);
        ~Node();

        // *************************************************
        //
        // assignment operator
        //
        // *************************************************
        Node& operator=(const Node& rhs);

        // *************************************************
        //
        // print node
        //
        // *************************************************
        void print();
   
        // *************************************************
        //
        // default pointers assigned to each node at start
        //
        // *************************************************
        int m_key;
        Node<T>* pLeft;
        Node<T>* pRight;

        // *************************************************
        //
        // Data members
        // 
        // *************************************************
        T data;
};

