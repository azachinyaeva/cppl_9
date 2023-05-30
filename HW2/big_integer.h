#pragma once

class big_integer {

private:
    std::string num;
public:
    big_integer(std::string num_) : num(num_) {}
    big_integer(const big_integer& other) : big_integer(other.num) {}
    big_integer(big_integer&& other) noexcept : num(std::exchange(num, other.num)) {}

    big_integer& operator=(big_integer&& other) noexcept
    {
        std::swap(num, other.num);
        return *this;
    }
    int operator+(big_integer& other)
    {
        return std::stoi(num) + std::stoi(other.num);
    }
    unsigned long long operator*(big_integer& other)
    {
        auto result =  std::stoll(num) * std::stoll(other.num);
        return result;

    }
};
