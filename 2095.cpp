
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // If there's only one node, return null (empty list after removal)
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        
        // Initialize slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        
        // Move fast pointer two steps at a time, slow pointer one step at a time
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;         // Keep track of the node before slow
            slow = slow->next;   // Move slow by one step
            fast = fast->next->next;  // Move fast by two steps
        }
        
        // Slow is now at the middle node, delete it
        prev->next = slow->next;
        
        return head;
    }
};

//Case 1
//Case 2
//Case 3
//Input
//head =
//[1,3,4,7,1,2,6]
//Output
//[1,3,4,1,2,6]
//Expected*/
