#include <iostream>
#include <vector>


int main()
{
	std::vector<int> input = { 1,2,4,6,10 };
	int target = 11;
	int a = 0;
        int b = input.size() - 1;
	int sum;
	sum = input[a] + input[b];
	while (a < b && sum != target) {
		if (sum < target)
			a++;
		else
			b--;
		sum = input[a] + input[b];
	}
	std::cout << "The indices are " << a + 1 << " " << b + 1 << std::endl;

	return 0;
}
