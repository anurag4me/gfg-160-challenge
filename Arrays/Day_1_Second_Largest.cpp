// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        // Code Here
        int max1, max2;
        if (arr[0] > arr[1])
        {
            max1 = arr[0];
            max2 = arr[1];
        }
        else
        {
            max1 = arr[1];
            max2 = arr[0];
        }
        for (int i = 2; i < arr.size(); i++)
        {
            if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] > max2 && arr[i] < max1)
            {
                max2 = arr[i];
            }
        }

        return max2;
    }
};