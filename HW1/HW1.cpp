#include <iostream>
#include <vector>

template<class T> 
void move_vectors(std::vector<T> & vec_a, std::vector<T>& vec_b)
{
    vec_b = std::move(vec_a);
}

int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(one, two);
    if (one.empty()) { 
        std::cout << "vector a is empty" << std::endl;
    }
    std::cout << "Moved elements: ";
    for (const auto& v : two)
        std::cout << v << " ";
}

