#include "common/error/fatalerror.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/palette/font.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::NiceMock;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CBitFont, PublicInterface) {
    static_assert(std::is_constructible_v<CBitFont, const CDosIo &, IScreenDevice &, const C2d &,
                                          const C3d &, const CFontColors &>);
    static_assert(std::is_same_v<decltype(&CBitFont::openFontFile),
                                 void (CBitFont::*)(std::string_view, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::setInitializedFlag), void (CBitFont::*)()>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawText),
                                 int (CBitFont::*)(std::string_view, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawCharacter),
                                 int (CBitFont::*)(int, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextWrapper),
                                 int (CBitFont::*)(int, int, int, int, std::string_view)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextRight),
                                 int (CBitFont::*)(int, int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextCenter),
                                 int (CBitFont::*)(int, int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextCenterInBounds),
                                 int (CBitFont::*)(int, int, int, int, int, std::string_view)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextCenterInBoundsF<int>),
                                 int (CBitFont::*)(int, int, int, int, int, std::format_string<int>,
                                                   int &&)>);
    static_assert(std::is_same_v<decltype(&CBitFont::getTextWidth),
                                 int (CBitFont::*)(std::string_view, int) const>);
    static_assert(std::is_same_v<decltype(&CBitFont::getTextHeight),
                                 int (CBitFont::*)(std::string_view, int) const>);
    static_assert(
        std::is_same_v<decltype(&CBitFont::wrapText), std::vector<std::string> (CBitFont::*)(
                                                          std::string_view, int, int, int) const>);
    static_assert(std::is_same_v<decltype(&CBitFont::getCharWidth), int (CBitFont::*)(int) const>);
    static_assert(
        std::is_same_v<decltype(&CBitFont::getCharHeight), int (CBitFont::*)(int, int) const>);
    static_assert(
        std::is_same_v<decltype(&CBitFont::getCharYOffset), int (CBitFont::*)(int) const>);
    static_assert(std::is_same_v<decltype(&CBitFont::setCharYOffsetRange),
                                 void (CBitFont::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::setFontReady), void (CBitFont::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::remapPalette), void (CBitFont::*)()>);
}

constexpr int kScreenWidth = 16;
constexpr int kScreenHeight = 10;
// The sheet's ink: '#' and '+' are their own bytes, and the palette gives them colours.
constexpr std::uint8_t kInk = '#';
constexpr std::uint8_t kFaint = '+';

// '!' is 2x2 with a blank third row, '"' is 3x1.
SFontSheet twoGlyphSheet() {
    return makeFontSheet({{"#.", "##", ".."}, {"#+#", "...", "..."}}, 3);
}

// '#' is red, '+' half grey.
std::string twoGlyphPalette() {
    std::vector<std::uint8_t> levels(768, 0);
    const std::size_t ink = static_cast<std::size_t>(kInk) * 3;
    const std::size_t faint = static_cast<std::size_t>(kFaint) * 3;
    levels[ink] = 0xff;
    levels[faint] = 0x80;
    levels[faint + 1] = 0x80;
    levels[faint + 2] = 0x80;
    return makePalette(levels);
}

class COsFont : public CFont {
public:
    MOCK_METHOD(int, drawText, (std::string_view, int, int, int, int), (override));
    MOCK_METHOD(int, getStringWidth, (std::string_view), (override));
    MOCK_METHOD(int, getStringHeight, (std::string_view), (override));
};

class CBitFontTest : public CPodFixture {
protected:
    // A font over its own screen at one depth.
    struct SRig {
        SRig(CBitFontTest &test, int bits_per_pixel)
            : screen(kScreenWidth, kScreenHeight, bits_per_pixel),
              two_d(test.dosio_, screen, test.raw_input_),
              font(test.dosio_, screen, two_d, three_d, colors) {
            two_d.setupViewportAndClipping(0, 0, kScreenWidth - 1, kScreenHeight - 1);
        }

        // Rows of the top left of the screen, '#' where a pixel is value and '.' elsewhere.
        [[nodiscard]] std::string picture(std::uint32_t value, int width, int height) const {
            std::string rows;
            for (int y = 0; y < height; ++y) {
                for (int x = 0; x < width; ++x) {
                    rows += screen.pixel(x, y) == value ? '#' : '.';
                }
                rows += '\n';
            }
            return rows;
        }

