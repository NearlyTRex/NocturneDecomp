#include "engine/2d/2d.h"
#include "engine/font/font.h"
#include "engine/winfont/winfont.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/platform/mockosfont.h"
#include "tests/mocks/platform/mockosfontfactory.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <memory>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::NiceMock;
using ::testing::Return;

TEST(CWinFont, DerivesFromCFont) {
    static_assert(std::is_base_of_v<CFont, CWinFont>);
}

TEST(CWinFont, PublicInterface) {
    static_assert(
        std::is_constructible_v<CWinFont, platform::IOsFontFactory &, IScreenDevice &, const C2d &,
                                const CFontColors &, std::string_view, int, int, int>);
    static_assert(std::is_same_v<decltype(&CWinFont::drawText),
                                 int (CWinFont::*)(std::string_view, int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CWinFont::getStringWidth), int (CWinFont::*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&CWinFont::getStringHeight), int (CWinFont::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CWinFont::getLineSpacing), int (CWinFont::*)()>);
}

// Rows of '#' for a glyph pixel and '.' for none.
platform::STextMask mask(const std::vector<std::string> &rows) {
    platform::STextMask text{.size = {.width = static_cast<int>(rows.front().size()),
                                      .height = static_cast<int>(rows.size())},
                             .coverage = {}};
    for (const std::string &row : rows) {
        for (const char pixel : row) {
            text.coverage.push_back(pixel == '#' ? 1 : 0);
        }
    }
    return text;
}

constexpr int kScreenWidth = 8;
constexpr int kScreenHeight = 6;

// An OS font over a screen in memory; palette entry i is (i, 2i, 3i) for small i.
class CWinFontTest : public CPodFixture {
protected:
    CWinFontTest() {
        std::string palette(C2d::kPaletteBytes, '\0');
        for (std::size_t i = 0; i < 64; ++i) {
            palette[i * 3] = static_cast<char>(i);
            palette[(i * 3) + 1] = static_cast<char>(i * 2);
            palette[(i * 3) + 2] = static_cast<char>(i * 3);
        }
        givenFile("art\\vga.act", palette);
        two_d_.loadPaletteFile("vga.act");
        ON_CALL(*os_font_, measureText)
            .WillByDefault(Return(common::SExtent{.width = 2, .height = 2}));
        ON_CALL(*os_font_, renderText).WillByDefault(Return(mask({"#.", "##"})));
    }

    // The font, made at the given depth with these offsets.
    std::unique_ptr<CWinFont> makeFont(int y_offset1, int y_offset2) {
        EXPECT_CALL(factory_, createOsFont(std::string_view("Arial"), 14))
            .WillOnce([this](std::string_view, int) { return std::move(owned_font_); });
        return std::make_unique<CWinFont>(factory_, screen_, two_d_, colors_, "Arial", 14,
                                          y_offset1, y_offset2);
    }

    // Rows of the screen's top left: '#' where a pixel is value, '.' elsewhere.
    [[nodiscard]] std::string picture(std::uint32_t value, int width, int height) const {
        std::string rows;
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                rows += screen_.pixel(x, y) == value ? '#' : '.';
            }
            rows += '\n';
        }
        return rows;
    }

    CMemoryScreen screen_{kScreenWidth, kScreenHeight, 32};
    NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
    CFontColors colors_;
    NiceMock<platform::MockOsFontFactory> factory_;
    std::unique_ptr<NiceMock<platform::MockOsFont>> owned_font_ =
        std::make_unique<NiceMock<platform::MockOsFont>>();
    NiceMock<platform::MockOsFont> *os_font_ = owned_font_.get();
};

TEST_F(CWinFontTest, MeasuresWithTheOsFontAndAddsBothOffsetsToTheHeight) {
    const std::unique_ptr<CWinFont> font = makeFont(2, 3);
    EXPECT_CALL(*os_font_, measureText(std::string_view("ab")))
        .WillRepeatedly(Return(common::SExtent{.width = 11, .height = 7}));
    EXPECT_EQ(font->getStringWidth("ab"), 11);
    EXPECT_EQ(font->getStringHeight("ab"), 12);
    EXPECT_EQ(font->getLineSpacing(), 0);
}

