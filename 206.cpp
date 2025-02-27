class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;  // Save the next node
            curr->next = prev;                // Reverse the current node's pointer
            prev = curr;                      // Move prev and curr one step forward
            curr = nextNode;
        }
        
        return prev;  // prev will be the new head of the reversed list
    }
};

//Input
//head =
//[1,2,3,4,5]
//Output
//[5,4,3,2,1]
//Expected
//[5,4,3,2,1]
