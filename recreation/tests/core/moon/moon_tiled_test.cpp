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

    void renderTimes(int count) {
        for (int i = 0; i < count; ++i) {
            moon_.render();
        }
    }
};

// Each drawing moves the tiles two to the right, so the first tile, from 320, is at 322.
TEST_F(CMoonTiledTest, TheTilesStepEachDrawing) {
    moon_.init();
    moon_.render();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 322));
    EXPECT_EQ(pixel(10, kOpenRow), tileAt(10, -318));
    moon_.render();
    EXPECT_EQ(pixel(330, kOpenRow), tileAt(330, 324));
}

// Past 639 a column goes to -640: at 160 a drawing, two drawings take the first from 320 to 640
// and so to -640, and the second from -320 to 0.
TEST_F(CMoonTiledTest, AColumnPastTheRightGoesBackToTheLeft) {
    content_.tiled_scroll->step_x = 160;
    content_.tiled_scroll->step_y = 0;
    moon_.init();
    renderTimes(2);
    EXPECT_EQ(pixel(5, kOpenRow), tileAt(5, 0));
    EXPECT_EQ(pixel(600, kOpenRow + 100), tileAt(600, 0));
}

TEST_F(CMoonTiledTest, TheOverlayIsOnTop) {
    moon_.init();
    moon_.render();
    EXPECT_EQ(pixel(1, 1), grey(kOverlayGrey));
}

// From opaque it fades a step a drawing, holds at its lowest once past it, and comes back. With
// the tiles held, at 20000 a step it is 45536, 25536, 5536, then 5000, 25000 and 45000; the hand
// is brighter than the tile under it, so the pixel is brighter the more of it there is.
TEST_F(CMoonTiledTest, TheHandFadesAndComesBack) {
    content_.tiled_scroll->step_x = 0;
    content_.tiled_scroll->step_y = 0;
    content_.tiled_scroll->hand_alpha_step = 20000;
    moon_.init();
    std::vector<std::uint32_t> blue;
    for (int i = 0; i < 6; ++i) {
        moon_.render();
        blue.push_back(pixel(100, 100) & 0xffU);
    }
    EXPECT_GT(blue[0], blue[1]);
    EXPECT_GT(blue[1], blue[2]);
    EXPECT_GE(blue[2], blue[3]);
    EXPECT_LT(blue[3], blue[4]);
    EXPECT_LT(blue[4], blue[5]);
}

// The timer only kept the glow on.
TEST_F(CMoonTiledTest, TheTitleIsAlwaysInItsFirstHalf) {
    moon_.init();
    moon_.update(100.0F);
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 1);
}

TEST_F(CMoonTiledTest, InitLoadsOnlyTheFirstTime) {
    moon_.init();
    moon_.render();
    moon_.init();
    moon_.render();
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
