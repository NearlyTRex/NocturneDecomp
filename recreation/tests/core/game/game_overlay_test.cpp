#include "common/video/widescreen.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/game/letterbox.h"
#include "core/inv/inventoryassets.h"
#include "core/script/script.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/package/gamecontent.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/overlayscreen.h"
#include "tests/mocks/engine/mockfont.h"
#include "tests/mocks/platform/mockosfont.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <format>
#include <limits>
#include <memory>
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

    [[nodiscard]] SScriptScreen scriptScreen() {
        return {.screen = game_parts_.getScreen(),
                .two_d = game_parts_.getTwoD(),
                .three_d = game_parts_.getThreeD(),
                .fonts = fonts(),
                .display = display_};
    }

    // The script's letterbox and subtitles over a frame of that many seconds.
    void subtitles(float seconds) {
        game_.slamDT(seconds);
        script_.renderSubtitles(scriptScreen());
    }

    // The letterbox all the way in.
    void letterboxUp(ELetterbox mode = ELetterbox::On) {
        game_.letterbox_mode = mode;
        subtitles(1.0F);
    }

    // The script's line, as its display command sets it.
    void say(std::string_view text) {
        givenFile("world\\m1.scr",
                  std::format(":initSection\ndisplay({})\n:initSectionEnd\n", text));
        ASSERT_TRUE(script_.loadScript("m1.scr", true));
        script_.executeInitSection();
    }

    // A screen row's pixels the background's from left to right, or not.
    [[nodiscard]] bool rowIsBackground(int y) const {
        for (int x = 0; x < Width; ++x) {
            if (screen_.pixel(x, y) != kBackground) {
                return false;
            }
        }
        return true;
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
using COverlay400Test = COverlayTest<512, 400>;
using COverlayPanTest = COverlayTest<1280, 720>;
using COverlayVeryWideTest = COverlayTest<3200, 720>;

// A game without a battery gauge, as BW1 and BW3 have none, starts the bars at the frame's
// eightieth, 8.
TEST_F(COverlay480Test, WithoutABatteryGaugeTheBarsKeepTheFramesMargin) {
    game_parts_.getContent().battery = engine::SBattery{.gauge = false};
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 8, 462, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// A gauge the game places in another corner leaves the bars where they are.
TEST_F(COverlay480Test, AGaugeElsewhereLeavesTheBarsAtTheFramesMargin) {
    game_parts_.getContent().battery_gauge =
        engine::SBatteryGauge{.place = {.anchor = engine::EHudAnchor::TopLeft}};
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 8, 462, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// At 640x480 a full bar is half of what a 1.85:1 band leaves: (480 - 345) / 2 = 67. The message
// rises above it and the bars hide.
TEST_F(COverlay480Test, WhileTheLetterboxIsUpTheMessageRisesAndTheBarsHide) {
    letterboxUp();
    EXPECT_EQ(script_.getLetterboxHeight(scriptScreen()), 67);
    watchText();
    ON_CALL(theme_text_, getStringWidth(_)).WillByDefault(Return(100));
    EXPECT_CALL(theme_text_, drawText(std::string_view("Hello"), 270, 403, _, _));
    EXPECT_CALL(small_text_, drawText).Times(0);
    game_.displayMessage("Hello", 3.0F);
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// In over 0.35 seconds and out over the same, the top bar and the bottom one black.
TEST_F(COverlay480Test, TheBarsSlideInAndOut) {
    screen_.fill(kBackground);
    subtitles(1.0F);
    EXPECT_EQ(script_.getLetterboxHeight(scriptScreen()), 0);
    EXPECT_TRUE(rowIsBackground(0));
    game_.letterbox_mode = ELetterbox::On;
    subtitles(0.1F);
    const int part = script_.getLetterboxHeight(scriptScreen());
    EXPECT_GT(part, 0);
    EXPECT_LT(part, 67);
    subtitles(1.0F);
    EXPECT_EQ(screen_.pixel(5, 0), 0U);
    EXPECT_EQ(screen_.pixel(5, 66), 0U);
    EXPECT_EQ(screen_.pixel(5, 67), kBackground);
    EXPECT_EQ(screen_.pixel(5, 412), kBackground);
    EXPECT_EQ(screen_.pixel(5, 413), 0U);
    EXPECT_EQ(screen_.pixel(5, 479), 0U);
    game_.letterbox_mode = ELetterbox::Off;
    subtitles(0.1F);
    EXPECT_LT(script_.getLetterboxHeight(scriptScreen()), 67);
    subtitles(1.0F);
    EXPECT_EQ(script_.getLetterboxHeight(scriptScreen()), 0);
}

// The bottom bar alone, and it keeps to the bottom as it slides out.
TEST_F(COverlay480Test, ABottomLetterboxLeavesTheTopOfTheShot) {
    screen_.fill(kBackground);
    letterboxUp(ELetterbox::Bottom);
    EXPECT_TRUE(rowIsBackground(0));
    EXPECT_EQ(screen_.pixel(5, 479), 0U);
    game_.letterbox_mode = ELetterbox::Off;
    screen_.fill(kBackground);
    subtitles(0.1F);
    EXPECT_TRUE(rowIsBackground(0));
    EXPECT_EQ(screen_.pixel(5, 479), 0U);
}

// The line centred in the bottom bar: the block's middle halfway down it.
TEST_F(COverlay480Test, ALineIsCentredInTheBottomBar) {
    say("Hello");
    watchText();
    ON_CALL(medium_text_, getStringWidth(_)).WillByDefault(Return(100));
    const int pitch =
        fonts().getMediumFont()->wrapTextScaled("Hello", 10, 0x400, 576, 1.0F).line_pitch;
    EXPECT_CALL(medium_text_, drawText(std::string_view("Hello"), 270, ((960 - 67 - pitch) / 2),
                                       kTextColor, kShadowColor));
    letterboxUp();
}

// A block too tall for a bar rises over the shot, half a line clear of the screen's foot. Each
// word is long enough to take a line of its own.
TEST_F(COverlay480Test, ALongBlockRisesOverTheShot) {
    std::string words;
    for (char letter = 'a'; letter < 'm'; ++letter) {
        words += std::string(50, letter) + " ";
    }
    say(words);
    watchText();
    ON_CALL(medium_text_, getStringWidth(_)).WillByDefault([](std::string_view text) {
        return static_cast<int>(text.size()) * 10;
    });
    const engine::CBitFont::SWrappedText wrapped =
        fonts().getMediumFont()->wrapTextScaled(words, 10, 0x400, 576, 1.0F);
    const int pitch = wrapped.line_pitch;
    const auto lines = static_cast<int>(wrapped.lines.size());
    ASSERT_GT((lines * pitch) + pitch, 67);
    EXPECT_CALL(medium_text_, drawText(std::string_view(wrapped.lines.front()), _,
                                       480 - (pitch / 2) - (lines * pitch), _, _));
    EXPECT_CALL(medium_text_,
                drawText(::testing::Ne(std::string_view(wrapped.lines.front())), _, _, _, _))
        .Times(lines - 1);
    letterboxUp();
}

// The line shows without the letterbox too, but not with the player's subtitles off.
TEST_F(COverlay480Test, SubtitlesOffShowNoLine) {
    say("Hello");
    watchText();
    EXPECT_CALL(medium_text_, drawText(std::string_view("Hello"), _, _, _, _));
    subtitles(1.0F);
    game_.subtitle_mode = 0;
    EXPECT_CALL(medium_text_, drawText).Times(0);
    subtitles(1.0F);
}

// Under 480 lines the tiny font; under 384 the micro font, or the small editor font with the OS
// fonts.
TEST_F(COverlay400Test, UnderFourHundredAndEightyLinesTheTinyFont) {
    say("Hello");
    watchText();
    EXPECT_CALL(tiny_text_, drawText(std::string_view("Hello"), _, _, _, _));
    subtitles(1.0F);
}

TEST_F(COverlayShortTest, WithTheOsFontsAShortScreenTakesTheSmallEditorFont) {
    say("Hello");
    ON_CALL(game_parts_.getOsFonts(), createOsFont).WillByDefault([](std::string_view, int) {
        return std::make_unique<NiceMock<platform::MockOsFont>>();
    });
    fonts().setOsFontChoice(EOsFontChoice::System);
    fonts().initFonts();
    ASSERT_TRUE(fonts().getUseOSFonts());
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Hello"), _, _, _, _));
    subtitles(1.0F);
}

TEST_F(COverlayShortTest, WithoutTheOsFontsAShortScreenTakesTheMicroFont) {
    say("Hello");
    fonts().setOsFontChoice(EOsFontChoice::Bitmap);
    NiceMock<engine::MockFont> micro_text;
    fonts().getMicroFont()->setWinFont(micro_text);
    EXPECT_CALL(micro_text, drawText(std::string_view("Hello"), _, _, _, _));
    subtitles(1.0F);
}

// At 480 lines pan and scan crops nothing, so the bar is the whole band's.
TEST_F(COverlay480Test, PanningAtFourHundredAndEightyLinesKeepsTheWholeBar) {
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::PanAndScan));
    letterboxUp();
    EXPECT_EQ(script_.getLetterboxHeight(scriptScreen()), 67);
}

// Pillarboxed, the line is centred in the 960-column picture from 160.
TEST_F(COverlayPillarboxTest, PillarboxedTheLineIsCentredInThePicture) {
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::Pillarbox));
    say("Hello");
    watchText();
    ON_CALL(medium_text_, getStringWidth(_)).WillByDefault(Return(100));
    EXPECT_CALL(medium_text_,
                drawText(std::string_view("Hello"), 160 + ((960 - 100) / 2), _, _, _));
    letterboxUp();
}

