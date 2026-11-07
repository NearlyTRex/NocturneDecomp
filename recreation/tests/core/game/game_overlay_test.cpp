#include "common/video/widescreen.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/inv/inventoryassets.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/overlayscreen.h"
#include "tests/mocks/engine/mockfont.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <format>
#include <limits>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::InSequence;
using ::testing::NiceMock;
using ::testing::Return;

constexpr int kTextColor = 0xf8;
constexpr int kShadowColor = 0;
// updateDT's units: 0x2000 is an eighth of a second.
constexpr int kEighthSecond = 0x2000;

// The game's overlay drawn on a Width by Height screen of the background colour, the scene camera
// sized for it. Text drawn in a watched font goes to its stand-in OS font, which reports each line
// where it is drawn.
template <int Width, int Height>
class COverlayTest : public CMissionFixture {
protected:
    COverlayTest() : CMissionFixture(Width, Height) {
        drawGameOnto(game_parts_, screen_,
                     [this](const std::string &name, const std::string &contents) {
                         givenFile(name, contents);
                     });
        session_.camera.init(Height);
    }

    [[nodiscard]] CDFont &fonts() {
        return game_parts_.getFonts();
    }

    // The fonts' text goes to these from now on.
    void watchText() {
        fonts().getThemeFont()->setWinFont(theme_text_);
        fonts().getSmallEditorFont()->setWinFont(small_text_);
        fonts().getTinyFont()->setWinFont(tiny_text_);
        fonts().getMediumFont()->setWinFont(medium_text_);
    }

    // A frame of that many of updateDT's units.
    void step(int units) {
        game_.saveClockTime();
        time_ += units * 18;
        game_.updateDT();
        game_.updateStatusDisplays();
    }

    void render() {
        game_.renderOverlay(session_);
    }

    [[nodiscard]] int renderAlpha() {
        return game_parts_.getThreeD().getCurrentAlphaValue();
    }

    NiceMock<engine::MockFont> theme_text_;
    NiceMock<engine::MockFont> small_text_;
    NiceMock<engine::MockFont> tiny_text_;
    NiceMock<engine::MockFont> medium_text_;
};

using COverlay480Test = COverlayTest<640, 480>;
using COverlay600Test = COverlayTest<800, 600>;
using COverlay720Test = COverlayTest<960, 720>;
using COverlayPillarboxTest = COverlayTest<1280, 720>;
using COverlayWideTest = COverlayTest<3200, 480>;
using COverlayShortTest = COverlayTest<640, 40>;

// The theme font's 'X' is 5 tall with its offset, so a line is 5 apart: the one line is two
// lines up from the foot.
TEST_F(COverlay480Test, AMessageIsCentredAboveTheFramesFoot) {
    watchText();
    ON_CALL(theme_text_, getStringWidth(_)).WillByDefault(Return(100));
    EXPECT_CALL(theme_text_,
                drawText(std::string_view("Hello"), 270, 470, kTextColor, kShadowColor));
    game_.displayMessage("Hello", 3.0F);
    render();
}

TEST_F(COverlay480Test, AMessageOfSeveralLinesStacksThemALineApart) {
    watchText();
    ON_CALL(theme_text_, getStringWidth(_)).WillByDefault(Return(30));
    InSequence lines;
    EXPECT_CALL(theme_text_, drawText(std::string_view("one"), 305, 465, kTextColor, kShadowColor));
    EXPECT_CALL(theme_text_, drawText(std::string_view("two"), 305, 470, kTextColor, kShadowColor));
    game_.displayMessage("one\ntwo", 3.0F);
    render();
}

// A camera of 320 columns takes the small editor font, 7 higher.
TEST_F(COverlay480Test, BelowFourHundredAndEightyCameraColumnsTheSmallEditorFontSitsHigher) {
    session_.camera.init(240);
    watchText();
    EXPECT_CALL(theme_text_, drawText).Times(0);
    EXPECT_CALL(small_text_,
                drawText(std::string_view("Hello"), 320, 463, kTextColor, kShadowColor));
    game_.displayMessage("Hello", 3.0F);
    render();
}

TEST_F(COverlay480Test, NoMessageOrAnEmptyOneDrawsNothing) {
    watchText();
    EXPECT_CALL(theme_text_, drawText).Times(0);
    render();
    game_.displayMessage("Hello", 3.0F);
    game_.displayMessage("", 3.0F);
    render();
}

TEST_F(COverlay480Test, AMessageFadesInItsLastSecond) {
    game_.displayMessage("Hello", 0.5F);
    render();
    // 0.5 of 0xffff, rounded, as the render alpha's byte.
    EXPECT_EQ(renderAlpha(), 0x80);
    game_.displayMessage("Hello", 2.0F);
    render();
    EXPECT_EQ(renderAlpha(), 0xff);
}

