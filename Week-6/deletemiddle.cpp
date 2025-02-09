/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode *prev;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == NULL){
            return NULL;
        }
       
       ListNode* slow= head;
       ListNode* fast = head-> next-> next;


       while(fast != NULL && fast-> next != NULL){
       
        slow= slow-> next;
        fast = fast -> next-> next;
    } 
    ListNode* toDelete = slow->next;  
        slow->next = slow->next->next;  
        delete toDelete;
return head;
        
    }
};