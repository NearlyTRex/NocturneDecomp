#include "core/menu/controloptionspage.h"

#include "core/actor/notported.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "support/newmsg/newmsg.h"

#include <array>
#include <cstdint>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

enum class EControlLine : std::uint8_t {
    Type,
    Keys,
    XSensitivity,
    YSensitivity,
    InvertY,
    Calibrate,
};

// By EControlMode.
constexpr std::array<std::string_view, 3> kTypeLabels{
    "Control : Keyboard", "Control : Keyboard/Mouse", "Control : Gamepad"};
constexpr int kControlModeCount = static_cast<int>(kTypeLabels.size());
// The sensitivities are 16.16.
constexpr double kFixedOne = 65536.0;

void addLine(std::vector<SMenuLine> &lines, EControlLine line, std::string text) {
    lines.push_back({.id = std::to_underlying(line), .text = std::move(text)});
}

} // namespace

CControlOptionsPage::CControlOptionsPage(CMenu &menu, const SMenuOwners &owners)
    : CMenuPage(menu), owners_(owners) {}

std::optional<std::string> CControlOptionsPage::title() {
    return localize("Control Options");
}

void CControlOptionsPage::build(std::vector<SMenuLine> &lines) {
    const CGame &game = owners_.game;
    addLine(lines, EControlLine::Type,
            localize(kTypeLabels.at(std::to_underlying(game.game_control))));
    addLine(lines, EControlLine::Keys, localize("Customize Keys"));
    addLine(lines, EControlLine::XSensitivity,
            getSensitivityText("X-axis sensitivity : ", game.x_mouse_sensitivity));
    addLine(lines, EControlLine::YSensitivity,
            getSensitivityText("Y-axis sensitivity : ", game.y_mouse_sensitivity));
    if (game.game_control == EControlMode::CONTROL_MODE_MOUSE) {
        addLine(
            lines, EControlLine::InvertY,
            localize(game.invert_mouse_y_axis != 0 ? "Invert Y Axis : ON" : "Invert Y Axis : OFF"));
    }
    if (game.game_control == EControlMode::CONTROL_MODE_GAMEPAD) {
        addLine(lines, EControlLine::Calibrate, localize("Calibrate"));
    }
}

EMenuOutcome CControlOptionsPage::choose(int id, EMenuStep step) {
    CGame &game = owners_.game;
    switch (static_cast<EControlLine>(id)) {
    case EControlLine::Type:
        stepControlType(step);
        break;
    case EControlLine::Keys:
        quitNotPorted("CMenu", "configureCustomKeyBindings");
    case EControlLine::XSensitivity:
        getMenu().adjustMouseSensitivity(game.x_mouse_sensitivity,
                                         localize("Adjust X-Axis sensitivity"));
        break;
    case EControlLine::YSensitivity:
        getMenu().adjustMouseSensitivity(game.y_mouse_sensitivity,
                                         localize("Adjust Y-Axis sensitivity"));
        break;
    case EControlLine::InvertY:
        game.invert_mouse_y_axis = game.invert_mouse_y_axis == 0 ? 1 : 0;
        break;
    default:
        quitNotPorted("CMenu", "calibrateGamepad");
    }
    return EMenuOutcome::Stay;
}

EMenuOutcome CControlOptionsPage::endFrame() {
    if (!getMenu().takeMenuCancel()) {
        return EMenuOutcome::Stay;
    }
    const CGame &game = owners_.game;
    if (game.game_control == EControlMode::CONTROL_MODE_GAMEPAD && game.x_center == 0) {
        quitNotPorted("CMenu", "calibrateGamepad");
    }
    return EMenuOutcome::Leave;
}

std::string CControlOptionsPage::localize(std::string_view key) const {
    return std::string(owners_.messages.getLocalizedString(key));
}

std::string CControlOptionsPage::getSensitivityText(std::string_view label, int sensitivity) const {
    return std::format("{}{:5.2f}", localize(label), sensitivity / kFixedOne);
}

// The original stepped on as well as back, but left the bindings as they were, so a type whose
// defaults had never been applied took only Escape.
void CControlOptionsPage::stepControlType(EMenuStep step) {
    CGame &game = owners_.game;
    const int mode =
        (std::to_underlying(game.game_control) + std::to_underlying(step) + kControlModeCount) %
        kControlModeCount;
    game.game_control = static_cast<EControlMode>(mode);
    game.restoreDefaultControls();
}

} // namespace nocturne::core
