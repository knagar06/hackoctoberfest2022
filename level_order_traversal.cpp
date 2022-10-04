class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        if(root==null)return new LinkedList<>();
        List<List<Integer>>res = new LinkedList<>();
        
        
        Queue<TreeNode> q = new LinkedList<>();
        
        q.add(root);
        
        while(!q.isEmpty()){
            List<Integer> li = new LinkedList<>();
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode curr = q.poll();
                li.add(curr.val);
                if(curr.left!=null)q.offer(curr.left);
                if(curr.right!=null)q.offer(curr.right);
            }
            res.add(li);
        }
        return res;
    }
}
