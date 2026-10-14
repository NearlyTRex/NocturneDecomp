#include "common/math/vector3f.h"

#include <gtest/gtest.h>

#include <cmath>
#include <limits>

namespace nocturne::common {
namespace {

TEST(CVector3f, StartsAtTheOrigin) {
    const CVector3f v;
    EXPECT_EQ(v.x, 0.0F);
    EXPECT_EQ(v.y, 0.0F);
    EXPECT_EQ(v.z, 0.0F);
}

TEST(CVector3f, LengthIsEuclidean) {
    EXPECT_FLOAT_EQ((CVector3f{.x = 3.0F, .y = 4.0F, .z = 12.0F}).length(), 13.0F);
    EXPECT_FLOAT_EQ((CVector3f{.x = -2.0F, .y = 0.0F, .z = 0.0F}).length(), 2.0F);
    EXPECT_EQ(CVector3f{}.length(), 0.0F);
}

TEST(CVector3f, ZeroLeavesPositiveZeros) {
    CVector3f v{.x = -0.0F, .y = 5.0F, .z = -7.5F};
    v.zero();
    EXPECT_EQ(v.x, 0.0F);
    EXPECT_EQ(v.y, 0.0F);
    EXPECT_EQ(v.z, 0.0F);
    EXPECT_FALSE(std::signbit(v.x));
}

TEST(CVector3f, ToFixed8ScalesByTwoHundredFiftySix) {
    const CVector3f v{.x = 1.5F, .y = -2.25F, .z = 0.001F};
    EXPECT_EQ(v.toFixed8(), (CVector3i{.x = 384, .y = -576, .z = 0}));
}

// FISTP under the default control word: halves go to the even neighbour, not away from zero.
TEST(CVector3f, ToFixed8RoundsHalvesToEven) {
    const CVector3f v{.x = 0.5F / 256.0F, .y = 1.5F / 256.0F, .z = -2.5F / 256.0F};
    EXPECT_EQ(v.toFixed8(), (CVector3i{.x = 0, .y = 2, .z = -2}));
}

TEST(CVector3f, EqualsComparesEveryComponentExactly) {
    const CVector3f a{.x = 1.0F, .y = 2.0F, .z = 3.0F};
    EXPECT_TRUE(a.equals(a));
    EXPECT_FALSE(a.equals({.x = 1.5F, .y = 2.0F, .z = 3.0F}));
    EXPECT_FALSE(a.equals({.x = 1.0F, .y = 2.5F, .z = 3.0F}));
    EXPECT_FALSE(a.equals({.x = 1.0F, .y = 2.0F, .z = 3.5F}));
    EXPECT_TRUE((CVector3f{.x = -0.0F}).equals(CVector3f{}));
    const float nan = std::numeric_limits<float>::quiet_NaN();
    EXPECT_FALSE((CVector3f{.x = nan}).equals(CVector3f{.x = nan}));
}

} // namespace
} // namespace nocturne::common
