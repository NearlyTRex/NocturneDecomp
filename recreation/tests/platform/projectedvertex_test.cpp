#include "platform/projectedvertex.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(SProjectedVertex, HoldsDepthAndFixedPointScreenPosition) {
    static_assert(std::is_same_v<decltype(SProjectedVertex::transformed_z), int>);
    static_assert(std::is_same_v<decltype(SProjectedVertex::screen_x), int>);
    static_assert(std::is_same_v<decltype(SProjectedVertex::screen_y), int>);
    const SProjectedVertex vertex;
    EXPECT_EQ(vertex.transformed_z, 0);
    EXPECT_EQ(vertex.screen_x, 0);
    EXPECT_EQ(vertex.screen_y, 0);
}

} // namespace
} // namespace nocturne::platform
