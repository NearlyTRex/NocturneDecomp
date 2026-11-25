#include "core/menu/graphicoptionspage.h"

#include "core/frontend.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "engine/package/gamecontent.h"
#include "engine/special/special.h"
#include "platform/antialias.h"
#include "platform/display.h"
#include "platform/upscaler.h"
#include "shape/edittool/picklist.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

enum class EGraphicLine : std::uint8_t {
    Acceleration,
    Api,
    Card,
    Bits,
    Upscaler,
    Sharpness,
    Antialias,
    Halo,
    FlashlightRange,
};

// By EHaloMode; the labels' ids, as the names below are.
constexpr std::array<std::string_view, kHaloModeCount> kHaloLabels{
    "graphic_halo_off", "graphic_halo_simple", "graphic_halo_complex"};
// By EFlashlightRange.
constexpr std::array<std::string_view, kFlashlightRangeCount> kFlashlightRangeNames{
    "graphic_flashlight_original", "graphic_flashlight_long"};

constexpr int kLowBitDepth = 16;
constexpr int kHighBitDepth = 32;

// By EUpscaler.
constexpr std::array<std::string_view, platform::kUpscalerCount> kUpscalerNames{
    "graphic_upscaler_standard", "graphic_upscaler_nearest", "graphic_upscaler_smooth",
    "graphic_upscaler_fsr",      "graphic_upscaler_lanczos", "graphic_upscaler_gsr",
    "graphic_upscaler_nis",      "graphic_upscaler_xbr"};
// By EAntialias.
constexpr std::array<std::string_view, platform::kAntialiasCount> kAntialiasNames{
    "graphic_antialias_off", "graphic_antialias_fxaa"};
constexpr int kSharpnessSteps =
    (platform::kUpscalerSharpnessMax / platform::kUpscalerSharpnessStep) + 1;
// The most cards a renderer lists.
constexpr std::size_t kMaxCards = 16;

// A name the renderer left unset is blank.
std::string_view toText(const char *name) {
    return name == nullptr ? std::string_view() : std::string_view(name);
}

void addLine(std::vector<SMenuLine> &lines, EGraphicLine line, std::string text) {
    lines.push_back({.id = std::to_underlying(line), .text = std::move(text)});
}

} // namespace

CGraphicOptionsPage::CGraphicOptionsPage(CMenu &menu, const SMenuOwners &owners)
    : CScreenModePage(menu, owners) {
    listCards();
}

std::optional<std::string> CGraphicOptionsPage::title() {
    return label("graphic_title");
}

std::string_view CGraphicOptionsPage::getLayoutId() const {
    return "graphic";
}

void CGraphicOptionsPage::build(std::vector<SMenuLine> &lines) {
    const SMenuOwners &owners = getOwners();
    const CGame &game = owners.game;
    recordResolution();
    addLine(lines, EGraphicLine::Acceleration,
            label(owners.special.getUseDirect3D() ? "graphic_acceleration_on"
                                                  : "graphic_acceleration_off"));
    addLine(lines, EGraphicLine::Api, getApiText());
    addLine(lines, EGraphicLine::Card, getCardText());
    addLine(lines, EGraphicLine::Bits,
            std::format("{}{}", label("graphic_bits_per_pixel"), game.game_bpp));
    const platform::EUpscaler upscaler = owners.display.getUpscaler();
    addLine(lines, EGraphicLine::Upscaler,
            label("graphic_upscaler") +
                label(kUpscalerNames.at(static_cast<std::size_t>(upscaler))));
    if (platform::getUpscalerSharpens(upscaler)) {
        addLine(lines, EGraphicLine::Sharpness,
                std::format("{}{}%", label("graphic_sharpness"),
                            owners.display.getUpscalerSharpness()));
    }
    // The pass runs over the hardware renderer's scene, which software has none of.
    if (owners.special.getUseDirect3D()) {
        addLine(lines, EGraphicLine::Antialias,
                label("graphic_antialias") + label(kAntialiasNames.at(static_cast<std::size_t>(
                                                 owners.display.getAntialias()))));
    }
    // A game whose hero never lights a weapon has no flashlight to set.
    if (!getMenu().getMenuLayout().features.flashlight) {
        return;
    }
    addLine(lines, EGraphicLine::Halo,
            label(kHaloLabels.at(static_cast<std::size_t>(game.halo_mode))));
    addLine(lines, EGraphicLine::FlashlightRange,
            label("graphic_flashlight_range") +
                label(kFlashlightRangeNames.at(static_cast<std::size_t>(game.flashlight_range))));
}