// A frame's time comes off the message, which is gone at zero and never below it.
TEST_F(COverlay480Test, TheMessageCountsDownByTheFrame) {
    watchText();
    EXPECT_CALL(theme_text_, drawText).Times(1);
    game_.displayMessage("Hello", 0.25F);
    step(kEighthSecond);
    render();
    EXPECT_EQ(renderAlpha(), 0x20);
    step(kEighthSecond);
    render();
    game_.displayMessage("Hello", 0.1F);
    step(kEighthSecond);
    render();
}

// At 640x480 the block glyph is one by two; at 720 lines the text is half as large again: two by
// three, centred, on the line 8 up from the foot.
TEST_F(COverlay480Test, AtFourHundredAndEightyLinesTextIsUnscaled) {
    game_.displayMessage("X", 3.0F);
    screen_.fill(0);
    render();
    EXPECT_EQ(screen_.pixel(319, 473), 0xf6f6f6U);
    EXPECT_EQ(screen_.pixel(319, 474), 0xf6f6f6U);
    EXPECT_EQ(screen_.pixel(319, 475), 0U);
    EXPECT_EQ(screen_.pixel(320, 473), 0U);
}

TEST_F(COverlay720Test, TextIsDrawnAtTheHudsTextScale) {
    game_.displayMessage("X", 3.0F);
    screen_.fill(0);
    render();
    for (const int x : {479, 480}) {
        for (const int y : {709, 710, 711}) {
            EXPECT_EQ(screen_.pixel(x, y), 0xf6f6f6U) << x << "," << y;
        }
    }
    EXPECT_EQ(screen_.pixel(478, 710), 0U);
    EXPECT_EQ(screen_.pixel(481, 710), 0U);
    EXPECT_EQ(screen_.pixel(479, 708), 0U);
    EXPECT_EQ(screen_.pixel(479, 712), 0U);
}

// The small editor font's 'X' is 5 tall: a bar is 480 / 40 = 12, from 6 up the foot. With no
// battery picture the gauge's 16 and the gap of 4 put the bar at 20, a quarter of the screen long.
TEST_F(COverlay480Test, ABarIsFilledToItsValueUnderItsName) {
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 20, 462, kTextColor, kShadowColor));
    game_.setStatusDisplay("Doc", 0.5F, 2.0F);
    render();
    // Half of 161, rounded, in the hurt colour.
    EXPECT_EQ(screen_.pixel(20, 462), 0xfbfbfbU);
    EXPECT_EQ(screen_.pixel(101, 474), 0xfbfbfbU);
    // The rest is the bar's black, framed in black.
    EXPECT_EQ(screen_.pixel(102, 470), 0U);
    EXPECT_EQ(screen_.pixel(180, 470), 0U);
    EXPECT_EQ(screen_.pixel(181, 470), 0U);
    EXPECT_EQ(screen_.pixel(19, 470), 0U);
    EXPECT_EQ(screen_.pixel(182, 470), kBackground);
    EXPECT_EQ(screen_.pixel(18, 470), kBackground);
    EXPECT_EQ(screen_.pixel(20, 461), 0U);
    EXPECT_EQ(screen_.pixel(20, 460), kBackground);
}

// Well from 0.6, hurt below it and near death below 0.35, compared as doubles as the original
// does, so 0.35f, a little under 0.35, is near death. Each bar stacks a bar and a half above.
TEST_F(COverlay480Test, BarsTakeTheColourOfTheirHealthAndStackUp) {
    watchText();
    const std::vector<std::pair<float, std::uint32_t>> bars{{0.7F, 0x020202U},
                                                            {0.6F, 0x020202U},
                                                            {0.5F, 0xfbfbfbU},
                                                            {0.35F, 0x010101U},
                                                            {0.2F, 0x010101U}};
    for (std::size_t i = 0; i < bars.size(); ++i) {
        game_.setStatusDisplay(std::format("bar {}", i), bars[i].first, 2.0F);
    }
    render();
    for (std::size_t i = 0; i < bars.size(); ++i) {
        const int bottom = 474 - (18 * static_cast<int>(i));
        EXPECT_EQ(screen_.pixel(25, bottom), bars[i].second) << i;
    }
}

