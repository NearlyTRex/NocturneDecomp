#include "platform/displaymodes.h"

#include <gtest/gtest.h>

#include <vector>

namespace nocturne::platform {
namespace {

constexpr common::SExtent kDesktop{.width = 5120, .height = 1440};
constexpr common::SExtent kWindow{.width = 1920, .height = 1080};

SDisplayInfo makeDisplay() {
    return {.name = "Wide",
            .desktop = kDesktop,
            .fullscreen_modes = {{.size = kDesktop, .refresh_rate = 240},
                                 {.size = kWindow, .refresh_rate = 144},
                                 {.size = kWindow, .refresh_rate = 60},
                                 {.size = kWindow, .refresh_rate = 144},
                                 {.size = kDesktop, .refresh_rate = 120}}};
}

TEST(EFullscreenSize, KeepsThePersistedValues) {
    static_assert(static_cast<int>(EFullscreenSize::Game) == 0);
    static_assert(static_cast<int>(EFullscreenSize::Desktop) == 1);
    static_assert(kFullscreenSizeCount == 2);
    static_assert(kRefreshRateAuto == 0);
}

TEST(DisplayModes, AnIndexOutsideTheListIsThePrimarys) {
    EXPECT_EQ(resolveDisplayIndex(1, 2), 1U);
    EXPECT_EQ(resolveDisplayIndex(2, 2), 0U);
    EXPECT_EQ(resolveDisplayIndex(-1, 2), 0U);
    EXPECT_EQ(resolveDisplayIndex(0, 0), 0U);
}

TEST(DisplayModes, TheExclusiveSizeIsTheWindowsOrTheDesktops) {
    EXPECT_EQ(getExclusiveSize(kDesktop, EFullscreenSize::Game, kWindow), kWindow);
    EXPECT_EQ(getExclusiveSize(kDesktop, EFullscreenSize::Desktop, kWindow), kDesktop);
}

TEST(DisplayModes, AModeIsListedBySizeAtAnyRate) {
    const SDisplayInfo display = makeDisplay();
    EXPECT_TRUE(getModeListed(display, kWindow));
    EXPECT_TRUE(getModeListed(display, kDesktop));
    EXPECT_FALSE(getModeListed(display, {.width = 1920, .height = 1440}));
}

TEST(DisplayModes, TheRefreshRatesAtASizeAreAscendingAndEachOnce) {
    SDisplayInfo display = makeDisplay();
    display.fullscreen_modes.push_back({.size = kWindow, .refresh_rate = kRefreshRateAuto});
    EXPECT_EQ(getRefreshRates(display, kWindow), (std::vector<int>{60, 144}));
    EXPECT_EQ(getRefreshRates(display, kDesktop), (std::vector<int>{120, 240}));
    EXPECT_TRUE(getRefreshRates(display, {.width = 640, .height = 480}).empty());
}

} // namespace
} // namespace nocturne::platform
