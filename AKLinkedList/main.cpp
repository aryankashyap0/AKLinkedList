//
//  main.cpp
//  AKLinkedList
//
//  Created by Aryan Kashyap on 08/11/2016.
//  Copyright © 2016 Aryan Kashyap. All rights reserved.
//

#include <iostream>
#include "AKLinkedList.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
   
    AKLinkedList a;
   // AKLinkedList *b;
    
    a.append(1);
    a.append(3);
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Display LinkedList after adding 2 nodes." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    a.display();
    
    a.append(20);
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Display LinkedList after adding 1 node." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    a.display();
    
    a.prepend(50);
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Display Linked List after adding 1 node." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    
    
    a.display();
    
    std::cout << "----------------------------------" << std::endl;
    std::cout << "------------ LENGTH "<< a.getLength() << " --------------" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    
    
    a.removeHead();
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Display Linked List after removing HEAD node." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    
    a.display();
    
    a.removeTail();
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Display Linked List after removing TAIL node." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    
    a.display();
    
    a.insertAfter(3,78);
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Display Linked List after insertingAfter 1 node." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    a.display();
    
    a.insertAtIndex(1, 97);
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Display Linked List after insertingAtIndex 1 node." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    
    a.display();
    
    for(int i = 0; i < 20; i++)
    {
        a.removeHead();
    }
    
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Display Linked List after removing 20 nodes" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    
    a.display();

    
    return 0;
}
