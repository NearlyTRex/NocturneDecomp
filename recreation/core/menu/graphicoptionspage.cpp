#include "core/menu/graphicoptionspage.h"

#include "core/game/game.h"
#include "core/menu/menu.h"
#include "engine/special/special.h"
#include "platform/antialias.h"
#include "platform/display.h"
#include "platform/upscaler.h"

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
};

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
    return localize("Graphic Options");
}

void CGraphicOptionsPage::build(std::vector<SMenuLine> &lines) {
    const SMenuOwners &owners = getOwners();
    const CGame &game = owners.game;
    recordResolution();
    addLine(lines, EGraphicLine::Acceleration,
            localize(owners.special.getUseDirect3D() ? "Acceleration : On" : "Acceleration : Off"));
    addLine(lines, EGraphicLine::Api, getApiText());
    addLine(lines, EGraphicLine::Card, getCardText());
    addLine(lines, EGraphicLine::Bits,
            std::format("{}{}", localize("Bits per pixel : "), game.game_bpp));
    const platform::EUpscaler upscaler = owners.display.getUpscaler();
    addLine(lines, EGraphicLine::Upscaler,
            std::format("Upscaler : {}", kUpscalerNames.at(static_cast<std::size_t>(upscaler))));
    if (platform::getUpscalerSharpens(upscaler)) {
        addLine(lines, EGraphicLine::Sharpness,
                std::format("Sharpness : {}%", owners.display.getUpscalerSharpness()));
    }
    // The pass runs over the hardware renderer's scene, which software has none of.
    if (owners.special.getUseDirect3D()) {
        addLine(lines, EGraphicLine::Antialias,
                std::format("Anti-aliasing : {}", kAntialiasNames.at(static_cast<std::size_t>(
                                                      owners.display.getAntialias()))));
    }
    addLine(lines, EGraphicLine::Halo,
            localize(kHaloLabels.at(
                static_cast<std::size_t>(std::clamp(game.halo_mode, 0, kHaloModeCount - 1)))));
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
        stepHalo(step);
        break;
    }
    return EMenuOutcome::Stay;
}

std::string CGraphicOptionsPage::getApiText() const {
    if (driver_names_.empty()) {
        return localize("3D API : None");
    }
    const auto board = static_cast<std::size_t>(getOwners().special.getCurrentGraphicsBoard());
    return std::format("3D API : {}", driver_names_.at(board));
}

std::string CGraphicOptionsPage::getCardText() const {
    if (card_names_.empty()) {
        return localize("No 3D Hardware detected");
    }
    const int board = getOwners().special.getCurrentGraphicsBoard();
    return std::format("{}{} ({})", localize("3D Card : "),
                       card_names_.at(static_cast<std::size_t>(board)), board);
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

// A mode past Complex steps as Complex.
void CGraphicOptionsPage::stepHalo(EMenuStep step) {
    CGame &game = getOwners().game;
    const int from = std::clamp(game.halo_mode, 0, kHaloModeCount - 1);
    game.halo_mode = (from + std::to_underlying(step) + kHaloModeCount) % kHaloModeCount;
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

// Always on, whichever way.
void CGraphicOptionsPage::stepCard() {
    engine::CSpecial &special = getOwners().special;
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
