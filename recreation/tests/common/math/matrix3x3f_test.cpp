#include "common/math/matrix3x3f.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <limits>
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

void expectExact(const CMatrix3x3f &actual, const CMatrix3x3f &expected) {
    for (std::size_t r = 0; r < 3; ++r) {
        SCOPED_TRACE(r);
        EXPECT_EQ(actual.m.at(r).x, expected.m.at(r).x);
        EXPECT_EQ(actual.m.at(r).y, expected.m.at(r).y);
        EXPECT_EQ(actual.m.at(r).z, expected.m.at(r).z);
    }
}

// The expected values in the tests below are nocedit's own code run on the same input.
TEST(CMatrix3x3f, ARotationRoundsItsSinesAndCosinesAsTheOriginalDoes) {
    expectExact(rotation(2.01308179F, 4.64299345F, 0.587584376F),
                rows(vec(-0.557514489F, -0.711947322F, 0.426975965F),
                     vec(-0.237266123F, -0.356221884F, -0.903775811F),
                     vec(0.795539021F, -0.605175078F, 0.0296778772F)));
}

// Summed y and x first, the small y term is lost before the z term cancels the x term.
TEST(CMatrix3x3f, TransformsSumTheYAndXTermsFirst) {
    const CMatrix3x3f matrix = rows(vec(1, 0x1p-30F, -1), vec(0x1p-30F, 0, 0), vec(-1, 0, 0));
    const CVector3f input = vec(1, 0x1p-30F, 1);
    EXPECT_EQ(matrix.transformVector(input).x, 0.0F);
    EXPECT_EQ(matrix.transformVectorTranspose(input).x, 0.0F);
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

TEST(CMatrix3x3f, EulerAnglesMatchTheOriginal) {
    const CVector3f angles = rows(vec(0.512563884F, -0.858621955F, 0.0068209907F),
                                  vec(-0.00372858834F, -0.0101694698F, -0.999941349F),
                                  vec(0.858640969F, 0.512508392F, -0.00841395091F))
                                 .getEulerAngles();
    EXPECT_EQ(angles.x, 1.55996573F);
    EXPECT_EQ(angles.y, 2.46029973F);
    EXPECT_EQ(angles.z, -2.79013252F);
}

// The original's unordered compare takes a NaN sine as straight down.
TEST(CMatrix3x3f, ANaNSineReadsAsStraightDown) {
    const float nan = std::numeric_limits<float>::quiet_NaN();
    const CVector3f angles = rows(vec(1, 0, 0), vec(0, 0, nan), vec(0, 0, 1)).getEulerAngles();
    EXPECT_EQ(angles.x, -1.5707964F);
    EXPECT_EQ(angles.y, 0.0F);
    EXPECT_EQ(angles.z, 0.0F);
}

TEST(CMatrix3x3f, InvertRoundsAsTheOriginalDoes) {
    CMatrix3x3f matrix = rows(vec(-0.199165344F, 0.121515036F, 0.990912437F),
                              vec(-0.978524685F, -0.0989178419F, -0.185097456F),
                              vec(-0.259206176F, 0.216104984F, 0.167101502F));
    matrix.invert();
    expectExact(matrix, rows(vec(-0.109716929F, -0.906093299F, -0.353053153F),
                             vec(-0.98862505F, -1.04508626F, 4.70491314F),
                             vec(1.10835326F, -0.0539590567F, -0.647921681F)));
}

// The original stores the determinant as a float before it tests it.
TEST(CMatrix3x3f, ADeterminantTooSmallForAFloatIsSingular) {
    CMatrix3x3f matrix = rows(vec(1e-16F, 0, 0), vec(0, 1e-16F, 0), vec(0, 0, 1e-16F));
    EXPECT_THROW(matrix.invert(), std::domain_error);
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
