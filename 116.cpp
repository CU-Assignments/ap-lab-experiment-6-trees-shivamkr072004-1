class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            Node* parent = NULL;
            for(int i = 0; i < n; i++){
                auto node = q.front();
                q.pop();
                if(parent == NULL) parent = node;
                else{
                    parent -> next = node;
                    parent = node;
                }
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
        }
        return root;
    }
};

input:-[1,2,3,4,5,6,7]
  output:-[1,#,2,3,#,4,5,6,7,#]
