#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "tests/mocks/engine/bitfontfixture.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockfont.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::NiceMock;
using ::testing::Return;

using CBitFontScaledTest = CBitFontFixture;

// At 1.5 a screen pixel spans two thirds of a sheet pixel, so '!' ("#." over "##") is 3x3 on
// the screen; at 0.5 it spans four, so '!' is one pixel three quarters covered.
constexpr float kUpscale = 1.5F;
constexpr float kDownscale = 0.5F;
constexpr std::uint32_t kRed = 0xff0000;
constexpr std::uint32_t kGreen = 0x00ff00;

TEST(CBitFontScaled, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextScaled),
                                 int (CBitFont::*)(std::string_view, int, int, int, int, float)>);
    static_assert(std::is_same_v<decltype(&CBitFont::getTextWidthScaled),
                                 int (CBitFont::*)(std::string_view, float) const>);
    static_assert(std::is_same_v<decltype(&CBitFont::getCharHeightScaled),
                                 int (CBitFont::*)(int, float) const>);
    static_assert(std::is_same_v<decltype(&CBitFont::wrapTextScaled),
                                 CBitFont::SWrappedText (CBitFont::*)(std::string_view, int, int,
                                                                      int, float) const>);
}

TEST_F(CBitFontScaledTest, AWholeScaleDrawsEachSheetPixelAsABlock) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(
        rig.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, 2.0004F),
        6);
    EXPECT_EQ(rig.picture(kRed, 5, 5), "##...\n"
                                       "##...\n"
                                       "####.\n"
                                       "####.\n"
                                       ".....\n");
}

TEST_F(CBitFontScaledTest, AFractionalScaleDrawsWhollyCoveredPixelsSolid) {
    SRig rig(*this, 32);
    open(rig);
    // The advance is (2 + 1) * 1.5, rounded.
    EXPECT_EQ(
        rig.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kUpscale),
        5);
    EXPECT_EQ(rig.picture(kRed, 4, 4), "#...\n"
                                       "#...\n"
                                       "###.\n"
                                       "....\n");
    // Over only the transparent corner, nothing is drawn.
    EXPECT_EQ(rig.screen.pixel(2, 0), 0U);
    // Just off a whole scale the third column starts a sliver inside '#', where a whole 2 would
    // leave it blank.
    EXPECT_EQ(
        rig.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, 2.01F), 6);
    EXPECT_EQ(rig.screen.pixel(2, 0), 0x030000U);
}

TEST_F(CBitFontScaledTest, AKeyedFontBlendsAPartlyCoveredPixelByItsShare) {
    SRig rig32(*this, 32);
    open(rig32);
    rig32.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kDownscale);
    // 255 * 0.75, rounded.
    EXPECT_EQ(rig32.screen.pixel(0, 0), 0xbf0000U);

    SRig rig16(*this, 16);
    open(rig16);
    rig16.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kUpscale);
    EXPECT_EQ(rig16.screen.pixel(0, 0), CMemoryScreen::pack16(0xff, 0, 0));
    EXPECT_EQ(rig16.screen.pixel(2, 0), 0U);
    rig16.screen.fill(0);
    rig16.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kDownscale);
    // An opacity of 255 * 0.75 = 191: red 248 * 191 / 256 = 185, cut to five bits.
    EXPECT_EQ(rig16.screen.pixel(0, 0), 23U << 11U);
}

// At 0.5 the first pixel of '"' ("#+#") lies half over '#', red at full coverage, and half over
// '+', grey at half; the second only over the last '#'.
TEST_F(CBitFontScaledTest, ABlendedFontAveragesTheCoverageInThirtyTwoBits) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.setInitializedFlag();
    rig.screen.fill(kGreen);
    rig.font.drawTextScaled("\"", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kDownscale);
    // Red coverage 191 and green 64, each times 255 / 256: red 255 * 190 / 256 over black, green
    // 255 * 192 / 256 of the screen's left.
    EXPECT_EQ(rig.screen.pixel(0, 0), 0xbdbf00U);
    EXPECT_EQ(rig.screen.pixel(1, 0), 0xfdfe00U);
    // A pixel over only index 0 is left alone.
    rig.font.drawTextScaled("!", 4, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kUpscale);
    EXPECT_EQ(rig.screen.pixel(6, 0), kGreen);
}

