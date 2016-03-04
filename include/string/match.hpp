#ifndef ALGORITHM_STRING_MATCH_HPP
#define ALGORITHM_STRING_MATCH_HPP

#include <cstring>
#include <string>


namespace algorithm::string {
namespace {

/**
 * match
 * finds the index of the first match of a sub string in a string.
 * time complexity O(nm)
 *
 * in: haystack the character string to search
 * in: haystack_size of the character string to search
 * in: needle the character string to search for
 * in: needle_size the size of the character string to search for
 **/
inline int basic_match(char const *needle, size_t needle_size, char const *haystack, size_t haystack_size) 
{
	int cursor;
	for (int idx = 0, end = haystack_size - needle_size; idx <= end; ++idx)
	{
		for (cursor = 0; cursor < needle_size; ++cursor) 
		{
			if (haystack[idx+cursor] != needle[cursor])
			{
				break;
			}
		}
		if (cursor == needle_size) return idx;
	}
	
	return -1;
}

} // anonymous namespace


int match(std::string const &needle, std::string const &haystack) 
{
	return basic_match(needle.data(),needle.size(),haystack.data(),haystack.size());
}

int match (char const *needle, char const *haystack)
{
	return basic_match(needle,strlen(needle),haystack,strlen(haystack));
}



} // namespace algorithm::string



#endif // ALGORITHM_STRING_MATCH_HPP
