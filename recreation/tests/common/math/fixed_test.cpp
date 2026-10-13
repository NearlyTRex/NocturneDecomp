#include "common/math/fixed.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

TEST(Fixed, MultipliesSixteenSixteenValues) {
    EXPECT_EQ(fixedMultiply(0x18000, 0x20000), 0x30000);
    EXPECT_EQ(fixedMultiply(-0x10000, 0x8000), -0x8000);
}

TEST(Fixed, TheFractionIsChoppedTowardMinusInfinity) {
    EXPECT_EQ(fixedMultiply(1, 1), 0);
    EXPECT_EQ(fixedMultiply(-1, 1), -1);
}

TEST(Fixed, AnOverflowKeepsTheLowThirtyTwoBits) {
    EXPECT_EQ(fixedMultiply(0x7fffffff, 0x20000), -2);
}

TEST(Fixed, AddingAndSubtractingWrapAtThirtyTwoBits) {
    EXPECT_EQ(wrappingAdd(3, 4), 7);
    EXPECT_EQ(wrappingAdd(0x7fffffff, 1), -0x7fffffff - 1);
    EXPECT_EQ(wrappingSubtract(3, 4), -1);
    EXPECT_EQ(wrappingSubtract(-0x7fffffff - 1, 1), 0x7fffffff);
}

} // namespace
} // namespace nocturne::common
