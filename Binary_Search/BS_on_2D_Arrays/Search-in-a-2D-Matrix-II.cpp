#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool OptimalApproach(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        int i = 0, j = m - 1;
        while (i < n and j >= 0)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}