/* Link list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
       if(k==1) return NULL ; // matlab sabhi node delete krni hai
       Node* temp=head;
       Node* prev=NULL;
       Node* curr=NULL;
       int count=1;
       while(temp){
           if(count%k==0){
               curr=temp;
               prev->next=temp->next;
               temp=temp->next;
               delete curr;
           }
           else{
              prev=temp;
              temp=temp->next;
           }
           
           count++;
       }
       
       return head;
    }
};