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
    return label("controls_title");
}

std::string_view CControlOptionsPage::getLayoutId() const {
    return "controls";
}

// The control modes' labels are already the game's, from its [[controls.mode]].
void CControlOptionsPage::build(std::vector<SMenuLine> &lines) {
    const CGame &game = owners_.game;
    addLine(lines, EControlLine::Type,
            std::string(owners_.messages.getLocalizedString(game.getControlMode().label)));
    addLine(lines, EControlLine::Keys, label("controls_keys"));
    addLine(lines, EControlLine::XSensitivity,
            getSensitivityText("controls_x_sensitivity", game.x_mouse_sensitivity));
    addLine(lines, EControlLine::YSensitivity,
            getSensitivityText("controls_y_sensitivity", game.y_mouse_sensitivity));
    if (game.game_control == EControlMode::CONTROL_MODE_MOUSE) {
        addLine(lines, EControlLine::InvertY,
                label(game.invert_mouse_y_axis != 0 ? "controls_invert_y_on"
                                                    : "controls_invert_y_off"));
    }
    if (game.game_control == EControlMode::CONTROL_MODE_GAMEPAD) {
        const engine::SGamepadTuning &tuning = owners_.gamepad.tuning;
        addLine(lines, EControlLine::PadDeadzone,
                std::format("{}{}%", label("controls_pad_deadzone"), tuning.deadzone));
        addLine(lines, EControlLine::PadTurnRate,
                std::format("{}{}", label("controls_pad_turn_speed"), tuning.turn_rate));
        addLine(lines, EControlLine::PadLookRate,
                std::format("{}{}", label("controls_pad_look_speed"), tuning.look_rate));
        addLine(lines, EControlLine::PadInvertLook,
                label(tuning.invert_look ? "controls_pad_invert_look_on"
                                         : "controls_pad_invert_look_off"));
        addLine(lines, EControlLine::Calibrate, label("controls_calibrate"));
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
                                         label("controls_adjust_x_sensitivity"));
        break;
    case EControlLine::YSensitivity:
        getMenu().adjustMouseSensitivity(game.y_mouse_sensitivity,
                                         label("controls_adjust_y_sensitivity"));
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

std::string CControlOptionsPage::label(std::string_view id) const {
    return getLabel(owners_.content, owners_.messages, id);
}

std::string CControlOptionsPage::getSensitivityText(std::string_view id, int sensitivity) const {
    return std::format("{}{:5.2f}", label(id), sensitivity / kFixedOne);
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
