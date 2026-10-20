#include "core/box/boundingbox3d.h"

#include <gtest/gtest.h>

#include <cmath>
#include <limits>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBoundingBox3D, IsConcrete) {
    static_assert(!std::is_abstract_v<CBoundingBox3D>);
}

TEST(CBoundingBox3D, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::expand),
                                 void (CBoundingBox3D::*)(const common::CVector3f &)>);
    static_assert(
        std::is_same_v<decltype(&CBoundingBox3D::getCorner),
                       common::CVector3f *(CBoundingBox3D::*)(common::CVector3f *, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::isVisible), int (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::getBoundingBoxScreenSize),
                                 float (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::doesRayIntersect),
                                 float (CBoundingBox3D::*)(const common::CVector3f &,
                                                           const common::CVector3f &,
                                                           common::CVector3f *) const>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::reset), void (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::doesBoxIntersect),
                                 int (CBoundingBox3D::*)(CBoundingBox3D *)>);
    static_assert(
        std::is_same_v<decltype(&CBoundingBox3D::getMaximumBound), float (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::render), void (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::clampPoint),
                                 common::CVector3f *(CBoundingBox3D::*)(common::CVector3f *,
                                                                        common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::doesSphereIntersect),
                                 int (CBoundingBox3D::*)(common::CVector3f *, float)>);
}

TEST(CBoundingBox3D, ExpandingGrowsEachSideToTakeInThePoint) {
    CBoundingBox3D box;
    box.expand({.x = 1, .y = -2, .z = 3});
    box.expand({.x = -4, .y = 5, .z = -6});
    EXPECT_TRUE(box.min.equals({.x = -4, .y = -2, .z = -6}));
    EXPECT_TRUE(box.max.equals({.x = 1, .y = 5, .z = 3}));
}

TEST(CBoundingBox3D, APointInsideChangesNothing) {
    CBoundingBox3D box{.min = {.x = -1, .y = -1, .z = -1}, .max = {.x = 1, .y = 1, .z = 1}};
    box.expand({});
    EXPECT_TRUE(box.min.equals({.x = -1, .y = -1, .z = -1}));
    EXPECT_TRUE(box.max.equals({.x = 1, .y = 1, .z = 1}));
}

// The original's min tests store the point when the compare is unordered; its max tests don't.
TEST(CBoundingBox3D, ANaNOnEitherSideOfAMinTestStoresThePoint) {
    const float nan = std::numeric_limits<float>::quiet_NaN();
    CBoundingBox3D box{.min = {.x = nan, .y = -1, .z = -1}, .max = {.x = 1, .y = nan, .z = 1}};
    box.expand({.x = 0.5F, .y = 0.5F, .z = nan});
    EXPECT_EQ(box.min.x, 0.5F);
    EXPECT_EQ(box.min.y, -1.0F);
    EXPECT_TRUE(std::isnan(box.min.z));
    EXPECT_TRUE(std::isnan(box.max.y));
    EXPECT_EQ(box.max.z, 1.0F);
}

const CBoundingBox3D kUnitBox{.min = {.x = 0, .y = 0, .z = 0}, .max = {.x = 1, .y = 1, .z = 1}};
constexpr common::CVector3f kUntouched{.x = 7, .y = 7, .z = 7};

TEST(CBoundingBox3D, ASegmentFromOutsideGivesTheFractionWhereItEntersAndTheFace) {
    common::CVector3f normal;
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = -1, .y = 0.5F, .z = 0.5F}, {.x = 4}, &normal), 0.25F);
    EXPECT_TRUE(normal.equals({.x = -1}));
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = 2, .y = 0.5F, .z = 0.5F}, {.x = -4}, &normal), 0.25F);
    EXPECT_TRUE(normal.equals({.x = 1}));
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = 0.5F, .y = -1, .z = 0.5F}, {.y = 4}, &normal), 0.25F);
    EXPECT_TRUE(normal.equals({.y = -1}));
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = 0.5F, .y = 0.5F, .z = 3}, {.z = -4}, &normal), 0.5F);
    EXPECT_TRUE(normal.equals({.z = 1}));
}

TEST(CBoundingBox3D, TheFaceIsThePlaneTheSegmentReachesLast) {
    common::CVector3f normal;
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = -1, .y = -3, .z = 0.5F}, {.x = 4, .y = 8}, &normal),
              0.375F);
    EXPECT_TRUE(normal.equals({.y = -1}));
}

