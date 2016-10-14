cmake_minimum_required (VERSION 3.2)

project (main)

# Add CoolProp dependency
set(COOLPROP_STATIC_LIBRARY true CACHE BOOL "Use CoolProp")
add_subdirectory("${CMAKE_SOURCE_DIR}/externals/CoolProp" "CoolProp")

# Define the executable
add_executable (main "${CMAKE_SOURCE_DIR}/mycode.cpp")

# Link the bits together
target_link_libraries (main CoolProp)