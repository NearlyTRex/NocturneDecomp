#include "common/error/fatalerror.h"
#include "common/math/matrix3x4f.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "core/xform/xform.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <limits>
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
    static_assert(std::is_same_v<decltype(&multiplyMatrix3x4),
                                 common::CMatrix3x4f (*)(const common::CMatrix3x4f &,
                                                         const common::CMatrix3x4f &)>);
    static_assert(std::is_same_v<decltype(&setIdentityMatrix3x4), void (*)(common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&setRotationScaleIdentity), void (*)(common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&clearTranslation), void (*)(common::CMatrix3x4f &)>);
    static_assert(std::is_same_v<decltype(&buildMatrixFromEulerAndPosition),
                                 common::CMatrix3x4f (*)(const common::CVector3f &,
                                                         const common::CVector3f &)>);
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
        std::is_same_v<decltype(&inverse), common::CMatrix3x4f (*)(const common::CMatrix3x4f &)>);
    static_assert(std::is_same_v<decltype(&determinant), double (*)(const common::CMatrix3x4f &)>);
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
                                 common::CQuaternion4f (*)(const common::CQuaternion4f &)>);
    static_assert(
        std::is_same_v<decltype(&setIdentityQuaternion), void (*)(common::CQuaternion4f &)>);
    static_assert(std::is_same_v<decltype(&multiplyQuaternion),
                                 common::CQuaternion4f (*)(const common::CQuaternion4f &,
                                                           const common::CQuaternion4f &)>);
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
    static_assert(std::is_same_v<decltype(&quaternionToEulerAngles),
                                 common::CVector3f (*)(const common::CQuaternion4f &)>);
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

