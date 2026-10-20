# include <stdio.h>
# include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Elements: %d\n" , ptr -> data);
        ptr = ptr -> next;
    }
}
     
int main () {
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    // LInked First and Second nodes
    head -> data = 7;
    head ->next = second;

    // Linked second and third nodes
    second -> data = 11;
    second ->next = third;

    // Terminate the list at the third node
    third -> data = 66;
    third ->next = NULL;

    linkedListTraversal(head);


    return 0;
}

