#include "common/math/extendedfloat.h"
#include "common/text/ascii.h"
#include "core/charactr/deathstate.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/playerinput.h"
#include "core/set/demonset.h"
#include "engine/gamepadinput.h"
#include "engine/keys/keys.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <ranges>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

// The keys strafe fully in a hundredth of a second, and turn and look a quarter at most.
constexpr float kStrafeRampTime = 0.01F;
constexpr float kMaxStrafe = 1.0F;
constexpr float kKeyTurnRate = 0.25F;
constexpr float kMaxKeyTurn = 0.25F;
// Released, the turn settles in a twentieth of a second and the look in a tenth.
constexpr float kTurnSettleTime = 0.05F;
constexpr float kLookSettleTime = 0.1F;
// The 16.16 sensitivities scale the keys' turn by 0.3 and look by 0.2, and the mouse's turn by
// 0.75 of a half screen.
constexpr double kSensitivityUnit = 1.0 / 65536.0;
constexpr double kKeyTurnSensitivity = 0.3;
constexpr double kKeyLookSensitivity = 0.2;
constexpr double kMouseTurnScale = 0.75;
constexpr float kMaxMouseSpeed = 1.0F;
// The left stick moves the hero past four tenths, and runs past 0.65.
constexpr float kStickMoveThreshold = 0.40F;
constexpr float kStickRunThreshold = 0.65F;

float percentOf(int percent) {
    return static_cast<float>(percent) / 100.0F;
}

// A 16.16 sensitivity, 1 at 0x10000.
float unitSensitivity(int sensitivity) {
    return static_cast<float>(sensitivity) * static_cast<float>(kSensitivityUnit);
}

CExtendedFloat extend(float value) {
    return CExtendedFloat(static_cast<double>(value));
}

CExtendedFloat extend(int value) {
    return CExtendedFloat(static_cast<double>(value));
}

// Down by the step while above the floor, stopping on it.
void rampDown(float &value, const CExtendedFloat &step, float floor) {
    if (!(value > floor)) {
        return;
    }
    const CExtendedFloat lowered = extend(value) - step;
    value = lowered.toFloat();
    if (lowered < extend(floor)) {
        value = floor;
    }
}

// Up by the step while below the ceiling, stopping on it.
void rampUp(float &value, const CExtendedFloat &step, float ceiling) {
    if (value >= ceiling) {
        return;
    }
    value = std::min((step + extend(value)).toFloat(), ceiling);
}

// Towards 0 by the step, stopping on it.
void settle(float &value, float step) {
    if (!(value < 0.0F)) {
        value = (extend(value) - extend(step)).toFloat();
        if (!(value >= 0.0F)) {
            value = 0.0F;
        }
        return;
    }
    value = (extend(value) + extend(step)).toFloat();
    if (!(value <= 0.0F)) {
        value = 0.0F;
    }
}

// The time over the settle time, at the keys' rate, as the original stores it.
float settleStep(float delta_time, float settle_time) {
    return ((extend(delta_time) * extend(kKeyTurnRate)) / extend(settle_time)).toFloat();
}

float keySensitivity(int sensitivity, double scale) {
    return (extend(sensitivity) * CExtendedFloat(scale) * CExtendedFloat(kSensitivityUnit))
        .toFloat();
}

// The mouse's speed when it beats the keys'.
void takeFaster(float &speed, float mouse_speed) {
    if (std::fabs(speed) < std::fabs(mouse_speed)) {
        speed = mouse_speed;
    }
}

} // namespace

bool CGame::isActionHeld(EGameAction action) const {
    return std::ranges::any_of(controls.getBindings(action), [this](engine::EInputCodeType code) {
        return owners_.keys.getKeyState(code) != 0;
    });
}

bool CGame::hasActionChanged(EGameAction action) const {
    return isActionHeld(action) != previous_held_.at(static_cast<std::size_t>(action));
}

// The original also cleared a copy of the mouse buttons that nothing reads.
// deferred: leaving the cursor where it is while a modal dialog is up (the decomp's
//   UI_CURSOR_WARP), with the pause menu's network dialogs
// nocedit 0x004dce70
void CGame::resetInputAndCenterCursor(const SGameSessionOwners &session) {
    session.net_game.getMyControls() = {};
    previous_held_.fill(false);
    owners_.raw_input.setCursorPosition(owners_.screen.getWindowWidth() / 2,
                                        owners_.screen.getWindowHeight() / 2);
    stored_camera_index_ = session.set.getSelectedCameraIndex();
}

