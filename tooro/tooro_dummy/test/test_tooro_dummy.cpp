/**
* Copyright 2015 Owner
*/

#include <gtest/gtest.h>

TEST(SimpleCppTestSuite, simpleCppTest)
{
    ASSERT_TRUE(true);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
