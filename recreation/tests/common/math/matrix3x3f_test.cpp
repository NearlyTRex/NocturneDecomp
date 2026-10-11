#include "common/math/matrix3x3f.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <numbers>
#include <stdexcept>
#include <type_traits>

namespace nocturne::common {
namespace {

constexpr float kTolerance = 1e-6F;
constexpr auto kQuarter = static_cast<float>(std::numbers::pi / 2);

CVector3f vec(float x, float y, float z) {
    return {.x = x, .y = y, .z = z};
}

CMatrix3x3f rows(const CVector3f &r0, const CVector3f &r1, const CVector3f &r2) {
    CMatrix3x3f matrix;
    matrix.m = {r0, r1, r2};
    return matrix;
}

void expectNear(const CVector3f &actual, const CVector3f &expected) {
    EXPECT_NEAR(actual.x, expected.x, kTolerance);
    EXPECT_NEAR(actual.y, expected.y, kTolerance);
    EXPECT_NEAR(actual.z, expected.z, kTolerance);
}

void expectNear(const CMatrix3x3f &actual, const CMatrix3x3f &expected) {
    for (std::size_t r = 0; r < 3; ++r) {
        SCOPED_TRACE(r);
        expectNear(actual.m.at(r), expected.m.at(r));
    }
}

CMatrix3x3f rotation(float x, float y, float z) {
    CMatrix3x3f matrix;
    matrix.buildRotationMatrix(vec(x, y, z));
    return matrix;
}

TEST(CMatrix3x3f, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMatrix3x3f::buildRotationMatrix),
                                 void (CMatrix3x3f::*)(const CVector3f &)>);
    static_assert(std::is_same_v<decltype(&CMatrix3x3f::transformVector),
                                 CVector3f (CMatrix3x3f::*)(const CVector3f &) const>);
    static_assert(std::is_same_v<decltype(&CMatrix3x3f::transformVectorTranspose),
                                 CVector3f (CMatrix3x3f::*)(const CVector3f &) const>);
    static_assert(
        std::is_same_v<decltype(&CMatrix3x3f::getEulerAngles), CVector3f (CMatrix3x3f::*)() const>);
}

TEST(CMatrix3x3f, NoAnglesIsTheIdentity) {
    expectNear(rotation(0, 0, 0), rows(vec(1, 0, 0), vec(0, 1, 0), vec(0, 0, 1)));
}

// One axis at a time, from the original's formula.
TEST(CMatrix3x3f, EachAngleRotatesAboutItsOwnAxis) {
    expectNear(rotation(kQuarter, 0, 0), rows(vec(1, 0, 0), vec(0, 0, -1), vec(0, 1, 0)));
    expectNear(rotation(0, kQuarter, 0), rows(vec(0, 0, 1), vec(0, 1, 0), vec(-1, 0, 0)));
    expectNear(rotation(0, 0, kQuarter), rows(vec(0, -1, 0), vec(1, 0, 0), vec(0, 0, 1)));
}

TEST(CMatrix3x3f, TransformVectorDotsEachRow) {
    const CMatrix3x3f matrix = rows(vec(1, 2, 3), vec(4, 5, 6), vec(7, 8, 9));
    const CVector3f out = matrix.transformVector(vec(1, -1, 2));
    EXPECT_EQ(out.x, 5.0F);
    EXPECT_EQ(out.y, 11.0F);
    EXPECT_EQ(out.z, 17.0F);
}

TEST(CMatrix3x3f, TransformVectorTransposeDotsEachColumn) {
    const CMatrix3x3f matrix = rows(vec(1, 2, 3), vec(4, 5, 6), vec(7, 8, 9));
    const CVector3f out = matrix.transformVectorTranspose(vec(1, -1, 2));
    EXPECT_EQ(out.x, 11.0F);
    EXPECT_EQ(out.y, 13.0F);
    EXPECT_EQ(out.z, 15.0F);
}

TEST(CMatrix3x3f, TheTransposeUndoesARotation) {
    const CMatrix3x3f matrix = rotation(0.3F, -1.2F, 0.7F);
    const CVector3f v = vec(1.5F, -2.0F, 0.25F);
    expectNear(matrix.transformVectorTranspose(matrix.transformVector(v)), v);
}

TEST(CMatrix3x3f, EulerAnglesRoundTrip) {
    expectNear(rotation(0.3F, -1.2F, 0.7F).getEulerAngles(), vec(0.3F, -1.2F, 0.7F));
    expectNear(rotation(-0.4F, 2.5F, -2.9F).getEulerAngles(), vec(-0.4F, 2.5F, -2.9F));
}

// Straight up or down the y and z angles share an axis; z is zero and y carries both.
TEST(CMatrix3x3f, EulerAnglesAtThePolesPutTheTurnInY) {
    const CMatrix3x3f up = rows(vec(0.8F, 0, 0), vec(0, 0, -1), vec(-0.6F, 0, 0));
    const CVector3f angles = up.getEulerAngles();
    EXPECT_EQ(angles.x, 1.5707964F);
    EXPECT_NEAR(angles.y, 0.6435011F, kTolerance);
    EXPECT_EQ(angles.z, 0.0F);
    const CMatrix3x3f down = rows(vec(1, 0, 0), vec(0, 0, 1), vec(0, 0, 0));
    const CVector3f down_angles = down.getEulerAngles();
    EXPECT_EQ(down_angles.x, -1.5707964F);
    EXPECT_EQ(down_angles.y, 0.0F);
    EXPECT_EQ(down_angles.z, 0.0F);
}

TEST(CMatrix3x3f, InvertOfAScaleIsTheReciprocalScale) {
    CMatrix3x3f matrix = rows(vec(2, 0, 0), vec(0, 4, 0), vec(0, 0, 8));
    matrix.invert();
    expectNear(matrix, rows(vec(0.5F, 0, 0), vec(0, 0.25F, 0), vec(0, 0, 0.125F)));
}

TEST(CMatrix3x3f, InvertOfAGeneralMatrixMultipliesBackToTheIdentity) {
    const CMatrix3x3f matrix = rows(vec(2, 1, 0), vec(1, 3, 1), vec(0, 1, 4));
    CMatrix3x3f inverse = matrix;
    inverse.invert();
    expectNear(matrix.multiply(inverse), rows(vec(1, 0, 0), vec(0, 1, 0), vec(0, 0, 1)));
}

TEST(CMatrix3x3f, InvertOfASingularMatrixThrows) {
    CMatrix3x3f matrix = rows(vec(1, 2, 3), vec(2, 4, 6), vec(0, 1, 1));
    EXPECT_THAT([&matrix] { matrix.invert(); },
                ::testing::ThrowsMessage<std::domain_error>(
                    ::testing::StrEq("CMatrix::invert - Singular matrix")));
}

TEST(CMatrix3x3f, MultiplyTakesRowsByColumns) {
    const CMatrix3x3f a = rows(vec(1, 2, 3), vec(4, 5, 6), vec(7, 8, 9));
    const CMatrix3x3f b = rows(vec(1, 0, 2), vec(0, 1, 0), vec(3, 0, 1));
    expectNear(a.multiply(b), rows(vec(10, 2, 5), vec(22, 5, 14), vec(34, 8, 23)));
}

} // namespace
} // namespace nocturne::common