// Summed y and x first, the small y term is lost before the z term cancels the x term.
TEST(CoreXformFunctions, APointSumsTheYAndXTermsFirst) {
    const common::CMatrix3x4f matrix = rows({1, 0x1p-30F, -1, 0}, {}, {});
    EXPECT_EQ(transformVector3x4({.x = 1, .y = 0x1p-30F, .z = 1}, matrix).x, 0.0F);
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

// From nocedit's own code on the same matrix: the rows are scaled in double, not stored first.
TEST(CoreXformFunctions, EulerAnglesMatchTheOriginal) {
    const common::CVector3f angles =
        matrixToEulerAngles(rows({-0.810802758F, -0.0525450148F, 0.459605277F, -99.6680984F},
                                 {-0.828570902F, -5.77843761F, -2.12233353F, -75.1044159F},
                                 {2.28515124F, -1.73543298F, 3.83289456F, 31.5388451F}));
    EXPECT_EQ(angles.x, 0.348709226F);
    EXPECT_EQ(angles.y, 0.551403224F);
    EXPECT_EQ(angles.z, -2.9991734F);
}

TEST(CoreXformFunctions, AZeroRotationReadsAsNoAngle) {
    const common::CVector3f angles = matrixToEulerAngles({});
    EXPECT_EQ(angles.x, 0.0F);
}

TEST(CoreXformFunctions, TheIdentityQuaternionIsNoTurn) {
    common::CQuaternion4f quaternion{.w = 0.5F, .x = 1.0F, .y = 2.0F, .z = 3.0F};
    setIdentityQuaternion(quaternion);
    EXPECT_EQ(quaternion, (common::CQuaternion4f{.w = 1.0F}));
}

TEST(CoreXformFunctions, NegatingTheFirstComponentTurnsBack) {
    EXPECT_EQ(negateFirstComponent({.w = 0.5F, .x = 1.0F, .y = -2.0F, .z = 3.0F}),
              (common::CQuaternion4f{.w = -0.5F, .x = 1.0F, .y = -2.0F, .z = 3.0F}));
}

// i then j: Hamilton's j times i, which is -k.
TEST(CoreXformFunctions, TheProductIsTheSecondTimesTheFirst) {
    EXPECT_EQ(multiplyQuaternion({.x = 1.0F}, {.y = 1.0F}), (common::CQuaternion4f{.z = -1.0F}));
    const common::CQuaternion4f turn{.w = 0.5F, .x = 0.5F, .y = 0.5F, .z = 0.5F};
    EXPECT_EQ(multiplyQuaternion({.w = 1.0F}, turn), turn);
    EXPECT_EQ(multiplyQuaternion(turn, {.w = 1.0F}), turn);
}

TEST(CoreXformFunctions, TheProductMatchesTheOriginal) {
    EXPECT_EQ(
        multiplyQuaternion({.w = 0.3F, .x = 0.1F, .y = 0.9F, .z = 0.3F},
                           {.w = 0.7F, .x = 0.1F, .y = 0.7F, .z = 0.1F}),
        (common::CQuaternion4f{
            .w = -0x1.d70a3cp-2F, .x = 0x1.c28f5ep-3F, .y = 0x1.a3d70ap-1F, .z = 0x1.0a3d72p-2F}));
}

TEST(CoreXformFunctions, SlerpHoldsItsEndsOutsideZeroToOne) {
    const common::CQuaternion4f a{.w = 1};
    const common::CQuaternion4f b{.w = kRootHalf, .z = kRootHalf};
    EXPECT_EQ(slerpQuaternion(a, b, 0.0F), a);
    EXPECT_EQ(slerpQuaternion(a, b, -1.0F), a);
    EXPECT_EQ(slerpQuaternion(a, b, 1.0F), b);
}

// The original's compares are unordered for NaN.
TEST(CoreXformFunctions, ANaNTGivesTheSecondRotationAndANaNCosineTakesTheArc) {
    const float nan = std::numeric_limits<float>::quiet_NaN();
    const common::CQuaternion4f a{.w = 1};
    const common::CQuaternion4f b{.w = kRootHalf, .z = kRootHalf};
    EXPECT_EQ(slerpQuaternion(a, b, nan), b);
    EXPECT_TRUE(std::isnan(slerpQuaternion({.w = nan, .x = 1}, {.x = 1}, 0.5F).x));
}

// From nocedit's own code: the weights stay double and are scaled by the sine's reciprocal.
TEST(CoreXformFunctions, SlerpMatchesTheOriginal) {
    EXPECT_EQ(slerpQuaternion(
                  {.w = -0.919103861F, .x = -0.721148968F, .y = 0.820266604F, .z = 0.541486859F},
                  {.w = -0.813401341F, .x = -0.0545834303F, .y = 0.149333239F, .z = -0.595329046F},
                  0.907675803F),
              (common::CQuaternion4f{
                  .w = -0.857763946F, .x = -0.128420323F, .y = 0.227484062F, .z = -0.497335166F}));
    EXPECT_EQ(slerpQuaternion(
                  {.w = 0.496625423F, .x = 0.635461688F, .y = -0.776204228F, .z = -0.00804424286F},
                  {.w = -0.496634185F, .x = -0.635457397F, .y = 0.776173711F, .z = 0.00804414973F},
                  0.00742555875F),
              (common::CQuaternion4f{
                  .w = 0.496625483F, .x = 0.635461628F, .y = -0.77620399F, .z = -0.00804424193F}));
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

// Unturned, the frame at a point only moves points back by it.
TEST(CoreXformFunctions, AnUnturnedFrameAtAPointTakesThePointToTheOrigin) {
    const common::CMatrix3x4f frame = buildMatrixFromEulerAndPosition({.x = 1.0F, .y = 2.0F}, {});
    const common::CMatrix3x4f expected{
        .m = {{{1.0F, 0.0F, 0.0F, -1.0F}, {0.0F, 1.0F, 0.0F, -2.0F}, {0.0F, 0.0F, 1.0F, -0.0F}}}};
    EXPECT_EQ(frame, expected);
    EXPECT_EQ(determinant(frame), 1.0);
}

// A point taken through the product goes through the first, then the second.
TEST(CoreXformFunctions, AProductTakesAPointThroughTheFirstThenTheSecond) {
    const common::CMatrix3x4f move = buildMatrixFromEulerAndPosition({.x = -1.0F}, {});
    const common::CMatrix3x4f double_x{
        .m = {{{2.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 1.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 1.0F, 0.0F}}}};
    const common::CVector3f moved =
        transformVector3x4({.x = 1.0F}, multiplyMatrix3x4(move, double_x));
    EXPECT_EQ(moved.x, 4.0F);
}

TEST(CoreXformFunctions, AnInverseUndoesItsMatrixAndASingularOneIsFatal) {
    const common::CMatrix3x4f frame =
        buildMatrixFromEulerAndPosition({.x = 1.0F, .y = 2.0F, .z = 3.0F}, {.y = 0.5F});
    const common::CVector3f back = transformVector3x4(
        transformVector3x4({.x = 4.0F, .y = 5.0F, .z = 6.0F}, frame), inverse(frame));
    EXPECT_NEAR(back.x, 4.0F, 1e-5F);
    EXPECT_NEAR(back.y, 5.0F, 1e-5F);
    EXPECT_NEAR(back.z, 6.0F, 1e-5F);
    EXPECT_THAT([] { static_cast<void>(inverse({})); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("inverse() - Singular matrix")));
}

TEST(CoreXformFunctions, ATurnAboutYIsReadBackAsItsAngle) {
    const common::CQuaternion4f turn{.w = std::cos(0.25F), .y = std::sin(0.25F)};
    const common::CVector3f angles = quaternionToEulerAngles(turn);
    EXPECT_NEAR(std::abs(angles.y), 0.5F, 1e-6F);
    EXPECT_NEAR(angles.x, 0.0F, 1e-6F);
    EXPECT_NEAR(angles.z, 0.0F, 1e-6F);
}

} // namespace
} // namespace nocturne::core
