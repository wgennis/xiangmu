class Solution {
    public int maximalSquare(char[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        int[][] ans=new int[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                ans[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(matrix[i-1][j-1]=='1')
                {
                    ans[i][j]=Math.min(ans[i-1][j-1],Math.min(ans[i-1][j],ans[i][j-1]))+1;
                }
            }
        }
        int max=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                max=Math.max(max,ans[i][j]);
            }
        }
        return max*max;

    }
}

