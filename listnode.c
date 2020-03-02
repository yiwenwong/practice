/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
 struct ListNode
 {
    int val;
    struct ListNode* next;
    
    
 };
 

 typedef struct ListNode ListNode;
struct ListNode* insertionSortList(ListNode* head){
 if(!head)
 return head;
 if(!head->next)
 return head;

ListNode* p=head;

while(p->next){
    if(p->val>p->next->val){
        ListNode* temp=p->next;
        p->next=temp->next;

        ListNode*find=head;
            if(head->val<=temp->val){
            while(find->next->val<=temp->val)
            find=find->next;
                if(find->next){
                temp->next=find->next;
                find->next=temp;
                }else{
                    find->next=temp;
                    temp->next=NULL;
                }
            }
            else {
                temp->next=head;
                head=temp;
            }

        
    }
    else
    p=p->next;


}
return head;
}