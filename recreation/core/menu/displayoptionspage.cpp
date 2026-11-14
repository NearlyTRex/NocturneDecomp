#include "core/menu/displayoptionspage.h"

#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "engine/screendevice.h"
#include "platform/display.h"
#include "platform/displaymodes.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <format>
#include <functional>
#include <iterator>
#include <optional>
#include <ranges>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

enum class EDisplayLine : std::uint8_t {
    Display,
    Resolution,
    Window,
    FullscreenSize,
    RefreshRate,
    Vsync,
    Widescreen,
    Calibration,
};

struct SResolution {
    int width;
    int height;
};

// By width, then height. Every mode the original's labels knew, with 400x300 and 1600x1200,
// which they named but its stepping never reached, and the wider modes the presenter frames the
// scene for, each past 1024 wide with a 4:3 mode at its height. Every width is a multiple of 16,
// as clearScreen's rows need.
constexpr std::array<SResolution, 17> kResolutions{{
    {.width = 320, .height = 240},
    {.width = 400, .height = 300},
    {.width = 512, .height = 384},
    {.width = 640, .height = 480},
    {.width = 800, .height = 600},
    {.width = 1024, .height = 768},
    {.width = 1200, .height = 900},
    {.width = 1280, .height = 720},
    {.width = 1280, .height = 1024},
    {.width = 1440, .height = 1080},
    {.width = 1600, .height = 900},
    {.width = 1600, .height = 1200},
    {.width = 1920, .height = 1080},
    {.width = 1920, .height = 1440},
    {.width = 2560, .height = 1440},
    {.width = 2880, .height = 2160},
    {.width = 3840, .height = 2160},
}};
static_assert(std::ranges::all_of(kResolutions, [](const SResolution &mode) {
    return mode.width <= engine::kMaxScreenWidth && mode.height <= engine::kMaxScreenHeight;
}));
constexpr int kTallest = std::ranges::max(kResolutions, {}, &SResolution::height).height;

// By EWindowMode.
constexpr std::array<std::string_view, 3> kWindowModeNames{"Windowed", "Fullscreen", "Borderless"};
constexpr int kWindowModeCount = static_cast<int>(kWindowModeNames.size());

// By EFullscreenSize.
constexpr std::array<std::string_view, platform::kFullscreenSizeCount> kFullscreenSizeNames{
    "Game", "Desktop"};

// By EWidescreen.
constexpr std::array<std::string_view, common::kWidescreenCount> kWidescreenNames{
    "Stretch", "Pillarbox", "Pan & scan"};

// One step on or back through those that fit, wrapping; at least one must. A resolution not in
// the list, or one that doesn't fit, goes to the nearest by height, then width, instead.
SResolution getNextResolution(SResolution current, EMenuStep step,
                              const std::function<bool(const SResolution &)> &fits) {
    const auto *found = std::ranges::find_if(kResolutions, [&](const SResolution &mode) {
        return mode.width == current.width && mode.height == current.height && fits(mode);
    });
    if (found == kResolutions.end()) {
        auto allowed = kResolutions | std::views::filter(fits);
        return *std::ranges::min_element(allowed, {}, [current](const SResolution &mode) {
            return std::pair(std::abs(mode.height - current.height),
                             std::abs(mode.width - current.width));
        });
    }
    const auto count = static_cast<int>(kResolutions.size());
    auto index = static_cast<int>(found - kResolutions.begin());
    // The current mode fits, so the walk always ends.
    do {
        index = (index + std::to_underlying(step) + count) % count;
    } while (!fits(kResolutions.at(static_cast<std::size_t>(index))));
    return kResolutions.at(static_cast<std::size_t>(index));
}

void addLine(std::vector<SMenuLine> &lines, EDisplayLine line, std::string text) {
    lines.push_back({.id = std::to_underlying(line), .text = std::move(text)});
}

} // namespace

CDisplayOptionsPage::CDisplayOptionsPage(CMenu &menu, const SMenuOwners &owners)
    : CScreenModePage(menu, owners) {}

std::optional<std::string> CDisplayOptionsPage::title() {
    return localize("Display Options");
}

