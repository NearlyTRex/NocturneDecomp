#include "core/game/game.h"

#include <cstddef>

namespace nocturne::core {
namespace {

// The stick's full span in getJoystickState's units, with its centre halfway.
constexpr int kStickCenter = 0x8000;
constexpr int kStickMax = 0xffff;
constexpr int kUnitSensitivity = 0x10000;

} // namespace

// nocedit 0x004dbbc0
void CGame::restoreDefaultControls() {
    for (std::size_t index = 0; index < kGameActionCount; ++index) {
        const auto action = static_cast<EGameAction>(index);
        const SGameActionInfo &info = getGameActionInfo(action);
        engine::EInputCodeType code = info.keyboard;
        if (game_control == EControlMode::CONTROL_MODE_MOUSE) {
            code = info.mouse.value_or(code);
        } else if (game_control == EControlMode::CONTROL_MODE_GAMEPAD) {
            code = info.gamepad.value_or(code);
        }
        controls.setBindings(action, {code});
    }
    invert_mouse_y_axis = 0;
    always_run = 0;
    x_mouse_sensitivity = kUnitSensitivity;
    y_mouse_sensitivity = kUnitSensitivity;
    aim_mode = game_control == EControlMode::CONTROL_MODE_MOUSE ? EAimMode::AIM_MODE_MANUAL
                                                                : EAimMode::AIM_MODE_AUTO;
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
