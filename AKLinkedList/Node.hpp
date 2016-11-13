//
//  Node.hpp
//  AKLinkedList
//
//  Created by Aryan Kashyap on 08/11/2016.
//  Copyright © 2016 Aryan Kashyap. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

class Node
{
private:
    int data;
    Node *link;
    
public:
    Node() : data(0)
    {}
    Node(int);
    Node(int, Node*);
    Node *getLink() { return link; }
    void setLink(Node *n) { link = n;  }
    
    int getData() { return data; }
    void setData(int n) { data = n; }
    
    virtual ~Node();
};


#endif /* Node_hpp */
