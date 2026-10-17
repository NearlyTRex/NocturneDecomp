#include "core/dtri/demontriangle.h"

#include <gtest/gtest.h>

#include <bit>
#include <cmath>
#include <cstdint>
#include <type_traits>

namespace nocturne::core {
namespace {

using common::CVector3f;

TEST(CDemonTriangle, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonTriangle>);
}

TEST(CDemonTriangle, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonTriangle::readDataBinary),
                                 void (CDemonTriangle::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CDemonTriangle::buildCollision),
                                 void (CDemonTriangle::*)(const CVector3f &, const CVector3f &,
                                                          const CVector3f &)>);
}

::testing::AssertionResult sameVector(const CVector3f &actual, const CVector3f &expected) {
    if (actual.equals(expected)) {
        return ::testing::AssertionSuccess();
    }
    return ::testing::AssertionFailure()
           << "(" << actual.x << ", " << actual.y << ", " << actual.z << ")";
}

CDemonTriangle built(const CVector3f &vertex1, const CVector3f &vertex2, const CVector3f &vertex3) {
    CDemonTriangle triangle;
    triangle.buildCollision(vertex1, vertex2, vertex3);
    return triangle;
}

TEST(CDemonTriangle, KeepsItsCorners) {
    const CDemonTriangle triangle =
        built({.x = 1, .y = 2, .z = 3}, {.x = 4, .y = 5, .z = 6}, {.x = 7, .y = 8, .z = 10});
    EXPECT_TRUE(sameVector(triangle.vertex1, {.x = 1, .y = 2, .z = 3}));
    EXPECT_TRUE(sameVector(triangle.vertex2, {.x = 4, .y = 5, .z = 6}));
    EXPECT_TRUE(sameVector(triangle.vertex3, {.x = 7, .y = 8, .z = 10}));
}

TEST(CDemonTriangle, TheNormalFacesAgainstTheWindingAndTheDistancePutsTheFirstCornerOnThePlane) {
    // The edges (4, 0, 0) then (0, 4, 0) cross to +z, so the normal is -z.
    const CDemonTriangle triangle =
        built({.x = 0, .y = 0, .z = 2}, {.x = 4, .y = 0, .z = 2}, {.x = 4, .y = 4, .z = 2});
    EXPECT_TRUE(sameVector(triangle.normal, {.x = 0, .y = 0, .z = -1}));
    EXPECT_FLOAT_EQ(triangle.plane_distance, 2.0F);
    EXPECT_EQ(triangle.dominant_axis, 2);
}

TEST(CDemonTriangle, TheDominantAxisIsTheLargestComponent) {
    EXPECT_EQ(built({.x = 2}, {.x = 2, .y = 4}, {.x = 2, .y = 4, .z = 4}).dominant_axis, 0);
    EXPECT_EQ(built({.y = 2}, {.y = 2, .z = 4}, {.x = 4, .y = 2, .z = 4}).dominant_axis, 1);
}

// The axes nocedit's own code picks.
TEST(CDemonTriangle, ATieGoesToTheLastAxis) {
    // A normal along (1, 1, 0) has no strictly largest component.
    const CDemonTriangle triangle =
        built({.x = 4, .y = 0, .z = 0}, {.x = 0, .y = 4, .z = 0}, {.x = 0, .y = 4, .z = 4});
    EXPECT_FLOAT_EQ(std::abs(triangle.normal.x), std::abs(triangle.normal.y));
    EXPECT_EQ(triangle.dominant_axis, 2);
    // Along (0, 1, 1), z ties the largest.
    EXPECT_EQ(built({.y = 4}, {.z = 4}, {.x = 4, .z = 4}).dominant_axis, 2);
}

// Along (1, 0, 1), x is tested before it is rounded and z after, which puts z just below.
TEST(CDemonTriangle, AnXAndZTieGoesToX) {
    EXPECT_EQ(built({.x = 4}, {.z = 4}, {.y = 4, .z = 4}).dominant_axis, 0);
}

// The bits nocedit's own code gives: the length rounded to a float and its reciprocal multiplied
// in, which a division by the exact length misses by an ulp.
TEST(CDemonTriangle, ThePlaneIsRoundedWhereTheOriginalStoresIt) {
    const CDemonTriangle triangle =
        built({.x = 3, .y = -7, .z = 0}, {.x = 8, .y = 3, .z = -2}, {.x = -1, .y = 8, .z = 3});
    EXPECT_EQ(std::bit_cast<std::uint32_t>(triangle.normal.x), 0xbeec7d5bU);
    EXPECT_EQ(std::bit_cast<std::uint32_t>(triangle.normal.y), 0x3d5cb944U);
    EXPECT_EQ(std::bit_cast<std::uint32_t>(triangle.normal.z), 0xbf62a2cdU);
    EXPECT_EQ(std::bit_cast<std::uint32_t>(triangle.plane_distance), 0x3fe1a68bU);
    EXPECT_EQ(triangle.dominant_axis, 2);
}

TEST(CDemonTriangle, ADegenerateTriangleHasAZeroNormal) {
    const CDemonTriangle triangle = built({.x = 0}, {.x = 1}, {.x = 2});
    EXPECT_TRUE(sameVector(triangle.normal, {}));
    EXPECT_EQ(triangle.plane_distance, 0.0F);
    EXPECT_EQ(triangle.dominant_axis, 2);
}

} // namespace
} // namespace nocturne::core