        CMemoryScreen screen;
        C2d two_d;
        C3d three_d;
        CFontColors colors;
        CBitFont font;
    };

    CBitFontTest() {
        const SFontSheet sheet = twoGlyphSheet();
        givenFile("art\\font.raw", sheet.pixels);
        givenFile("art\\font.act", twoGlyphPalette());
    }

    static void open(SRig &rig) {
        const SFontSheet sheet = twoGlyphSheet();
        rig.font.openFontFile("font.raw", sheet.width, sheet.height, 0);
    }

    NiceMock<MockRawInput> raw_input_;
};

TEST_F(CBitFontTest, MarkersGiveEachGlyphItsWidthAndInkItsHeight) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(rig.font.getCharWidth('!'), 2);
    EXPECT_EQ(rig.font.getCharWidth('"'), 3);
    EXPECT_EQ(rig.font.getCharHeight('!'), 2);
    EXPECT_EQ(rig.font.getCharHeight('"'), 1);
    EXPECT_EQ(rig.font.getMaxCharWidth(), 3);
    // A space only advances.
    EXPECT_EQ(rig.font.getCharWidth(' '), 8);
    EXPECT_EQ(rig.font.getCharWidth(-1), 0);
    EXPECT_EQ(rig.font.getCharWidth(0x100), 0);
    EXPECT_EQ(rig.font.getCharHeight(-1), 0);
    EXPECT_EQ(rig.font.getCharHeight(0x100), 0);
}

TEST_F(CBitFontTest, OffsetsLowerCharactersAndCountInTheirHeight) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.setCharYOffsetRange(3, '!');
    rig.font.setCharYOffsetRange(1, -5, 0x200);
    rig.font.setCharYOffsetRange(4, '"', '"');
    EXPECT_EQ(rig.font.getCharYOffset('!'), 1);
    EXPECT_EQ(rig.font.getCharYOffset('"'), 4);
    EXPECT_EQ(rig.font.getCharYOffset(0xff), 1);
    EXPECT_EQ(rig.font.getCharYOffset(-1), 0);
    EXPECT_EQ(rig.font.getCharYOffset(0x100), 0);
    EXPECT_EQ(rig.font.getCharHeight('"', 2), 10);
}

TEST_F(CBitFontTest, TextIsAsWideAsItsWidestLine) {
    SRig rig(*this, 32);
    open(rig);
    // 2 + 1 + 3, then 3; spacing between characters only.
    EXPECT_EQ(rig.font.getTextWidth("!\"\n\""), 6);
    EXPECT_EQ(rig.font.getTextWidth("!\"", 2), 12);
    EXPECT_EQ(rig.font.getTextWidth(""), 0);
    EXPECT_EQ(rig.font.getTextWidth("\n"), 0);
}

TEST_F(CBitFontTest, OneLineIsAsTallAsItsTallestCharacterAndMoreAreLineHeightsApart) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(rig.font.getTextHeight("\"!"), 2);
    EXPECT_EQ(rig.font.getTextHeight("\"!", 3), 6);
    // The line height is the tallest glyph, and lines are 2 apart: 2 + (2 + 2) * 2.
    EXPECT_EQ(rig.font.getTextHeight("!\n\n!"), 10);
    EXPECT_EQ(rig.font.getTextHeight("!\n!", 2), 12);
}

TEST_F(CBitFontTest, ASheetWithoutMarkersIsFatal) {
    givenFile("art\\blank~1.raw", std::string(12, '\0'));
    SRig rig(*this, 32);
    EXPECT_THAT([&rig] { rig.font.openFontFile("blank~1.raw", 4, 3, 0); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("No character markers found in font file (BLANK~1.RAW).")));
}

TEST_F(CBitFontTest, ASheetSmallerThanItsSizeIsFatal) {
    SRig rig(*this, 32);
    EXPECT_THAT([&rig] { rig.font.openFontFile("font.raw", 100, 100, 0); },
                ThrowsMessage<common::CFatalError>(StrEq("Invalid font file size (font.raw).")));
}

