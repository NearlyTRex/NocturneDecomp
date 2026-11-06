#include "engine/gamepadinput.h"

#include "engine/menuinput.h"
#include "platform/clock.h"
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

constexpr std::uint64_t kMillisecondsPerSecond = 1000;
constexpr std::uint64_t kRepeatDelay = 400;
constexpr std::uint64_t kRepeatInterval = 110;
// Under 50 ms, far less than it takes to reach a menu and press anything in it.
constexpr int kGameplayPumps = 3;
// What a keyboard's Return and Escape type.
constexpr int kReturnCharacter = 0x0d;
constexpr int kEscapeCharacter = 0x1b;

// In the order of the menu presses' slots; the directions first.
constexpr std::array<EMenuAction, 7> kMenuActions{
    EMenuAction::Up,      EMenuAction::Down,   EMenuAction::Left,  EMenuAction::Right,
    EMenuAction::Confirm, EMenuAction::Cancel, EMenuAction::Delete};
constexpr std::size_t kUpPress = 0;
constexpr std::size_t kDownPress = 1;
constexpr std::size_t kLeftPress = 2;
constexpr std::size_t kRightPress = 3;
constexpr std::size_t kConfirmPress = 4;
constexpr std::size_t kCancelPress = 5;
constexpr std::size_t kDeletePress = 6;

std::optional<std::size_t> findMenuPress(EMenuAction action) {
    const auto *found = std::ranges::find(kMenuActions, action);
    if (found == kMenuActions.end()) {
        return std::nullopt;
    }
    return static_cast<std::size_t>(found - kMenuActions.begin());
}

enum class ELabelFamily : std::uint8_t {
    Xbox,
    PlayStation,
    Nintendo,
};

struct SButtonLabels {
    std::string_view xbox;
    std::string_view playstation;
    std::string_view nintendo;

    [[nodiscard]] std::string_view pick(ELabelFamily family) const {
        if (family == ELabelFamily::PlayStation) {
            return playstation;
        }
        return family == ELabelFamily::Nintendo ? nintendo : xbox;
    }
};

// By EGamepadButton, which names a face button by its place: a Switch pad's legends at those
// places are its A and B the other way round, which is what is printed on it. The last five have
// no names, as the decomp's SDL had none of them.
constexpr std::array<SButtonLabels, kButtonCount> kButtonLabels{{
    {.xbox = "A", .playstation = "Cross", .nintendo = "B"},
    {.xbox = "B", .playstation = "Circle", .nintendo = "A"},
    {.xbox = "X", .playstation = "Square", .nintendo = "Y"},
    {.xbox = "Y", .playstation = "Triangle", .nintendo = "X"},
    {.xbox = "Back", .playstation = "Share", .nintendo = "Minus"},
    {.xbox = "Guide", .playstation = "PS Button", .nintendo = "Home"},
    {.xbox = "Start", .playstation = "Options", .nintendo = "Plus"},
    {.xbox = "L3", .playstation = "L3", .nintendo = "L Stick"},
    {.xbox = "R3", .playstation = "R3", .nintendo = "R Stick"},
    {.xbox = "LB", .playstation = "L1", .nintendo = "L"},
    {.xbox = "RB", .playstation = "R1", .nintendo = "R"},
    {.xbox = "D-Pad Up", .playstation = "D-Pad Up", .nintendo = "D-Pad Up"},
    {.xbox = "D-Pad Down", .playstation = "D-Pad Down", .nintendo = "D-Pad Down"},
    {.xbox = "D-Pad Left", .playstation = "D-Pad Left", .nintendo = "D-Pad Left"},
    {.xbox = "D-Pad Right", .playstation = "D-Pad Right", .nintendo = "D-Pad Right"},
    {.xbox = "Share", .playstation = "Microphone", .nintendo = "Capture"},
    {.xbox = "Paddle 1", .playstation = "Paddle 1", .nintendo = "Paddle 1"},
    {.xbox = "Paddle 2", .playstation = "Paddle 2", .nintendo = "Paddle 2"},
    {.xbox = "Paddle 3", .playstation = "Paddle 3", .nintendo = "Paddle 3"},
    {.xbox = "Paddle 4", .playstation = "Paddle 4", .nintendo = "Paddle 4"},
    {.xbox = "Touchpad", .playstation = "Touchpad", .nintendo = "Touchpad"},
    {.xbox = "Button", .playstation = "Button", .nintendo = "Button"},
    {.xbox = "Button", .playstation = "Button", .nintendo = "Button"},
    {.xbox = "Button", .playstation = "Button", .nintendo = "Button"},
    {.xbox = "Button", .playstation = "Button", .nintendo = "Button"},
    {.xbox = "Button", .playstation = "Button", .nintendo = "Button"},
}};

struct SCodeLabels {
    EInputCodeType code;
    SButtonLabels labels;
};

constexpr std::array<SCodeLabels, 6> kAxisLabels{{
    {.code = EInputCodeType::PAD_LTRIGGER,
     .labels = {.xbox = "LT", .playstation = "L2", .nintendo = "ZL"}},
    {.code = EInputCodeType::PAD_RTRIGGER,
     .labels = {.xbox = "RT", .playstation = "R2", .nintendo = "ZR"}},
    {.code = EInputCodeType::PAD_RSTICK_UP,
     .labels = {.xbox = "Right Stick Up",
                .playstation = "Right Stick Up",
                .nintendo = "Right Stick Up"}},
    {.code = EInputCodeType::PAD_RSTICK_DOWN,
     .labels = {.xbox = "Right Stick Down",
                .playstation = "Right Stick Down",
                .nintendo = "Right Stick Down"}},
    {.code = EInputCodeType::PAD_RSTICK_LEFT,
     .labels = {.xbox = "Right Stick Left",
                .playstation = "Right Stick Left",
                .nintendo = "Right Stick Left"}},
    {.code = EInputCodeType::PAD_RSTICK_RIGHT,
     .labels = {.xbox = "Right Stick Right",
                .playstation = "Right Stick Right",
                .nintendo = "Right Stick Right"}},
}};

