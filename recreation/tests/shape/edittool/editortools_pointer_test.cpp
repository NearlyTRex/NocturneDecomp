#include "engine/2d/2d.h"
#include "shape/edittool/editortools.h"
#include "tests/mocks/shape/edcontrolsfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <initializer_list>
#include <set>
#include <string>
#include <utility>

namespace nocturne::shape {
namespace {

using EMouseCursorType = CEditorTools::EMouseCursorType;
using Points = std::set<std::pair<int, int>>;

// The game clock's phases, an eighteenth of a second each.
constexpr int kBlackPhase = 0;
constexpr int kWhitePhase = 0x10000;
constexpr int kGreenPhase = 0x20000;
constexpr int kMagentaPhase = 0x30000;

// x0 to x1 inclusive along row y.
Points row(int y, int x0, int x1) {
    Points points;
    for (int x = x0; x <= x1; ++x) {
        points.emplace(x, y);
    }
    return points;
}

// y0 to y1 inclusive down column x.
Points column(int x, int y0, int y1) {
    Points points;
    for (int y = y0; y <= y1; ++y) {
        points.emplace(x, y);
    }
    return points;
}

Points join(std::initializer_list<Points> parts) {
    Points points;
    for (const Points &part : parts) {
        points.insert(part.begin(), part.end());
    }
    return points;
}

// The pointer at (20, 30) over a grey palette, so the colour cube's black, white, green and
// magenta are four different greys; the clock is in its white phase.
class CEditorToolsPointerTest : public CEdControlsFixture {
protected:
    CEditorToolsPointerTest() {
        std::string palette;
        for (int i = 0; i < 256; ++i) {
            palette.append(3, static_cast<char>(i));
        }
        givenFile("art\\vga.act", palette);
        two_d_.loadPaletteFile("vga.act");
        two_d_.buildColorLookupTable();
        mouse_x_ = 20;
        mouse_y_ = 30;
        time_ = kWhitePhase;
    }

    [[nodiscard]] int cube(std::size_t index) const {
        return two_d_.getColorCubeLookup()[index];
    }

    // Every pixel drawn in the white phase's colour.
    [[nodiscard]] Points drawn() const {
        const auto white = static_cast<std::uint32_t>(cube(0x7fff)) * 0x010101U;
        Points points;
        for (int y = 0; y < kScreenHeight; ++y) {
            for (int x = 0; x < kScreenWidth; ++x) {
                if (screen_.pixel(x, y) == white) {
                    points.emplace(x, y);
                }
            }
        }
        return points;
    }

    [[nodiscard]] Points drawPointer(EMouseCursorType type, int height, int width) {
        editor_tools_.setMousePointerType(type, height, width);
        editor_tools_.drawMousePointer(false);
        return drawn();
    }
};

TEST_F(CEditorToolsPointerTest, TheColourCyclesThroughBlackWhiteGreenAndMagenta) {
    ASSERT_NE(cube(0), cube(0x7fff));
    ASSERT_NE(cube(0x3e0), cube(0x7c1f));
    time_ = kBlackPhase;
    EXPECT_EQ(editor_tools_.getTimeCycledColorByte(), cube(0));
    time_ = kWhitePhase + 0xffff;
    EXPECT_EQ(editor_tools_.getTimeCycledColorByte(), cube(0x7fff));
    time_ = kGreenPhase;
    EXPECT_EQ(editor_tools_.getTimeCycledColorByte(), cube(0x3e0));
    time_ = kMagentaPhase;
    EXPECT_EQ(editor_tools_.getTimeCycledColorByte(), cube(0x7c1f));
    time_ = 0x40000;
    EXPECT_EQ(editor_tools_.getTimeCycledColorByte(), cube(0));
}

TEST_F(CEditorToolsPointerTest, TheCycleCarriesOnThroughTheClocksWrap) {
    time_ = -1;
    EXPECT_EQ(editor_tools_.getTimeCycledColorByte(), cube(0x7c1f));
}

TEST_F(CEditorToolsPointerTest, ThePointerStartsAsANinePixelCrossLeftAsTheLineColour) {
    editor_tools_.drawMousePointer(false);
    EXPECT_EQ(drawn(), join({row(30, 16, 24), column(20, 26, 34)}));
    EXPECT_EQ(two_d_.getActiveRenderColor(), cube(0x7fff));
}

// The original's test stopped a pixel short of the clip's right and bottom edges.
TEST_F(CEditorToolsPointerTest, ClippedThePointerReachesEveryEdgeOfTheClip) {
    two_d_.setClipRect({.left = 18, .top = 28, .right = 22, .bottom = 32});
    editor_tools_.drawMousePointer(true);
    EXPECT_EQ(drawn(), join({row(30, 18, 22), column(20, 28, 32)}));
}

TEST_F(CEditorToolsPointerTest, UnclippedOnlyTheScreenCutsThePointer) {
    two_d_.setClipRect({.left = 50, .top = 50, .right = 60, .bottom = 60});
    mouse_x_ = 1;
    mouse_y_ = 1;
    editor_tools_.drawMousePointer(false);
    EXPECT_EQ(drawn(), join({row(1, 0, 5), column(1, 0, 5)}));
}

TEST_F(CEditorToolsPointerTest, ByDefaultACrossIsElevenTallAndAsWideOnAFourByThreeScreen) {
    EXPECT_EQ(drawPointer(EMouseCursorType::Cross, 0, 0),
              join({row(30, 15, 25), column(20, 25, 35)}));
}

// On 128x96 a height of 6 is matched by a width of 6, and both round up to 7.
TEST_F(CEditorToolsPointerTest, ACrossWidthFollowsItsHeightAndBothRoundUpToOdd) {
    EXPECT_EQ(drawPointer(EMouseCursorType::Cross, 6, 0),
              join({row(30, 17, 23), column(20, 27, 33)}));
}

TEST_F(CEditorToolsPointerTest, ACrossTakesAGivenWidthRoundedUpToOdd) {
    EXPECT_EQ(drawPointer(EMouseCursorType::Cross, 5, 8),
              join({row(30, 16, 24), column(20, 28, 32)}));
}

// The original left a gap where each serif met the stem.
TEST_F(CEditorToolsPointerTest, ByDefaultAnIBeamIsElevenTallWithSerifsFiveWide) {
    EXPECT_EQ(drawPointer(EMouseCursorType::IBeam, 0, 0),
              join({column(20, 25, 35), row(25, 18, 22), row(35, 18, 22)}));
}

TEST_F(CEditorToolsPointerTest, AnIBeamKeepsAnEvenHeightAndRoundsItsWidthUpToOdd) {
    EXPECT_EQ(drawPointer(EMouseCursorType::IBeam, 8, 4),
              join({column(20, 26, 33), row(26, 18, 22), row(33, 18, 22)}));
}

TEST_F(CEditorToolsPointerTest, ADiagonalCrossRunsCornerToCornerAcrossItsWidth) {
    Points expected{{20, 30}};
    for (int offset = 1; offset <= 5; ++offset) {
        expected.insert({{20 - offset, 30 - offset},
                         {20 + offset, 30 - offset},
                         {20 - offset, 30 + offset},
                         {20 + offset, 30 + offset}});
    }
    EXPECT_EQ(drawPointer(EMouseCursorType::Diagonal, 0, 0), expected);
}

} // namespace
} // namespace nocturne::shape