TEST_F(CBitFontTest, AFifthSheetIsFatal) {
    SRig rig(*this, 32);
    open(rig);
    const SFontSheet sheet = twoGlyphSheet();
    for (int i = 0; i < 3; ++i) {
        rig.font.loadBitmap("font.raw", sheet.width, sheet.height, 'a' + (i * 2));
    }
    const auto load_fifth = [&rig, &sheet] {
        rig.font.loadBitmap("font.raw", sheet.width, sheet.height, 'x');
    };
    EXPECT_THAT(load_fifth, ThrowsMessage<common::CFatalError>(StrEq("Too many bitmaps")));
}

TEST_F(CBitFontTest, GlyphsPastTheLastCharacterAreFatal) {
    SRig rig(*this, 32);
    const SFontSheet sheet = twoGlyphSheet();
    const auto load_past_the_end = [&rig, &sheet] {
        rig.font.loadNewBitmap("font.raw", sheet.width, sheet.height, 0xff, 0xff, 0);
    };
    EXPECT_THAT(load_past_the_end, ThrowsMessage<common::CFatalError>(
                                       StrEq("Too many chars: fontfile FONT.RAW, chars 256")));
}

TEST_F(CBitFontTest, FreeingForgetsTheGlyphs) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.free();
    EXPECT_EQ(rig.font.getCharWidth('!'), 0);
    EXPECT_EQ(rig.font.getCharWidth(' '), 8);
    EXPECT_EQ(rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow), 1);
}

TEST_F(CBitFontTest, ThirtyTwoBitsDrawTheSheetsColoursWhereItIsntTransparent) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(rig.font.drawCharacter('!', 1, 1, CBitFont::kSheetColors, CBitFont::kNoShadow), 3);
    EXPECT_EQ(rig.picture(0xff0000, 4, 4), "....\n"
                                           ".#..\n"
                                           ".##.\n"
                                           "....\n");
}

TEST_F(CBitFontTest, SixteenBitsDrawTheSheetsColoursInTheScreensLayout) {
    SRig rig(*this, 16);
    open(rig);
    rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow);
    EXPECT_EQ(rig.picture(0xf800, 3, 2), "#..\n"
                                         "##.\n");
}

TEST_F(CBitFontTest, EightBitsDrawTheSheetsIndicesOrOneColour) {
    SRig rig(*this, 8);
    open(rig);
    rig.colors.setDefaultTextColor(0x105);
    rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow);
    rig.font.drawCharacter('!', 3, 0, 9, CBitFont::kNoShadow);
    rig.font.drawCharacter('!', 6, 0, CBitFont::kDefaultTextColor, CBitFont::kNoShadow);
    rig.screen.setPixel(9, 0, 0x55);
    rig.font.drawCharacter('!', 9, 0, CBitFont::kShadowColor, CBitFont::kNoShadow);
    EXPECT_EQ(rig.picture(kInk, 12, 2), "#...........\n"
                                        "##..........\n");
    EXPECT_EQ(rig.picture(9, 12, 2), "...#........\n"
                                     "...##.......\n");
    EXPECT_EQ(rig.picture(5, 12, 2), "......#.....\n"
                                     "......##....\n");
    EXPECT_EQ(rig.screen.pixel(9, 0), 0U);
}

TEST_F(CBitFontTest, SolidColoursComeFromTheTablesTheDefaultOrBlack) {
    SRig rig16(*this, 16);
    open(rig16);
    rig16.colors.setDefaultTextColor(0x1f);
    rig16.font.drawCharacter('!', 0, 0, 0x80, CBitFont::kNoShadow);
    rig16.font.drawCharacter('!', 3, 0, CBitFont::kDefaultTextColor, CBitFont::kNoShadow);
    rig16.screen.setPixel(6, 0, 0x1234);
    rig16.font.drawCharacter('!', 6, 0, CBitFont::kShadowColor, CBitFont::kNoShadow);
    EXPECT_EQ(rig16.screen.pixel(0, 0), CMemoryScreen::pack16(0x80, 0x80, 0x80));
    EXPECT_EQ(rig16.screen.pixel(3, 0), 0x1fU);
    EXPECT_EQ(rig16.screen.pixel(6, 0), 0U);

    SRig rig32(*this, 32);
    open(rig32);
    rig32.colors.setDefaultTextColor(0x123456);
    rig32.font.drawCharacter('!', 0, 0, 0x80, CBitFont::kNoShadow);
    rig32.font.drawCharacter('!', 3, 0, CBitFont::kDefaultTextColor, CBitFont::kNoShadow);
    rig32.screen.setPixel(6, 0, 0x1234);
    rig32.font.drawCharacter('!', 6, 0, CBitFont::kShadowColor, CBitFont::kNoShadow);
    EXPECT_EQ(rig32.screen.pixel(0, 0), 0x808080U);
    EXPECT_EQ(rig32.screen.pixel(3, 0), 0x123456U);
    EXPECT_EQ(rig32.screen.pixel(6, 0), 0U);
}

