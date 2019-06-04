#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
    if(!head){
    return 0;
    }
int sum =head->data + recursiveSum(head);

return sum;
}



//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {

int max = head->data;

if(head==NULL)
return max;

recursiveLargestValue(head->next);
if(max>head->data)
return max = head->data;

}




