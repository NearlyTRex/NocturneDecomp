#include "core/moon/moon_functions.h"

#include <gtest/gtest.h>

#include <bit>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreMoonFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&getBatAmbient), int (*)(float, int)>);
}

// Expected values are nocedit's own, from CMoon::render's machine code.
TEST(GetBatAmbient, FallsOverTheFirstHalfOfTheCourse) {
    EXPECT_EQ(getBatAmbient(0.0F, 179), 0x2000);
    EXPECT_EQ(getBatAmbient(std::bit_cast<float>(0x420289d7U), 179), 5204);
    EXPECT_EQ(getBatAmbient(194.0F, 408), 401);
}

TEST(GetBatAmbient, RoundsTheRatioToFloatJustBeforeHalfway) {
    EXPECT_EQ(getBatAmbient(std::bit_cast<float>(0x42daffbbU), 219), 0);
}

TEST(GetBatAmbient, RisesOverTheSecondHalf) {
    EXPECT_EQ(getBatAmbient(204.0F, 408), 0);
    EXPECT_EQ(getBatAmbient(115.0F, 179), 1167);
    EXPECT_EQ(getBatAmbient(std::bit_cast<float>(0x43361204U), 219), 2714);
    EXPECT_EQ(getBatAmbient(std::bit_cast<float>(0x43b19e9dU), 408), 3036);
}

} // namespace
} // namespace nocturne::core