TEST_F(CBitFontTest, AShadowIsTheGlyphInItsColourAtTheShadowOffset) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, 0x40);
    EXPECT_EQ(rig.picture(0xff0000, 4, 3), "#...\n"
                                           "##..\n"
                                           "....\n");
    EXPECT_EQ(rig.picture(0x404040, 4, 3), "....\n"
                                           "..#.\n"
                                           "..##\n");
}

TEST_F(CBitFontTest, AFontThatIsntReadyDropsAGlyphTheClipCuts) {
    SRig rig(*this, 32);
    open(rig);
    rig.two_d.setupViewportAndClipping(1, 1, 5, 5);
    for (const int x : {0, 5}) {
        rig.font.drawCharacter('!', x, 2, CBitFont::kSheetColors, CBitFont::kNoShadow);
    }
    for (const int y : {0, 5}) {
        rig.font.drawCharacter('!', 2, y, CBitFont::kSheetColors, CBitFont::kNoShadow);
    }
    EXPECT_EQ(rig.picture(0xff0000, 8, 8), "........\n"
                                           "........\n"
                                           "........\n"
                                           "........\n"
                                           "........\n"
                                           "........\n"
                                           "........\n"
                                           "........\n");
}

TEST_F(CBitFontTest, AReadyFontCutsAGlyphToTheClip) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.setFontReady(1);
    rig.two_d.setupViewportAndClipping(1, 1, 5, 5);
    rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow);
    rig.font.drawCharacter('!', 5, 5, CBitFont::kSheetColors, CBitFont::kNoShadow);
    for (const auto &[x, y] :
         {std::pair{9, 0}, std::pair{0, 9}, std::pair{-5, 2}, std::pair{2, -5}}) {
        rig.font.drawCharacter('!', x, y, CBitFont::kSheetColors, CBitFont::kNoShadow);
    }
    EXPECT_EQ(rig.picture(0xff0000, 7, 7), ".......\n"
                                           ".#.....\n"
                                           ".......\n"
                                           ".......\n"
                                           ".......\n"
                                           ".....#.\n"
                                           ".......\n");
}

TEST_F(CBitFontTest, OutOfRangeCharactersDrawNothingAndBlankOnesOnlyAdvance) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(rig.font.drawCharacter(-1, 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow), 0);
    EXPECT_EQ(rig.font.drawCharacter(0x100, 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow), 0);
    EXPECT_EQ(rig.font.drawCharacter(' ', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, 2),
              18);
}

TEST_F(CBitFontTest, ScaledGlyphsDrawEachSheetPixelAsABlock) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, 2), 6);
    EXPECT_EQ(rig.picture(0xff0000, 5, 5), "##...\n"
                                           "##...\n"
                                           "####.\n"
                                           "####.\n"
                                           ".....\n");
}

TEST_F(CBitFontTest, TextAdvancesSkipsReturnsAndStartsLinesUnderTheFirst) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.setCharYOffsetRange(0, ' ');
    EXPECT_EQ(rig.font.drawText("!\r!\n!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow), 3);
    EXPECT_EQ(rig.picture(0xff0000, 7, 6), "#..#...\n"
                                           "##.##..\n"
                                           ".......\n"
                                           ".......\n"
                                           "#......\n"
                                           "##.....\n");
}

TEST_F(CBitFontTest, TheWrapperDrawsTheTextAtThePoint) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(rig.font.drawTextWrapper(2, 1, CBitFont::kSheetColors, CBitFont::kNoShadow, "!"), 3);
    EXPECT_EQ(rig.picture(0xff0000, 5, 3), ".....\n"
                                           "..#..\n"
                                           "..##.\n");
}

