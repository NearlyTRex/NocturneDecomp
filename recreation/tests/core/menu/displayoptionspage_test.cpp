#include "common/video/presentation.h"
#include "core/game/game.h"
#include "core/menu/displayoptionspage.h"
#include "core/menu/menupage.h"
#include "core/menu/screenmodepage.h"
#include "engine/keys/inputcodetype.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "platform/displaymodes.h"
#include "tests/mocks/core/menufixture.h"
#include "tests/mocks/engine/fontsheet.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstddef>
#include <optional>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using platform::EWindowMode;
using ::testing::_;
using ::testing::Return;

// The lines' ids, in the order they are listed.
constexpr int kDisplay = 0;
constexpr int kResolution = 1;
constexpr int kWindow = 2;
constexpr int kFullscreenSize = 3;
constexpr int kRefreshRate = 4;
constexpr int kVsync = 5;
constexpr int kWidescreen = 6;
constexpr int kCalibration = 7;

constexpr common::SExtent kDesktop{.width = 2560, .height = 1440};

// A 2560x1440 display with full screen modes at three of the list's sizes.
platform::SDisplayInfo makeDisplay(std::string name) {
    return {.name = std::move(name),
            .desktop = kDesktop,
            .fullscreen_modes = {{.size = kDesktop, .refresh_rate = 144},
                                 {.size = kDesktop, .refresh_rate = 60},
                                 {.size = {.width = 1920, .height = 1080}, .refresh_rate = 120},
                                 {.size = {.width = 1920, .height = 1080}, .refresh_rate = 60},
                                 {.size = {.width = 1280, .height = 720}, .refresh_rate = 60}}};
}

TEST(CDisplayOptionsPage, PublicInterface) {
    static_assert(std::is_base_of_v<CScreenModePage, CDisplayOptionsPage>);
    static_assert(std::is_final_v<CDisplayOptionsPage>);
    static_assert(std::is_constructible_v<CDisplayOptionsPage, CMenu &, const SMenuOwners &>);
}

// Without acceleration unless a test loads the renderer.
class CDisplayOptionsPageTest : public CMenuFixture {
protected:
    CDisplayOptionsPageTest() {
        ON_CALL(display_, getVsync()).WillByDefault(Return(true));
    }

    [[nodiscard]] static std::vector<std::string> texts(CDisplayOptionsPage &page) {
        std::vector<SMenuLine> lines;
        page.build(lines);
        std::vector<std::string> result;
        result.reserve(lines.size());
        for (const SMenuLine &line : lines) {
            result.push_back(line.text);
        }
        return result;
    }

    // Empty for a line not listed.
    [[nodiscard]] static std::string text(CDisplayOptionsPage &page, int id) {
        std::vector<SMenuLine> lines;
        page.build(lines);
        const auto found = std::ranges::find(lines, id, &SMenuLine::id);
        return found == lines.end() ? std::string() : found->text;
    }

    void givenDisplays(std::vector<platform::SDisplayInfo> displays) {
        ON_CALL(display_, getDisplays()).WillByDefault(Return(std::move(displays)));
    }

    void givenWindowMode(EWindowMode mode) {
        ON_CALL(display_, getWindowMode()).WillByDefault(Return(mode));
    }

    // Each step until it comes back to where it started, or past a bound.
    [[nodiscard]] std::vector<std::string> stepResolutionsOn(CDisplayOptionsPage &page) {
        const std::string start = resolution();
        std::vector<std::string> stepped;
        constexpr int kBound = 32;
        for (int i = 0; i < kBound; ++i) {
            EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
            stepped.push_back(resolution());
            if (stepped.back() == start) {
                break;
            }
        }
        return stepped;
    }

    void loadRenderer() {
        special_.setUseDirect3D(true);
        ASSERT_EQ(special_.loadExternalRenderer(), 1);
    }

    void setResolution(int width, int height) {
        game_.game_pixx = width;
        game_.game_pixy = height;
    }

