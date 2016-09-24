#include <iostream>

int main(){
        std::vector<int> input = {1,2,4,7,10};
        target = 11;
        int a = 0;
        int b = numbers.size() - 1;
        int sum;
        sum = numbers[a] + numbers[b];
        while(a < b && sum != target){
            if(sum < target)
                a++;
            else
                b--;
            sum = numbers[a] + numbers[b];
        }
        return vector<int>{a+1, b+1};
}