TEST_F(CBitFontTest, TextIsCentredBetweenInclusiveEdges) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(
        rig.font.drawTextCenterInBounds(0, 8, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, "!"),
        3);
    EXPECT_EQ(rig.picture(0xff0000, 9, 1), "...#.....\n");
}

TEST_F(CBitFontTest, FormattedTextIsCentredAsItReads) {
    SRig rig(*this, 32);
    open(rig);
    EXPECT_EQ(rig.font.drawTextCenterInBoundsF(0, 8, 0, CBitFont::kSheetColors, CBitFont::kNoShadow,
                                               "{}{}", '!', "!"),
              6);
    EXPECT_EQ(rig.picture(0xff0000, 9, 1), "..#..#...\n");
}

TEST_F(CBitFontTest, ScaledTextStartsLinesAScaledLineApart) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.setFontReady(1);
    EXPECT_EQ(rig.font.drawText("\n!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow, 2), 6);
    EXPECT_EQ(rig.screen.pixel(0, 7), 0U);
    EXPECT_EQ(rig.screen.pixel(0, 8), 0xff0000U);
}

TEST_F(CBitFontTest, AnUnsupportedDepthDrawsNothing) {
    SRig rig(*this, 32);
    open(rig);
    rig.screen.setBitsPerPixel(24);
    EXPECT_EQ(rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow), 3);
    rig.screen.setBitsPerPixel(32);
    EXPECT_EQ(rig.screen.pixel(0, 0), 0U);
}

TEST_F(CBitFontTest, OnlyEightSixteenAndThirtyTwoBitsHaveAPaletteMapping) {
    SRig rig8(*this, 8);
    EXPECT_NO_THROW(open(rig8));

    SRig rig24(*this, 32);
    rig24.screen.setBitsPerPixel(24);
    EXPECT_THAT([&rig24] { open(rig24); }, ThrowsMessage<common::CFatalError>(StrEq(
                                               "CBitFont::remapPalette - Invalid bitsPerPixel")));
}

TEST_F(CBitFontTest, WithoutAPaletteTheSheetIsBlackAndAShortOneIsPaddedWithEndOfFile) {
    const SFontSheet sheet = twoGlyphSheet();
    givenFile("art\\bare.raw", sheet.pixels);
    givenFile("art\\short.raw", sheet.pixels);
    givenFile("art\\short.act", std::string(3, '\0'));
    SRig rig(*this, 32);
    rig.font.openFontFile("bare.raw", sheet.width, sheet.height, 0);
    rig.font.drawCharacter('!', 0, 0, 3, CBitFont::kNoShadow);
    rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow);
    EXPECT_EQ(rig.screen.pixel(0, 0), 0U);
    rig.font.openFontFile("short.raw", sheet.width, sheet.height, 0);
    rig.font.drawCharacter('!', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow);
    EXPECT_EQ(rig.screen.pixel(0, 0), 0xffffffU);
}

// '+' is half grey, so it covers half; '#' has no green or blue, so in 16 bits, which reads the
// red, it covers fully, and in 32, which reads every byte, only the red. Full is 254 of 255.
TEST_F(CBitFontTest, AnAntialiasedFontBlendsInSixteenBits) {
    SRig rig(*this, 16);
    open(rig);
    rig.font.setInitializedFlag();
    rig.screen.fill(CMemoryScreen::pack16(0, 0xff, 0));
    rig.font.drawCharacter('"', 0, 0, 0xff, CBitFont::kNoShadow);
    // Red and blue 248 * 254 / 256 = 246, green stays 251 of 252, each cut to its width.
    EXPECT_EQ(rig.screen.pixel(0, 0), (30U << 11U) | (62U << 5U) | 30U);
    // 248 * 127 / 256 = 123.
    EXPECT_EQ(rig.screen.pixel(1, 0), (15U << 11U) | (62U << 5U) | 15U);
    EXPECT_EQ(rig.screen.pixel(2, 0), (30U << 11U) | (62U << 5U) | 30U);
    rig.three_d.setRenderAlpha(0);
    rig.screen.fill(0);
    rig.font.drawCharacter('"', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow);
    EXPECT_EQ(rig.screen.pixel(0, 0), 0U);
}