TEST_F(CBitFontScaledTest, ABlendedFontAveragesTheCoverageInSixteenBits) {
    SRig rig(*this, 16);
    open(rig);
    rig.font.setInitializedFlag();
    rig.screen.fill(CMemoryScreen::pack16(0, 0xff, 0));
    rig.font.drawTextScaled("\"", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kDownscale);
    // Coverage (255 + 128) / 2 times 255 / 256 is 190: red 248 * 190 / 256 = 184, green
    // 252 * 65 / 256 = 63, each cut to its width.
    EXPECT_EQ(rig.screen.pixel(0, 0), (23U << 11U) | (15U << 5U));
    rig.three_d.setRenderAlpha(0);
    rig.screen.fill(0);
    rig.font.drawTextScaled("\"", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kDownscale);
    EXPECT_EQ(rig.screen.pixel(0, 0), 0U);
}

TEST_F(CBitFontScaledTest, SolidColoursComeFromTheDepthsTable) {
    SRig rig32(*this, 32);
    open(rig32);
    rig32.font.drawTextScaled("!", 0, 0, 0x80, CBitFont::kNoShadow, kUpscale);
    EXPECT_EQ(rig32.screen.pixel(0, 0), 0x808080U);

    SRig rig16(*this, 16);
    open(rig16);
    rig16.font.drawTextScaled("!", 0, 0, 0x80, CBitFont::kNoShadow, kUpscale);
    EXPECT_EQ(rig16.screen.pixel(0, 0), CMemoryScreen::pack16(0x80, 0x80, 0x80));
}

TEST_F(CBitFontScaledTest, AShadowIsDrawnAtTheScaledShadowOffset) {
    SRig rig(*this, 32);
    open(rig);
    // The offset (2, 1) at 1.5 puts the shadow's top-left at (3, 2).
    rig.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, 0x80, kUpscale);
    EXPECT_EQ(rig.screen.pixel(3, 2), 0x808080U);
    EXPECT_EQ(rig.screen.pixel(0, 0), kRed);
}

TEST_F(CBitFontScaledTest, LinesStartAScaledLineApartAndReturnsAreSkipped) {
    SRig rig(*this, 32);
    open(rig);
    // A line is the line height 2 and spacing 2, times 1.5.
    EXPECT_EQ(rig.font.drawTextScaled("!!\r\n!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow,
                                      kUpscale),
              5);
    EXPECT_EQ(rig.screen.pixel(0, 5), 0U);
    EXPECT_EQ(rig.screen.pixel(0, 6), kRed);
    EXPECT_EQ(rig.screen.pixel(5, 0), kRed);
}

TEST_F(CBitFontScaledTest, ACharacterWithoutAGlyphOnlyAdvances) {
    SRig rig(*this, 32);
    open(rig);
    // A space is 8 wide: (8 + 1) * 1.5, rounded.
    EXPECT_EQ(
        rig.font.drawTextScaled(" ", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kUpscale),
        14);
    EXPECT_EQ(rig.picture(0, kScreenWidth, 1), std::string(kScreenWidth, '#') + "\n");
}

TEST_F(CBitFontScaledTest, AGlyphIsCutToTheClip) {
    SRig rig(*this, 32);
    open(rig);
    rig.two_d.setupViewportAndClipping(1, 1, kScreenWidth - 1, kScreenHeight - 1);
    rig.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kUpscale);
    EXPECT_EQ(rig.picture(kRed, 4, 4), "....\n"
                                       "....\n"
                                       ".##.\n"
                                       "....\n");
    rig.screen.fill(0);
    rig.two_d.setupViewportAndClipping(0, 0, 1, 1);
    rig.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kUpscale);
    EXPECT_EQ(rig.picture(kRed, 4, 4), "#...\n"
                                       "#...\n"
                                       "....\n"
                                       "....\n");
}

