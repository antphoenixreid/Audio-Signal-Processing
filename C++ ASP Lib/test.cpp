#include "DFT.cpp"
#include <gtest/gtest.h>

// Initial Test
TEST(DFT_Test, Simple)
{
  ASSERT_EQ([(0.0,0.0), (0.0,0.0), (4.0,0.0), (0.0,0.0)], DFT([1, -1, 1, -1]));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