TEST_F(COverlay480Test, AnEmptyBarIsOnlyItsBlack) {
    game_.setStatusDisplay("Empty", 0.0F, 2.0F);
    game_.setStatusDisplay("Sliver", 0.01F, 2.0F);
    render();
    EXPECT_EQ(screen_.pixel(20, 470), 0U);
    // 1.61 rounds to 2, past the bar's first column.
    EXPECT_EQ(screen_.pixel(22, 452), 0x010101U);
    EXPECT_EQ(screen_.pixel(23, 452), 0U);
}

// The sixth bar has no room; a name already shown, in any case, is refilled and restarted, so it
// outlasts the others.
TEST_F(COverlay480Test, FiveBarsAtMostAndANameIsMatchedInAnyCase) {
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("a"), _, _, _, _)).Times(2);
    for (const char *name : {"b", "c", "d", "e"}) {
        EXPECT_CALL(small_text_, drawText(std::string_view(name), _, _, _, _)).Times(1);
    }
    EXPECT_CALL(small_text_, drawText(std::string_view("f"), _, _, _, _)).Times(0);
    EXPECT_CALL(small_text_, drawText(std::string_view("A"), _, _, _, _)).Times(0);
    for (const char *name : {"a", "b", "c", "d", "e", "f"}) {
        game_.setStatusDisplay(name, 1.0F, 0.2F);
    }
    render();
    game_.setStatusDisplay("A", 0.2F, 1.0F);
    step(kEighthSecond);
    step(kEighthSecond);
    render();
    EXPECT_EQ(screen_.pixel(25, 474), 0x010101U);
}

TEST_F(COverlay480Test, ABarNeedsATimeAndAName) {
    watchText();
    EXPECT_CALL(small_text_, drawText).Times(0);
    game_.setStatusDisplay("Doc", 1.0F, 0.0F);
    game_.setStatusDisplay("Doc", 1.0F, -1.0F);
    game_.setStatusDisplay("Doc", 1.0F, std::numeric_limits<float>::quiet_NaN());
    game_.setStatusDisplay("", 1.0F, 2.0F);
    render();
    EXPECT_EQ(screen_.pixel(25, 470), kBackground);
}

// The bars above one whose time is up move down into its place, in their order.
TEST_F(COverlay480Test, ABarGoesWhenItsTimeIsUp) {
    watchText();
    InSequence order;
    EXPECT_CALL(small_text_, drawText(std::string_view("first"), 20, 462, _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("third"), 20, 444, _, _));
    game_.setStatusDisplay("first", 1.0F, 1.0F);
    game_.setStatusDisplay("second", 1.0F, 0.1F);
    game_.setStatusDisplay("third", 1.0F, 1.0F);
    step(kEighthSecond);
    render();
}

// The battery picture is 16 wide, drawn 4 in: its 20, wider than the gauge, and the gap of 4.
TEST_F(COverlay480Test, BarsStartClearOfTheBatteryPicture) {
    givenSessionAssets();
    inventory_assets_.load();
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 24, 462, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// Wider than 640 the tiny font: a bar 600 / 40 = 15, from 600 / 80 = 7 up.
TEST_F(COverlay600Test, BarsTakeTheTinyFontAbove640Columns) {
    watchText();
    EXPECT_CALL(tiny_text_, drawText(std::string_view("Doc"), 20, 578, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// Wider than 800 the medium font, and the frame's eightieth, 40, is past the battery's column.
TEST_F(COverlayWideTest, BarsTakeTheMediumFontAbove800AndKeepTheFramesMargin) {
    watchText();
    EXPECT_CALL(medium_text_, drawText(std::string_view("Doc"), 40, 462, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// Where a fortieth of the screen is shorter than the font, the bar is the font's 'X', 5 tall.
TEST_F(COverlayShortTest, ABarIsNeverShorterThanItsName) {
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 20, 35, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// Pillarboxed, the frame is the 960-column picture from 160: the bars start right of the
// battery's column, 16 by the HUD scale of 2 and the gap of 4 by 2, and stand 720 / 80 = 9 up.
TEST_F(COverlayPillarboxTest, PillarboxedTheOverlayKeepsToThePicture) {
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::Pillarbox));
    watchText();
    ON_CALL(theme_text_, getStringWidth(_)).WillByDefault(Return(100));
    EXPECT_CALL(medium_text_, drawText(std::string_view("Doc"), 200, 693, _, _));
    EXPECT_CALL(theme_text_, drawText(std::string_view("Hello"), 590, 710, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    game_.displayMessage("Hello", 3.0F);
    render();
}

// Stretched, the frame is the whole screen.
TEST_F(COverlayPillarboxTest, StretchedTheOverlayKeepsToTheScreen) {
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::Stretch));
    watchText();
    EXPECT_CALL(medium_text_, drawText(std::string_view("Doc"), 40, 693, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

} // namespace
} // namespace nocturne::core
