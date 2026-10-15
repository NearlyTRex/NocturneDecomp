#include "engine/alphabit/alphabitmap.h"
#include "tests/mocks/engine/alphabitmapfixture.h"

#include <gtest/gtest.h>

#include <string>

namespace nocturne::engine {
namespace {

constexpr std::uint32_t kBackground = 0x00abcdef;

// The screen is filled with kBackground; images are wholly opaque unless a test says.
class CAlphaBitmapDrawTest : public CAlphaBitmapFixture {
protected:
    explicit CAlphaBitmapDrawTest(int bits_per_pixel = 32) : CAlphaBitmapFixture(bits_per_pixel) {
        screen_.fill(kBackground);
    }

    // Indices 1, 2, 3... row by row.
    void loadCounting(int width, int height) {
        std::string raw;
        for (int i = 1; i <= width * height; ++i) {
            raw += static_cast<char>(i);
        }
        givenImage("pic", raw);
        bitmap_.load("pic", width, height);
    }

    // Entry i of the ramp palette in the screen's layout.
    static std::uint32_t ramp(std::uint32_t i) {
        return (i << 16U) | ((i * 2) << 8U) | (i * 3);
    }
};

class CAlphaBitmapDraw16Test : public CAlphaBitmapDrawTest {
protected:
    CAlphaBitmapDraw16Test() : CAlphaBitmapDrawTest(16) {}
};

class CAlphaBitmapDraw8Test : public CAlphaBitmapDrawTest {
protected:
    CAlphaBitmapDraw8Test() : CAlphaBitmapDrawTest(8) {}
};

TEST_F(CAlphaBitmapDrawTest, InitPaletteHandsTheImagesColoursToTheScreen) {
    loadCounting(1, 1);
    bitmap_.initPalette();
    EXPECT_EQ(screen_.getHardwarePalette32()[5], ramp(5));
}

TEST_F(CAlphaBitmapDrawTest, DisplayDrawsEachRowAtThePosition) {
    loadCounting(2, 2);
    bitmap_.display(1, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), kBackground);
    EXPECT_EQ(screen_.pixel(1, 0), ramp(1));
    EXPECT_EQ(screen_.pixel(2, 0), ramp(2));
    EXPECT_EQ(screen_.pixel(1, 1), ramp(3));
    EXPECT_EQ(screen_.pixel(2, 1), ramp(4));
    EXPECT_EQ(screen_.pixel(3, 1), kBackground);
}

TEST_F(CAlphaBitmapDrawTest, TheGlobalAlphaScalesEveryPixel) {
    loadCounting(1, 1);
    bitmap_.display(0, 0, 0);
    EXPECT_EQ(screen_.pixel(0, 0), kBackground);
}

TEST_F(CAlphaBitmapDrawTest, AnImageOverTheTopLeftCornerShowsItsBottomRight) {
    loadCounting(2, 2);
    bitmap_.display(-1, -1, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), ramp(4));
    EXPECT_EQ(screen_.pixel(1, 0), kBackground);
    EXPECT_EQ(screen_.pixel(0, 1), kBackground);
}

// The screen's rows are one block, so a row run past its end would show in the next row.
TEST_F(CAlphaBitmapDrawTest, AnImageOverBothEdgesStaysInsideEachRow) {
    loadCounting(6, 1);
    bitmap_.display(-1, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), ramp(2));
    EXPECT_EQ(screen_.pixel(3, 0), ramp(5));
    EXPECT_EQ(screen_.pixel(0, 1), kBackground);
}

TEST_F(CAlphaBitmapDrawTest, AnImageBelowTheScreenIsClippedThere) {
    loadCounting(1, 3);
    bitmap_.display(0, 1, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), kBackground);
    EXPECT_EQ(screen_.pixel(0, 1), ramp(1));
}

TEST_F(CAlphaBitmapDrawTest, AnImageOffTheScreenLeavesThePaletteAlone) {
    loadCounting(2, 2);
    bitmap_.display(kScreenWidth, 0, kFullAlpha);
    bitmap_.display(-3, 0, kFullAlpha);
    bitmap_.display(0, kScreenHeight, kFullAlpha);
    bitmap_.display(0, -3, kFullAlpha);
    EXPECT_EQ(screen_.getHardwarePalette32()[1], 0U);
}

// The original's off-screen test is x + width < 0, so an image ending at the left edge counts.
TEST_F(CAlphaBitmapDrawTest, AnImageEndingAtTheLeftEdgeSetsThePaletteButDrawsNothing) {
    loadCounting(2, 2);
    bitmap_.display(-2, 0, kFullAlpha);
    EXPECT_EQ(screen_.getHardwarePalette32()[1], ramp(1));
    EXPECT_EQ(screen_.pixel(0, 0), kBackground);
}

TEST_F(CAlphaBitmapDrawTest, AnImageEndingAtTheTopEdgeSetsThePaletteButDrawsNothing) {
    loadCounting(2, 2);
    bitmap_.display(0, -2, kFullAlpha);
    EXPECT_EQ(screen_.getHardwarePalette32()[1], ramp(1));
    EXPECT_EQ(screen_.pixel(0, 0), kBackground);
}

TEST_F(CAlphaBitmapDraw16Test, SixteenBitsDrawsPackedPixels) {
    givenImage("pic", std::string(1, '\x40'));
    bitmap_.load("pic", 1, 1);
    bitmap_.display(0, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), CMemoryScreen::pack16(0x40, 0x80, 0xc0));
}

// The original wrote 16-bit pixels into 8-bit rows, twice as far as each row went.
TEST_F(CAlphaBitmapDraw8Test, EightBitsSetsThePaletteButDrawsNothing) {
    loadCounting(1, 1);
    bitmap_.display(0, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), kBackground & 0xffU);
    EXPECT_EQ(screen_.getHardwarePalette32()[1], ramp(1));
}

} // namespace
} // namespace nocturne::engine
