#include "engine/keyframe/keyframe.h"
#include "platform/mrglprimitivequad.h"

#include <gtest/gtest.h>

#include <array>
#include <limits>
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

// From nocedit's own code: the normal, its length, the scaled normal and the distance are
// stored as floats on the way.
TEST(EngineKeyframeFunctions, ThePlaneRoundsAsTheOriginalDoes) {
    constexpr std::array<CVector3i, 3> first{CVector3i{.x = 70, .y = 83, .z = -51},
                                             CVector3i{.x = 67, .y = 76, .z = 98},
                                             CVector3i{.x = -77, .y = -50, .z = -44}};
    EXPECT_EQ(calculateSurfaceNormal(first, polygonOf({0, 1, 2})),
              (SClipPlane{.a = 43922, .b = -48619, .c = -1400, .d = -889443}));
    constexpr std::array<CVector3i, 3> second{CVector3i{.x = 11, .y = 99, .z = -2},
                                              CVector3i{.x = 63, .y = 32, .z = 7},
                                              CVector3i{.x = -76, .y = -94, .z = -85}};
    EXPECT_EQ(calculateSurfaceNormal(second, polygonOf({0, 1, 2})),
              (SClipPlane{.a = 26844, .b = 12995, .c = -58356, .d = 1698526}));
}

// The original's edges are 32-bit SUBs, which wrap.
TEST(EngineKeyframeFunctions, EdgesWrapAsThirtyTwoBitDifferences) {
    constexpr int kMin = std::numeric_limits<int>::min();
    constexpr int kMax = std::numeric_limits<int>::max();
    constexpr std::array<CVector3i, 3> wrapped{CVector3i{.x = kMax}, CVector3i{.x = kMin},
                                               CVector3i{.x = kMin, .y = 1}};
    // The first edge is +1 along x, not -2^32 + 1, so the normal points along +z.
    EXPECT_EQ(calculateSurfaceNormal(wrapped, polygonOf({0, 1, 2})).c, 65535);
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
