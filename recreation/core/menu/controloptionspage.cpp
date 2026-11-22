#include "core/menu/controloptionspage.h"

#include "core/actor/notported.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "engine/gamepadinput.h"
#include "engine/package/gamecontent.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
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

enum class EControlLine : std::uint8_t {
    Type,
    Keys,
    XSensitivity,
    YSensitivity,
    InvertY,
    PadDeadzone,
    PadTurnRate,
    PadLookRate,
    PadInvertLook,
    Calibrate,
};

// A tuning line moves by this much, wrapping at the ends of its range.
constexpr int kTuningStep = 5;

int stepTuning(int value, EMenuStep step, int least, int most) {
    const int stepped = value + (std::to_underlying(step) * kTuningStep);
    if (stepped > most) {
        return least;
    }
    return stepped < least ? most : stepped;
}

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

std::string_view CControlOptionsPage::getLayoutId() const {
    return "controls";
}

void CControlOptionsPage::build(std::vector<SMenuLine> &lines) {
    const CGame &game = owners_.game;
    addLine(lines, EControlLine::Type, localize(game.getControlMode().label));
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
        const engine::SGamepadTuning &tuning = owners_.gamepad.tuning;
        addLine(lines, EControlLine::PadDeadzone,
                std::format("{}{}%", localize("Stick deadzone : "), tuning.deadzone));
        addLine(lines, EControlLine::PadTurnRate,
                std::format("{}{}", localize("Stick turn speed : "), tuning.turn_rate));
        addLine(lines, EControlLine::PadLookRate,
                std::format("{}{}", localize("Stick look speed : "), tuning.look_rate));
        addLine(
            lines, EControlLine::PadInvertLook,
            localize(tuning.invert_look ? "Invert stick look : ON" : "Invert stick look : OFF"));
        addLine(lines, EControlLine::Calibrate, localize("Calibrate"));
    }
}

EMenuOutcome CControlOptionsPage::choose(int id, EMenuStep step) {
    CGame &game = owners_.game;
    engine::SGamepadTuning &tuning = owners_.gamepad.tuning;
    using Tuning = engine::SGamepadTuning;
    switch (static_cast<EControlLine>(id)) {
    case EControlLine::Type:
        stepControlType(step);
        break;
    case EControlLine::Keys:
        getMenu().configureCustomKeyBindings();
        break;
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
    case EControlLine::PadDeadzone:
        tuning.deadzone =
            stepTuning(tuning.deadzone, step, Tuning::kMinDeadzone, Tuning::kMaxDeadzone);
        break;
    case EControlLine::PadTurnRate:
        tuning.turn_rate = stepTuning(tuning.turn_rate, step, Tuning::kMinRate, Tuning::kMaxRate);
        break;
    case EControlLine::PadLookRate:
        tuning.look_rate = stepTuning(tuning.look_rate, step, Tuning::kMinRate, Tuning::kMaxRate);
        break;
    case EControlLine::PadInvertLook:
        tuning.invert_look = !tuning.invert_look;
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
// defaults had never been applied took only Escape. The types are the game's, in its order.
void CControlOptionsPage::stepControlType(EMenuStep step) {
    CGame &game = owners_.game;
    const std::vector<engine::SControlMode> &modes = game.getControls().modes;
    const auto count = static_cast<int>(modes.size());
    const auto current = static_cast<int>(
        std::ranges::find(modes, game.getControlMode().id, &engine::SControlMode::id) -
        modes.begin());
    const int next = (current + std::to_underlying(step) + count) % count;
    const std::string_view id = modes.at(static_cast<std::size_t>(next)).id;
    game.game_control =
        static_cast<EControlMode>(std::ranges::find(kControlModeIds, id) - kControlModeIds.begin());
    game.restoreDefaultControls();
}

} // namespace nocturne::core
