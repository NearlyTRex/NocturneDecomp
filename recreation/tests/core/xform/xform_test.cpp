#include "core/xform/xform.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

TEST(CoreXformFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&transformVector3x4),
                                 common::CVector3f (*)(const common::CVector3f &,
                                                       const common::CMatrix3x4f &)>);
    static_assert(
        std::is_same_v<decltype(&transformVector3x4InPlace),
                       common::CVector3f *(*)(common::CVector3f *, common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&multiplyMatrix3x4),
                       common::CMatrix3x4f *(*)(common::CMatrix3x4f *, common::CMatrix3x4f *,
                                                common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&setIdentityMatrix3x4), void (*)(common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&setRotationScaleIdentity), void (*)(common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&clearTranslation), void (*)(common::CMatrix3x4f &)>);
    static_assert(
        std::is_same_v<decltype(&buildMatrixFromEulerAndPosition),
                       void (*)(common::CMatrix3x4f *, common::CVector3f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&buildMatrixFromEulerAndPositionDirect),
                       void (*)(common::CMatrix3x4f *, common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&matrixToEulerAngles),
                                 common::CVector3f (*)(const common::CMatrix3x4f &)>);
    static_assert(
        std::is_same_v<decltype(&matrixToEulerAnglesZYX),
                       common::CVector3f *(*)(common::CMatrix3x4f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&getTranslation),
                       common::CVector3f *(*)(common::CMatrix3x4f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&inverse),
                       common::CMatrix3x4f *(*)(common::CMatrix3x4f *, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildRotationX),
                                 common::CMatrix3x4f *(*)(float, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildRotationY),
                                 common::CMatrix3x4f *(*)(float, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildXFlipMatrix),
                                 common::CMatrix3x4f *(*)(float, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildZFlipMatrix),
                                 common::CMatrix3x4f *(*)(float, common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&lerpMatrix3x4),
                       common::CMatrix3x4f *(*)(common::CMatrix3x4f *, common::CMatrix3x4f *, float,
                                                common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionToMatrix3x3),
                                 void (*)(common::CMatrix3x4f &, const common::CQuaternion4f &)>);
    static_assert(std::is_same_v<decltype(&quaternionToMatrix3x4),
                                 common::CMatrix3x4f (*)(const common::CQuaternion4f &)>);
    static_assert(std::is_same_v<decltype(&negateFirstComponent),
                                 common::CQuaternion4f *(*)(common::CQuaternion4f *,
                                                            common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&setIdentityQuaternion), void (*)(common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&multiplyQuaternion),
                       common::CQuaternion4f *(*)(common::CQuaternion4f *, common::CQuaternion4f *,
                                                  common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionToAxisAngle),
                                 void (*)(common::CQuaternion4f *, float *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&slerpQuaternion),
                                 common::CQuaternion4f (*)(const common::CQuaternion4f &,
                                                           const common::CQuaternion4f &, float)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleX),
                                 common::CQuaternion4f *(*)(float, common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleY),
                                 common::CQuaternion4f *(*)(float, common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleZ),
                                 common::CQuaternion4f *(*)(float, common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAxisAngle),
                                 common::CQuaternion4f *(*)(float, common::CVector3f *,
                                                            common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&quaternionToEulerAngles),
                       common::CVector3f *(*)(common::CVector3f *, common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&eulerToQuaternion),
                       common::CQuaternion4f *(*)(common::CVector3f *, common::CQuaternion4f *)>);
    using PlaneInterpolator =
        void (*)(const platform::SRenderVertex &, const platform::SRenderVertex &, std::uint32_t,
                 platform::SRenderVertex &);
    static_assert(std::is_same_v<decltype(&clipInterpolateRightPlane), PlaneInterpolator>);
    static_assert(std::is_same_v<decltype(&clipInterpolateLeftPlane), PlaneInterpolator>);
    static_assert(std::is_same_v<decltype(&clipInterpolateTopPlane), PlaneInterpolator>);
    static_assert(std::is_same_v<decltype(&clipInterpolateBottomPlane), PlaneInterpolator>);
    static_assert(
        std::is_same_v<decltype(&transformAndClipGeometry),
                       void (*)(std::span<const platform::SRenderVertex>, std::span<const int>,
                                std::uint32_t, std::vector<platform::SRenderVertex> &)>);
}

constexpr float kHalfPi = 1.5707964F;
constexpr float kRootHalf = 0.70710677F;

common::CMatrix3x4f rows(std::array<float, 4> a, std::array<float, 4> b, std::array<float, 4> c) {
    return {.m = {a, b, c}};
}

void expectNear(const common::CQuaternion4f &actual, const common::CQuaternion4f &expected) {
    EXPECT_NEAR(actual.w, expected.w, 1e-6F);
    EXPECT_NEAR(actual.x, expected.x, 1e-6F);
    EXPECT_NEAR(actual.y, expected.y, 1e-6F);
    EXPECT_NEAR(actual.z, expected.z, 1e-6F);
}

