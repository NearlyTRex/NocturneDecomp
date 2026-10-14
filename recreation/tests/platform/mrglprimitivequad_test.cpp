#include "platform/mrglprimitivequad.h"

#include <gtest/gtest.h>

#include <type_traits>
#include <vector>

namespace nocturne::platform {
namespace {

TEST(SMRGLPrimitiveQuad, OwnsAnyNumberOfCorners) {
    static_assert(std::is_same_v<decltype(SMRGLPrimitiveQuad::vertices), std::vector<SMRGLVertex>>);
    EXPECT_TRUE(SMRGLPrimitiveQuad{}.vertices.empty());
    const SMRGLPrimitiveQuad polygon{.surface_normal = {}, .vertices = std::vector<SMRGLVertex>(6)};
    EXPECT_EQ(polygon.vertices.size(), 6U);
}

TEST(SMRGLPrimitiveQuad, StartsWithNoPlane) {
    EXPECT_EQ(SMRGLPrimitiveQuad{}.surface_normal, SClipPlane{});
}

} // namespace
} // namespace nocturne::platform