// Pillarboxed, the band is over the 960-column picture: (720 - 518) / 2 = 101.
TEST_F(COverlayPillarboxTest, PillarboxedTheBarIsMeasuredOverThePicture) {
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::Pillarbox));
    letterboxUp();
    EXPECT_EQ(script_.getLetterboxHeight(scriptScreen()), 101);
}

// Panned and scanned, 360 of the 480 rows show: the shipped 67-row bar less the 60 cropped
// above it is 7 rows, 14 lines, unless three lines and their room are taller.
TEST_F(COverlayPanTest, PannedTheBarIsWhatTheCropLeavesOrThreeLines) {
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::PanAndScan));
    letterboxUp();
    const int pitch = fonts().getMediumFont()->getCharHeightScaled('X', 1.5F);
    EXPECT_EQ(script_.getLetterboxHeight(scriptScreen()), std::max(14, pitch * 4));
}

// So wide the crop takes the whole bar: three lines and their room.
TEST_F(COverlayVeryWideTest, PannedPastTheBarThreeLines) {
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::PanAndScan));
    letterboxUp();
    const int pitch = fonts().getMediumFont()->getCharHeightScaled('X', 1.5F);
    EXPECT_EQ(script_.getLetterboxHeight(scriptScreen()), pitch * 4);
}

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

