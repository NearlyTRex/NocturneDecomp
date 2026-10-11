#include "common/math/math.h"

#include <gtest/gtest.h>

#include <cmath>

namespace nocturne::common {
namespace {

// The original's constants: a float pi a little past the double one it wraps against.
constexpr float kPiFloat = 3.1415927F;
constexpr float kTurn = 6.283185F;

TEST(AngleFromSinCos, AwayFromThePolesTheSineDecides) {
    EXPECT_EQ(angleFromSinCos(0.0, 1.0), 0.0F);
    EXPECT_FLOAT_EQ(angleFromSinCos(0.5, 0.8), static_cast<float>(std::asin(0.5)));
    EXPECT_FLOAT_EQ(angleFromSinCos(-0.5, 0.8), static_cast<float>(std::asin(-0.5)));
}

TEST(AngleFromSinCos, ANegativeCosineReflectsThroughAHalfTurn) {
    const auto asin_half = static_cast<float>(std::asin(0.5));
    EXPECT_FLOAT_EQ(angleFromSinCos(0.5, -0.8), static_cast<float>(3.14159265359 - asin_half));
}

TEST(AngleFromSinCos, PastAHalfTurnWrapsToTheOtherSide) {
    const auto asin_half = static_cast<float>(std::asin(-0.5));
    const auto reflected = static_cast<float>(3.14159265359 - asin_half);
    EXPECT_FLOAT_EQ(angleFromSinCos(-0.5, -0.8), reflected - kTurn);
}

// Its float pi lies past the double pi it wraps against, so a half turn comes back negative.
TEST(AngleFromSinCos, AHalfTurnComesBackAsMinusAHalfTurn) {
    EXPECT_FLOAT_EQ(angleFromSinCos(0.0, -0.2), kPiFloat - kTurn);
}

TEST(AngleFromSinCos, NearThePolesTheCosineDecides) {
    EXPECT_FLOAT_EQ(angleFromSinCos(1.0, 0.0), static_cast<float>(std::acos(0.0)));
    EXPECT_FLOAT_EQ(angleFromSinCos(-1.0, 0.0), -static_cast<float>(std::acos(0.0)));
    EXPECT_FLOAT_EQ(angleFromSinCos(0.8, 0.6), static_cast<float>(std::acos(0.6)));
}

TEST(AngleFromSinCos, NearThePolesTheCosineIsClamped) {
    EXPECT_EQ(angleFromSinCos(0.9, 1.5), 0.0F);
    EXPECT_FLOAT_EQ(angleFromSinCos(0.8, -1.0), kPiFloat - kTurn);
    // Negated past minus a half turn, it wraps back up.
    EXPECT_FLOAT_EQ(angleFromSinCos(-0.8, -1.0), -kPiFloat + kTurn);
}

} // namespace
} // namespace nocturne::common
