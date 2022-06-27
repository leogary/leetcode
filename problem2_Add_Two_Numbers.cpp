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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,temp=0,count=0;
        ListNode *head=new ListNode(0);
        if(l1==NULL){
            return l2;
        }
        else if(l2==NULL){
            return l1;
        }
        else{
            sum=(l1->val+l2->val)%10;
            temp=(l1->val+l2->val)/10;
            
            l1=l1->next;
            l2=l2->next;
        }
        ListNode *cur=new ListNode(sum);
        head->next=cur;
        while(l1!=NULL&&l2!=NULL){
            
            sum=(l1->val+l2->val+temp)%10;
            temp=(l1->val+l2->val+temp)/10;
            ListNode *nextnode=new ListNode(sum);
            //cout<<l1->val<<"  "<<l2->val<<"  "<<temp<<"  "<<sum<<endl;
            cur->next=nextnode;
            cur=cur->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            sum=(l1->val+temp)%10;
            temp=(l1->val+temp)/10;
            ListNode *nextnode=new ListNode(sum);
            cur->next=nextnode;
            cur=cur->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            sum=(l2->val+temp)%10;
            temp=(l2->val+temp)/10;
            ListNode *nextnode=new ListNode(sum);
            cur->next=nextnode;
            cur=cur->next;
            l2=l2->next;
        }
        if(temp==1){
            ListNode *nextnode=new ListNode(1);
            cur->next=nextnode;
            cur=cur->next;
        }
        return head->next;
    }
};