TEST(CBoundingBox3D, AnEdgeReachedOnTwoPlanesAtOnceEntersByTheEarlierAxis) {
    common::CVector3f normal;
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = -1, .y = -1, .z = 0.5F}, {.x = 4, .y = 4}, &normal),
              0.25F);
    EXPECT_TRUE(normal.equals({.x = -1}));
}

TEST(CBoundingBox3D, AHitWithoutANormalOnlyGivesTheFraction) {
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = -1, .y = 0.5F, .z = 0.5F}, {.x = 4}, nullptr), 0.25F);
}

TEST(CBoundingBox3D, ASegmentThatStopsShortOrPointsAwayMissesAndLeavesTheNormal) {
    common::CVector3f normal = kUntouched;
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = -1, .y = 0.5F, .z = 0.5F}, {.x = 0.5F}, &normal),
              -1.0F);
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = 2, .y = 0.5F, .z = 0.5F}, {.x = -0.5F}, &normal),
              -1.0F);
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = -1, .y = 0.5F, .z = 0.5F}, {.x = -4}, &normal),
              -1.0F);
    EXPECT_TRUE(normal.equals(kUntouched));
}

TEST(CBoundingBox3D, ASegmentThatCrossesThePlaneBesideTheBoxMisses) {
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = -1, .y = 0.5F, .z = 0.5F}, {.x = 4, .y = 4}, nullptr),
              -1.0F);
    EXPECT_EQ(
        kUnitBox.doesRayIntersect({.x = -1, .y = 0.5F, .z = 0.5F}, {.x = 4, .y = -4}, nullptr),
        -1.0F);
}

TEST(CBoundingBox3D, ASegmentStartingInsideGivesZeroAndTheReversedDirectionNormalised) {
    common::CVector3f normal;
    EXPECT_EQ(
        kUnitBox.doesRayIntersect({.x = 0.5F, .y = 0.5F, .z = 0.5F}, {.x = 3, .z = 4}, &normal),
        0.0F);
    EXPECT_TRUE(normal.equals({.x = -0.6F, .z = -0.8F}));
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = 0.5F, .y = 0.5F, .z = 0.5F}, {.x = 3}, nullptr),
              0.0F);
}

TEST(CBoundingBox3D, ASegmentOfNoLengthInsideGivesAZeroNormal) {
    common::CVector3f normal = kUntouched;
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = 0.5F, .y = 0.5F, .z = 0.5F}, {}, &normal), 0.0F);
    EXPECT_TRUE(normal.equals({}));
}

// The x87 tests the min side before the point is rounded to a float and the max side after.
TEST(CBoundingBox3D, APointAHairPastAFaceMissesBelowTheMinButHitsAboveTheMax) {
    const CBoundingBox3D flat{.min = {.x = 0, .y = 1, .z = 0}, .max = {.x = 1, .y = 1, .z = 1}};
    const float hair = std::ldexp(1.0F, -30);
    EXPECT_EQ(flat.doesRayIntersect({.x = -1, .y = 1, .z = 0.5F}, {.x = 2, .y = -hair}, nullptr),
              -1.0F);
    EXPECT_EQ(flat.doesRayIntersect({.x = -1, .y = 1, .z = 0.5F}, {.x = 2, .y = hair}, nullptr),
              0.5F);
}

TEST(CBoundingBox3D, ANaNOriginMissesRatherThanCountingAsInside) {
    const float nan = std::numeric_limits<float>::quiet_NaN();
    EXPECT_EQ(kUnitBox.doesRayIntersect({.x = nan, .y = 0.5F, .z = 0.5F}, {.x = 1}, nullptr),
              -1.0F);
}

TEST(CBoundingBox3D, AnUnorderedMaxLetsThePointThrough) {
    const CBoundingBox3D box{.min = {.x = 0, .y = 0, .z = 0},
                             .max = {.x = 1, .y = std::numeric_limits<float>::quiet_NaN(), .z = 1}};
    EXPECT_EQ(box.doesRayIntersect({.x = -1, .y = 0.5F, .z = 0.5F}, {.x = 4}, nullptr), 0.25F);
}

} // namespace
} // namespace nocturne::core
