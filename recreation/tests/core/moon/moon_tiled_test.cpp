#include "common/error/fatalerror.h"
#include "core/moon/moon.h"
#include "engine/package/gamecontent.h"
#include "tests/mocks/core/moonfixture.h"
#include "tests/mocks/engine/shippedgamecontent.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

// A tile's texel is one more than its column, wrapping at 0x80, so a pixel shows which column of
// which tile is over it; none is black, which the pictures leave clear.
constexpr int kTileWrap = 0x80;
constexpr int kHandGrey = 200;
constexpr int kOverlayGrey = 0xff;
// Clear of the hand at 64,64 and of the overlay's lit corner.
constexpr int kOpenRow = 30;

// BW3's tiled_scroll over the fixture's files: a column ramp tiled, a grey hand, and an overlay
// lit only in its top-left corner.
class CMoonTiledTest : public CMoonFixture {
protected:
    CMoonTiledTest() {
        content_.front_end.title_backdrop = "tiled_scroll";
        content_.tiled_scroll = engine::getShippedGameContent("blairwitch3").tiled_scroll;
        // A step a second, so each frame below is a whole step.
        content_.tiled_scroll->steps_per_second = 1;
        std::string tile(std::size_t{kWidth} * kHeight, '\0');
        for (std::size_t i = 0; i < tile.size(); ++i) {
            tile[i] = static_cast<char>(((i % kWidth) % kTileWrap) + 1);
        }
        givenImage("bwp3_menu_scroll", tile);
        givenImage("bwp3_hand", std::string(std::size_t{512} * 512, static_cast<char>(kHandGrey)));
        std::string overlay(std::size_t{kWidth} * kHeight, '\0');
        for (int y = 0; y < 4; ++y) {
            for (int x = 0; x < 4; ++x) {
                overlay[(static_cast<std::size_t>(y) * kWidth) + static_cast<std::size_t>(x)] =
                    static_cast<char>(kOverlayGrey);
            }
        }
        givenImage("BWP3_mainmenu", overlay);
    }

    static std::uint32_t grey(int level) {
        const auto value = static_cast<std::uint32_t>(level);
        return (value << 16U) | (value << 8U) | value;
    }

    // What a tile whose left edge is at `left` shows at column x.
    static std::uint32_t tileAt(int x, int left) {
        return grey(((x - left) % kTileWrap) + 1);
    }

    // A step's time, then a drawing, as the menu's frames are.
    void drawFrame() {
        moon_.update(1.0F);
        moon_.render();
    }

    void drawFrames(int count) {
        for (int i = 0; i < count; ++i) {
            drawFrame();
        }
    }
};

// Each step moves the tiles two to the right, so the first tile, from 320, is at 322.
TEST_F(CMoonTiledTest, TheTilesStepEachStep) {
    moon_.init();
    drawFrame();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 322));
    EXPECT_EQ(pixel(10, kOpenRow), tileAt(10, -318));
    drawFrame();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 324));
}

// However often it is drawn, the scroll goes at steps_per_second: drawing alone doesn't move it,
// a long frame moves it every step it was due, and part of a step's time part of the way.
TEST_F(CMoonTiledTest, TheTilesMoveByTimeNotByDrawing) {
    moon_.init();
    moon_.render();
    moon_.render();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 320));
    moon_.update(3.0F);
    moon_.render();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 326));
    moon_.update(0.5F);
    moon_.render();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 327));
    moon_.update(0.5F);
    moon_.render();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 328));
}

// Going past the right by part of a step, a column comes back from the left by as much, so the
// two tiles stay edge to edge.
TEST_F(CMoonTiledTest, AColumnPastTheRightKeepsWhatItWentPast) {
    content_.tiled_scroll->step_y = 0;
    moon_.init();
    moon_.update(160.5F);
    moon_.render();
    // The first from 320 is at 641, so -639; the second from -320 at 1.
    EXPECT_EQ(pixel(5, kOpenRow), tileAt(5, 1));
    EXPECT_EQ(pixel(0, kOpenRow), tileAt(0, -639));
}

// Past 639 a column goes to -640: at 160 a step, two steps take the first from 320 to 640 and
// so to -640, and the second from -320 to 0.
TEST_F(CMoonTiledTest, AColumnPastTheRightGoesBackToTheLeft) {
    content_.tiled_scroll->step_x = 160;
    content_.tiled_scroll->step_y = 0;
    moon_.init();
    drawFrames(2);
    EXPECT_EQ(pixel(5, kOpenRow), tileAt(5, 0));
    EXPECT_EQ(pixel(600, kOpenRow + 100), tileAt(600, 0));
}

