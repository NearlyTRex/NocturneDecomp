#include "core/cloth/cloth_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreClothFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&fastInvSqrt), float (*)(float)>);
}

TEST(CoreClothFunctions, TheReciprocalSquareRootIsExactAtPowersOfFour) {
    EXPECT_EQ(fastInvSqrt(1.0F), 1.0F);
    EXPECT_EQ(fastInvSqrt(4.0F), 0.5F);
    EXPECT_EQ(fastInvSqrt(0.25F), 2.0F);
}

// 0x40000000 halved is 0x20000000, leaving 0x3f400000.
TEST(CoreClothFunctions, BetweenThemItIsOnlyRough) {
    EXPECT_EQ(fastInvSqrt(2.0F), 0.75F);
}

} // namespace
} // namespace nocturne::core
