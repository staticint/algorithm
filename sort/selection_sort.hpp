#ifndef ALGORITHM_SORT_SELECTION_SORT_HPP
#define ALGORITHM_SORT_SELECTION_SORT_HPP


#include <utility>
#include <vector>

namespace algorithm::sort {
namespace {

template <typename T>
void selection_sort_inplace(T *type,size_t size)
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



void selection_sort_inplace(std::vector<int> &input) {
	selection_sort_inplace<int>(input.data(),input.size());
}


} // namespace algorithm::sort


#endif // ALGORITHM_SORT_SELECTION_SORT_HPP