// BW3's screen was 4:3: keeping its shape on a wide one, the tiles stay behind the bars, which
// stay black; stretched, they fill the screen.
TEST_F(CMoonTiledTest, OnAWideScreenTheTilesKeepToThePicture) {
    givenWideScreen();
    constexpr int kLeft = (kWideWidth - kWidth) / 2;
    moon_.init();
    drawFrame();
    EXPECT_EQ(pixel(kLeft - 1, kOpenRow), 0U);
    EXPECT_EQ(pixel(kLeft + kWidth, kOpenRow), 0U);
    EXPECT_NE(pixel(kLeft, kOpenRow), 0U);
    content_.tiled_scroll->fit = {.fit = engine::EPictureFit::Stretch,
                                  .anchor = engine::EPictureAnchor::Centre};
    drawFrame();
    EXPECT_NE(pixel(kLeft - 1, kOpenRow), 0U);
    EXPECT_NE(pixel(kWideWidth - 1, kOpenRow), 0U);
}

TEST_F(CMoonTiledTest, TheOverlayIsOnTop) {
    moon_.init();
    moon_.render();
    EXPECT_EQ(pixel(1, 1), grey(kOverlayGrey));
}

// From opaque it fades a step at a time, holds at its lowest once past it, and comes back. With
// the tiles held, at 20000 a step it is 45536, 25536, 5536, then 5000, 25000 and 45000; the hand
// is brighter than the tile under it, so the pixel is brighter the more of it there is.
TEST_F(CMoonTiledTest, TheHandFadesAndComesBack) {
    content_.tiled_scroll->step_x = 0;
    content_.tiled_scroll->step_y = 0;
    content_.tiled_scroll->hand_alpha_step = 20000;
    moon_.init();
    std::vector<std::uint32_t> blue;
    for (int i = 0; i < 6; ++i) {
        drawFrame();
        blue.push_back(pixel(100, 100) & 0xffU);
    }
    EXPECT_GT(blue[0], blue[1]);
    EXPECT_GT(blue[1], blue[2]);
    EXPECT_GE(blue[2], blue[3]);
    EXPECT_LT(blue[3], blue[4]);
    EXPECT_LT(blue[4], blue[5]);
}

// Rising past its highest it holds there and fades again: 45000, 65000, then 65535 and 45535.
TEST_F(CMoonTiledTest, TheHandHoldsAtItsHighestAndFadesAgain) {
    content_.tiled_scroll->step_x = 0;
    content_.tiled_scroll->step_y = 0;
    content_.tiled_scroll->hand_alpha_step = 20000;
    moon_.init();
    std::vector<std::uint32_t> blue;
    for (int i = 0; i < 9; ++i) {
        drawFrame();
        blue.push_back(pixel(100, 100) & 0xffU);
    }
    EXPECT_LT(blue[5], blue[6]);
    EXPECT_LE(blue[6], blue[7]);
    EXPECT_GT(blue[7], blue[8]);
}

// Rising past the top, a row comes back from the bottom, so the tiles stay edge to edge and the
// screen stays covered.
TEST_F(CMoonTiledTest, ARowPastTheTopComesBackFromTheBottom) {
    content_.tiled_scroll->step_x = 0;
    content_.tiled_scroll->step_y = -160;
    moon_.init();
    drawFrames(4);
    for (int y = kOpenRow; y < kHeight; ++y) {
        ASSERT_NE(pixel(330, y), 0U) << y;
    }
}

// The timer only kept the glow on.
TEST_F(CMoonTiledTest, TheTitleIsAlwaysInItsFirstHalf) {
    moon_.init();
    moon_.update(100.0F);
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 1);
}

TEST_F(CMoonTiledTest, InitLoadsOnlyTheFirstTime) {
    moon_.init();
    drawFrame();
    moon_.init();
    drawFrame();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 324));
}

TEST_F(CMoonTiledTest, WithoutItsValuesTheBackdropIsFatal) {
    content_.tiled_scroll.reset();
    EXPECT_THAT([this] { moon_.init(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the tiled_scroll title backdrop's look")));
}

} // namespace
} // namespace nocturne::core
