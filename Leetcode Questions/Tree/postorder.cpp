class Solution
{
public:
    vector<int> ans;

    void postorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode *root)
    {

        postorder(root);
        return ans;
    }
};