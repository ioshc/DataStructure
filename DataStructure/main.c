//
//  main.c
//  DataStructure
//
//  Created by thomas on 2020/6/29.
//  Copyright © 2020 thomas. All rights reserved.
//

#include <stdio.h>
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
    
    LLNode *head = (LLNode *)malloc(sizeof(LLNode));
    generateLinkedList(5, &head);
    printf("\r\ngenerateLinkedList========\r\n");
    printLinkedList(head);
    printf("==========================\r\n");
    
    insertAtHead(head, 123);
    printf("\r\ninsertAtHead========\r\n");
    printLinkedList(head);
    printf("==========================\r\n");
    
    insertAtEnd(head, 456);
    printf("\r\ninsertAtEnd========\r\n");
    printLinkedList(head);
    printf("==========================\r\n");
    
    deleteHead(head);
    printf("\r\ndeleteHead========\r\n");
    printLinkedList(head);
    printf("==========================\r\n");
    
    deleteEnd(head);
    printf("\r\ndeleteEnd========\r\n");
    printLinkedList(head);
    printf("==========================\r\n");
    
    LLNode *node = search(head, head->next->next->next->data);
    deleteValue(head, node->data);
    printf("\r\ndeleteValue========\r\n");
    printLinkedList(head);
    printf("==========================\r\n");
    
    LLNode *newHead = reverseLinkedList(head);
    printf("\r\nreverseLinkedList========\r\n");
    printLinkedList(newHead);
    printf("==========================\r\n");
    
    return 0;
}
    
