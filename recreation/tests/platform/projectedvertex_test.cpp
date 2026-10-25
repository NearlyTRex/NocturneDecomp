#include "platform/projectedvertex.h"

#include <gtest/gtest.h>

#include <bit>
#include <cstdint>
#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(SProjectedVertex, HoldsTheEyeSpacePointAndFixedPointScreenPosition) {
    static_assert(std::is_same_v<decltype(SProjectedVertex::transformed_x), int>);
    static_assert(std::is_same_v<decltype(SProjectedVertex::transformed_y), int>);
    static_assert(std::is_same_v<decltype(SProjectedVertex::transformed_z), int>);
    static_assert(std::is_same_v<decltype(SProjectedVertex::inv_z), int>);
    static_assert(std::is_same_v<decltype(SProjectedVertex::screen_x), int>);
    static_assert(std::is_same_v<decltype(SProjectedVertex::screen_y), int>);
    const SProjectedVertex vertex;
    EXPECT_EQ(vertex.transformed_x, 0);
    EXPECT_EQ(vertex.transformed_y, 0);
    EXPECT_EQ(vertex.transformed_z, 0);
    EXPECT_EQ(vertex.inv_z, 0);
    EXPECT_EQ(vertex.screen_x, 0);
    EXPECT_EQ(vertex.screen_y, 0);
}

// Each flag is negative, so one sign test tells a clipped vertex from a position.
TEST(SProjectedVertex, ClipFlagsAreTheSignBitAndOneBitPerSide) {
    static_assert(std::bit_cast<std::uint32_t>(SProjectedVertex::kClipRight) == 0x80000001U);
    static_assert(std::bit_cast<std::uint32_t>(SProjectedVertex::kClipLeft) == 0x80000002U);
    static_assert(std::bit_cast<std::uint32_t>(SProjectedVertex::kClipTop) == 0x80000004U);
    static_assert(std::bit_cast<std::uint32_t>(SProjectedVertex::kClipBottom) == 0x80000008U);
    static_assert(std::bit_cast<std::uint32_t>(SProjectedVertex::kClipNear) == 0x80000010U);
}

} // namespace
} // namespace nocturne::platform
