#include "platform/mrglvertex.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(SMRGLVertex, HoldsAnIndexAndItsOwnTextureCoordinates) {
    static_assert(std::is_same_v<decltype(SMRGLVertex::vertex_index), int>);
    static_assert(std::is_same_v<decltype(SMRGLVertex::texture_u), int>);
    static_assert(std::is_same_v<decltype(SMRGLVertex::texture_v), int>);
    const SMRGLVertex vertex;
    EXPECT_EQ(vertex.vertex_index, 0);
    EXPECT_EQ(vertex.texture_u, 0);
    EXPECT_EQ(vertex.texture_v, 0);
}

} // namespace
} // namespace nocturne::platform
