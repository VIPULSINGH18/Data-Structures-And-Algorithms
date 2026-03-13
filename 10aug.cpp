class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        int max_width=0;

        while(q.size()>0){
            int curr_level= q.size();
            unsigned long long st_idx= q.front().second;
            unsigned long long e_idx= q.back().second;

            max_width= max(max_width,(int)(e_idx-st_idx+1));
            for(int i=0;i<curr_level;i++){
            
        
            TreeNode* curr=q.front().first;
            unsigned long long idx= q.front().second;
            q.pop();
            
                if(curr->left!=NULL){
                    q.push({curr->left,idx*2+1});
                }
                if(curr->right!=NULL){
                    q.push({curr->right,idx*2+2});
                } 
            }
        }
        return max_width;
        
    }
}; /*hello*/