TEST_F(CBitFontScaledTest, MeasuresAreScaledAndRounded) {
    SRig rig(*this, 32);
    open(rig);
    // "!!" is 2 + 1 + 2.
    EXPECT_EQ(rig.font.getTextWidthScaled("!!", kUpscale), 8);
    EXPECT_EQ(rig.font.getCharHeightScaled('!', kUpscale), 3);
}

TEST_F(CBitFontScaledTest, TheWrapMeasuresTheBoxInSheetPixelsAndGivesTheScaledPitch) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.setCharWidth(' ', 2);
    rig.font.setCharYOffsetRange(4, 'X');
    // A 15-pixel box at 1.5 is 10 sheet pixels; "!! !!" is 14. 'X' is 4 tall: a 6-pixel pitch.
    const CBitFont::SWrappedText wrapped = rig.font.wrapTextScaled("!! !!", 10, 40, 15, kUpscale);
    EXPECT_EQ(wrapped.lines, (std::vector<std::string>{"!!", "!!"}));
    EXPECT_EQ(wrapped.line_pitch, 6);
}

TEST_F(CBitFontScaledTest, AScaleThatIsntPositiveOrADepthWithoutABlenderIsOne) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(rig.font.getTextWidthScaled("!!", 0.0F), 5);
    EXPECT_EQ(rig.font.getTextWidthScaled("!!", -1.0F), 5);
    EXPECT_EQ(rig.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, 0.0F),
              3);
    EXPECT_EQ(rig.screen.pixel(0, 0), kRed);

    SRig rig8(*this, 8);
    open(rig8);
    EXPECT_EQ(rig8.font.getTextWidthScaled("!!", kUpscale), 5);
    EXPECT_EQ(
        rig8.font.drawTextScaled("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, kUpscale),
        3);
}

TEST_F(CBitFontScaledTest, AnOsFontDrawsAndMeasuresUnscaled) {
    SRig rig(*this, 32);
    open(rig);
    NiceMock<MockFont> os_font;
    rig.font.setWinFont(os_font);
    EXPECT_CALL(os_font, drawText(std::string_view("ab"), 1, 2, 3, 4)).WillOnce(Return(7));
    EXPECT_EQ(rig.font.drawTextScaled("ab", 1, 2, 3, 4, kUpscale), 7);
    EXPECT_CALL(os_font, getStringWidth(std::string_view("ab"))).WillOnce(Return(10));
    EXPECT_EQ(rig.font.getTextWidthScaled("ab", kUpscale), 10);
}

TEST_F(CBitFontScaledTest, AnOsFontMadeAtTheScaleDrawsAndMeasuresTheScaledText) {
    SRig rig(*this, 32);
    open(rig);
    NiceMock<MockFont> os_font;
    NiceMock<MockFont> scaled_font;
    rig.font.setWinFont(os_font);
    rig.font.setScaledWinFont(&scaled_font, kUpscale);
    EXPECT_CALL(os_font, drawText).Times(0);
    EXPECT_CALL(scaled_font, drawText(std::string_view("ab"), 1, 2, 3, 4)).WillOnce(Return(14));
    EXPECT_EQ(rig.font.drawTextScaled("ab", 1, 2, 3, 4, kUpscale), 14);
    EXPECT_CALL(scaled_font, getStringWidth(std::string_view("ab"))).WillOnce(Return(20));
    EXPECT_EQ(rig.font.getTextWidthScaled("ab", kUpscale), 20);
    // Another scale is drawn by the unscaled font, at its own size.
    EXPECT_CALL(os_font, getStringWidth(std::string_view("ab"))).WillOnce(Return(10));
    EXPECT_EQ(rig.font.getTextWidthScaled("ab", kUpscale * 2), 10);
}

} // namespace
} // namespace nocturne::engine
