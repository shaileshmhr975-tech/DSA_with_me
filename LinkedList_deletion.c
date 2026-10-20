# include <stdio.h>
# include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

// Traversing the Linked List.
void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Elements: %d\n" , ptr -> data);
        ptr = ptr -> next;
    }
}

// CASE 1: Deletion head element.
struct Node *headDeletion(struct Node *head) {
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head; 
}

// CASE 2: Deletion an Element at a Given Index.
struct Node *indexDeletion(struct Node *head, int index) {
    struct Node *ptr= head;
    struct Node *q = ptr->next;
    int i = 0;
    while (i != index - 1) {
        ptr = ptr->next;
        i++;
    }
    ptr -> next = q -> next;
    free(q);
};

// CASE 3: Deleting the last element.
struct Node *lastDeletion(struct Node *head) {
    struct Node *p = head;
    struct Node *q = p -> next;
    int i = 0;
    while (q -> next != NULL) {
        p = p -> next;
        q = q -> next;
        i++;
    }
    p -> next = NULL;
    free(q);

}

// CASE 4: Deletion the element By a Given value.
struct Node *deleteByValue(struct Node *head, int value) {
    struct Node *p= head;
    struct Node *q = p->next;
    while (q -> data != value && q ->next != NULL) {
        p = p -> next;
        q = q -> next;
    }
    if (q -> data == value) {
    p -> next = q -> next;
    free(q);
    }
    else {
        printf("element NOT found\n");
    }
};
     
int main () {
    struct Node * head, *second, * third, *forth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    forth = (struct Node *) malloc(sizeof(struct Node));

    // Linked First and Second nodes
    head -> data = 7;
    head ->next = second;

    // Linked second and third nodes
    second -> data = 11;
    second ->next = third;

    // Terminate the list at the third node
    third -> data = 66;
    third ->next = forth;

    forth -> data = 103;
    forth ->next = NULL;

    printf("Linked List before deletion\n");
    linkedListTraversal(head);

    printf("Linked List After deletion\n");
    // head = headDeletion(head); // Deleting first element from the linked List.
    // indexDeletion(head, 2);  // Deleting an element at index 2.
    // lastDeletion(head); // Deleting the last element.
    // deleteByValue(head, 103); // Deleting by value.

    linkedListTraversal(head);

    return 0;
}
