#ifndef ALGORITHM_SORT_INSERTION_SORT_HPP
#define ALGORITHM_SORT_INSERTION_SORT_HPP

#include <utility>
#include <vector>

namespace algorithm::sort {
namespace {

/**
 * insertion_sort_inplace
 * Sort values in place. Time complexity O(n^2). Space complexity O(1).
 * This function is not boundry safe and should only be accessed by 
 * functions that implement type/boundary safety.
 * 
 * in: type template value of a comparable type
 * in: size the number of elements
 **/
template <typename T>
inline void insertion_sort_inplace(T *type,size_t size)
{
	int min;	// index of minimum

	for (size_t idx = 1, end = size; idx < end; ++idx)
	{
		min = idx;
		while (0 < min && type[min] < type[min-1])
		{
			std::swap(type[min], type[min-1]);
			min = min-1;
		}
	}
}

} // anonymous namespace



template <typename T>
void insertion_sort(std::vector<T> &input) {
	insertion_sort_inplace<T>(input.data(),input.size());
}


} // namespace algorithm::sort


#endif // ALGORITHM_SORT_INSERTION_SORT_HPP
