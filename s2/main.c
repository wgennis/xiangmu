class Solution {
    public int numSquares(int n) {
        int[] ans=new int[n+1];
        ans[0]=0;
        for(int i=1;i<=n;i++)
        {
            ans[i]=100000;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j*j<=i;j++)
            {
                ans[i]=Math.min(ans[i],ans[i-j*j]+1);
            }
        }
        return ans[n];
        

    }
}