ELabelFamily getLabelFamily(platform::EGamepadType type) {
    using platform::EGamepadType;
    switch (type) {
    case EGamepadType::PS3:
    case EGamepadType::PS4:
    case EGamepadType::PS5:
        return ELabelFamily::PlayStation;
    case EGamepadType::SwitchPro:
    case EGamepadType::JoyConLeft:
    case EGamepadType::JoyConRight:
    case EGamepadType::JoyConPair:
        return ELabelFamily::Nintendo;
    default:
        return ELabelFamily::Xbox;
    }
}

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

CGamepadInput::CGamepadInput(platform::IGamepad &gamepad, platform::IFileSystem &file_system,
                             platform::IClock &clock)
    : gamepad_(gamepad), clock_(clock) {
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
    makeMenuPresses();
}

const SGamepadAxes &CGamepadInput::getAxes() const {
    return axes_;
}

bool CGamepadInput::isPresent() const {
    return present_;
}

void CGamepadInput::noteGameplayFrame() {
    gameplay_pumps_ = kGameplayPumps;
}

bool CGamepadInput::takeMenuAction(EMenuAction action) {
    const std::optional<std::size_t> index = findMenuPress(action);
    if (!index) {
        return false;
    }
    SMenuPress &menu_press = menu_presses_.at(*index);
    const bool waiting = menu_press.waiting;
    menu_press.waiting = false;
    return waiting;
}

void CGamepadInput::withdrawMenuAction(EMenuAction action) {
    const std::optional<std::size_t> index = findMenuPress(action);
    if (index) {
        menu_presses_.at(*index).waiting = false;
    }
}

void CGamepadInput::clearMenuActions() {
    for (SMenuPress &menu_press : menu_presses_) {
        menu_press.waiting = false;
    }
}

std::span<const int> CGamepadInput::getTypedCharacters() const {
    return std::span<const int>(typed_).first(typed_count_);
}

std::optional<std::string_view> CGamepadInput::getCodeName(EInputCodeType code) const {
    const ELabelFamily family = getLabelFamily(gamepad_.getGamepadType());
    const auto index = static_cast<std::size_t>(code);
    const auto first = static_cast<std::size_t>(EInputCodeType::PAD_A);
    if (index >= first && index < first + kButtonCount) {
        return kButtonLabels.at(index - first).pick(family);
    }
    const auto *found = std::ranges::find(kAxisLabels, code, &SCodeLabels::code);
    if (found == kAxisLabels.end()) {
        return std::nullopt;
    }
    return found->labels.pick(family);
}

bool CGamepadInput::isButtonDown(EGamepadButton button) const {
    return previous_.at(static_cast<std::size_t>(button));
}

std::uint64_t CGamepadInput::getMilliseconds() const {
    return static_cast<std::uint64_t>(static_cast<double>(clock_.getCounter()) *
                                      static_cast<double>(kMillisecondsPerSecond) /
                                      static_cast<double>(clock_.getCounterFrequency()));
}

// The codes this pump wrote say what is down.
void CGamepadInput::makeMenuPresses() {
    const bool after_play = gameplay_pumps_ > 0;
    if (after_play) {
        --gameplay_pumps_;
    }
    typed_count_ = 0;
    const bool allowed = !after_play;
    const std::uint64_t now = getMilliseconds();
    updateRepeating(kUpPress,
                    allowed && (isButtonDown(EGamepadButton::DpadUp) || previous_[kStickUpSlot]),
                    now);
    updateRepeating(
        kDownPress,
        allowed && (isButtonDown(EGamepadButton::DpadDown) || previous_[kStickDownSlot]), now);
    updateRepeating(
        kLeftPress,
        allowed && (isButtonDown(EGamepadButton::DpadLeft) || previous_[kStickLeftSlot]), now);
    updateRepeating(
        kRightPress,
        allowed && (isButtonDown(EGamepadButton::DpadRight) || previous_[kStickRightSlot]), now);
    updateOnce(kConfirmPress, isButtonDown(EGamepadButton::A), allowed);
    updateOnce(kCancelPress, isButtonDown(EGamepadButton::B) || isButtonDown(EGamepadButton::Start),
               allowed);
    updateOnce(kDeletePress, isButtonDown(EGamepadButton::X), allowed);
}

void CGamepadInput::updateRepeating(std::size_t index, bool down, std::uint64_t now) {
    SMenuPress &menu_press = menu_presses_.at(index);
    if (!down) {
        menu_press = {};
        return;
    }
    if (!menu_press.held) {
        menu_press.held = true;
        menu_press.repeat_at = now + kRepeatDelay;
        press(index);
        return;
    }
    if (now >= menu_press.repeat_at) {
        menu_press.repeat_at = now + kRepeatInterval;
        press(index);
    }
}

void CGamepadInput::updateOnce(std::size_t index, bool down, bool allowed) {
    SMenuPress &menu_press = menu_presses_.at(index);
    if (!down) {
        menu_press = {};
        return;
    }
    if (!menu_press.held) {
        menu_press.held = true;
        if (allowed) {
            press(index);
        }
    }
}

void CGamepadInput::press(std::size_t index) {
    menu_presses_.at(index).waiting = true;
    if (index == kConfirmPress) {
        typed_.at(typed_count_++) = kReturnCharacter;
    } else if (index == kCancelPress) {
        typed_.at(typed_count_++) = kEscapeCharacter;
    }
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
