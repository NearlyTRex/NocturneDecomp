#include "engine/screendevice.h"
#include "platform/window.h"
#include "wincore/winrun/winrun.h"

#include <array>
#include <cstddef>

namespace nocturne::wincore {
namespace {

// The input codes the mouse buttons are filed under, after the keyboard's.
constexpr std::size_t kLeftButtonCode = 0x200;
constexpr std::size_t kRightButtonCode = 0x201;
constexpr std::size_t kMiddleButtonCode = 0x20c;
// WHEEL_DELTA: one notch.
constexpr int kWheelDelta = 120;
// Game ticks to eighteenths of a second.
constexpr int kTickShift = 16;

struct SButton {
    std::size_t code;
    int flag;
};

// Indexed by platform::EMouseButton.
constexpr std::array<SButton, 3> kButtons = {{
    {.code = kLeftButtonCode, .flag = 1},
    {.code = kRightButtonCode, .flag = 2},
    {.code = kMiddleButtonCode, .flag = 4},
}};
static_assert(static_cast<std::size_t>(platform::EMouseButton::Left) == 0);
static_assert(static_cast<std::size_t>(platform::EMouseButton::Right) == 1);
static_assert(static_cast<std::size_t>(platform::EMouseButton::Middle) == 2);

const SButton &getButton(platform::EMouseButton button) {
    return kButtons.at(static_cast<std::size_t>(button));
}

} // namespace

// The original also slept while the window was in the background; the enhanced game keeps
// running.
// nocedit 0x005f35e0
void CWinRun::processWindowMessages() {
    for (std::size_t code = 0; code < kInputCodeCount; ++code) {
        if (message_flags_[code]) {
            keyboard_state_[code] = 0;
        }
        message_flags_[code] = false;
    }
    platform::SWindowEvent event;
    while (window_.pollEvent(event)) {
        mainWindowProc(event);
    }
}

// The cursor stays visible, Alt+F4 closes the game and the screensaver is the adapter's. A
// finished movie is seen by playMovie polling the player rather than by a message. Retail
// ignores the wheel; its notches are counted for the decomp's console scrolling.
// nocedit 0x005f3150
void CWinRun::mainWindowProc(const platform::SWindowEvent &event) {
    switch (event.type) {
    case platform::EWindowEventType::Quit:
        input_disabled_ = true;
        return;
    case platform::EWindowEventType::Activate:
        activate(1);
        return;
    case platform::EWindowEventType::Deactivate:
        activate(0);
        return;
    case platform::EWindowEventType::KeyDown:
        keyboard_state_[getInputCode(event.scancode)] = 1;
        return;
    case platform::EWindowEventType::KeyUp:
        message_flags_[getInputCode(event.scancode)] = true;
        return;
    case platform::EWindowEventType::Character:
        if (event.character != 0) {
            enqueueInput(static_cast<unsigned char>(event.character));
        }
        return;
    case platform::EWindowEventType::MouseMove:
        mouse_x_ = event.x;
        mouse_y_ = event.y;
        return;
    case platform::EWindowEventType::MouseButtonDown:
        pressMouseButton(event);
        return;
    case platform::EWindowEventType::MouseButtonUp:
        releaseMouseButton(event);
        return;
    default:
        // MouseWheel; any other type carries no wheel movement.
        mouse_wheel_notches_ += event.wheel_delta / kWheelDelta;
        return;
    }
}

// Regaining focus drops whatever was typed or held while away, except on the first activation.
void CWinRun::activate(int active) {
    previous_active_state_ = window_active_;
    window_active_ = active;
    if (previous_active_state_ == window_active_) {
        return;
    }
    if (active == 0) {
        focus_regained_ = false;
        return;
    }
    if (previous_active_state_ != -1) {
        clearInputUntilTick();
        focus_regained_ = true;
    }
}

// clearInputAndWait as the original called it here: the queue is held empty until the game
// clock's eighteenth of a second turns over, up to 55 ms.
void CWinRun::clearInputUntilTick() {
    clearInput();
    const int tick = getTime() >> kTickShift;
    while ((getTime() >> kTickShift) == tick) {
        clearKeypresses();
    }
    clearInput();
}

void CWinRun::pressMouseButton(const platform::SWindowEvent &event) {
    const SButton button = getButton(event.button);
    mouse_x_ = event.x;
    mouse_y_ = event.y;
    mouse_button_flags_ |= button.flag;
    keyboard_state_[button.code] = 1;
}

void CWinRun::releaseMouseButton(const platform::SWindowEvent &event) {
    const SButton button = getButton(event.button);
    mouse_x_ = event.x;
    mouse_y_ = event.y;
    message_flags_[button.code] = true;
    mouse_button_flags_ &= ~button.flag;
}

std::size_t CWinRun::getInputCode(std::uint16_t scancode) const {
    return static_cast<std::size_t>(scancode & input_key_mask_);
}

// nocedit 0x005f2f30
void CWinRun::enqueueInput(int input_value) {
    input_buffer_[input_write_index_] = input_value;
    input_write_index_ = (input_write_index_ + 1) % kInputBufferSize;
    if (input_write_index_ == input_read_index_) {
        input_read_index_ = (input_read_index_ + 1) % kInputBufferSize;
    }
}

// nocedit 0x005f2e70
void CWinRun::clearKeypresses() {
    input_read_index_ = 0;
    input_write_index_ = 0;
}

// Each present pumps the window, which is what fills the queue.
// deferred: servicing the network on each pass of the wait, so a netplay peer doesn't time out
//   while a mission waits for a key (the decomp's net_keepalive.h nocturne_net_keepalive), with
//   CNetGame's keepalive
// nocedit 0x005f2e90
int CWinRun::getNextKeypress(engine::IScreenDevice &screen) {
    while (input_read_index_ == input_write_index_ && !input_disabled_) {
        screen.swapBuffers();
    }
    if (input_read_index_ == input_write_index_) {
        return 0;
    }
    const int input_value = input_buffer_[input_read_index_];
    input_read_index_ = (input_read_index_ + 1) % kInputBufferSize;
    return input_value;
}

// nocedit 0x005f2f00
int CWinRun::wasKeyPressed() const {
    return input_read_index_ != input_write_index_ ? 1 : 0;
}

// nocedit 0x005f30c0
void CWinRun::clearMouseClicks() {
    mouse_button_flags_ = 0;
}

// In the game's coordinates, which the window maps onto its own.
// nocedit 0x005f30d0
void CWinRun::setCursorPosition(int x, int y) {
    window_.warpMouse(x, y);
    mouse_x_ = x;
    mouse_y_ = y;
}

void CWinRun::clearInput() {
    clearKeypresses();
    clearMouseClicks();
    keyboard_state_.fill(0);
}

bool CWinRun::getInputDisabled() const {
    return input_disabled_;
}

bool CWinRun::getFocusRegained() const {
    return focus_regained_;
}

void CWinRun::setFocusRegained(bool regained) {
    focus_regained_ = regained;
}

std::span<std::uint8_t, CWinRun::kInputCodeCount> CWinRun::getKeyboardState() {
    return keyboard_state_;
}

int CWinRun::getInputKeyMask() const {
    return input_key_mask_;
}

void CWinRun::setInputKeyMask(int mask) {
    input_key_mask_ = mask;
}

int CWinRun::getMouseX() const {
    return mouse_x_;
}

int CWinRun::getMouseY() const {
    return mouse_y_;
}

int CWinRun::getMouseButtonFlags() const {
    return mouse_button_flags_;
}

void CWinRun::releaseLeftMouseButton() {
    mouse_button_flags_ &= ~1;
}

int CWinRun::takeMouseWheelNotches() {
    const int notches = mouse_wheel_notches_;
    mouse_wheel_notches_ = 0;
    return notches;
}

} // namespace nocturne::wincore
