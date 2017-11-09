#ifndef CUSTOM_TYPE_TRAITS_H
#define CUSTOM_TYPE_TRAITS_H

#include <vector>
#include <array>
#include <type_traits>

namespace custom_type_traits{

template<typename T>
struct is_vector_or_array : std::false_type { };

template<typename T>
struct is_vector_or_array<std::vector<T>> : std::true_type{ };

template<typename T, std::size_t array_size>
struct is_vector_or_array<std::array<T, array_size>> : std::true_type{ };

} // end namespace


#endif
