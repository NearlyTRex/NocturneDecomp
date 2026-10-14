#include "engine/keyframe/keyframe.h"
#include "platform/mrglprimitivequad.h"

#include <gtest/gtest.h>

#include <array>
#include <type_traits>
#include <vector>

namespace nocturne::engine {
namespace {

using common::CVector3i;
using platform::SClipPlane;
using platform::SMRGLPrimitiveQuad;

TEST(EngineKeyframeFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&calculateSurfaceNormal),
                       SClipPlane (*)(std::span<const CVector3i>, const SMRGLPrimitiveQuad &)>);
    static_assert(
        std::is_same_v<decltype(&loadAndInterpolateKeyframes), void (*)(SMRGLKeyframeModel *)>);
    static_assert(std::is_same_v<decltype(&interpolateCubicKeyframes),
                                 SMRGLHeaderExtended *(*)(SMRGLKeyframeModel *)>);
}

SMRGLPrimitiveQuad polygonOf(std::initializer_list<int> indices) {
    SMRGLPrimitiveQuad polygon;
    for (const int index : indices) {
        polygon.vertices.push_back({.vertex_index = index});
    }
    return polygon;
}

// A triangle in the plane z = 2, wound so its normal points along +z.
constexpr std::array<CVector3i, 4> kVertices{
    CVector3i{.x = 0, .y = 0, .z = 2}, CVector3i{.x = 4, .y = 0, .z = 2},
    CVector3i{.x = 4, .y = 4, .z = 2}, CVector3i{.x = 9, .y = 9, .z = 9}};

TEST(EngineKeyframeFunctions, ThePlaneHasAUnitNormalScaledTo65535AndItsDistance) {
    EXPECT_EQ(calculateSurfaceNormal(kVertices, polygonOf({0, 1, 2})),
              (SClipPlane{.a = 0, .b = 0, .c = 65535, .d = 131070}));
}

TEST(EngineKeyframeFunctions, ReversedWindingFlipsTheNormal) {
    EXPECT_EQ(calculateSurfaceNormal(kVertices, polygonOf({2, 1, 0})),
              (SClipPlane{.a = 0, .b = 0, .c = -65535, .d = -131070}));
}

TEST(EngineKeyframeFunctions, OnlyTheFirstThreeCornersCount) {
    EXPECT_EQ(calculateSurfaceNormal(kVertices, polygonOf({0, 1, 2, 3})),
              calculateSurfaceNormal(kVertices, polygonOf({0, 1, 2})));
}

TEST(EngineKeyframeFunctions, ComponentsRoundToNearest) {
    // A normal along (1, 1, 1): 65535 over root three is 37836.68 each, and the distance from
    // (4, 0, 0) is four of those, 151346.7.
    constexpr std::array<CVector3i, 3> slope{CVector3i{.x = 4, .y = 0, .z = 0},
                                             CVector3i{.x = 0, .y = 4, .z = 0},
                                             CVector3i{.x = 0, .y = 0, .z = 4}};
    EXPECT_EQ(calculateSurfaceNormal(slope, polygonOf({0, 1, 2})),
              (SClipPlane{.a = 37837, .b = 37837, .c = 37837, .d = 151347}));
}

TEST(EngineKeyframeFunctions, ThreeCornersOnALineMakeNoNormal) {
    constexpr std::array<CVector3i, 3> line{CVector3i{.x = 0}, CVector3i{.x = 1},
                                            CVector3i{.x = 2}};
    EXPECT_EQ(calculateSurfaceNormal(line, polygonOf({0, 1, 2})), SClipPlane{});
}

TEST(EngineKeyframeFunctions, TooFewCornersOrABadIndexMakeNoPlane) {
    EXPECT_EQ(calculateSurfaceNormal(kVertices, polygonOf({0, 1})), SClipPlane{});
    EXPECT_EQ(calculateSurfaceNormal(kVertices, polygonOf({0, 1, 4})), SClipPlane{});
    EXPECT_EQ(calculateSurfaceNormal(kVertices, polygonOf({-1, 1, 2})), SClipPlane{});
}

} // namespace
} // namespace nocturne::engine