TEST_F(CBitFontTest, AnAntialiasedFontBlendsInThirtyTwoBits) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.setInitializedFlag();
    rig.screen.fill(0x00ff00);
    rig.font.drawCharacter('"', 0, 0, 0xff, CBitFont::kNoShadow);
    EXPECT_EQ(rig.screen.pixel(0, 0), 0xfdfe00U);
    EXPECT_EQ(rig.screen.pixel(1, 0), 0x7efe7eU);
    // The sheet's colours blend toward the colour of the row's first pixel.
    rig.screen.fill(0);
    rig.font.drawCharacter('"', 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow);
    EXPECT_EQ(rig.screen.pixel(0, 0), 0xfd0000U);
    EXPECT_EQ(rig.screen.pixel(1, 0), 0x7e0000U);
}

TEST_F(CBitFontTest, TextWrapsAtTheLastSpaceThatFits) {
    SRig rig(*this, 32);
    open(rig);
    rig.font.setCharWidth(' ', 2);
    // '!' is 2 wide and spaces 2, one apart: "!! !!" is 2+1+2+1+2+1+2+1+2 = 14.
    // A tab is a space too, but has no width.
    EXPECT_EQ(rig.font.wrapText(" \t!! !!\t!!\n\n!!", 10, 40, 10),
              (std::vector<std::string>{"!!", "!!\t!!", "", "!!"}));
    EXPECT_EQ(rig.font.wrapText("!! !!", 1, 40, 100), (std::vector<std::string>{"!! !!"}));
    EXPECT_EQ(rig.font.wrapText("!!!!!!", 2, 3, 100), (std::vector<std::string>{"!!", "!!"}));
    EXPECT_EQ(rig.font.wrapText("   ", 2, 40, 100), std::vector<std::string>{});
    EXPECT_EQ(rig.font.wrapText("!! ", 2, 40, 100), (std::vector<std::string>{"!!"}));
}

class CBitFontOsFontTest : public CBitFontTest {
protected:
    CBitFontOsFontTest() {
        open(rig_);
        rig_.font.setWinFont(os_font_);
    }

    SRig rig_{*this, 32};
    NiceMock<COsFont> os_font_;
};

TEST_F(CBitFontOsFontTest, TheOsFontDrawsEachLineALineApart) {
    EXPECT_CALL(os_font_, drawText(std::string_view("ab"), 1, 2, 3, 4)).WillOnce(Return(0));
    EXPECT_CALL(os_font_, drawText(std::string_view("cd"), 1, 6, 3, 4)).WillOnce(Return(7));
    EXPECT_EQ(rig_.font.drawText("ab\ncd", 1, 2, 3, 4, 2), 7);
}

TEST_F(CBitFontOsFontTest, ALineTheOsFontTurnsDownIsDrawnFromTheSheet) {
    EXPECT_CALL(os_font_, drawText).WillOnce(Return(-1));
    EXPECT_EQ(rig_.font.drawText("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow), 3);
    EXPECT_EQ(rig_.screen.pixel(0, 0), 0xff0000U);
    EXPECT_CALL(os_font_, drawText).WillOnce(Return(5));
    EXPECT_EQ(rig_.font.drawText("!", 0, 0, CBitFont::kSheetColors, CBitFont::kNoShadow), 5);
}

TEST_F(CBitFontOsFontTest, TheOsFontMeasuresEachLineUnscaled) {
    EXPECT_CALL(os_font_, getStringWidth(std::string_view("ab"))).WillOnce(Return(10));
    EXPECT_CALL(os_font_, getStringWidth(std::string_view("abc"))).WillOnce(Return(14));
    EXPECT_EQ(rig_.font.getTextWidth("ab\nabc", 2), 14);
    EXPECT_CALL(os_font_, getStringHeight(std::string_view("ab"))).WillOnce(Return(9));
    EXPECT_EQ(rig_.font.getTextHeight("ab", 2), 9);
    // Several lines are measured from the sheet, still unscaled.
    EXPECT_EQ(rig_.font.getTextHeight("a\nb", 2), 6);
}

} // namespace
} // namespace nocturne::engine
