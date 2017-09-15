#include "vector_arithmetic.h"
#include <iostream>

template<typename T>
void print_vec(T& vec)
{
    std::for_each(vec.begin(), vec.end(), 
                    [](auto n)->void{std::cout<<' '<<n;});
    std::cout<<'\n';
}

int main()
{
    std::vector<double> v1{1,1,1,1}, v2{1,1,1,1};
    std::array<double, 4> a1{1,1,1,1}, a2{1,1,1,1};
    
    auto v3 = v1 + v2; // prints {2,2,2,2};
    auto v4 = v3 + a1;
    auto a3 = a1 + v4;
    auto a4 = a2 + a3;
    
    auto result = 2*v4 + a3*25 + a4/2 ;
    
    return EXIT_SUCCESS;
}
