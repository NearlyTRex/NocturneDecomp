#include "common/error/error.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "engine/keys/inputcodetype.h"
#include "engine/package/gamecontent.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <optional>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

// The stick's full span in getJoystickState's units, with its centre halfway.
constexpr int kStickCenter = 0x8000;
constexpr int kStickMax = 0xffff;
constexpr int kUnitSensitivity = 0x10000;

// A play action, as a package names it; any other name is fatal.
EGameAction requirePlayAction(std::string_view id, std::string_view where) {
    const std::optional<EGameAction> action = findGameAction(id);
    if (!action) {
        common::displayErrorAndQuit(std::format("{}: {} isn't an action", where, id));
    }
    if (isHotkeyAction(*action)) {
        common::displayErrorAndQuit(
            std::format("{}: {} is a hotkey, the same in every game", where, id));
    }
    return *action;
}

void checkControls(const engine::SControls &controls) {
    for (const engine::SControlMode &mode : controls.modes) {
        if (!std::ranges::contains(kControlModeIds, mode.id)) {
            common::displayErrorAndQuit(
                std::format("The control mode {} isn't one this build reads", mode.id));
        }
        for (const engine::SControlDefault &entry : mode.defaults) {
            static_cast<void>(requirePlayAction(
                entry.action, std::format("The {} control mode's defaults", mode.id)));
        }
    }
    for (const engine::SBindingRowSpec &row : controls.bindings) {
        static_cast<void>(requirePlayAction(row.action, "A bindings page row"));
    }
}

} // namespace

const engine::SControls &CGame::getControls() const {
    const std::optional<engine::SControls> &controls = owners_.content.controls;
    if (!controls) {
        common::displayErrorAndQuit("No package gives the controls");
    }
    checkControls(*controls);
    return *controls;
}

const engine::SControlMode &CGame::getControlMode() const {
    const std::string_view id = kControlModeIds.at(std::to_underlying(game_control));
    const engine::SControls &controls = getControls();
    const auto found = std::ranges::find(controls.modes, id, &engine::SControlMode::id);
    if (found == controls.modes.end()) {
        common::displayErrorAndQuit(std::format("No package gives the {} control mode", id));
    }
    return *found;
}

// The hotkeys take their own defaults, and the play actions the mode's.
// nocedit 0x004dbbc0
void CGame::restoreDefaultControls() {
    const engine::SControlMode &mode = getControlMode();
    for (std::size_t index = 0; index < kGameActionCount; ++index) {
        const auto action = static_cast<EGameAction>(index);
        const SGameActionInfo &info = getGameActionInfo(action);
        controls.setBindings(action, isHotkeyAction(action)
                                         ? std::vector<SKeyChord>{info.keyboard, info.also}
                                         : std::vector<SKeyChord>{});
    }
    for (const engine::SControlDefault &entry : mode.defaults) {
        std::vector<SKeyChord> chords;
        for (const int code : entry.codes) {
            chords.push_back({.code = static_cast<engine::EInputCodeType>(code)});
        }
        controls.setBindings(*findGameAction(entry.action), std::move(chords));
    }
    invert_mouse_y_axis = 0;
    always_run = 0;
    x_mouse_sensitivity = kUnitSensitivity;
    y_mouse_sensitivity = kUnitSensitivity;
    aim_mode = mode.manual_aim ? EAimMode::AIM_MODE_MANUAL : EAimMode::AIM_MODE_AUTO;
    if (game_control == EControlMode::CONTROL_MODE_GAMEPAD) {
        seedCalibration();
    }
}

// A gamepad's sticks arrive normalised, so there is nothing for the calibration screen to
// measure: these are what it would record from a stick that centres and reaches both ends.
void CGame::seedCalibration() {
    if (x_center != 0) {
        return;
    }
    x_center = kStickCenter;
    y_center = kStickCenter;
    x_stick_min = 0;
    y_stick_min = 0;
    x_stick_max = kStickMax;
    y_stick_max = kStickMax;
}

} // namespace nocturne::core
