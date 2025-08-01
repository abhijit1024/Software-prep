/*  
    https://leetcode.com/problems/binary-tree-preorder-traversal/
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
    vector<int> res;
private:
    void preorder(TreeNode* node) {
        if(!node) {
            return;
        }
        res.push_back(node->val);
        preorder(node->left);
        preorder(node->right);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return res;
    }
};