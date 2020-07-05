//
//  LinkedList.h
//  DataStructure
//
//  Created by thomas on 2020/7/1.
//  Copyright © 2020 thomas. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>

typedef struct LLNode {
    int data;
    struct LLNode *next;
} LLNode;

void generateLinkedList(int size, LLNode **head);

void insertAtHead(LLNode *head, int value);
void insertAtEnd(LLNode *head, int value);
void deleteHead(LLNode *head);
void deleteEnd(LLNode *head);
void deleteValue(LLNode *head, int value);
LLNode* search(LLNode *head, int value);
LLNode* reverseLinkedList(LLNode *head);
void printLinkedList(LLNode *head);

#endif /* LinkedList_h */
