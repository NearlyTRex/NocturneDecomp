#include "common/error/fatalerror.h"
#include "engine/2d/2d.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <string>

namespace nocturne::engine {
namespace {

using ::testing::NiceMock;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr int kWidth = 8;
constexpr int kHeight = 6;

// A C2d drawing on an 8x6 screen in memory, clipped to columns 1 to 6 and rows 1 to 4.
class C2dDrawTest : public CPodFixture, public ::testing::WithParamInterface<int> {
protected:
    C2dDrawTest() {
        two_d_.setupViewportAndClipping(1, 1, 6, 4);
    }

    // What colour index i draws as at this depth.
    [[nodiscard]] static std::uint32_t drawn(int index) {
        const auto i = static_cast<std::size_t>(index);
        switch (GetParam()) {
        case 16:
            return CMemoryScreen::pack16(i, i, i);
        case 32:
            return static_cast<std::uint32_t>((i << 16U) | (i << 8U) | i);
        default:
            return static_cast<std::uint32_t>(index);
        }
    }

    // The screen as rows of '#' for the colour and '.' for anything else.
    [[nodiscard]] std::string picture(int index) const {
        std::string rows;
        for (int y = 0; y < kHeight; ++y) {
            for (int x = 0; x < kWidth; ++x) {
                rows += screen_.pixel(x, y) == drawn(index) ? '#' : '.';
            }
            rows += '\n';
        }
        return rows;
    }

    CMemoryScreen screen_{kWidth, kHeight, GetParam()};
    NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
};

INSTANTIATE_TEST_SUITE_P(Depths, C2dDrawTest, ::testing::Values(8, 16, 32));

TEST_P(C2dDrawTest, AHorizontalLineIsClippedAtBothEnds) {
    two_d_.setActiveRenderColor(9);
    two_d_.drawHLine(-3, 2, 20);
    EXPECT_EQ(picture(9), "........\n"
                          "........\n"
                          ".######.\n"
                          "........\n"
                          "........\n"
                          "........\n");
}

TEST_P(C2dDrawTest, AHorizontalLineOutsideTheClipDrawsNothing) {
    two_d_.setActiveRenderColor(9);
    two_d_.drawHLine(0, 0, 7);
    two_d_.drawHLine(0, 5, 7);
    two_d_.drawHLine(7, 2, 7);
    EXPECT_EQ(picture(9), "........\n"
                          "........\n"
                          "........\n"
                          "........\n"
                          "........\n"
                          "........\n");
}

TEST_P(C2dDrawTest, AVerticalLineIsClippedAtBothEnds) {
    two_d_.setActiveRenderColor(9);
    two_d_.drawVLine(3, -1, 9);
    two_d_.drawVLine(0, 0, 5);
    two_d_.drawVLine(7, 0, 5);
    EXPECT_EQ(picture(9), "........\n"
                          "...#....\n"
                          "...#....\n"
                          "...#....\n"
                          "...#....\n"
                          "........\n");
}

TEST_P(C2dDrawTest, ARectangleIsItsFourEdges) {
    two_d_.setActiveRenderColor(9);
    two_d_.drawRect(1, 1, 5, 4);
    EXPECT_EQ(picture(9), "........\n"
                          ".#####..\n"
                          ".#...#..\n"
                          ".#...#..\n"
                          ".#####..\n"
                          "........\n");
}

TEST_P(C2dDrawTest, AFilledRectangleIsClippedAndKeepsTheActiveColour) {
    two_d_.setActiveRenderColor(3);
    two_d_.fillRectColor(4, 0, 9, 2, 9);
    EXPECT_EQ(picture(9), "........\n"
                          "....###.\n"
                          "....###.\n"
                          "........\n"
                          "........\n"
                          "........\n");
    EXPECT_EQ(two_d_.getActiveRenderColor(), 3);
}

TEST_P(C2dDrawTest, AFilledRectangleLeftOfTheClipDrawsNothing) {
    two_d_.setActiveRenderColor(3);
    two_d_.fillRectColor(-4, 1, 0, 4, 9);
    EXPECT_EQ(picture(9), "........\n"
                          "........\n"
                          "........\n"
                          "........\n"
                          "........\n"
                          "........\n");
    EXPECT_EQ(two_d_.getActiveRenderColor(), 3);
}

TEST_P(C2dDrawTest, TheBorderGoesOnePixelOutsideTheFill) {
    two_d_.setActiveRenderColor(3);
    two_d_.fillRectWithBorder(3, 2, 4, 3, 9, 7);
    EXPECT_EQ(picture(9), "........\n"
                          "........\n"
                          "...##...\n"
                          "...##...\n"
                          "........\n"
                          "........\n");
    EXPECT_EQ(picture(7), "........\n"
                          "..####..\n"
                          "..#..#..\n"
                          "..#..#..\n"
                          "..####..\n"
                          "........\n");
    EXPECT_EQ(two_d_.getActiveRenderColor(), 3);
}

class C2dStateTest : public CPodFixture {
protected:
    NiceMock<MockScreenDevice> screen_;
    NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
};

TEST_F(C2dStateTest, LinesAtADepthWithNoColourTableAreFatal) {
    ON_CALL(screen_, getBitsPerPixel).WillByDefault(Return(24));
    two_d_.setupViewportAndClipping(0, 0, 9, 9);
    EXPECT_THAT([this] { two_d_.drawHLine(0, 0, 3); },
                ThrowsMessage<common::CFatalError>(StrEq("hLine - invalid bitsPerPixel")));
    EXPECT_THAT([this] { two_d_.drawVLine(0, 0, 3); },
                ThrowsMessage<common::CFatalError>(StrEq("vLine - invalid bitsPerPixel")));
}

TEST_F(C2dStateTest, ClearingInputDropsItAll) {
    EXPECT_CALL(raw_input_, clearInput);
    two_d_.clearInputAndWait();
}

TEST_F(C2dStateTest, TheClipProjectionAndViewportCanBePutBack) {
    two_d_.setClipRect({.left = 1, .top = 2, .right = 3, .bottom = 4});
    two_d_.setProjection({.half_width_fixed = 5,
                          .neg_half_height_fixed = 6,
                          .center_x_fixed = 7,
                          .center_y_fixed = 8});
    two_d_.setViewportSize(9, 10);
    EXPECT_EQ(two_d_.getClipRect(), (SClipRect{.left = 1, .top = 2, .right = 3, .bottom = 4}));
    EXPECT_EQ(two_d_.getProjection(), (SProjectionParams{.half_width_fixed = 5,
                                                         .neg_half_height_fixed = 6,
                                                         .center_x_fixed = 7,
                                                         .center_y_fixed = 8}));
    EXPECT_EQ(two_d_.getViewportWidth(), 9);
    EXPECT_EQ(two_d_.getViewportHeight(), 10);
}

} // namespace
} // namespace nocturne::engine
