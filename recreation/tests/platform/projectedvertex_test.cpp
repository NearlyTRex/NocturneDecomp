#include "platform/projectedvertex.h"

#include <gtest/gtest.h>

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
    static_assert(SProjectedVertex::kClipRight == static_cast<int>(0x80000001U));
    static_assert(SProjectedVertex::kClipLeft == static_cast<int>(0x80000002U));
    static_assert(SProjectedVertex::kClipBottom == static_cast<int>(0x80000004U));
    static_assert(SProjectedVertex::kClipTop == static_cast<int>(0x80000008U));
    static_assert(SProjectedVertex::kClipNear == static_cast<int>(0x80000010U));
}

} // namespace
} // namespace nocturne::platform
