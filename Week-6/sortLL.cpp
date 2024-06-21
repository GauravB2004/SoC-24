/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 ListNode* getmid(ListNode* &head){
    ListNode* slow = head;
    ListNode* fast =head -> next;

    while(fast!= NULL && fast-> next != NULL){
        fast = fast-> next -> next;
        slow = slow -> next;
    }
    return slow;
 }
 ListNode* merge(ListNode* &left, ListNode* &right){
    if(left == nullptr){
        return right;
    }
    if(right == nullptr){
        return left;
    }
    ListNode* ans = new ListNode(-1);
    ListNode* temp = ans;

    while(left != nullptr && right != nullptr){
        if(left -> val < right-> val){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
 }
 while (left != nullptr) {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right != nullptr){
        temp -> next = right;
            temp = right;
            right = right -> next;
    }
    ans = ans-> next;
    return ans;
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head-> next == NULL){
            return head;
        }

        ListNode* mid = getmid(head);
        ListNode* left = head;
        ListNode* right = mid -> next;
        mid -> next = nullptr;

        left = sortList(left);
        right = sortList(right);

        ListNode* result = merge(left, right);
        return result;
    }
};