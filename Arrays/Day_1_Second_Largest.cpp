// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        // Code Here
        int max1 = -1, max2 = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] > max2 && arr[i] != max1)
            {
                max2 = arr[i];
            }
        }
        return max2;
    }
};