// The original also quit on a control type other than the three, which the INI's read can't
// give, and copied the mouse buttons where nothing reads them.
// deferred: no controls while a modal dialog is up, the input forgotten, with the pause menu's
//   network dialogs
// deferred: no controls while the script camera is on a dead character who is not a player hero
//   (the decomp's helper_death.h nocturne_helper_death_hold_hero), with CHero's death
// deferred: no controls while paused or while the script has them off, with processHotkeys' pause
//   and CScript::step's allowHeroControls
// deferred: camera-relative movement (the decomp's movement.h, MENU), with the Control Options
//   page's movement scheme
// deferred: noting a frame of play, so a pad button does its binding and doesn't also act on a
//   menu (the decomp's gamepad.h nocturne_gamepad_note_gameplay_frame), with the pad's menu
//   navigation
// deferred: noting the local input for the network game (the decomp's NETPLAY), with
//   CNetGame::initializeNetworkToHost
// nocedit 0x004dbd80
void CGame::playerControls(const SGameSessionOwners &session) {
    SPlayerInput &input = session.net_game.getMyControls();
    if (game_control == EControlMode::CONTROL_MODE_GAMEPAD) {
        processJoystickControls(session, input);
    } else if (game_control == EControlMode::CONTROL_MODE_MOUSE) {
        processMouseControls(session, input);
    } else {
        processKeyboardControls(session, input);
    }
    // An HQ mission's script holsters any weapon drawn, so the draw and the flashlight are refused
    // at the input (the decomp's hq_weapon.h, FLASHLIGHT_DRAW).
    if (common::startsWithIgnoringAsciiCase(session.mission.getMissionName(), "HQ-")) {
        input.action_state.draw = false;
        input.action_state.light = false;
    }
    for (const std::size_t index : std::views::iota(std::size_t{0}, kGameActionCount)) {
        previous_held_.at(index) = isActionHeld(static_cast<EGameAction>(index));
    }
    stored_camera_index_ = session.set.getSelectedCameraIndex();
}

// The original also took the mouse buttons while screen_clear_condition was set, which nothing
// sets.
// deferred: no controls while the automap has them (the decomp's AUTOMAP), with the automap
// deferred: the weapon, item and ammo keys choosing for the hero, by way of the network game's
//   requests (the decomp's net_weapon.h), with CHero's weapon selection
// deferred: the item description key, with CInventory::toggleDetailView
// deferred: the infrared key turning the goggles on or off, refused to a dead hero and to an
//   unplaced client, the look reset (the decomp's GOGGLE_LOOK) and the camera chosen again, with
//   CDemonSet::renderGogglesView
// unverified: the strafe, turn and look steps, not run against nocedit's own code
// nocedit 0x004dc3e0
void CGame::processKeyboardControls(const SGameSessionOwners &session, SPlayerInput &input) {
    const CExtendedFloat delta_time = extend(delta_time_float_);
    const CExtendedFloat strafe_step = delta_time / extend(kStrafeRampTime);
    input.strafe_speed = 0.0F;
    if (isActionHeld(EGameAction::StrafeLeft)) {
        rampDown(input.strafe_speed, strafe_step, -kMaxStrafe);
    } else if (isActionHeld(EGameAction::StrafeRight)) {
        rampUp(input.strafe_speed, strafe_step, kMaxStrafe);
    }
    const bool left = isActionHeld(EGameAction::Left);
    const bool right = isActionHeld(EGameAction::Right);
    if (isActionHeld(EGameAction::Strafe)) {
        if (left) {
            rampDown(input.strafe_speed, strafe_step, -kMaxStrafe);
        } else if (right) {
            rampUp(input.strafe_speed, strafe_step, kMaxStrafe);
        }
        settle(input.turn_speed, settleStep(delta_time_float_, kTurnSettleTime));
    } else if (left || right) {
        const CExtendedFloat turn_step =
            (delta_time * extend(kKeyTurnRate)) /
            extend(keySensitivity(x_mouse_sensitivity, kKeyTurnSensitivity));
        if (left) {
            rampDown(input.turn_speed, turn_step, -kMaxKeyTurn);
        } else {
            rampUp(input.turn_speed, turn_step, kMaxKeyTurn);
        }
    } else {
        settle(input.turn_speed, settleStep(delta_time_float_, kTurnSettleTime));
    }
    const bool up = isActionHeld(EGameAction::PointUp);
    if (up || isActionHeld(EGameAction::PointDown)) {
        const CExtendedFloat look_step =
            (delta_time * extend(kKeyTurnRate)) /
            extend(keySensitivity(y_mouse_sensitivity, kKeyLookSensitivity));
        if (up) {
            rampDown(input.look_up_down_speed, look_step, -kMaxKeyTurn);
        } else {
            rampUp(input.look_up_down_speed, look_step, kMaxKeyTurn);
        }
    } else {
        settle(input.look_up_down_speed, settleStep(delta_time_float_, kLookSettleTime));
    }
    SPlayerActionState &buttons = input.action_state;
    buttons.run = isActionHeld(EGameAction::Run) != (always_run != 0);
    if (hasActionChanged(EGameAction::Walk)) {
        buttons.walk = isActionHeld(EGameAction::Walk);
    }
    if (hasActionChanged(EGameAction::Backup)) {
        buttons.backup = isActionHeld(EGameAction::Backup);
    }
    if (session.mission.getLocalHero()->getDeathState() != EDeathState::DEATH_STATE_ALIVE) {
        buttons.fire = false;
    } else if (hasActionChanged(EGameAction::Fire)) {
        buttons.fire = isActionHeld(EGameAction::Fire);
    }
    const auto pressed = [this](EGameAction action) {
        return hasActionChanged(action) && isActionHeld(action);
    };
    buttons.use_item = pressed(EGameAction::UseItem);
    buttons.light = pressed(EGameAction::Light);
    buttons.draw = pressed(EGameAction::Draw);
    buttons.jump = pressed(EGameAction::Jump);
}

