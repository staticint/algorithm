#ifndef ALGORITHM_SORT_SELECTION_SORT_HPP
#define ALGORITHM_SORT_SELECTION_SORT_HPP

#include <utility>
#include <vector>

namespace algorithm::sort {
namespace {

/**
 * selection_sort_inplace
 * Sort values in place. Time complexity O(n^2). Space complexity O(1).
 * This function is not boundry safe and should only be accessed by 
 * functions that implement type/boundary safety.
 * 
 * in: type template value of a comparable type
 * in: size the number of elements
 **/
template <typename T>
inline void selection_sort_inplace(T *type,size_t size)
{
	int min;	// index of minimum

	for (size_t idx = 0, end = size; idx < end; ++idx)
	{
		min = idx;
		for (size_t jdx = idx + 1; jdx < end; ++jdx)
		{
			if (type[jdx] < type[min]) { min = jdx; }
		}
		std::swap(type[idx], type[min]);
	}
}

} // anonymous namespace



template <typename T>
void selection_sort(std::vector<T> &input) {
	selection_sort_inplace<T>(input.data(),input.size());
}


} // namespace algorithm::sort


#endif // ALGORITHM_SORT_SELECTION_SORT_HPP
