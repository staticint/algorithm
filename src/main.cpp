#include "sort/insertion_sort.hpp"
#include "sort/selection_sort.hpp"
#include "string/match.hpp"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;
using namespace algorithm::sort;
using namespace algorithm::string;

template <typename T>
inline std::string join(vector<T> const &input, char separator = ',') {
	return std::accumulate(input.begin()+1, input.end(), std::to_string(input[0]), [separator](const std::string& a, int b){
		return a + separator + std::to_string(b);
	});
}

int main(int argc, char **argv) 
{
	cout << "selection sort\n";
	vector<int> input = {{12,8,55,3,76,9}};
	cout << join(input) << "\n";

	selection_sort(input);
	cout << join(input) << "\n\n";

	cout << "insertion sort\n";
	input = {{12,8,55,3,76,9}};
	cout << join(input) << "\n";

	insertion_sort(input);
	cout << join(input) << "\n\n";

	string haystack = "this is a test to see if we can find the substring";
	string needle = "test";
	cout << '"' << needle << "\" is found in \"" << haystack << '"' << " at position " << match(needle,haystack) << ".\n\n";
	return 0;
}
