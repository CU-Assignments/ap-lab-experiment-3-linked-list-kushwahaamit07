class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify code
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;

        // Traverse both lists and merge them
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;  // Move list1 pointer
            } else {
                current->next = list2;
                list2 = list2->next;  // Move list2 pointer
            }
            current = current->next;  // Move current pointer
        }

        // If one of the lists is not exhausted, append the rest of the other list
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        // The merged list is next to the dummy node
        return dummy->next;
    }
};

//Input
//list1 =
//[1,2,4]
//list2 =
//[1,3,4]
//Output
//[1,1,2,3,4,4]
//Expected
//[1,1,2,3,4,4]
