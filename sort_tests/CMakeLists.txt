project(sort_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# adding the Google_Tests_run target
add_executable(sort_tests_run sort_tests.cpp)

# linking Google_Tests_run with DateConverter_lib which will be tested
target_link_libraries(sort_tests_run sort_lib)
target_link_libraries(sort_tests_run gtest gtest_main)