#include "core/setdir/setdir.h"
#include "core/setdir/vdbox.h"

#include <gtest/gtest.h>

#include <numbers>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreSetdirFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&testOBBIntersection), bool (*)(const SVDBox &, const SVDBox &)>);
}

SVDBox makeBox(const common::CVector3f &position, const common::CVector3f &extents,
               float yaw = 0.0F) {
    SVDBox box{.position = position, .extents = extents, .rotation_matrix = {}};
    box.rotation_matrix.buildRotationMatrix({.y = yaw});
    return box;
}

const SVDBox kUnitBox = makeBox({}, {.x = 1, .y = 1, .z = 1});

TEST(CoreSetdirFunctions, ABoxWithACornerInsideTheOtherIntersects) {
    EXPECT_TRUE(testOBBIntersection(makeBox({.x = 1.5F}, {.x = 1, .y = 1, .z = 1}), kUnitBox));
}

TEST(CoreSetdirFunctions, ABarWhoseEdgesCrossTheOtherBoxIntersects) {
    EXPECT_TRUE(testOBBIntersection(makeBox({}, {.x = 5, .y = 0.1F, .z = 0.1F}), kUnitBox));
}

TEST(CoreSetdirFunctions, BoxesApartOnAnyAxisDoNotIntersect) {
    const common::CVector3f extents{.x = 1, .y = 1, .z = 1};
    for (const common::CVector3f position :
         {common::CVector3f{.x = -3}, common::CVector3f{.x = 3}, common::CVector3f{.y = -3},
          common::CVector3f{.y = 3}, common::CVector3f{.z = -3}, common::CVector3f{.z = 3}}) {
        EXPECT_FALSE(testOBBIntersection(makeBox(position, extents), kUnitBox));
    }
}

TEST(CoreSetdirFunctions, OneCallDoesNotSeeTheSecondBoxInsideTheFirst) {
    const SVDBox outer = makeBox({}, {.x = 10, .y = 10, .z = 10});
    EXPECT_FALSE(testOBBIntersection(outer, kUnitBox));
    EXPECT_TRUE(testOBBIntersection(kUnitBox, outer));
}

TEST(CoreSetdirFunctions, TheFirstBoxsTurnSwingsItsCornersOut) {
    const common::CVector3f extents{.x = 1, .y = 1, .z = 1};
    EXPECT_FALSE(testOBBIntersection(makeBox({.x = 2.3F}, extents), kUnitBox));
    EXPECT_TRUE(testOBBIntersection(makeBox({.x = 2.3F}, extents, std::numbers::pi_v<float> / 4),
                                    kUnitBox));
}

TEST(CoreSetdirFunctions, TheSecondBoxsTurnIsTheFrameCornersAreTestedIn) {
    const SVDBox speck = makeBox({.x = 1.2F}, {.x = 0.05F, .y = 0.05F, .z = 0.05F});
    EXPECT_FALSE(testOBBIntersection(speck, kUnitBox));
    EXPECT_TRUE(testOBBIntersection(
        speck, makeBox({}, {.x = 1, .y = 1, .z = 1}, std::numbers::pi_v<float> / 4)));
}

} // namespace
} // namespace nocturne::core