    [[nodiscard]] std::string resolution() const {
        return std::to_string(game_.game_pixx) + "x" + std::to_string(game_.game_pixy);
    }
};

TEST_F(CDisplayOptionsPageTest, TheTitleIsDisplayOptions) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.title(), std::optional<std::string>("Display Options"));
}

TEST_F(CDisplayOptionsPageTest, TheLinesAreTheDisplays) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(texts(page),
              (std::vector<std::string>{"Display : 1", "Resolution : 640x480", "Window : Windowed",
                                        "Vertical sync : On", "Widescreen : Stretch",
                                        "Monitor calibration"}));
}

TEST_F(CDisplayOptionsPageTest, TheWidescreenFramingIsNamed) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::Pillarbox));
    EXPECT_EQ(text(page, kWidescreen), "Widescreen : Pillarbox");
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::PanAndScan));
    EXPECT_EQ(text(page, kWidescreen), "Widescreen : Pan & scan");
}

TEST_F(CDisplayOptionsPageTest, TheWidescreenFramingStepsBothWaysAndWraps) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setWidescreen(common::EWidescreen::Pillarbox));
    EXPECT_EQ(page.choose(kWidescreen, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(display_, setWidescreen(common::EWidescreen::PanAndScan));
    EXPECT_EQ(page.choose(kWidescreen, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getWidescreen()).WillByDefault(Return(common::EWidescreen::PanAndScan));
    EXPECT_CALL(display_, setWidescreen(common::EWidescreen::Stretch));
    EXPECT_EQ(page.choose(kWidescreen, EMenuStep::On), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, WithoutAccelerationTheResolutionWrapsAt640x480) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "320x240");
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "640x480");
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "512x384");
}

TEST_F(CDisplayOptionsPageTest, WithAccelerationTheResolutionStepsByWidthThenHeightTo3840x2160) {
    loadRenderer();
    setResolution(1024, 768);
    CDisplayOptionsPage page(menu_, menu_owners_);
    std::vector<std::string> stepped;
    for (int i = 0; i < 12; ++i) {
        EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
        stepped.push_back(resolution());
    }
    EXPECT_EQ(stepped,
              (std::vector<std::string>{"1200x900", "1280x720", "1280x1024", "1440x1080",
                                        "1600x900", "1600x1200", "1920x1080", "1920x1440",
                                        "2560x1440", "2880x2160", "3840x2160", "320x240"}));
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "3840x2160");
}

TEST_F(CDisplayOptionsPageTest, AResolutionWiderThanFourByThreeIsMarkedWide) {
    loadRenderer();
    setResolution(1920, 1080);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kResolution), "Resolution : 1920x1080 (wide)");
    setResolution(1440, 1080);
    EXPECT_EQ(text(page, kResolution), "Resolution : 1440x1080");
}

TEST_F(CDisplayOptionsPageTest, AnUnlistedResolutionGoesToTheNearestByHeightThenWidth) {
    loadRenderer();
    setResolution(1900, 1070);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "1920x1080");
    setResolution(1500, 1070);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "1440x1080");
}

// As an old INI can leave it.
TEST_F(CDisplayOptionsPageTest, AResolutionNotListedGoesToTheNearest) {
    setResolution(700, 500);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "640x480");
}

TEST_F(CDisplayOptionsPageTest, AResolutionIsListedOnlyByBothItsSides) {
    setResolution(640, 400);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "512x384");
}

TEST_F(CDisplayOptionsPageTest, AResolutionAboveTheCapGoesToTheLargestUnderIt) {
    setResolution(1024, 768);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "640x480");
}

TEST_F(CDisplayOptionsPageTest, WithoutAccelerationTheResolutionIsHeldAt640x480) {
    setResolution(1024, 768);
    CDisplayOptionsPage page(menu_, menu_owners_);
    page.beforeSwap();
    EXPECT_EQ(resolution(), "640x480");
    loadRenderer();
    setResolution(1024, 768);
    page.beforeSwap();
    EXPECT_EQ(resolution(), "1024x768");
    setResolution(320, 240);
    special_.setUseDirect3D(false);
    page.beforeSwap();
    EXPECT_EQ(resolution(), "320x240");
}

