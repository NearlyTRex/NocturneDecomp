#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/dosio/dosio.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"
#include "tests/mocks/platform/mockfilesystem.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>

namespace nocturne::engine {
namespace {

using ::testing::NiceMock;
using ::testing::Return;
using ::testing::ReturnRef;

constexpr std::uint8_t kIndex = 9;
// Red 0xc8, green 0x64, blue 0x32.
constexpr std::uint32_t kSource = 0x00c86432;
// Red 0x10, green 0x20, blue 0x30, under a top byte the mixed blend clears.
constexpr std::uint32_t kDest32 = 0xff102030;
// The same levels in 5-6-5.
constexpr std::uint16_t kDest16 = 0x1106;
constexpr int kFullGlobalAlpha = 0xffff;
// With the full global alpha, coverage 128 * 255 gives an opacity of 127.
constexpr std::uint8_t kHalfAlpha = 128;

// 5-6-5, with the masks and shifts convertPaletteToDirectColor derives for it.
SColorMasks getMasks565() {
    return {.red_mask16 = 0xf800,
            .green_mask16 = 0x07e0,
            .blue_mask16 = 0x001f,
            .red_mask32 = 0xf80000,
            .green_mask32 = 0xfc00,
            .blue_mask32 = 0xf8,
            .blue_bit_shift = 3,
            .total_dither_shift = 8,
            .green_blue_dither_shift = 5};
}

class CSpecialAlphaTest : public ::testing::Test {
protected:
    CSpecialAlphaTest() {
        palette_[kIndex] = kSource;
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(ReturnRef(masks_));
    }

    std::uint32_t draw32(std::uint32_t dest, std::uint8_t alpha, int global_alpha) {
        std::array<std::uint32_t, 1> row{dest};
        const std::array<std::uint8_t, 1> indices{kIndex};
        const std::array<std::uint8_t, 1> alphas{alpha};
        special_.renderAlphaRow32(row, indices, alphas, global_alpha);
        return row[0];
    }

    std::uint16_t draw16(std::uint16_t dest, std::uint8_t alpha, int global_alpha) {
        std::array<std::uint16_t, 1> row{dest};
        const std::array<std::uint8_t, 1> indices{kIndex};
        const std::array<std::uint8_t, 1> alphas{alpha};
        special_.renderAlphaRow16(row, indices, alphas, global_alpha);
        return row[0];
    }

