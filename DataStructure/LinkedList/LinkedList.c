//
//  LinkedList.c
//  DataStructure
//
//  Created by thomas on 2020/7/1.
//  Copyright © 2020 thomas. All rights reserved.
//

#include "LinkedList.h"

void generateLinkedList(int size, LLNode **head) {
    
    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
    
    LLNode *p = *head;
    for ( int i = 0; i < size; i++) {
        LLNode *node = (LLNode *)malloc(sizeof(LLNode));
        node->data = array[i];
        node->next = NULL;
        p->next = node;
        p = node;
    }
}

void insertAtHead(LLNode *head, int value) {
    
    if (head == NULL) return;
    
    LLNode *node = (LLNode *)malloc(sizeof(LLNode));
    node->data = value;
    node->next = head->next;
    head->next = node;
}

void insertAtEnd(LLNode *head, int value) {
    
    if (head == NULL) return;
    
    LLNode *node = (LLNode *)malloc(sizeof(LLNode));
    node->data = value;
    node->next = NULL;
    
    LLNode *p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = node;
}

void deleteHead(LLNode *head) {
    
    if (head == NULL) return;
    LLNode *node = head->next;
    if (node == NULL) return;
    
    head->next = node->next;
}

void deleteEnd(LLNode *head) {
    
    if (head == NULL) return;
    LLNode *cur = head->next;
    if (cur == NULL) return;
    
    LLNode *prev = head;
    while (cur->next != NULL) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = NULL;
}

void deleteValue(LLNode *head, int value) {
    
    if (head == NULL) return;
    LLNode *cur = head->next;
    if (cur == NULL) return;
    
    LLNode *prev = head;
    while (cur->next != NULL) {
        prev = cur;
        cur = cur->next;
        if (cur->data == value) {
            prev->next = cur->next;
            break;
        }
    }
}

LLNode* search(LLNode *head, int value) {
    
    if (head == NULL) return NULL;

    LLNode *target = NULL;
    LLNode *cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
        if (cur->data == value) {
            target = cur;
            break;
        }
    }
    return target;
}

// 从原链表的头部一个一个取节点并插入到新链表的头部
LLNode* reverseLinkedList(LLNode *head) {
    
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    LLNode *reversedHead = NULL;
    LLNode *cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
        LLNode *tmp = cur;
        
        cur->next = reversedHead;
        reversedHead = cur;
        cur = tmp;
    }
    return reversedHead;
}

void printLinkedList(LLNode *head) {
    
    LLNode *prev = head;
    while (1) {
        LLNode *node = prev->next;
        if (node == NULL) {
            printf("\r\n");
            break;
        }
        printf("[%d, next]", node->data);
        if (node->next != NULL) printf(" --> ");
        prev = node;
    }
}
