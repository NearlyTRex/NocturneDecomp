#include "platform/rendervertex.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(SRenderVertex, HoldsAProjectedVertexWithTextureAndColour) {
    static_assert(std::is_same_v<decltype(SRenderVertex::projected_vertex), SProjectedVertex>);
    static_assert(std::is_same_v<decltype(SRenderVertex::u), int>);
    static_assert(std::is_same_v<decltype(SRenderVertex::a), int>);
    const SRenderVertex vertex;
    EXPECT_EQ(vertex.projected_vertex.screen_x, 0);
    EXPECT_EQ(vertex.u, 0);
    EXPECT_EQ(vertex.v, 0);
    EXPECT_EQ(vertex.r, 0);
    EXPECT_EQ(vertex.g, 0);
    EXPECT_EQ(vertex.b, 0);
    EXPECT_EQ(vertex.a, 0);
}

} // namespace
} // namespace nocturne::platform
