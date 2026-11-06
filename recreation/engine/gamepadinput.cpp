#include "engine/gamepadinput.h"

#include "platform/filesystem.h"
#include "platform/gamepad.h"

#include <algorithm>
#include <cmath>
#include <optional>
#include <string>

namespace nocturne::engine {
namespace {

using platform::EGamepadAxis;
using platform::EGamepadButton;

constexpr std::string_view kMappingFile = "gamecontrollerdb.txt";
// SDL's positive extent; its negative one is one larger and is clamped to -1.
constexpr float kAxisExtent = 32767.0F;
constexpr float kPercent = 100.0F;
// How far a stick goes before it counts as a direction.
constexpr float kMoveThreshold = 0.40F;
constexpr float kTriggerPress = 0.35F;
constexpr float kTriggerRelease = 0.20F;

constexpr std::size_t kButtonCount = static_cast<std::size_t>(EGamepadButton::Count);

std::size_t slotOf(EInputCodeType code) {
    return static_cast<std::size_t>(code) - static_cast<std::size_t>(EInputCodeType::PAD_A);
}

// The left stick's slots follow the pad codes'.
constexpr std::size_t kStickLeftSlot = 32;
constexpr std::size_t kStickRightSlot = 33;
constexpr std::size_t kStickUpSlot = 34;
constexpr std::size_t kStickDownSlot = 35;

// A radial deadzone with the live range rescaled to 0..1, so a stick moves the hero from a
// standstill rather than from the deadzone's edge, and a square gate's corner is full deflection
// in its direction rather than on both axes.
void applyDeadzone(float raw_x, float raw_y, float deadzone, float &out_x, float &out_y) {
    const float magnitude = std::sqrt((raw_x * raw_x) + (raw_y * raw_y));
    if (magnitude <= deadzone) {
        out_x = 0.0F;
        out_y = 0.0F;
        return;
    }
    const float reach = std::min(magnitude, 1.0F);
    const float gain = ((reach - deadzone) / (1.0F - deadzone)) / magnitude;
    out_x = raw_x * gain;
    out_y = raw_y * gain;
}

} // namespace

CGamepadInput::CGamepadInput(platform::IGamepad &gamepad, platform::IFileSystem &file_system)
    : gamepad_(gamepad) {
    const std::optional<std::string> mappings = file_system.getFullPath(kMappingFile);
    if (mappings.has_value()) {
        static_cast<void>(gamepad_.addGamepadMappings(*mappings));
    }
}

void CGamepadInput::pump(std::span<std::uint8_t, IRawInput::kInputCodeCount> keyboard_state,
                         bool focused) {
    const bool was_present = present_;
    present_ = gamepad_.updateGamepad();
    if (present_ != was_present) {
        previous_.fill(false);
    }
    const bool readable = present_ && focused;
    readAxes(readable);
    for (std::size_t button = 0; button < kButtonCount; ++button) {
        const bool down =
            readable && gamepad_.getGamepadButton(static_cast<EGamepadButton>(button));
        applyEdge(
            keyboard_state,
            static_cast<EInputCodeType>(static_cast<std::size_t>(EInputCodeType::PAD_A) + button),
            button, down);
    }
    const std::size_t left_trigger = slotOf(EInputCodeType::PAD_LTRIGGER);
    const std::size_t right_trigger = slotOf(EInputCodeType::PAD_RTRIGGER);
    applyEdge(keyboard_state, EInputCodeType::PAD_LTRIGGER, left_trigger,
              isTriggerDown(left_trigger, axes_.left_trigger));
    applyEdge(keyboard_state, EInputCodeType::PAD_RTRIGGER, right_trigger,
              isTriggerDown(right_trigger, axes_.right_trigger));
    const auto stick = [&](EInputCodeType code, std::size_t slot, bool down) {
        applyEdge(keyboard_state, code, slot, down);
    };
    stick(EInputCodeType::PAD_RSTICK_LEFT, slotOf(EInputCodeType::PAD_RSTICK_LEFT),
          axes_.look_x <= -kMoveThreshold);
    stick(EInputCodeType::PAD_RSTICK_RIGHT, slotOf(EInputCodeType::PAD_RSTICK_RIGHT),
          axes_.look_x >= kMoveThreshold);
    stick(EInputCodeType::PAD_RSTICK_UP, slotOf(EInputCodeType::PAD_RSTICK_UP),
          axes_.look_y <= -kMoveThreshold);
    stick(EInputCodeType::PAD_RSTICK_DOWN, slotOf(EInputCodeType::PAD_RSTICK_DOWN),
          axes_.look_y >= kMoveThreshold);
    stick(EInputCodeType::DIJ_LEFT, kStickLeftSlot, axes_.move_x <= -kMoveThreshold);
    stick(EInputCodeType::DIJ_RIGHT, kStickRightSlot, axes_.move_x >= kMoveThreshold);
    stick(EInputCodeType::DIJ_UP, kStickUpSlot, axes_.move_y <= -kMoveThreshold);
    stick(EInputCodeType::DIJ_DOWN, kStickDownSlot, axes_.move_y >= kMoveThreshold);
}

const SGamepadAxes &CGamepadInput::getAxes() const {
    return axes_;
}

bool CGamepadInput::isPresent() const {
    return present_;
}

float CGamepadInput::readUnit(EGamepadAxis axis, bool readable) const {
    if (!readable) {
        return 0.0F;
    }
    return std::max(static_cast<float>(gamepad_.getGamepadAxis(axis)) / kAxisExtent, -1.0F);
}

void CGamepadInput::readAxes(bool readable) {
    const float deadzone = static_cast<float>(tuning.deadzone) / kPercent;
    applyDeadzone(readUnit(EGamepadAxis::LeftX, readable), readUnit(EGamepadAxis::LeftY, readable),
                  deadzone, axes_.move_x, axes_.move_y);
    applyDeadzone(readUnit(EGamepadAxis::RightX, readable),
                  readUnit(EGamepadAxis::RightY, readable), deadzone, axes_.look_x, axes_.look_y);
    // Triggers rest at 0 with no negative half, so they take a flat threshold, not the deadzone.
    axes_.left_trigger = readUnit(EGamepadAxis::LeftTrigger, readable);
    axes_.right_trigger = readUnit(EGamepadAxis::RightTrigger, readable);
}

void CGamepadInput::applyEdge(std::span<std::uint8_t, IRawInput::kInputCodeCount> keyboard_state,
                              EInputCodeType code, std::size_t slot, bool down) {
    std::uint8_t &state = keyboard_state[static_cast<std::size_t>(code)];
    if (!down) {
        state = 0;
    } else if (!previous_.at(slot)) {
        state = 1;
    }
    previous_.at(slot) = down;
}

bool CGamepadInput::isTriggerDown(std::size_t slot, float pull) const {
    return pull >= (previous_.at(slot) ? kTriggerRelease : kTriggerPress);
}

} // namespace nocturne::engine
