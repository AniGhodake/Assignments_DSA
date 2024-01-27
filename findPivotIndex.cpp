//                                    -------------LEETCODE PROBLEM 724-----------------

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++){
//             int lsum = 0, rsum = 0;

//             for(int j = 0; j < i; j++){
//                 lsum = lsum + nums[j];
//             }

            // for(int j = i+1; j < nums.size(); j++)//----  Right answer but takes too much memory and time
//                 rsum = rsum + nums[j];              
                                                           // ------   Runtime 1979ms and memory 31.5MB
//             }

//             if(lsum == rsum){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>lsum(nums.size(),0);
        vector<int>rsum(nums.size(),0);

        for(int i = 1; i < nums.size(); i++){
            lsum[i] = lsum[i-1] + nums[i-1];
        }

        for(int i = nums.size()-2; i >= 0; --i){    // ----------    runtime 39ms and memory 32.6 MB
            rsum[i] = rsum[i+1] + nums[i+1];
        }

        for(int i = 0; i < nums.size(); ++i){
            if(lsum[i]==rsum[i]){
                return i;
            }
        }
        return -1;
    }
};

