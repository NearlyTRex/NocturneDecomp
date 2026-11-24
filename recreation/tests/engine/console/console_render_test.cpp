#include "engine/2d/2d.h"
#include "engine/console/console.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::NiceMock;
using ::testing::Return;

constexpr int kInk = 0xf8;
constexpr std::uint32_t kBlank = 0x123456;
// At 1x, 28 columns and 10 rows fit a console at 1,1 on this screen.
constexpr int kWidth = 200;
constexpr int kHeight = 120;
constexpr int kRows = 10;

// A screen in memory at 32 bits with a C2d drawing on it, clipped to the whole of it.
struct SScreen {
    SScreen(const CDosIo &dosio, IRawInput &raw_input, int width, int height)
        : screen(width, height, 32), two_d(dosio, screen, raw_input) {
        screen.fill(kBlank);
        two_d.setupViewportAndClipping(0, 0, width - 1, height - 1);
    }

    CMemoryScreen screen;
    C2d two_d;
};

class CConsoleRenderTest : public CPodFixture {
protected:
    CConsoleRenderTest() {
        ON_CALL(raw_input_, getKeyboardState).WillByDefault(Return(std::span(keyboard_)));
    }

    // The screen the console should leave: each line's text from 1,1 down, a cell a character.
    [[nodiscard]] std::vector<std::uint32_t> expected(const std::vector<std::string> &lines,
                                                      int width = kWidth, int height = kHeight,
                                                      int scale = 1) {
        SScreen drawn(dosio_, raw_input_, width, height);
        for (std::size_t row = 0; row < lines.size(); ++row) {
            for (std::size_t column = 0; column < lines[row].size(); ++column) {
                static_cast<void>(drawn.two_d.drawCharacterMaskedColor(
                    static_cast<unsigned char>(lines[row][column]),
                    1 + (static_cast<int>(column) * 7 * scale),
                    1 + (static_cast<int>(row) * 11 * scale), kInk, scale));
            }
        }
        return pixels(drawn.screen, width, height);
    }

    [[nodiscard]] static std::vector<std::uint32_t> pixels(const CMemoryScreen &screen, int width,
                                                           int height) {
        std::vector<std::uint32_t> all;
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                all.push_back(screen.pixel(x, y));
            }
        }
        return all;
    }

    // On a fresh screen, as each frame is.
    [[nodiscard]] std::vector<std::uint32_t> rendered() {
        target_.screen.fill(kBlank);
        console_.render(target_.two_d, kWidth, kHeight);
        return pixels(target_.screen, kWidth, kHeight);
    }

    // Lines "0" to "count - 1", the cursor left on the last.
    void printLines(int count) {
        for (int line = 0; line < count; ++line) {
            console_.printf(std::to_string(line) + (line + 1 < count ? "\n" : ""));
        }
    }

    void press(EInputCodeType code) {
        keyboard_[static_cast<std::size_t>(code)] = 1;
        console_.processInput(keys_, 0);
    }

    std::array<std::uint8_t, IRawInput::kInputCodeCount> keyboard_{};
    NiceMock<MockRawInput> raw_input_;
    SScreen target_{dosio_, raw_input_, kWidth, kHeight};
    CKeys keys_{raw_input_, target_.screen};
    CConsole console_{file_system_, 40, 32, 1, 1};
};

TEST_F(CConsoleRenderTest, EachCellsCharacterIsDrawnInInkOverWhatWasThere) {
    console_.printf("Hi\nthere");
    EXPECT_EQ(rendered(), expected({"Hi", "there"}));
    EXPECT_EQ(target_.screen.pixel(0, 0), kBlank);
}

TEST_F(CConsoleRenderTest, ControlCharactersAreNotDrawn) {
    console_.printf("\ta\x01");
    EXPECT_EQ(rendered(), expected({" a"}));
}

TEST_F(CConsoleRenderTest, CharactersAboveAsciiAreDrawn) {
    console_.printf("caf\xe9");
    EXPECT_EQ(rendered(), expected({"caf\xe9"}));
}

TEST_F(CConsoleRenderTest, TheConsoleIsFittedToTheScreenItIsDrawnOn) {
    static_cast<void>(rendered());
    EXPECT_EQ(console_.getConsoleWidth(), 28);
    EXPECT_EQ(console_.getConsoleHeight(), kRows);
    EXPECT_EQ(console_.getScale(), 1);
}

// 72 columns and 40 rows still fit at 2x.
TEST_F(CConsoleRenderTest, ALargeScreenDrawsTheGlyphsScaledUp) {
    constexpr int kLargeWidth = 1010;
    constexpr int kLargeHeight = 883;
    SScreen large(dosio_, raw_input_, kLargeWidth, kLargeHeight);
    console_.printf("Hi\nthere");
    console_.render(large.two_d, kLargeWidth, kLargeHeight);
    EXPECT_EQ(console_.getScale(), 2);
    EXPECT_EQ(pixels(large.screen, kLargeWidth, kLargeHeight),
              expected({"Hi", "there"}, kLargeWidth, kLargeHeight, 2));
}

// The row the cursor was on starts again, so the next character lands on the screen.
TEST_F(CConsoleRenderTest, ACursorPastTheFittedWidthStartsItsRowAgain) {
    console_.printf("one\n");
    console_.printf(std::string(35, 'x'));
    EXPECT_EQ(rendered(), expected({"one"}));
    EXPECT_EQ(console_.getCurrentColumn(), 0);
    EXPECT_EQ(console_.getRow(1), "");
}

