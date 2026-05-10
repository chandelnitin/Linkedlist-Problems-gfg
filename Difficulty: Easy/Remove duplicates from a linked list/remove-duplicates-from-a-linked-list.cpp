/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        unordered_set<int>st;
        Node* prev=NULL;
        Node* first=head;
        while(first){
           if(st.find(first->data)!=st.end()){
               prev->next=first->next;
           }
           else{
               st.insert(first->data);
               prev=first;
           }
           
           first=first->next;
        }
        
        return head;
    }
};