// The API is the one renderer the recreation has, so its line only says which.
EMenuOutcome CGraphicOptionsPage::choose(int id, EMenuStep step) {
    CGame &game = getOwners().game;
    switch (static_cast<EGraphicLine>(id)) {
    case EGraphicLine::Acceleration:
        toggleAcceleration();
        break;
    case EGraphicLine::Api:
        break;
    case EGraphicLine::Card:
        pickCard();
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
    case EGraphicLine::Halo:
        game.halo_mode = stepChoice<EHaloMode, kHaloModeCount>(game.halo_mode, step);
        break;
    default:
        game.flashlight_range =
            stepChoice<EFlashlightRange, kFlashlightRangeCount>(game.flashlight_range, step);
        break;
    }
    return EMenuOutcome::Stay;
}

std::string CGraphicOptionsPage::getApiText() const {
    if (driver_names_.empty()) {
        return label("graphic_api_none");
    }
    const auto board = static_cast<std::size_t>(getOwners().special.getCurrentGraphicsBoard());
    return label("graphic_api") + driver_names_.at(board);
}

std::string CGraphicOptionsPage::getCardText() const {
    if (card_names_.empty()) {
        return label("graphic_no_card");
    }
    const int board = getOwners().special.getCurrentGraphicsBoard();
    const auto length = static_cast<std::size_t>(getMenu().getMenuLayout().card_name_length);
    return std::format("{}{} ({})", label("graphic_card"),
                       shortenToLength(card_names_.at(static_cast<std::size_t>(board)), length),
                       board);
}

void CGraphicOptionsPage::listCards() {
    engine::CSpecial &special = getOwners().special;
    int count = 0;
    std::array<char *, kMaxCards> drivers{};
    std::array<char *, kMaxCards> cards{};
    std::array<int, kMaxCards> vendors{};
    std::array<int, kMaxCards> devices{};
    if (special.buildCardList(&count, drivers.data(), cards.data(), vendors.data(),
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
    if (std::cmp_greater_equal(special.getCurrentGraphicsBoard(), card_names_.size())) {
        special.setCurrentGraphicsBoard(0);
    }
}

// Turned on, the renderer is loaded again, which turns acceleration back off if it won't start.
void CGraphicOptionsPage::toggleAcceleration() {
    engine::CSpecial &special = getOwners().special;
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
    platform::IDisplay &display = getOwners().display;
    const int upscaler = static_cast<int>(display.getUpscaler());
    display.setUpscaler(static_cast<platform::EUpscaler>(
        (upscaler + std::to_underlying(step) + platform::kUpscalerCount) %
        platform::kUpscalerCount));
}

// A sharpness set by hand between steps steps from the one below it.
void CGraphicOptionsPage::stepSharpness(EMenuStep step) {
    platform::IDisplay &display = getOwners().display;
    const int index = display.getUpscalerSharpness() / platform::kUpscalerSharpnessStep;
    display.setUpscalerSharpness(
        ((index + std::to_underlying(step) + kSharpnessSteps) % kSharpnessSteps) *
        platform::kUpscalerSharpnessStep);
}

// The enhanced game's: the original drew its edges unsmoothed.
void CGraphicOptionsPage::stepAntialias(EMenuStep step) {
    platform::IDisplay &display = getOwners().display;
    const int antialias = static_cast<int>(display.getAntialias());
    display.setAntialias(static_cast<platform::EAntialias>(
        (antialias + std::to_underlying(step) + platform::kAntialiasCount) %
        platform::kAntialiasCount));
}

// Whichever way, a list of the cards by their whole names, as the sound page lists its devices;
// the original stepped to the next card, its name often too long to read beside the menu.
void CGraphicOptionsPage::pickCard() {
    engine::CSpecial &special = getOwners().special;
    if (card_names_.empty()) {
        special.setCurrentGraphicsBoard(0);
        return;
    }
    shape::CPickList list(getOwners().pick_list);
    for (const std::string &name : card_names_) {
        list.add(name);
    }
    const int chosen = list.displayChoicesAndWaitForInput(label("graphic_select_card"),
                                                          special.getCurrentGraphicsBoard());
    if (chosen < 0) {
        return;
    }
    special.setCurrentGraphicsBoard(chosen);
    special.selectCard(chosen);
}

} // namespace nocturne::core