TEST_F(CDisplayOptionsPageTest, TheWindowModeStepsEitherWayAndWraps) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setWindowMode(EWindowMode::Fullscreen));
    EXPECT_EQ(page.choose(kWindow, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(display_, setWindowMode(EWindowMode::Borderless));
    EXPECT_EQ(page.choose(kWindow, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getWindowMode()).WillByDefault(Return(EWindowMode::Borderless));
    EXPECT_EQ(text(page, kWindow), "Window : Borderless");
}

// Five screens over the brightness image, each until a key.
TEST_F(CDisplayOptionsPageTest, MonitorCalibrationShowsTheTest) {
    givenFile("art\\brightness.raw", std::string(std::size_t{kWidth} * kHeight, '\x01'));
    givenFile("art\\brightness.act", engine::makePalette({0, 0, 0}));
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kCalibration, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(frames_, 5);
}

TEST_F(CDisplayOptionsPageTest, ANewResolutionSizesTheWindowAtOnce) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    EXPECT_CALL(display_, setWindowSize(_, _)).Times(0);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
    ::testing::Mock::VerifyAndClearExpectations(&display_);
    setResolution(320, 240);
    EXPECT_CALL(display_, setWindowSize(320, 240));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
    setResolution(640, 400);
    EXPECT_CALL(display_, setWindowSize(640, 400));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, TheDisplayIsNumberedFromOneAndNamed) {
    givenDisplays({makeDisplay("Left"), makeDisplay("Right")});
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kDisplay), "Display : 1 (Left)");
    ON_CALL(display_, getDisplayIndex()).WillByDefault(Return(1));
    EXPECT_EQ(text(page, kDisplay), "Display : 2 (Right)");
    // As an INI can leave it once a display is unplugged.
    ON_CALL(display_, getDisplayIndex()).WillByDefault(Return(2));
    EXPECT_EQ(text(page, kDisplay), "Display : 1 (Left)");
}

TEST_F(CDisplayOptionsPageTest, TheDisplayStepsEitherWayAndWraps) {
    givenDisplays({makeDisplay("Left"), makeDisplay("Middle"), makeDisplay("Right")});
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setDisplayIndex(1));
    EXPECT_EQ(page.choose(kDisplay, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(display_, setDisplayIndex(2));
    EXPECT_EQ(page.choose(kDisplay, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getDisplayIndex()).WillByDefault(Return(2));
    EXPECT_CALL(display_, setDisplayIndex(0));
    EXPECT_EQ(page.choose(kDisplay, EMenuStep::On), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, WithOneDisplayOrNoneTheDisplayStaysPut) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setDisplayIndex(_)).Times(0);
    EXPECT_EQ(page.choose(kDisplay, EMenuStep::On), EMenuOutcome::Stay);
    givenDisplays({makeDisplay("Only")});
    EXPECT_EQ(page.choose(kDisplay, EMenuStep::On), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, TheFullscreenSizeAndRefreshRateAreListedOnlyInFullscreen) {
    givenDisplays({makeDisplay("Main")});
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kFullscreenSize), "");
    EXPECT_EQ(text(page, kRefreshRate), "");
    givenWindowMode(EWindowMode::Borderless);
    EXPECT_EQ(text(page, kFullscreenSize), "");
    givenWindowMode(EWindowMode::Fullscreen);
    const std::vector<std::string> lines = texts(page);
    EXPECT_EQ(std::vector(lines.begin(), lines.begin() + 6),
              (std::vector<std::string>{"Display : 1 (Main)", "Resolution : 640x480",
                                        "Window : Fullscreen", "Fullscreen size : Game",
                                        "Refresh rate : Auto", "Vertical sync : On"}));
    ON_CALL(display_, getFullscreenSize())
        .WillByDefault(Return(platform::EFullscreenSize::Desktop));
    ON_CALL(display_, getRefreshRate()).WillByDefault(Return(144));
    EXPECT_EQ(text(page, kFullscreenSize), "Fullscreen size : Desktop");
    EXPECT_EQ(text(page, kRefreshRate), "Refresh rate : 144 Hz");
}

