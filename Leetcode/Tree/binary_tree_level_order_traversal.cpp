/*
    https://leetcode.com/problems/binary-tree-level-order-traversal/description/
    Time complexity - O(n)
    Space complexity - O(n)
*/
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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) 
            return res;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            vector<int> level;
            int size = q.size();
            
            for(int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                if(node) {
                    level.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if(!level.empty()) {
                res.push_back(level);
            }
        }
        return res;
    }
};