void CDisplayOptionsPage::build(std::vector<SMenuLine> &lines) {
    const SMenuOwners &owners = getOwners();
    recordResolution();
    const int width = owners.game.game_pixx;
    const int height = owners.game.game_pixy;
    const std::vector<platform::SDisplayInfo> displays = owners.display.getDisplays();
    addLine(lines, EDisplayLine::Display, getDisplayText(displays));
    addLine(
        lines, EDisplayLine::Resolution,
        std::format("Resolution : {}x{}{}", width, height,
                    common::getScreenWide({.width = width, .height = height}) ? " (wide)" : ""));
    addLine(lines, EDisplayLine::Window,
            std::format("Window : {}", kWindowModeNames.at(static_cast<std::size_t>(
                                           owners.display.getWindowMode()))));
    if (owners.display.getWindowMode() == platform::EWindowMode::Fullscreen) {
        addLine(lines, EDisplayLine::FullscreenSize,
                std::format("Fullscreen size : {}",
                            kFullscreenSizeNames.at(
                                static_cast<std::size_t>(owners.display.getFullscreenSize()))));
        const int refresh_rate = owners.display.getRefreshRate();
        addLine(lines, EDisplayLine::RefreshRate,
                refresh_rate == platform::kRefreshRateAuto
                    ? std::string("Refresh rate : Auto")
                    : std::format("Refresh rate : {} Hz", refresh_rate));
    }
    addLine(lines, EDisplayLine::Vsync,
            std::format("Vertical sync : {}", owners.display.getVsync() ? "On" : "Off"));
    addLine(lines, EDisplayLine::Widescreen,
            std::format("Widescreen : {}", kWidescreenNames.at(static_cast<std::size_t>(
                                               owners.display.getWidescreen()))));
    addLine(lines, EDisplayLine::Calibration, localize("Monitor calibration"));
}

// The original stepped the resolution through a chain of its own, which video memory could
// extend.
EMenuOutcome CDisplayOptionsPage::choose(int id, EMenuStep step) {
    const SMenuOwners &owners = getOwners();
    switch (static_cast<EDisplayLine>(id)) {
    case EDisplayLine::Resolution:
        stepResolution(step);
        break;
    case EDisplayLine::Window:
        stepWindowMode(step);
        break;
    case EDisplayLine::Display:
        stepDisplay(step);
        break;
    case EDisplayLine::FullscreenSize:
        stepFullscreenSize(step);
        break;
    case EDisplayLine::RefreshRate:
        stepRefreshRate(step);
        break;
    case EDisplayLine::Vsync:
        owners.display.setVsync(!owners.display.getVsync());
        break;
    case EDisplayLine::Widescreen:
        stepWidescreen(step);
        break;
    default:
        getMenu().showCalibrationTest();
        break;
    }
    return EMenuOutcome::Stay;
}

// The enhanced game's display filter: no larger than its desktop, and in exclusive full screen
// at the game's size, only the sizes it has modes for. A filter that leaves nothing is dropped.
void CDisplayOptionsPage::stepResolution(EMenuStep step) {
    const SMenuOwners &owners = getOwners();
    CGame &game = owners.game;
    const int max_height = getHighResolutionAllowed() ? kTallest : kSoftwareMaxHeight;
    const auto under_cap = [max_height](const SResolution &mode) {
        return mode.height <= max_height;
    };
    const std::vector<platform::SDisplayInfo> displays = owners.display.getDisplays();
    const platform::SDisplayInfo *display = getChosenDisplay(displays);
    const bool listed_only = owners.display.getWindowMode() == platform::EWindowMode::Fullscreen &&
                             owners.display.getFullscreenSize() == platform::EFullscreenSize::Game;
    const auto on_display = [&](const SResolution &mode) {
        const common::SExtent size{.width = mode.width, .height = mode.height};
        return under_cap(mode) && size.width <= display->desktop.width &&
               size.height <= display->desktop.height &&
               (!listed_only || platform::getModeListed(*display, size));
    };
    const bool filtered = display != nullptr && std::ranges::any_of(kResolutions, on_display);
    const SResolution next =
        getNextResolution({.width = game.game_pixx, .height = game.game_pixy}, step,
                          filtered ? std::function<bool(const SResolution &)>(on_display)
                                   : std::function<bool(const SResolution &)>(under_cap));
    game.game_pixx = next.width;
    game.game_pixy = next.height;
}

