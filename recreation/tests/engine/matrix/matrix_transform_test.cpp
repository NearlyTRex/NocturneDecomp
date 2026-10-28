#include "common/error/fatalerror.h"
#include "common/math/matrix3x3i.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <limits>

namespace nocturne::engine {
namespace {

using common::CMatrix3x3i;
using common::CVector3i;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr int kOne = 0x10000;
// A quarter turn by the third angle swaps x and z, negating the new x.
constexpr int kQuarterTurn = 0x4000;

CMatrix3x3i fixedRows(CVector3i a, CVector3i b, CVector3i c) {
    const auto scale = [](CVector3i v) {
        return CVector3i{.x = v.x * kOne, .y = v.y * kOne, .z = v.z * kOne};
    };
    return {.m = {scale(a), scale(b), scale(c)}};
}

class CMatrixTransformTest : public C2dFixture {
protected:
    CLight light_;
    CMatrix matrix_{two_d_, light_};
};

TEST_F(CMatrixTransformTest, StartsWithNothingTransformed) {
    EXPECT_EQ(matrix_.getTransformMatrix(), CMatrix3x3i{});
    EXPECT_EQ(matrix_.getRelativeOrigin(), CVector3i{});
}

TEST_F(CMatrixTransformTest, APopPutsBackASetRelativeOrigin) {
    matrix_.setRelativeOrigin({.x = 1, .y = 2, .z = 3});
    matrix_.matrixPush();
    matrix_.setRelativeOrigin({});
    matrix_.pop();
    EXPECT_EQ(matrix_.getRelativeOrigin(), (CVector3i{.x = 1, .y = 2, .z = 3}));
}

TEST_F(CMatrixTransformTest, WithoutATurnOnlyTheOriginMoves) {
    matrix_.setTransformMatrix(
        fixedRows({.x = 1, .y = 2, .z = 3}, {.x = 4, .y = 5, .z = 6}, {.x = 7, .y = 8, .z = 9}));
    light_.setLightDirection({.x = kOne});
    matrix_.matrixPushAndTransform(0, 0, 0, 5, -6, 7);
    EXPECT_EQ(matrix_.getRelativeOrigin(), (CVector3i{.x = -5, .y = 6, .z = -7}));
    EXPECT_EQ(matrix_.getTransformMatrix(), fixedRows({1, 2, 3}, {4, 5, 6}, {7, 8, 9}));
    EXPECT_EQ(light_.getLightDirection(), (CVector3i{.x = kOne}));
}

TEST_F(CMatrixTransformTest, ATurnRotatesTheTransformTheLightAndTheMovedOrigin) {
    matrix_.setTransformMatrix(
        fixedRows({.x = 1, .y = 2, .z = 3}, {.x = 4, .y = 5, .z = 6}, {.x = 7, .y = 8, .z = 9}));
    light_.setLightDirection({.x = kOne, .y = 2 * kOne, .z = 3 * kOne});
    matrix_.matrixPushAndTransform(0, 0, kQuarterTurn, -kOne, 0, 0);
    EXPECT_EQ(matrix_.getTransformMatrix(), fixedRows({-7, -8, -9}, {4, 5, 6}, {1, 2, 3}));
    EXPECT_EQ(light_.getLightDirection(), (CVector3i{.x = -3 * kOne, .y = 2 * kOne, .z = kOne}));
    EXPECT_EQ(matrix_.getRelativeOrigin(), (CVector3i{.z = kOne}));
}

TEST_F(CMatrixTransformTest, TheSecondAngleAloneAlsoTurns) {
    light_.setLightDirection({.x = kOne});
    matrix_.matrixPushAndTransform(0, kQuarterTurn, 0, 0, 0, 0);
    EXPECT_NE(light_.getLightDirection(), (CVector3i{.x = kOne}));
}

TEST_F(CMatrixTransformTest, PopPutsBackWhatThePushSaved) {
    matrix_.setTransformMatrix(
        fixedRows({.x = 1, .y = 0, .z = 0}, {.x = 0, .y = 1, .z = 0}, {.x = 0, .y = 0, .z = 1}));
    light_.setLightDirection({.y = kOne});
    matrix_.matrixPush();
    matrix_.matrixPushAndTransform(kQuarterTurn, kQuarterTurn, kQuarterTurn, 1, 2, 3);
    matrix_.pop();
    matrix_.pop();
    EXPECT_EQ(matrix_.getTransformMatrix(), fixedRows({1, 0, 0}, {0, 1, 0}, {0, 0, 1}));
    EXPECT_EQ(matrix_.getRelativeOrigin(), CVector3i{});
    EXPECT_EQ(light_.getLightDirection(), (CVector3i{.y = kOne}));
}

TEST_F(CMatrixTransformTest, NinePushesFitAndATenthIsFatal) {
    for (int i = 0; i < 9; ++i) {
        matrix_.matrixPush();
    }
    EXPECT_THAT([this] { matrix_.matrixPush(); },
                ThrowsMessage<common::CFatalError>(StrEq("Matrix unbalance")));
}

TEST_F(CMatrixTransformTest, PoppingWithNothingSavedIsFatal) {
    EXPECT_THAT([this] { matrix_.pop(); },
                ThrowsMessage<common::CFatalError>(StrEq("Matrix unbalance2")));
}

TEST_F(CMatrixTransformTest, TheInverseOfARotationIsItsTranspose) {
    matrix_.setTransformMatrix(
        fixedRows({.x = 0, .y = 0, .z = -1}, {.x = 0, .y = 1, .z = 0}, {.x = 1, .y = 0, .z = 0}));
    matrix_.invertTransformMatrix();
    EXPECT_EQ(matrix_.getInverseMatrix(), fixedRows({0, 0, 1}, {0, 1, 0}, {-1, 0, 0}));
}

TEST_F(CMatrixTransformTest, AScaleInvertsToItsReciprocal) {
    matrix_.setTransformMatrix(
        {.m = {CVector3i{.x = 2 * kOne}, CVector3i{.y = 4 * kOne}, CVector3i{.z = kOne / 2}}});
    matrix_.invertTransformMatrix();
    EXPECT_EQ(matrix_.getInverseMatrix(),
              (CMatrix3x3i{.m = {CVector3i{.x = kOne / 2}, CVector3i{.y = kOne / 4},
                                 CVector3i{.z = 2 * kOne}}}));
}

// The expected values here are nocedit's own code run on the same matrix.
TEST_F(CMatrixTransformTest, TheInverseRoundsAsTheOriginalDoes) {
    matrix_.setTransformMatrix(
        {.m = {CVector3i{.x = 5, .y = 70, .z = 113}, CVector3i{.x = -139, .y = -70, .z = 0},
               CVector3i{.x = -20, .y = -4, .z = 22}}});
    matrix_.invertTransformMatrix();
    EXPECT_EQ(matrix_.getInverseMatrix(),
              (CMatrix3x3i{.m = {CVector3i{.x = -59594276, .y = -77085583, .z = 306097873},
                                 CVector3i{.x = 118337205, .y = 91713269, .z = -607822920},
                                 CVector3i{.x = -32660759, .y = -53402663, .z = 362983319}}}));
}

// Elements past a float's 24 bits show which products take an element before it is stored.
TEST_F(CMatrixTransformTest, TwoProductsUseTheElementsAsLoaded) {
    matrix_.setTransformMatrix(
        {.m = {CVector3i{.x = -128269967, .y = -1360070645, .z = 1276632926},
               CVector3i{.x = 1215361220, .y = -1686665960, .z = 293015390},
               CVector3i{.x = -485591692, .y = -1717028924, .z = 1968919820}}});
    matrix_.invertTransformMatrix();
    EXPECT_EQ(matrix_.getInverseMatrix(),
              (CMatrix3x3i{.m = {CVector3i{.x = -121, .y = 20, .z = 75},
                                 CVector3i{.x = -109, .y = 15, .z = 68},
                                 CVector3i{.x = -125, .y = 18, .z = 80}}}));
}

TEST_F(CMatrixTransformTest, AnInverseTooLargeForAnIntIsTheIntegerIndefinite) {
    constexpr int kIndefinite = std::numeric_limits<int>::min();
    matrix_.setTransformMatrix({.m = {CVector3i{.x = 1}, CVector3i{.y = 1}, CVector3i{.z = 1}}});
    matrix_.invertTransformMatrix();
    EXPECT_EQ(matrix_.getInverseMatrix().m[0].x, kIndefinite);
    EXPECT_EQ(matrix_.getInverseMatrix().m[0].y, 0);
    matrix_.setTransformMatrix({.m = {CVector3i{.x = -1}, CVector3i{.y = 1}, CVector3i{.z = 1}}});
    matrix_.invertTransformMatrix();
    EXPECT_EQ(matrix_.getInverseMatrix().m[0].x, kIndefinite);
}

TEST_F(CMatrixTransformTest, ASingularTransformInvertsToTheIntegerIndefinite) {
    matrix_.invertTransformMatrix();
    constexpr int kIndefinite = std::numeric_limits<int>::min();
    EXPECT_EQ(matrix_.getInverseMatrix().m[0].x, kIndefinite);
    EXPECT_EQ(matrix_.getInverseMatrix().m[2].z, kIndefinite);
}

} // namespace
} // namespace nocturne::engine