TEST_F(CDisplayOptionsPageTest, TheFullscreenSizeStepsEitherWayAndWraps) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setFullscreenSize(platform::EFullscreenSize::Desktop)).Times(2);
    EXPECT_EQ(page.choose(kFullscreenSize, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(page.choose(kFullscreenSize, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getFullscreenSize())
        .WillByDefault(Return(platform::EFullscreenSize::Desktop));
    EXPECT_CALL(display_, setFullscreenSize(platform::EFullscreenSize::Game));
    EXPECT_EQ(page.choose(kFullscreenSize, EMenuStep::On), EMenuOutcome::Stay);
}

// At the game's size: 1920x1080 has 60 and 120 Hz.
TEST_F(CDisplayOptionsPageTest, TheRefreshRateStepsThroughAutoAndTheRatesAtTheGamesSize) {
    givenDisplays({makeDisplay("Main")});
    setResolution(1920, 1080);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setRefreshRate(60));
    EXPECT_EQ(page.choose(kRefreshRate, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(display_, setRefreshRate(120));
    EXPECT_EQ(page.choose(kRefreshRate, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getRefreshRate()).WillByDefault(Return(120));
    EXPECT_CALL(display_, setRefreshRate(platform::kRefreshRateAuto));
    EXPECT_EQ(page.choose(kRefreshRate, EMenuStep::On), EMenuOutcome::Stay);
}

// The desktop's 2560x1440 has 60 and 144 Hz.
TEST_F(CDisplayOptionsPageTest, AtTheDesktopsSizeTheRefreshRatesAreTheDesktops) {
    givenDisplays({makeDisplay("Main")});
    setResolution(1920, 1080);
    ON_CALL(display_, getFullscreenSize())
        .WillByDefault(Return(platform::EFullscreenSize::Desktop));
    ON_CALL(display_, getRefreshRate()).WillByDefault(Return(60));
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setRefreshRate(144));
    EXPECT_EQ(page.choose(kRefreshRate, EMenuStep::On), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, ARefreshRateTheDisplayLacksStepsFromAuto) {
    givenDisplays({makeDisplay("Main")});
    setResolution(1920, 1080);
    ON_CALL(display_, getRefreshRate()).WillByDefault(Return(75));
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setRefreshRate(60));
    EXPECT_EQ(page.choose(kRefreshRate, EMenuStep::On), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, WithoutDisplaysTheRefreshRateIsAuto) {
    ON_CALL(display_, getRefreshRate()).WillByDefault(Return(60));
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setRefreshRate(platform::kRefreshRateAuto));
    EXPECT_EQ(page.choose(kRefreshRate, EMenuStep::On), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, VerticalSyncTogglesEitherWay) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setVsync(false));
    EXPECT_EQ(page.choose(kVsync, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getVsync()).WillByDefault(Return(false));
    EXPECT_EQ(text(page, kVsync), "Vertical sync : Off");
    EXPECT_CALL(display_, setVsync(true));
    EXPECT_EQ(page.choose(kVsync, EMenuStep::On), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, AResolutionLargerThanTheDesktopIsSkipped) {
    loadRenderer();
    givenDisplays({makeDisplay("Main")});
    setResolution(2560, 1440);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "320x240");
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "2560x1440");
}

// By the display the setting names.
TEST_F(CDisplayOptionsPageTest, TheDesktopIsTheChosenDisplays) {
    loadRenderer();
    platform::SDisplayInfo small = makeDisplay("Small");
    small.desktop = {.width = 1920, .height = 1080};
    givenDisplays({makeDisplay("Main"), small});
    ON_CALL(display_, getDisplayIndex()).WillByDefault(Return(1));
    setResolution(1920, 1080);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "320x240");
}

TEST_F(CDisplayOptionsPageTest, InFullscreenAtTheGamesSizeOnlyTheDisplaysModesAreOffered) {
    loadRenderer();
    givenDisplays({makeDisplay("Main")});
    givenWindowMode(EWindowMode::Fullscreen);
    setResolution(1280, 720);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(stepResolutionsOn(page),
              (std::vector<std::string>{"1920x1080", "2560x1440", "1280x720"}));
    // One it has no mode for goes to the nearest it has.
    setResolution(1440, 1080);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "1920x1080");
}