// From the top right, 8 and 6 in as 640x480 shares, the bars stack down: the first 640 - 8 - 160
// across, and the next a bar and a half below.
TEST_F(COverlay480Test, TheGamePlacesTheBarsAndTheyStackAwayFromTheirEdge) {
    game_parts_.getContent().status_bars =
        engine::SStatusBars{.place = {.anchor = engine::EHudAnchor::TopRight, .x = 8, .y = 6}};
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 472, 6, _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("Ann"), 472, 24, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    game_.setStatusDisplay("Ann", 1.0F, 2.0F);
    render();
}

// Centred, the first bar sits in the middle and the rest stack down.
TEST_F(COverlay480Test, CentredBarsStackDownFromTheMiddle) {
    game_parts_.getContent().status_bars =
        engine::SStatusBars{.place = {.anchor = engine::EHudAnchor::Centre}};
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 240, 234, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// Bars and gauge both at the bottom right: the bars end the gap of 4 short of the gauge's box,
// 12 wide and 4 in, so at 640 - 4 - 12 - 4 - 160.
TEST_F(COverlay480Test, BarsSharingTheGaugesRightAnchorEndShortOfIt) {
    game_parts_.getContent().battery_gauge =
        engine::SBatteryGauge{.place = {.anchor = engine::EHudAnchor::BottomRight, .x = 4, .y = 4}};
    game_parts_.getContent().status_bars =
        engine::SStatusBars{.place = {.anchor = engine::EHudAnchor::BottomRight, .x = 8, .y = 6}};
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 460, 462, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// A gauge in the middle of an edge doesn't push centred bars aside.
TEST_F(COverlay480Test, CentredBarsIgnoreACentredGauge) {
    game_parts_.getContent().battery_gauge =
        engine::SBatteryGauge{.place = {.anchor = engine::EHudAnchor::Bottom}};
    game_parts_.getContent().status_bars =
        engine::SStatusBars{.place = {.anchor = engine::EHudAnchor::Bottom, .x = 0, .y = 6}};
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Doc"), 240, 462, _, _));
    game_.setStatusDisplay("Doc", 1.0F, 2.0F);
    render();
}

// From the top the message keeps a line clear of the edge, and of the top letterbox bar when it
// is up; with the bottom bar alone, the top edge.
TEST_F(COverlay480Test, AMessageAtTheTopKeepsClearOfTheTopBar) {
    game_parts_.getContent().message_line =
        engine::SMessageLine{.place = {.anchor = engine::EHudAnchor::Top}};
    watchText();
    ON_CALL(theme_text_, getStringWidth(_)).WillByDefault(Return(100));
    EXPECT_CALL(theme_text_, drawText(std::string_view("Hello"), 270, 5, _, _));
    game_.displayMessage("Hello", 3.0F);
    render();
    letterboxUp();
    EXPECT_CALL(theme_text_, drawText(std::string_view("Hello"), 270, 72, _, _));
    render();
    letterboxUp(ELetterbox::Bottom);
    EXPECT_CALL(theme_text_, drawText(std::string_view("Hello"), 270, 5, _, _));
    render();
}

// Left and right, the message's lines keep to that edge; in the middle down, the block is centred.
TEST_F(COverlay480Test, AMessageKeepsToTheEdgeItIsPlacedOn) {
    watchText();
    ON_CALL(theme_text_, getStringWidth(_)).WillByDefault(Return(100));
    game_.displayMessage("Hello", 3.0F);
    game_parts_.getContent().message_line =
        engine::SMessageLine{.place = {.anchor = engine::EHudAnchor::Left, .x = 4, .y = 0}};
    EXPECT_CALL(theme_text_, drawText(std::string_view("Hello"), 4, 237, _, _));
    render();
    game_parts_.getContent().message_line =
        engine::SMessageLine{.place = {.anchor = engine::EHudAnchor::Right, .x = 4, .y = 0}};
    EXPECT_CALL(theme_text_, drawText(std::string_view("Hello"), 536, 237, _, _));
    render();
}

// The battery picture is 16 wide, drawn 4 in: its 20, wider than the gauge, and the gap of 4.
TEST_F(COverlay480Test, BarsStartClearOfTheBatteryPicture) {
    givenSessionAssets();
    inventory_assets_.loadAssets();
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
