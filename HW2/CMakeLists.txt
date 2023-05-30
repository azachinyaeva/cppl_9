cmake_minimum_required (VERSION 3.8)

project ("HW2")

add_executable (HW2 "HW2.cpp" "big_integer.h")

target_compile_features("HW2" PRIVATE cxx_std_17)
