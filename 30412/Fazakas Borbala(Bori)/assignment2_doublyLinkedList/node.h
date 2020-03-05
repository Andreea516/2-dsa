//
// Created by Bori on 2/25/2020.
//

#ifndef ASSIGNMENT1_NODE_H
#define ASSIGNMENT1_NODE_H

typedef struct _node {
    int data;
    struct _node *next, *prev;
} node;

node *createNode(int data, node *next, node *prev);

node *createNodeWithSelfReference(int data);

#endif //ASSIGNMENT1_NODE_H
