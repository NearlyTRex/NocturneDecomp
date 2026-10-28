#include "common/error/fatalerror.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr int kEntry = 256;

TEST(CMatrix, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMatrix::doNothing), void (CMatrix::*)()>);
    static_assert(std::is_same_v<decltype(&CMatrix::interpolatedSin), int (CMatrix::*)(int) const>);
    static_assert(std::is_same_v<decltype(&CMatrix::interpolatedCos), int (CMatrix::*)(int) const>);
    static_assert(std::is_same_v<decltype(&CMatrix::invertTransformMatrix), void (CMatrix::*)()>);
    static_assert(std::is_same_v<decltype(&CMatrix::transformToCache),
                                 void (CMatrix::*)(int, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CMatrix::projectCachedPoint), void (CMatrix::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMatrix::projectTransformedPoint),
                                 void (CMatrix::*)(platform::SProjectedVertex *)>);
    static_assert(
        std::is_same_v<decltype(&CMatrix::projectCachedPointUnchecked), void (CMatrix::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMatrix::matrixPushAndTransform),
                                 void (CMatrix::*)(int, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CMatrix::matrixPush), void (CMatrix::*)()>);
    static_assert(std::is_same_v<decltype(&CMatrix::pop), void (CMatrix::*)()>);
    static_assert(
        std::is_same_v<decltype(&CMatrix::normalizeVector3DFixed),
                       common::CVector3i *(CMatrix::*)(common::CVector3i *, common::CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CMatrix::normalizeVector3DFloat),
                       common::CVector3i *(CMatrix::*)(common::CVector3i *, common::CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CMatrix::setCameraOrigin), void (CMatrix::*)(int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CMatrix::setCameraRotation), void (CMatrix::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CMatrix::getCameraOrigin),
                                 common::CVector3i (CMatrix::*)() const>);
    static_assert(std::is_same_v<decltype(&CMatrix::getCameraRotation),
                                 common::CVector3i (CMatrix::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CMatrix::pushViewport), void (CMatrix::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CMatrix::popViewport), void (CMatrix::*)()>);
    static_assert(std::is_same_v<decltype(&CMatrix::getProjectionScale), int (CMatrix::*)() const>);
}

class CMatrixTest : public C2dFixture {
protected:
    CLight light_;
    CMatrix matrix_{two_d_, light_};
};

// Truncated toward zero from the original's pi, 3.1415926535: one entry is 1/256 of a turn.
TEST_F(CMatrixTest, TheTablesHoldTruncatedSixteenSixteenSinesAndCosines) {
    const CMatrix &matrix = matrix_;
    struct SEntry {
        int index;
        int sine;
        int cosine;
    };
    for (const SEntry &entry : {SEntry{.index = 0, .sine = 0, .cosine = 65536},
                                SEntry{.index = 1, .sine = 1608, .cosine = 65516},
                                SEntry{.index = 2, .sine = 3215, .cosine = 65457},
                                SEntry{.index = 16, .sine = 25079, .cosine = 60547},
                                SEntry{.index = 32, .sine = 46340, .cosine = 46340},
                                SEntry{.index = 43, .sine = 57022, .cosine = 32302},
                                SEntry{.index = 64, .sine = 65536, .cosine = 0},
                                SEntry{.index = 96, .sine = 46340, .cosine = -46340},
                                SEntry{.index = 128, .sine = 0, .cosine = -65536},
                                SEntry{.index = 129, .sine = -1608, .cosine = -65516},
                                SEntry{.index = 160, .sine = -46340, .cosine = -46340},
                                SEntry{.index = 192, .sine = -65536, .cosine = 0},
                                SEntry{.index = 200, .sine = -64276, .cosine = 12785},
                                SEntry{.index = 255, .sine = -1608, .cosine = 65516}}) {
        EXPECT_EQ(matrix.interpolatedSin(entry.index * kEntry), entry.sine) << entry.index;
        EXPECT_EQ(matrix.interpolatedCos(entry.index * kEntry), entry.cosine) << entry.index;
    }
}

