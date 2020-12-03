//
// Created by lavinov on 04.12.2020.
//

#include "gtest/gtest.h"
#include "../sort_lib/sort.h"

TEST (SortTest /*test suite name*/, EmptyArray /*test name*/) {
    int * arr = new int[1];

    sort(arr, arr + 1, [](int a, int b) { return a < b; });

    EXPECT_EQ (4, 2 * 2);
    ASSERT_EQ (0.0, (0.0));
}