TEST_F(CWinFontTest, WithoutAnOsFontTextIsEightACharacterAndSixteenTall) {
    EXPECT_CALL(factory_, createOsFont).WillOnce(Return(nullptr));
    CWinFont font(factory_, screen_, two_d_, colors_, "Missing", 14, 1, 1);
    EXPECT_EQ(font.getStringWidth("abc"), 24);
    EXPECT_EQ(font.getStringHeight("abc"), 18);
    EXPECT_EQ(font.drawText("abc", 0, 0, 5, -1), 0);
    EXPECT_EQ(picture(0, 8, 2), "########\n"
                                "########\n");
}

TEST_F(CWinFontTest, GlyphsAreCopiedInTheirPaletteColourBelowTheFirstOffset) {
    const std::unique_ptr<CWinFont> font = makeFont(1, 0);
    EXPECT_EQ(font->drawText("ab", 2, 1, 5, -1), 0);
    // Palette entry 5 is (5, 10, 15).
    EXPECT_EQ(picture(0x050a0f, 5, 5), ".....\n"
                                       ".....\n"
                                       "..#..\n"
                                       "..##.\n"
                                       ".....\n");
}

TEST_F(CWinFontTest, TheShadowShowsOnlyBelowTheTextsCell) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 1);
    font->drawText("ab", 0, 0, 5, 7);
    EXPECT_EQ(picture(0x050a0f, 4, 4), "#...\n"
                                       "##..\n"
                                       "....\n"
                                       "....\n");
    // Entry 7 is (7, 14, 21); its glyph's right column falls outside the copy.
    EXPECT_EQ(picture(0x070e15, 4, 4), "....\n"
                                       "....\n"
                                       ".#..\n"
                                       "....\n");
}

TEST_F(CWinFontTest, TheSameTextInTheSameColoursIsntDrawnAgain) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 0);
    EXPECT_CALL(*os_font_, renderText).Times(2).WillRepeatedly(Return(mask({"#.", "##"})));
    font->drawText("ab", 0, 0, 5, -1);
    font->drawText("ab", 3, 0, 5, -1);
    font->drawText("ab", 0, 3, 6, -1);
    EXPECT_EQ(screen_.pixel(3, 0), 0x050a0fU);
}

TEST_F(CWinFontTest, ANegativeForegroundIsTheDefaultColourReadAsAColorRef) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 0);
    colors_.setDefaultTextColor(0x112233);
    font->drawText("ab", 0, 0, -1, -1);
    EXPECT_EQ(screen_.pixel(0, 0), 0x332211U);
}

TEST_F(CWinFontTest, SixteenBitsWidenTheDefaultColoursPixelBeforeTakingItAsAColorRef) {
    CMemoryScreen screen(kScreenWidth, kScreenHeight, 16);
    EXPECT_CALL(factory_, createOsFont).WillOnce([this](std::string_view, int) {
        return std::move(owned_font_);
    });
    CWinFont font(factory_, screen, two_d_, colors_, "Arial", 14, 0, 0);
    colors_.setDefaultTextColor(static_cast<int>(CMemoryScreen::pack16(0x88, 0x44, 0x20)));
    font.drawText("ab", 0, 0, -1, -1);
    // 0x884420 as a COLORREF is red 0x20, green 0x44, blue 0x88 (asm 0x005f2680).
    EXPECT_EQ(screen.pixel(0, 0), CMemoryScreen::pack16(0x20, 0x40, 0x88));
}