TEST_F(CDisplayOptionsPageTest, InFullscreenAtTheDesktopsSizeOnlyTheDesktopBounds) {
    loadRenderer();
    givenDisplays({makeDisplay("Main")});
    givenWindowMode(EWindowMode::Fullscreen);
    ON_CALL(display_, getFullscreenSize())
        .WillByDefault(Return(platform::EFullscreenSize::Desktop));
    setResolution(1024, 768);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "1200x900");
}

// The software renderer's 640x480 cap still holds under a display's filter.
TEST_F(CDisplayOptionsPageTest, ADisplayFilterKeepsTheSoftwareCap) {
    givenDisplays({makeDisplay("Main")});
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "512x384");
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "640x480");
}

TEST_F(CDisplayOptionsPageTest, ADisplayThatFitsNoneOfTheListLeavesItUnfiltered) {
    loadRenderer();
    platform::SDisplayInfo tiny = makeDisplay("Tiny");
    tiny.desktop = {.width = 200, .height = 100};
    givenDisplays({tiny});
    setResolution(3840, 2160);
    CDisplayOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "2880x2160");
}

// The front end runs where the missions will, so a new resolution is its new mode at once.
TEST_F(CDisplayOptionsPageTest, ANewResolutionIsTheFrontEndsModeAtOnce) {
    loadRenderer();
    CDisplayOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(screen_, setScreenResolution(800, 600, _)).WillOnce(Return(true));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
}

// The front end draws in software, so acceleration alone leaves the renderer off; one already
// in use is reset to the new size.
TEST_F(CDisplayOptionsPageTest, OnlyARendererInUseFollowsTheNewMode) {
    loadRenderer();
    CDisplayOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(screen_, setScreenResolution(800, 600, _)).WillOnce(Return(true));
    EXPECT_CALL(screen_, resetGraphicsSystem).Times(0);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
    ::testing::Mock::VerifyAndClearExpectations(&screen_);
    special_.setUseExternalRenderer(true);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(screen_, setScreenResolution(_, _, _)).WillOnce(Return(true));
    EXPECT_CALL(screen_, resetGraphicsSystem);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
}

// The mode it is already in, or one the screen refuses, changes nothing.
TEST_F(CDisplayOptionsPageTest, TheModeItHasOrOneRefusedChangesNothing) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    EXPECT_CALL(screen_, setScreenResolution(_, _, _)).Times(0);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
    ::testing::Mock::VerifyAndClearExpectations(&screen_);
    loadRenderer();
    setResolution(1024, 768);
    EXPECT_CALL(screen_, setScreenResolution(1024, 768, _)).WillOnce(Return(false));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
}

// The width it has is not the mode it has: a new height is a new mode too.
TEST_F(CDisplayOptionsPageTest, ANewHeightAloneIsANewMode) {
    loadRenderer();
    CDisplayOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    setResolution(640, 600);
    EXPECT_CALL(screen_, setScreenResolution(640, 600, _)).WillOnce(Return(true));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
}

TEST_F(CDisplayOptionsPageTest, CancelLeaves) {
    CDisplayOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    press(engine::EInputCodeType::DIK_ESCAPE);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Leave);
}

} // namespace
} // namespace nocturne::core