// The enhanced game's: the original ran full screen only.
void CDisplayOptionsPage::stepWindowMode(EMenuStep step) {
    platform::IDisplay &display = getOwners().display;
    const int mode = static_cast<int>(display.getWindowMode());
    display.setWindowMode(static_cast<platform::EWindowMode>(
        (mode + std::to_underlying(step) + kWindowModeCount) % kWindowModeCount));
}

const platform::SDisplayInfo *
CDisplayOptionsPage::getChosenDisplay(const std::vector<platform::SDisplayInfo> &displays) const {
    if (displays.empty()) {
        return nullptr;
    }
    return &displays.at(
        platform::resolveDisplayIndex(getOwners().display.getDisplayIndex(), displays.size()));
}

// Numbered from one; the name is the video driver's.
std::string
CDisplayOptionsPage::getDisplayText(const std::vector<platform::SDisplayInfo> &displays) const {
    const std::size_t index =
        platform::resolveDisplayIndex(getOwners().display.getDisplayIndex(), displays.size());
    const platform::SDisplayInfo *display = getChosenDisplay(displays);
    if (display == nullptr) {
        return std::format("Display : {}", index + 1);
    }
    return std::format("Display : {} ({})", index + 1, display->name);
}

// The enhanced game's, as are the full screen size, refresh rate and vertical sync. With one
// display there is nothing to step to.
void CDisplayOptionsPage::stepDisplay(EMenuStep step) {
    platform::IDisplay &display = getOwners().display;
    const std::vector<platform::SDisplayInfo> displays = display.getDisplays();
    if (displays.size() < 2) {
        return;
    }
    const auto count = static_cast<int>(displays.size());
    const auto index =
        static_cast<int>(platform::resolveDisplayIndex(display.getDisplayIndex(), displays.size()));
    display.setDisplayIndex((index + std::to_underlying(step) + count) % count);
}

void CDisplayOptionsPage::stepFullscreenSize(EMenuStep step) {
    platform::IDisplay &display = getOwners().display;
    const int size = static_cast<int>(display.getFullscreenSize());
    display.setFullscreenSize(static_cast<platform::EFullscreenSize>(
        (size + std::to_underlying(step) + platform::kFullscreenSizeCount) %
        platform::kFullscreenSizeCount));
}

// Through Auto and the rates the display has at the exclusive size; a rate it hasn't there
// steps from Auto.
void CDisplayOptionsPage::stepRefreshRate(EMenuStep step) {
    const SMenuOwners &owners = getOwners();
    std::vector<int> rates{platform::kRefreshRateAuto};
    const std::vector<platform::SDisplayInfo> displays = owners.display.getDisplays();
    if (const platform::SDisplayInfo *display = getChosenDisplay(displays)) {
        const common::SExtent size = platform::getExclusiveSize(
            display->desktop, owners.display.getFullscreenSize(),
            {.width = owners.game.game_pixx, .height = owners.game.game_pixy});
        std::ranges::copy(platform::getRefreshRates(*display, size), std::back_inserter(rates));
    }
    const auto count = static_cast<int>(rates.size());
    const auto found = std::ranges::find(rates, owners.display.getRefreshRate());
    const int index = found == rates.end() ? 0 : static_cast<int>(found - rates.begin());
    owners.display.setRefreshRate(
        rates.at(static_cast<std::size_t>((index + std::to_underlying(step) + count) % count)));
}

// The enhanced game's: the original had no mode wider than 4:3.
void CDisplayOptionsPage::stepWidescreen(EMenuStep step) {
    platform::IDisplay &display = getOwners().display;
    const int widescreen = static_cast<int>(display.getWidescreen());
    display.setWidescreen(static_cast<common::EWidescreen>(
        (widescreen + std::to_underlying(step) + common::kWidescreenCount) %
        common::kWidescreenCount));
}

} // namespace nocturne::core