TEST_F(CWinFontTest, SixteenBitsRepackTheImagesFiveBitChannels) {
    CMemoryScreen screen(kScreenWidth, kScreenHeight, 16);
    EXPECT_CALL(factory_, createOsFont).WillOnce([this](std::string_view, int) {
        return std::move(owned_font_);
    });
    CWinFont font(factory_, screen, two_d_, colors_, "Arial", 14, 0, 0);
    font.drawText("ab", 0, 0, 40, -1);
    // Entry 40 is (40, 80, 120): five bits a channel in the image, then the screen's 5-6-5.
    EXPECT_EQ(screen.pixel(0, 0), CMemoryScreen::pack16(40, 80, 120));
    EXPECT_EQ(screen.pixel(1, 0), 0U);
}

TEST_F(CWinFontTest, TextIsCutAtTheScreensEdges) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 0);
    font->drawText("ab", -1, 0, 5, -1);
    font->drawText("ab", 7, 0, 6, -1);
    font->drawText("ab", 0, 5, 7, -1);
    font->drawText("ab", 3, -1, 8, -1);
    EXPECT_EQ(picture(0x050a0f, 8, 2), "........\n"
                                       "#.......\n");
    EXPECT_EQ(picture(0x060c12, 8, 2), ".......#\n"
                                       ".......#\n");
    EXPECT_EQ(screen_.pixel(0, 5), 0x070e15U);
    EXPECT_EQ(picture(0x081018, 8, 1), "...##...\n");
}

TEST_F(CWinFontTest, OnlySixteenAndThirtyTwoBitsAreDrawn) {
    CMemoryScreen screen(kScreenWidth, kScreenHeight, 8);
    EXPECT_CALL(factory_, createOsFont).WillOnce([this](std::string_view, int) {
        return std::move(owned_font_);
    });
    CWinFont font(factory_, screen, two_d_, colors_, "Arial", 14, 0, 0);
    font.drawText("ab", 0, 0, 5, -1);
    EXPECT_EQ(screen.pixel(0, 0), 0U);
}

TEST_F(CWinFontTest, ANewDepthMakesANewImageAndRedrawsTheText) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 0);
    EXPECT_CALL(*os_font_, renderText).Times(2).WillRepeatedly(Return(mask({"#.", "##"})));
    font->drawText("ab", 0, 0, 5, -1);
    screen_.setBitsPerPixel(16);
    font->drawText("ab", 0, 0, 5, -1);
}

TEST_F(CWinFontTest, AWiderScreenMakesANewImageButANarrowerOneKeepsIt) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 0);
    EXPECT_CALL(*os_font_, renderText).Times(2).WillRepeatedly(Return(mask({"#.", "##"})));
    font->drawText("ab", 0, 0, 5, -1);
    screen_.setWindowWidth(4);
    font->drawText("ab", 0, 0, 5, -1);
    screen_.setWindowWidth(kScreenWidth + 1);
    font->drawText("ab", 0, 0, 5, -1);
}

TEST_F(CWinFontTest, AStringIsCutToTheImage) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 0);
    const std::vector<std::string> rows(101, std::string(10, '#'));
    EXPECT_CALL(*os_font_, renderText).WillOnce(Return(mask(rows)));
    EXPECT_CALL(*os_font_, measureText)
        .WillRepeatedly(Return(common::SExtent{.width = 10, .height = 101}));
    font->drawText("ab", 0, 0, 5, -1);
    EXPECT_EQ(screen_.pixel(kScreenWidth - 1, kScreenHeight - 1), 0x050a0fU);
}

TEST_F(CWinFontTest, ANewShadowColourDrawsTheTextAgain) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 0);
    EXPECT_CALL(*os_font_, renderText).Times(4).WillRepeatedly(Return(mask({"#.", "##"})));
    font->drawText("ab", 0, 0, 5, 6);
    font->drawText("ab", 0, 0, 5, 7);
}

TEST_F(CWinFontTest, EmptyTextDrawsNothing) {
    const std::unique_ptr<CWinFont> font = makeFont(0, 0);
    EXPECT_CALL(*os_font_, renderText).Times(0);
    EXPECT_EQ(font->drawText("", 0, 0, 5, 6), 0);
}

} // namespace
} // namespace nocturne::engine
