class Solution {
    public int minPathSum(int[][] grid) {
        int m=grid.length;
        int n=grid[0].length;
        int[][] M=new int[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0&&j==0)
                {
                    M[i][j]=grid[i][j];
                }
                else if(i==0)
                {
                    M[i][j]=M[i][j-1]+grid[i][j];
                }
                else if(j==0)
                {
                    M[i][j]=M[i-1][j]+grid[i][j];
                }
                else
                {
                    M[i][j]=Math.min(M[i-1][j]+grid[i][j],M[i][j-1]+grid[i][j]);
                }
            }
        }
        return M[m-1][n-1];

    }
}
