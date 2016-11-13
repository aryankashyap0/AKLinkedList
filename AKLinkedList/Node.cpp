//
//  Node.cpp
//  AKLinkedList
//
//  Created by Aryan Kashyap on 08/11/2016.
//  Copyright © 2016 Aryan Kashyap. All rights reserved.
//

#include "Node.hpp"
#include <cstddef>

Node::Node(int initData)
{
    data = initData;
}

Node::~Node()
{
    link = NULL;
}
Node::Node(int initData, Node *node)
{
    data = initData;
    link = node;
}
