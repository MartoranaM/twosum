#include <iostream>
#include <vector>

int main () {
    std::vector <int> nums {2,7,11,15};
    int target {26};
    
    std::vector <int> newvec {};
    size_t size = nums.size();
    bool check = true;
    for (size_t i{0}; i<size && check == true; i++) {
        for (size_t j{1}; j<size; j++) {
            int sum = nums[i] + nums[j];
            if(sum == target) {
                newvec.push_back(i);
                newvec.push_back(j);
                check = false;
            }
        }
    }
    for (int i: newvec)
        std::cout << i << ' ';
    return 0;
}