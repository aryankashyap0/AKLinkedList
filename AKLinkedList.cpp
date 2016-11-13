//
//  AKLinkedList.cpp
//  AKLinkedList
//
//  Created by Aryan Kashyap on 08/11/2016.
//  Copyright © 2016 Aryan Kashyap. All rights reserved.
//

#include "AKLinkedList.hpp"
#include <cstddef>
#include <iostream>

AKLinkedList::AKLinkedList()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

AKLinkedList::~AKLinkedList()
{
    Node *temp = head;
    while(temp != NULL)
    {
        head = head->getLink();
        delete temp;
        temp = head;
        length--;
    }
    
    temp = NULL;
}

int AKLinkedList::removeHead()
{
   if(head == NULL)
    {
        std::cout << "Linked List empty!" << std::endl;
        return -1;
    }
    
    Node *temp = head;
    head = head->getLink();
    int data = temp->getData();
    delete temp;
    temp = NULL;
    length--;

    return data;
}


void AKLinkedList::append(int data)
{
   if(head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->setLink(NULL);
        head = newNode;
        length++;
        return;
    }
   
    Node *temp = head;
    while (true) {
        
        if(temp->getLink() == NULL)
        {
            Node *newNode = new Node(data);
            newNode->setLink(NULL);
            temp->setLink(newNode);
            length++;
            return;
        }
        temp = temp->getLink();
    }
}

void AKLinkedList::prepend(int data)
{
    Node *newNode = new Node(data);
    newNode->setLink(head);
    head = newNode;
    length++;
}

void AKLinkedList::insertAfter(int existData, int newData)
{
    if(head == NULL)
    {
        Node *newNode = new Node(newData);
        newNode->setLink(NULL);
        head = newNode;
        length++;
        return;
    }
    
    Node *temp = head;
    while(temp != NULL)
    {
        if(temp->getData() == existData)
        {
            Node *newNode = new Node(newData);
            newNode->setLink(temp->getLink());
            temp->setLink(newNode);
            length++;
            return;
        }
        temp = temp->getLink();
    }
}

int AKLinkedList::removeTail()
{
    /*
     * Could use the length variable, but I want to implement
     * it using pointers only.  Length is a debugging tool.
     */
    if(head == NULL)
    {
        std::cout << "LinkedList Empty!!" << std::endl;
        return -1;
    }
    
    Node *current = head;
    Node *prev = NULL;
    while(current != NULL)
    {
        if(current->getLink() == NULL)
        {
            int data = current->getData();
            prev->setLink(NULL);
            delete current;
            length--;
            current = NULL;
            return data;
        }
        prev = current;
        current = current->getLink();
    }
    
    return -2;
}

void AKLinkedList::insertAtIndex(int index, int newData)
{
    if(index + 1 > length)
    {
        std::cout << "Index too large." << std::endl;
        return;
    }
    if(head == NULL)
    {
        Node *newNode = new Node(newData);
        newNode->setLink(NULL);
        head = newNode;
        length++;
        return;
    }
    
    Node *temp = head;
    Node *prev = NULL;
    int i = 0;
    while(temp != NULL)
    {
        if(i == index)
        {
            Node *newNode = new Node(newData);
            newNode->setLink(temp);
            prev->setLink(newNode);
            length++;
            return;
        }
        i++;
        prev = temp;
        temp = temp->getLink();
    }
}

void AKLinkedList::display()
{
    if(head == NULL)
    {
        std::cout << "LinkedList Empty!!" << std::endl;
        return;
    }
    
    Node *temp = head;
    while(temp != NULL)
    {
        if(temp == head)
        {
            std::cout << "HEAD ";;
        }
        std::cout << temp->getData() << std::endl;
        temp = temp->getLink();
        
    }
}