TEST_F(CMatrixTest, BetweenEntriesTheValueIsInterpolated) {
    // 1608 + (3215 - 1608) * 128 / 256, the half dropped.
    EXPECT_EQ(matrix_.interpolatedSin((1 * kEntry) + 128), 2411);
    // The last entry interpolates toward the 257th, which repeats the first.
    EXPECT_EQ(matrix_.interpolatedCos((255 * kEntry) + 255), 65535);
}

TEST_F(CMatrixTest, InterpolationDividesTowardZero) {
    // -1608 / 256 is -6.28: -6, where flooring would give -7.
    EXPECT_EQ(matrix_.interpolatedSin((128 * kEntry) + 1), -6);
}

TEST_F(CMatrixTest, AnglesWrapAtAFullTurn) {
    EXPECT_EQ(matrix_.interpolatedSin(0x10000 + kEntry), 1608);
    EXPECT_EQ(matrix_.interpolatedSin(-kEntry), -1608);
}

TEST_F(CMatrixTest, TheCameraStartsAtTheOriginUnrotated) {
    EXPECT_EQ(matrix_.getCameraOrigin(), common::CVector3i{});
    EXPECT_EQ(matrix_.getCameraRotation(), common::CVector3i{});
    EXPECT_EQ(matrix_.getProjectionScale(), CMatrix::kUnitProjectionScale);
}

TEST_F(CMatrixTest, AWindowClipsToItsRectangleOnePixelLarger) {
    two_d_.setupViewportAndClipping(0, 0, 639, 479);
    matrix_.pushViewport(10, 20, 100, 50);
    EXPECT_EQ(two_d_.getClipRect(), (SClipRect{.left = 10, .top = 20, .right = 110, .bottom = 70}));
    EXPECT_EQ(two_d_.getViewportWidth(), 101);
}

TEST_F(CMatrixTest, ClosingAWindowPutsBackWhatOpeningItSaved) {
    two_d_.setupViewportAndClipping(0, 0, 639, 479);
    const SProjectionParams projection = two_d_.getProjection();
    matrix_.setCameraOrigin(1, 2, 3);
    light_.setDirectionalLightVector(4, 5, 6);
    matrix_.pushViewport(10, 20, 100, 50);
    matrix_.setCameraOrigin(7, 8, 9);
    light_.setDirectionalLightVector(0, 0, 1);
    matrix_.popViewport();
    EXPECT_EQ(two_d_.getClipRect(), (SClipRect{.left = 0, .top = 0, .right = 639, .bottom = 479}));
    EXPECT_EQ(two_d_.getProjection(), projection);
    EXPECT_EQ(matrix_.getCameraOrigin(), (common::CVector3i{.x = 1, .y = 2, .z = 3}));
    EXPECT_EQ(light_.getLightDirection(), (common::CVector3i{.x = 4, .y = 5, .z = 6}));
    // The viewport size isn't saved, so it stays the window's.
    EXPECT_EQ(two_d_.getViewportWidth(), 101);
}

TEST_F(CMatrixTest, AWindowStartsAtUnitScaleAndClosingItRestoresTheRotationAndScale) {
    const common::CVector3i rotation{.x = 0x100, .y = 0x200, .z = 0x300};
    matrix_.storeCameraRotation(rotation);
    matrix_.setProjectionScale(0xa000);
    matrix_.pushViewport(0, 0, 10, 10);
    EXPECT_EQ(matrix_.getProjectionScale(), CMatrix::kUnitProjectionScale);
    matrix_.storeCameraRotation({});
    matrix_.popViewport();
    EXPECT_EQ(matrix_.getCameraRotation(), rotation);
    EXPECT_EQ(matrix_.getProjectionScale(), 0xa000);
}

TEST_F(CMatrixTest, ATenthWindowIsFatal) {
    for (int i = 0; i < 9; ++i) {
        matrix_.pushViewport(0, 0, 10, 10);
    }
    EXPECT_THAT([this] { matrix_.pushViewport(0, 0, 10, 10); },
                ThrowsMessage<common::CFatalError>(StrEq("Too many 3D windows")));
}

TEST_F(CMatrixTest, ClosingAWindowThatIsntOpenIsFatal) {
    EXPECT_THAT([this] { matrix_.popViewport(); },
                ThrowsMessage<common::CFatalError>(StrEq("3D Window unbalance")));
}

} // namespace
} // namespace nocturne::engine
