/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
        void inorder(TreeNode* root, vector<int>&a){
            if(root==nullptr){
                return;
            }
            
            // traverse left subtree
            inorder(root->left, a);
            // store value of root on which we are standing
            a.push_back(root->val);
            // process the right subtree
            inorder(root->right,a);
        }

public:
    int kthSmallest(TreeNode* root, int k) {
        // creating a vector of int
        vector<int>a;
        //calling inorder traversal
        inorder(root, a);
        //returning the ans..
        return a[k-1];
    }
};


input:-[3,1,4,null,2]
output:-1
