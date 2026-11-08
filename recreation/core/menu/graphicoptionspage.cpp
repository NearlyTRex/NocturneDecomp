#include "core/menu/graphicoptionspage.h"

#include "common/video/widescreen.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/antialias.h"
#include "platform/display.h"
#include "platform/upscaler.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <format>
#include <optional>
#include <ranges>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

enum class EGraphicLine : std::uint8_t {
    Resolution,
    Window,
    Widescreen,
    Halo,
    Acceleration,
    Api,
    Card,
    Bits,
    Upscaler,
    Sharpness,
    Antialias,
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

// The software renderer's largest.
constexpr SResolution kSoftwareMaximum{.width = 640, .height = 480};

// By EWindowMode.
constexpr std::array<std::string_view, 3> kWindowModeNames{"Windowed", "Fullscreen", "Borderless"};
constexpr int kWindowModeCount = static_cast<int>(kWindowModeNames.size());

// By EWidescreen.
constexpr std::array<std::string_view, common::kWidescreenCount> kWidescreenNames{
    "Stretch", "Pillarbox", "Pan & scan"};

// By halo mode.
constexpr std::array<std::string_view, 3> kHaloLabels{
    "Flashlight halo : Off", "Flashlight halo : Simple", "Flashlight halo : Complex"};
constexpr int kHaloModeCount = static_cast<int>(kHaloLabels.size());

constexpr int kLowBitDepth = 16;
constexpr int kHighBitDepth = 32;

// By EUpscaler.
constexpr std::array<std::string_view, platform::kUpscalerCount> kUpscalerNames{
    "Standard", "FSR", "Lanczos", "GSR", "NIS", "xBR"};
// By EAntialias.
constexpr std::array<std::string_view, platform::kAntialiasCount> kAntialiasNames{"Off", "FXAA"};
constexpr int kSharpnessSteps =
    (platform::kUpscalerSharpnessMax / platform::kUpscalerSharpnessStep) + 1;
// The most cards a renderer lists.
constexpr std::size_t kMaxCards = 16;

// One step on or back through those that fit under max_height, wrapping. A resolution not in
// the list, or above the cap, goes to the nearest by height, then width, instead.
SResolution getNextResolution(SResolution current, EMenuStep step, int max_height) {
    const auto fits = [max_height](const SResolution &mode) { return mode.height <= max_height; };
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

// A name the renderer left unset is blank.
std::string_view toText(const char *name) {
    return name == nullptr ? std::string_view() : std::string_view(name);
}

void addLine(std::vector<SMenuLine> &lines, EGraphicLine line, std::string text) {
    lines.push_back({.id = std::to_underlying(line), .text = std::move(text)});
}

} // namespace

CGraphicOptionsPage::CGraphicOptionsPage(CMenu &menu, const SMenuOwners &owners)
    : CMenuPage(menu), owners_(owners) {
    listCards();
}

std::optional<std::string> CGraphicOptionsPage::title() {
    return localize("Graphic Options");
}

void CGraphicOptionsPage::build(std::vector<SMenuLine> &lines) {
    const CGame &game = owners_.game;
    width_ = game.game_pixx;
    height_ = game.game_pixy;
    addLine(
        lines, EGraphicLine::Resolution,
        std::format("Resolution : {}x{}{}", width_, height_,
                    common::getScreenWide({.width = width_, .height = height_}) ? " (wide)" : ""));
    addLine(lines, EGraphicLine::Window,
            std::format("Window : {}", kWindowModeNames.at(static_cast<std::size_t>(
                                           owners_.display.getWindowMode()))));
    addLine(lines, EGraphicLine::Widescreen,
            std::format("Widescreen : {}", kWidescreenNames.at(static_cast<std::size_t>(
                                               owners_.display.getWidescreen()))));
    addLine(lines, EGraphicLine::Halo,
            localize(kHaloLabels.at(
                static_cast<std::size_t>(std::clamp(game.halo_mode, 0, kHaloModeCount - 1)))));
    addLine(
        lines, EGraphicLine::Acceleration,
        localize(owners_.special.getUseDirect3D() ? "Acceleration : On" : "Acceleration : Off"));
    addLine(lines, EGraphicLine::Api, getApiText());
    addLine(lines, EGraphicLine::Card, getCardText());
    addLine(lines, EGraphicLine::Bits,
            std::format("{}{}", localize("Bits per pixel : "), game.game_bpp));
    const platform::EUpscaler upscaler = owners_.display.getUpscaler();
    addLine(lines, EGraphicLine::Upscaler,
            std::format("Upscaler : {}", kUpscalerNames.at(static_cast<std::size_t>(upscaler))));
    if (platform::getUpscalerSharpens(upscaler)) {
        addLine(lines, EGraphicLine::Sharpness,
                std::format("Sharpness : {}%", owners_.display.getUpscalerSharpness()));
    }
    // The pass runs over the hardware renderer's scene, which software has none of.
    if (owners_.special.getUseDirect3D()) {
        addLine(lines, EGraphicLine::Antialias,
                std::format("Anti-aliasing : {}", kAntialiasNames.at(static_cast<std::size_t>(
                                                      owners_.display.getAntialias()))));
    }
    addLine(lines, EGraphicLine::Calibration, localize("Monitor calibration"));
}

// The original held the software renderer to 640x480 here, after drawing the frame.
void CGraphicOptionsPage::beforeSwap() {
    CGame &game = owners_.game;
    if (!getHighResolutionAllowed() && game.game_pixy > kSoftwareMaximum.height) {
        game.game_pixx = kSoftwareMaximum.width;
        game.game_pixy = kSoftwareMaximum.height;
    }
}

// The original stepped the resolution through a chain of its own, which video memory could
// extend. The API is the one renderer the recreation has, so its line only says which.
EMenuOutcome CGraphicOptionsPage::choose(int id, EMenuStep step) {
    CGame &game = owners_.game;
    switch (static_cast<EGraphicLine>(id)) {
    case EGraphicLine::Resolution:
        stepResolution(step);
        break;
    case EGraphicLine::Window:
        stepWindowMode(step);
        break;
    case EGraphicLine::Widescreen:
        stepWidescreen(step);
        break;
    case EGraphicLine::Halo:
        stepHalo(step);
        break;
    case EGraphicLine::Acceleration:
        toggleAcceleration();
        break;
    case EGraphicLine::Api:
        break;
    case EGraphicLine::Card:
        stepCard();
        break;
    case EGraphicLine::Bits:
        game.game_bpp = game.game_bpp == kLowBitDepth ? kHighBitDepth : kLowBitDepth;
        break;
    case EGraphicLine::Upscaler:
        stepUpscaler(step);
        break;
    case EGraphicLine::Sharpness:
        stepSharpness(step);
        break;
    case EGraphicLine::Antialias:
        stepAntialias(step);
        break;
    default:
        getMenu().showCalibrationTest();
        break;
    }
    return EMenuOutcome::Stay;
}

// A resolution changed by a line, or held above, sizes the window straight away.
EMenuOutcome CGraphicOptionsPage::endFrame() {
    const CGame &game = owners_.game;
    if (game.game_pixx != width_ || game.game_pixy != height_) {
        owners_.display.setWindowSize(game.game_pixx, game.game_pixy);
    }
    return CMenuPage::endFrame();
}

std::string CGraphicOptionsPage::localize(std::string_view key) const {
    return std::string(owners_.messages.getLocalizedString(key));
}

bool CGraphicOptionsPage::getHighResolutionAllowed() const {
    return owners_.special.getUseDirect3D();
}

std::string CGraphicOptionsPage::getApiText() const {
    if (driver_names_.empty()) {
        return localize("3D API : None");
    }
    const auto board = static_cast<std::size_t>(owners_.special.getCurrentGraphicsBoard());
    return std::format("3D API : {}", driver_names_.at(board));
}

std::string CGraphicOptionsPage::getCardText() const {
    if (card_names_.empty()) {
        return localize("No 3D Hardware detected");
    }
    const int board = owners_.special.getCurrentGraphicsBoard();
    return std::format("{}{} ({})", localize("3D Card : "),
                       card_names_.at(static_cast<std::size_t>(board)), board);
}

void CGraphicOptionsPage::listCards() {
    int count = 0;
    std::array<char *, kMaxCards> drivers{};
    std::array<char *, kMaxCards> cards{};
    std::array<int, kMaxCards> vendors{};
    std::array<int, kMaxCards> devices{};
    if (owners_.special.buildCardList(&count, drivers.data(), cards.data(), vendors.data(),
                                      devices.data()) == 0) {
        count = 0;
    }
    const auto listed = std::min(static_cast<std::size_t>(std::max(count, 0)), kMaxCards);
    driver_names_.clear();
    card_names_.clear();
    for (std::size_t i = 0; i < listed; ++i) {
        driver_names_.emplace_back(toText(drivers.at(i)));
        card_names_.emplace_back(toText(cards.at(i)));
    }
    if (std::cmp_greater_equal(owners_.special.getCurrentGraphicsBoard(), card_names_.size())) {
        owners_.special.setCurrentGraphicsBoard(0);
    }
}

void CGraphicOptionsPage::stepResolution(EMenuStep step) {
    CGame &game = owners_.game;
    const int max_height = getHighResolutionAllowed() ? kTallest : kSoftwareMaximum.height;
    const SResolution next =
        getNextResolution({.width = game.game_pixx, .height = game.game_pixy}, step, max_height);
    game.game_pixx = next.width;
    game.game_pixy = next.height;
}

// The enhanced game's: the original ran full screen only.
void CGraphicOptionsPage::stepWindowMode(EMenuStep step) {
    const int mode = static_cast<int>(owners_.display.getWindowMode());
    owners_.display.setWindowMode(static_cast<platform::EWindowMode>(
        (mode + std::to_underlying(step) + kWindowModeCount) % kWindowModeCount));
}

// The enhanced game's: the original had no mode wider than 4:3.
void CGraphicOptionsPage::stepWidescreen(EMenuStep step) {
    const int widescreen = static_cast<int>(owners_.display.getWidescreen());
    owners_.display.setWidescreen(static_cast<common::EWidescreen>(
        (widescreen + std::to_underlying(step) + common::kWidescreenCount) %
        common::kWidescreenCount));
}

// A mode past Complex steps as Complex.
void CGraphicOptionsPage::stepHalo(EMenuStep step) {
    CGame &game = owners_.game;
    const int from = std::clamp(game.halo_mode, 0, kHaloModeCount - 1);
    game.halo_mode = (from + std::to_underlying(step) + kHaloModeCount) % kHaloModeCount;
}

// Turned on, the renderer is loaded again, which turns acceleration back off if it won't start.
void CGraphicOptionsPage::toggleAcceleration() {
    engine::CSpecial &special = owners_.special;
    const bool turning_on = !special.getUseDirect3D();
    special.setUseDirect3D(turning_on);
    special.kill();
    if (turning_on) {
        special.loadExternalRenderer();
    }
    listCards();
}

// The enhanced game's: the original never scaled its picture.
void CGraphicOptionsPage::stepUpscaler(EMenuStep step) {
    const int upscaler = static_cast<int>(owners_.display.getUpscaler());
    owners_.display.setUpscaler(static_cast<platform::EUpscaler>(
        (upscaler + std::to_underlying(step) + platform::kUpscalerCount) %
        platform::kUpscalerCount));
}

// A sharpness set by hand between steps steps from the one below it.
void CGraphicOptionsPage::stepSharpness(EMenuStep step) {
    const int index = owners_.display.getUpscalerSharpness() / platform::kUpscalerSharpnessStep;
    owners_.display.setUpscalerSharpness(
        ((index + std::to_underlying(step) + kSharpnessSteps) % kSharpnessSteps) *
        platform::kUpscalerSharpnessStep);
}

// The enhanced game's: the original drew its edges unsmoothed.
void CGraphicOptionsPage::stepAntialias(EMenuStep step) {
    const int antialias = static_cast<int>(owners_.display.getAntialias());
    owners_.display.setAntialias(static_cast<platform::EAntialias>(
        (antialias + std::to_underlying(step) + platform::kAntialiasCount) %
        platform::kAntialiasCount));
}

// Always on, whichever way.
void CGraphicOptionsPage::stepCard() {
    engine::CSpecial &special = owners_.special;
    if (card_names_.empty()) {
        special.setCurrentGraphicsBoard(0);
        return;
    }
    const auto next = static_cast<int>(
        (static_cast<std::size_t>(special.getCurrentGraphicsBoard()) + 1) % card_names_.size());
    special.setCurrentGraphicsBoard(next);
    special.selectCard(next);
}

} // namespace nocturne::core