// The original also left the mouse alone while screen_clear_condition was set, which nothing
// sets.
// unverified: the mouse's turn and look products, not run against nocedit's own code
// nocedit 0x004dccc0
void CGame::processMouseControls(const SGameSessionOwners &session, SPlayerInput &input) {
    processKeyboardControls(session, input);
    const int centre_x = owners_.screen.getWindowWidth() / 2;
    const int centre_y = owners_.screen.getWindowHeight() / 2;
    const int moved_x = owners_.raw_input.getMouseX() - centre_x;
    const int moved_y = owners_.raw_input.getMouseY() - centre_y;
    owners_.raw_input.setCursorPosition(centre_x, centre_y);
    if (session.set.getSelectedCameraIndex() != stored_camera_index_) {
        return;
    }
    const CExtendedFloat unit(kSensitivityUnit);
    const float turn =
        std::clamp((extend(x_mouse_sensitivity) * unit * CExtendedFloat(kMouseTurnScale) *
                    (extend(moved_x) / extend(centre_x)))
                       .toFloat(),
                   -kMaxMouseSpeed, kMaxMouseSpeed);
    float look = std::clamp(
        (extend(y_mouse_sensitivity) * unit * (extend(moved_y) / extend(centre_y))).toFloat(),
        -kMaxMouseSpeed, kMaxMouseSpeed);
    if (invert_mouse_y_axis != 0) {
        look = -look;
    }
    takeFaster(isActionHeld(EGameAction::Strafe) ? input.strafe_speed : input.turn_speed, turn);
    takeFaster(input.look_up_down_speed, look);
}

// The original polled the joystick here and turned it into codes; the input pump reads the pad
// once a frame instead, for the menus as well as play.
// nocedit 0x004dbe60
void CGame::resetKeyState() {
    seedCalibration();
}

// The pad's sticks drive the hero as well as its bindings (the decomp's gamepad.h
// nocturne_gamepad_apply_analog).
// deferred: the sticks left alone while the automap has the controls (the decomp's AUTOMAP),
//   with the automap
// nocedit 0x004dc230
void CGame::processJoystickControls(const SGameSessionOwners &session, SPlayerInput &input) {
    resetKeyState();
    processKeyboardControls(session, input);
    applyGamepadSticks(input);
}

void CGame::applyGamepadSticks(SPlayerInput &input) const {
    const engine::CGamepadInput &gamepad = owners_.gamepad;
    if (!gamepad.isPresent()) {
        return;
    }
    const engine::SGamepadAxes &axes = gamepad.getAxes();
    const engine::SGamepadTuning &tuning = gamepad.tuning;
    if (axes.move_x != 0.0F) {
        input.strafe_speed = axes.move_x;
    }
    if (axes.look_x != 0.0F) {
        input.turn_speed =
            axes.look_x * percentOf(tuning.turn_rate) * unitSensitivity(x_mouse_sensitivity);
    }
    if (axes.look_y != 0.0F) {
        const float look = tuning.invert_look ? -axes.look_y : axes.look_y;
        input.look_up_down_speed =
            look * percentOf(tuning.look_rate) * unitSensitivity(y_mouse_sensitivity);
    }
    // The heroes have only a walk and a run, so how far the stick is pushed picks one, and the
    // run binding held picks the other.
    const float forward = std::fabs(axes.move_y);
    if (forward >= kStickMoveThreshold) {
        input.action_state.run = (forward >= kStickRunThreshold) != isActionHeld(EGameAction::Run);
    }
}

} // namespace nocturne::core
