/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
Complexity: O(log n)
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return NULL;
        while(root!=NULL)
        {
            if(p->val<root->val && q->val<root->val)
                root=root->left;
            else if(p->val>root->val && q->val>root->val)
                root=root->right;
            else break;
        }
        return root;
    }
};
