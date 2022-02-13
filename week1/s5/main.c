class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int ans=0;
        for(int i=0;i<grid.length;i++)
        {
            for(int j=0;j<grid[0].length;j++)
            {
                if(grid[i][j]==1)
                ans=Math.max(dfs(grid,i,j),ans);
            }
        }
        return ans;
    }
    public int dfs(int[][] grid,int i,int j)
    {
        int area=1;
        grid[i][j]=2;
        if(i-1>=0&&grid[i-1][j]==1)
        {
            area+=dfs(grid,i-1,j);
        }
        if(i+1<grid.length&&grid[i+1][j]==1)
        {
            area+=dfs(grid,i+1,j);
        }
        if(j-1>=0&&grid[i][j-1]==1)
        {
            area+=dfs(grid,i,j-1);
        }
        if(j+1<grid[i].length&&grid[i][j+1]==1)
        {
            area+=dfs(grid,i,j+1);
        }
        return area;
    }
    }
