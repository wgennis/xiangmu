class Solution {
    public int numIslands(char[][] grid) {
        int i,j;
        int area=0;
        for(i=0;i<grid.length;i++)
        {
            for(j=0;j<grid[i].length;j++)
            {
                if(grid[i][j]=='1')
                {
                    area++;
                    dfs(grid,i,j); 
                }
            }
        }
        return area;
    }
    public void dfs(char[][] grid,int i,int j)
    {
        grid[i][j]='2';
        if(i-1>=0&&grid[i-1][j]=='1')
        {
            dfs(grid,i-1,j);
        }
        if(i+1<grid.length&&grid[i+1][j]=='1')
        {
            dfs(grid,i+1,j);
        }
        if(j-1>=0&&grid[i][j-1]=='1')
        {
            dfs(grid,i,j-1);
        }
        if(j+1<grid[i].length&&grid[i][j+1]=='1')
        {
            dfs(grid,i,j+1);
        }
    }
}
