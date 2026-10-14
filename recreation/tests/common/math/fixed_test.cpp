#include "common/math/fixed.h"

#include <gtest/gtest.h>

#include <cstdint>
#include <limits>

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

TEST(Fixed, TruncatingChopsTowardZero) {
    EXPECT_EQ(truncateToInt(2.9), 2);
    EXPECT_EQ(truncateToInt(-2.9), -2);
    EXPECT_EQ(truncateToInt(-2147483648.9), -0x7fffffff - 1);
}

TEST(Fixed, TruncatingWhatNoIntHoldsGivesTheIntegerIndefinite) {
    constexpr std::int32_t kIndefinite = -0x7fffffff - 1;
    EXPECT_EQ(truncateToInt(2147483648.0), kIndefinite);
    EXPECT_EQ(truncateToInt(-2147483649.0), kIndefinite);
    EXPECT_EQ(truncateToInt(std::numeric_limits<double>::infinity()), kIndefinite);
    EXPECT_EQ(truncateToInt(std::numeric_limits<double>::quiet_NaN()), kIndefinite);
}

TEST(Fixed, AClipFractionIsTheRatioInOneThirtyOne) {
    EXPECT_EQ(clipFraction(1, 4), 0x20000000);
    EXPECT_EQ(clipFraction(-1, 4), -0x20000000);
    EXPECT_EQ(clipFraction(0, 7), 0);
}

TEST(Fixed, AClipFractionIsHeldAtItsEnds) {
    EXPECT_EQ(clipFraction(4, 4), 0x7fffffff);
    EXPECT_EQ(clipFraction(5, 4), 0x7fffffff);
    EXPECT_EQ(clipFraction(-4, 4), -0x7fffffff - 1);
    EXPECT_EQ(clipFraction(-1, 0), -0x7fffffff - 1);
    EXPECT_EQ(clipFraction(-5, -4), -0x7fffffff - 1);
}

// Negating the most negative denominator leaves it as it is, and nothing is below it.
TEST(Fixed, AClipFractionOverTheMostNegativeDenominatorIsTheLargest) {
    EXPECT_EQ(clipFraction(-0x7fffffff - 1, -0x7fffffff - 1), 0x7fffffff);
}

TEST(Fixed, InterpolatingMovesByTheFraction) {
    EXPECT_EQ(interpolateFraction31(100, 200, 0x40000000), 150);
    EXPECT_EQ(interpolateFraction31(100, 200, 0), 100);
    EXPECT_EQ(interpolateFraction31(200, 100, 0x40000000), 150);
}

// The largest fraction falls just short of one, and the step is chopped toward minus infinity.
TEST(Fixed, InterpolatingByTheLargestFractionFallsJustShort) {
    EXPECT_EQ(interpolateFraction31(0, 100, 0x7fffffff), 99);
    EXPECT_EQ(interpolateFraction31(0, -100, 0x7fffffff), -100);
}

TEST(Fixed, InterpolatingWrapsAtThirtyTwoBits) {
    // The difference wraps to 1, so a fraction of minus one steps back by one.
    EXPECT_EQ(interpolateFraction31(0x7fffffff, -0x7fffffff - 1, -0x7fffffff - 1), 0x7ffffffe);
    // The difference wraps to -1, a half step of it chops to -1, and the sum wraps back up.
    EXPECT_EQ(interpolateFraction31(-0x7fffffff - 1, 0x7fffffff, 0x40000000), 0x7fffffff);
}

} // namespace
} // namespace nocturne::common
