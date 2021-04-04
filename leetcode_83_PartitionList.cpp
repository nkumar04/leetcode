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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head)
            return head;
        ListNode* dummy1 = new ListNode(0);
        ListNode* dummy2 = new ListNode(0);
        ListNode* r = dummy2;
        ListNode* l = dummy1;
        ListNode* tail = l;
        ListNode* curr = head;
        while(curr)
        {
            if(curr->val < x)
            {
                l->next = curr;
                l = l->next;
                curr = curr->next;  
                l->next = NULL;
                tail = l;
                                  
            }
            else
            {
                r->next = curr;
                curr = curr->next;  
                r = r->next;
                r->next = NULL;
            }
            
        }
        tail->next = dummy2->next;
        return dummy1->next;
        
        
    }
};