TEST(CoreXformFunctions, APointTransformsByRowAndTakesTheTranslation) {
    const common::CMatrix3x4f matrix = rows({1, 2, 3, 10}, {4, 5, 6, 20}, {7, 8, 9, 30});
    const common::CVector3f point = transformVector3x4({.x = 1, .y = 1, .z = 1}, matrix);
    EXPECT_EQ(point.x, 16.0F);
    EXPECT_EQ(point.y, 35.0F);
    EXPECT_EQ(point.z, 54.0F);
}

TEST(CoreXformFunctions, ClearingTheTranslationLeavesTheRotation) {
    common::CMatrix3x4f matrix = rows({1, 2, 3, 10}, {4, 5, 6, 20}, {7, 8, 9, 30});
    clearTranslation(matrix);
    EXPECT_EQ(matrix, rows({1, 2, 3, 0}, {4, 5, 6, 0}, {7, 8, 9, 0}));
}

TEST(CoreXformFunctions, AQuarterTurnAboutZBecomesItsRotationMatrix) {
    const common::CMatrix3x4f matrix = quaternionToMatrix3x4({.w = kRootHalf, .z = kRootHalf});
    const common::CMatrix3x4f expected = rows({0, -1, 0, 0}, {1, 0, 0, 0}, {0, 0, 1, 0});
    for (std::size_t r = 0; r < 3; ++r) {
        for (std::size_t c = 0; c < 4; ++c) {
            EXPECT_NEAR(matrix.m[r][c], expected.m[r][c], 1e-6F) << r << "," << c;
        }
    }
}

TEST(CoreXformFunctions, AQuaternionNeedNotBeUnitLength) {
    EXPECT_EQ(quaternionToMatrix3x4({.w = 2}), rows({1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}));
}

TEST(CoreXformFunctions, TheRotationAloneLeavesTheTranslation) {
    common::CMatrix3x4f matrix = rows({9, 9, 9, 10}, {9, 9, 9, 20}, {9, 9, 9, 30});
    quaternionToMatrix3x3(matrix, {.w = 1});
    EXPECT_EQ(matrix, rows({1, 0, 0, 10}, {0, 1, 0, 20}, {0, 0, 1, 30}));
}

TEST(CoreXformFunctions, EulerAnglesIgnoreEachRowsScale) {
    const common::CVector3f angles =
        matrixToEulerAngles(rows({0, -2, 0, 5}, {3, 0, 0, 5}, {0, 0, 4, 5}));
    EXPECT_EQ(angles.x, 0.0F);
    EXPECT_EQ(angles.y, 0.0F);
    EXPECT_NEAR(angles.z, kHalfPi, 1e-6F);
}

TEST(CoreXformFunctions, StraightUpTheYAngleTakesTheWholeTurn) {
    const common::CVector3f angles =
        matrixToEulerAngles(rows({1, 0, 0, 0}, {0, 0, -1, 0}, {0, 1, 0, 0}));
    EXPECT_EQ(angles.x, kHalfPi);
    EXPECT_EQ(angles.y, 0.0F);
    EXPECT_EQ(angles.z, 0.0F);
}

TEST(CoreXformFunctions, AZeroRotationReadsAsNoAngle) {
    const common::CVector3f angles = matrixToEulerAngles({});
    EXPECT_EQ(angles.x, 0.0F);
}

TEST(CoreXformFunctions, SlerpHoldsItsEndsOutsideZeroToOne) {
    const common::CQuaternion4f a{.w = 1};
    const common::CQuaternion4f b{.w = kRootHalf, .z = kRootHalf};
    EXPECT_EQ(slerpQuaternion(a, b, 0.0F), a);
    EXPECT_EQ(slerpQuaternion(a, b, -1.0F), a);
    EXPECT_EQ(slerpQuaternion(a, b, 1.0F), b);
}

TEST(CoreXformFunctions, HalfwaySlerpIsHalfTheTurn) {
    expectNear(slerpQuaternion({.w = 1}, {.w = kRootHalf, .z = kRootHalf}, 0.5F),
               {.w = 0.9238795F, .z = 0.38268343F});
}

TEST(CoreXformFunctions, SlerpTakesTheShorterArc) {
    expectNear(slerpQuaternion({.w = 1}, {.w = -kRootHalf, .z = -kRootHalf}, 0.5F),
               {.w = 0.9238795F, .z = 0.38268343F});
}

TEST(CoreXformFunctions, NearlyEqualRotationsBlendLinearly) {
    const common::CQuaternion4f a{.w = 1};
    const common::CQuaternion4f b{.w = 0.999999F, .x = 0.001F};
    expectNear(slerpQuaternion(a, b, 0.25F), {.w = 0.99999976F, .x = 0.00025F});
}

} // namespace
} // namespace nocturne::core
