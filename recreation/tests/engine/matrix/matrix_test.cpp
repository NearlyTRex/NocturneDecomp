#include "engine/matrix/matrix.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

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
                                 void (CMatrix::*)(common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CMatrix::getCameraRotation),
                                 void (CMatrix::*)(common::CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CMatrix::pushViewport), void (CMatrix::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CMatrix::popViewport), void (CMatrix::*)()>);
}

// Truncated toward zero from the original's pi, 3.1415926535: one entry is 1/256 of a turn.
TEST(CMatrix, TheTablesHoldTruncatedSixteenSixteenSinesAndCosines) {
    const CMatrix matrix;
    struct SEntry {
        int index;
        int sine;
        int cosine;
    };
    for (const SEntry &entry :
         {SEntry{0, 0, 65536}, SEntry{1, 1608, 65516}, SEntry{2, 3215, 65457},
          SEntry{16, 25079, 60547}, SEntry{32, 46340, 46340}, SEntry{43, 57022, 32302},
          SEntry{64, 65536, 0}, SEntry{96, 46340, -46340}, SEntry{128, 0, -65536},
          SEntry{129, -1608, -65516}, SEntry{160, -46340, -46340}, SEntry{192, -65536, 0},
          SEntry{200, -64276, 12785}, SEntry{255, -1608, 65516}}) {
        EXPECT_EQ(matrix.interpolatedSin(entry.index * kEntry), entry.sine) << entry.index;
        EXPECT_EQ(matrix.interpolatedCos(entry.index * kEntry), entry.cosine) << entry.index;
    }
}

TEST(CMatrix, BetweenEntriesTheValueIsInterpolated) {
    const CMatrix matrix;
    // 1608 + (3215 - 1608) * 128 / 256, the half dropped.
    EXPECT_EQ(matrix.interpolatedSin((1 * kEntry) + 128), 2411);
    // The last entry interpolates toward the 257th, which repeats the first.
    EXPECT_EQ(matrix.interpolatedCos((255 * kEntry) + 255), 65535);
}

TEST(CMatrix, InterpolationDividesTowardZero) {
    const CMatrix matrix;
    // -1608 / 256 is -6.28: -6, where flooring would give -7.
    EXPECT_EQ(matrix.interpolatedSin((128 * kEntry) + 1), -6);
}

TEST(CMatrix, AnglesWrapAtAFullTurn) {
    const CMatrix matrix;
    EXPECT_EQ(matrix.interpolatedSin(0x10000 + kEntry), 1608);
    EXPECT_EQ(matrix.interpolatedSin(-kEntry), -1608);
}

} // namespace
} // namespace nocturne::engine