    std::array<std::uint32_t, 256> palette_{};
    SColorMasks masks_ = getMasks565();
    NiceMock<platform::MockFileSystem> file_system_;
    CDosIo dosio_{file_system_};
    NiceMock<MockScreenDevice> screen_;
    NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
    NiceMock<platform::MockRenderer> renderer_;
    C3d three_d_;
    SCurrentTexture current_texture_;
    CSpecial special_{renderer_, screen_, two_d_, three_d_, current_texture_};
};

TEST_F(CSpecialAlphaTest, NearlyFullCoverageDrawsThePaletteColourAsItIs) {
    palette_[kIndex] = 0xab123456;
    EXPECT_EQ(draw32(kDest32, 0xff, kFullGlobalAlpha), 0xab123456U);
}

TEST_F(CSpecialAlphaTest, CoverageOfAByteOrLessDrawsNothing) {
    EXPECT_EQ(draw32(kDest32, 1, kFullGlobalAlpha), kDest32);
}

TEST_F(CSpecialAlphaTest, CoverageInBetweenMixesTheColoursAndClearsTheTopByte) {
    EXPECT_EQ(draw32(kDest32, kHalfAlpha, kFullGlobalAlpha), 0x006b4130U);
}

TEST_F(CSpecialAlphaTest, TheGlobalAlphasTopByteScalesEachPixelsAlpha) {
    EXPECT_EQ(draw32(kDest32, 0xff, 0x80ff), 0x006b4130U);
}

TEST_F(CSpecialAlphaTest, AdditiveBlendingAddsTheColoursAndKeepsTheTopByte) {
    three_d_.setBlendMode(C3d::kAdditiveBlend);
    EXPECT_EQ(draw32(kDest32, kHalfAlpha, kFullGlobalAlpha), 0xff735148U);
}

TEST_F(CSpecialAlphaTest, AdditiveBlendingSaturatesAndNeverDrawsOpaque) {
    three_d_.setBlendMode(C3d::kAdditiveBlend);
    palette_[kIndex] = 0x00808080;
    EXPECT_EQ(draw32(0x00f0f0f0, 0xff, kFullGlobalAlpha), 0x00ffffffU);
    EXPECT_EQ(draw32(0x00101010, 0xff, kFullGlobalAlpha), 0x008f8f8fU);
}

TEST_F(CSpecialAlphaTest, AGlobalAlphaAboveSixteenBitsCountsAsFull) {
    three_d_.setBlendMode(C3d::kAdditiveBlend);
    EXPECT_EQ(draw32(kDest32, kHalfAlpha, 0x1ffff), draw32(kDest32, kHalfAlpha, kFullGlobalAlpha));
}

TEST_F(CSpecialAlphaTest, ANegativeGlobalAlphaDrawsNothing) {
    EXPECT_EQ(draw32(kDest32, 0xff, -1), kDest32);
}

TEST_F(CSpecialAlphaTest, EachPixelTakesItsOwnIndexAndAlpha) {
    palette_[1] = 0x00ffffff;
    std::array<std::uint32_t, 3> row{kDest32, kDest32, kDest32};
    const std::array<std::uint8_t, 3> indices{kIndex, 1, kIndex};
    const std::array<std::uint8_t, 3> alphas{0xff, 0xff, 1};
    special_.renderAlphaRow32(row, indices, alphas, kFullGlobalAlpha);
    EXPECT_EQ(row[0], kSource);
    EXPECT_EQ(row[1], 0x00ffffffU);
    EXPECT_EQ(row[2], kDest32);
}

TEST_F(CSpecialAlphaTest, TheRowEndsWithTheShortestOfTheThree) {
    std::array<std::uint32_t, 3> row{kDest32, kDest32, kDest32};
    const std::array<std::uint8_t, 3> indices{kIndex, kIndex, kIndex};
    const std::array<std::uint8_t, 2> alphas{0xff, 0xff};
    special_.renderAlphaRow32(row, indices, alphas, kFullGlobalAlpha);
    EXPECT_EQ(row[1], kSource);
    EXPECT_EQ(row[2], kDest32);
}

// The original's loop tested the count after drawing, so an empty row still drew a pixel.
TEST_F(CSpecialAlphaTest, AnEmptyRowDrawsNothing) {
    std::array<std::uint32_t, 1> row{kDest32};
    const std::array<std::uint8_t, 1> indices{kIndex};
    const std::array<std::uint8_t, 1> alphas{0xff};
    special_.renderAlphaRow32(std::span(row).first(0), indices, alphas, kFullGlobalAlpha);
    EXPECT_EQ(row[0], kDest32);
}

TEST_F(CSpecialAlphaTest, SixteenBitsPacksThePaletteColourAtNearlyFullCoverage) {
    EXPECT_EQ(draw16(kDest16, 0xff, kFullGlobalAlpha), 0xcb26);
}

TEST_F(CSpecialAlphaTest, SixteenBitsDrawsNothingAtAByteOfCoverageOrLess) {
    EXPECT_EQ(draw16(kDest16, 1, kFullGlobalAlpha), kDest16);
}

TEST_F(CSpecialAlphaTest, SixteenBitsMixesTheScreensLevelsSpreadToBytes) {
    EXPECT_EQ(draw16(kDest16, kHalfAlpha, kFullGlobalAlpha), 0x6a06);
}

TEST_F(CSpecialAlphaTest, SixteenBitsAddsUnderAdditiveBlending) {
    three_d_.setBlendMode(C3d::kAdditiveBlend);
    EXPECT_EQ(draw16(kDest16, kHalfAlpha, kFullGlobalAlpha), 0x7289);
}

TEST_F(CSpecialAlphaTest, SixteenBitsEndsWithTheShortestOfTheThree) {
    std::array<std::uint16_t, 2> row{kDest16, kDest16};
    const std::array<std::uint8_t, 1> indices{kIndex};
    const std::array<std::uint8_t, 2> alphas{0xff, 0xff};
    special_.renderAlphaRow16(row, indices, alphas, kFullGlobalAlpha);
    EXPECT_EQ(row[0], 0xcb26);
    EXPECT_EQ(row[1], kDest16);
}

} // namespace
} // namespace nocturne::engine
