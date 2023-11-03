#include <iostream>
#include <gtest/gtest.h>
#include "include/calc.hpp"

TEST(test_group, test_1) {
    // Arange
    int a = 5, b = 6;
    int c;
    // Act 
    c = plus(a, b);
    // Assert
    ASSERT_EQ(c, a + b);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