TEST_F(CConsoleRenderTest, TheWindowFollowsTheNewestLine) {
    printLines(15);
    EXPECT_EQ(rendered(), expected({"5", "6", "7", "8", "9", "10", "11", "12", "13", "14"}));
    EXPECT_EQ(console_.getViewTop(), 5);
}

TEST_F(CConsoleRenderTest, PageUpGoesBackAScreenAndPageDownForward) {
    printLines(25);
    static_cast<void>(rendered());
    press(EInputCodeType::DIK_PRIOR);
    EXPECT_EQ(console_.getViewTop(), 5);
    press(EInputCodeType::DIK_PRIOR);
    EXPECT_EQ(console_.getViewTop(), 0);
    press(EInputCodeType::DIK_NEXT);
    EXPECT_EQ(console_.getViewTop(), 10);
    EXPECT_EQ(rendered(), expected({"10", "11", "12", "13", "14", "15", "16", "17", "18", "19"}));
    press(EInputCodeType::DIK_NEXT);
    press(EInputCodeType::DIK_NEXT);
    EXPECT_EQ(console_.getViewTop(), 15);
}

TEST_F(CConsoleRenderTest, AHeldWindowStaysPutAsLinesArrive) {
    printLines(15);
    static_cast<void>(rendered());
    press(EInputCodeType::DIK_PRIOR);
    console_.printf("\nnew\nnewer");
    EXPECT_EQ(console_.getViewTop(), 0);
}

TEST_F(CConsoleRenderTest, PagingDownToTheNewestFollowsItAgain) {
    printLines(15);
    static_cast<void>(rendered());
    press(EInputCodeType::DIK_PRIOR);
    press(EInputCodeType::DIK_NEXT);
    console_.printf("\nnew");
    EXPECT_EQ(console_.getViewTop(), 6);
}

TEST_F(CConsoleRenderTest, EndFollowsTheNewestAgain) {
    printLines(15);
    static_cast<void>(rendered());
    press(EInputCodeType::DIK_PRIOR);
    press(EInputCodeType::DIK_END);
    console_.printf("\nnew");
    EXPECT_EQ(console_.getViewTop(), 6);
}

TEST_F(CConsoleRenderTest, AWheelNotchScrollsThreeLines) {
    printLines(15);
    static_cast<void>(rendered());
    console_.processInput(keys_, 1);
    EXPECT_EQ(console_.getViewTop(), 2);
    console_.processInput(keys_, -1);
    EXPECT_EQ(console_.getViewTop(), 5);
    console_.processInput(keys_, 0);
    EXPECT_EQ(console_.getViewTop(), 5);
}

TEST_F(CConsoleRenderTest, KeysThatScrollAreTaken) {
    press(EInputCodeType::DIK_PRIOR);
    press(EInputCodeType::DIK_END);
    EXPECT_EQ(keyboard_[static_cast<std::size_t>(EInputCodeType::DIK_PRIOR)], 0);
    EXPECT_EQ(keyboard_[static_cast<std::size_t>(EInputCodeType::DIK_END)], 0);
}

// A full grid drops its top row; a window held on later rows moves up with them.
TEST_F(CConsoleRenderTest, AHeldWindowMovesUpWithTheGridAsItDropsItsTopRow) {
    printLines(CConsole::kMaxRows);
    static_cast<void>(rendered());
    console_.processInput(keys_, 1);
    EXPECT_EQ(console_.getViewTop(), 187);
    console_.printf("\nnew");
    EXPECT_EQ(console_.getViewTop(), 186);
}

TEST_F(CConsoleRenderTest, AWindowHeldOnTheFirstRowStaysThereAsTheGridDropsItsTopRow) {
    printLines(CConsole::kMaxRows);
    static_cast<void>(rendered());
    console_.processInput(keys_, CConsole::kMaxRows);
    EXPECT_EQ(console_.getViewTop(), 0);
    console_.printf("\nnew");
    EXPECT_EQ(console_.getViewTop(), 0);
}

TEST_F(CConsoleRenderTest, AFollowingWindowStaysOnTheNewestAsTheGridDropsItsTopRow) {
    printLines(CConsole::kMaxRows);
    static_cast<void>(rendered());
    console_.printf("\nnew");
    EXPECT_EQ(console_.getViewTop(), CConsole::kMaxRows - kRows);
}

TEST_F(CConsoleRenderTest, ResettingFollowsTheNewestAgain) {
    printLines(15);
    static_cast<void>(rendered());
    press(EInputCodeType::DIK_PRIOR);
    console_.reset();
    printLines(15);
    EXPECT_EQ(console_.getViewTop(), 5);
}

// A taller screen leaves fewer rows above the newest to start from.
TEST_F(CConsoleRenderTest, AHeldWindowIsKeptAboveTheNewestWhenTheScreenGrows) {
    printLines(15);
    static_cast<void>(rendered());
    console_.processInput(keys_, -1);
    console_.processInput(keys_, 1);
    EXPECT_EQ(console_.getViewTop(), 2);
    console_.fitToScreen(kWidth, 200);
    EXPECT_EQ(console_.getViewTop(), 0);
}

} // namespace
} // namespace nocturne::engine
