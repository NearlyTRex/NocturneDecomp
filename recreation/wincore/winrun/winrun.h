#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"
#include "engine/gameclock.h"
#include "engine/rawinput.h"
#include "platform/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>

namespace nocturne::wincore {

// The Windows front end's state: the main window and its input queues.
class CWinRun : public engine::IRawInput, public engine::IGameClock {
public:
    // The retail build's title; the editor's is "Nocturne Editor".
    static constexpr std::string_view kApplicationTitle = "Nocturne";

    CWinRun(platform::IWindow &window, platform::IClock &clock);

    // Game ticks, 65536 * 18 a second, wrapping as the original's int did.
    int getTime() override;
    void clearKeypresses() override;
    int getNextKeypress(engine::IScreenDevice &screen) override;
    [[nodiscard]] int wasKeyPressed() const override;
    // The queue holds 19 characters; one more drops the oldest.
    void enqueueInput(int input_value);
    void clearMouseClicks();
    void setCursorPosition(int x, int y) override;
    // Releases the keys let go during the last pump, then handles every waiting event.
    void processWindowMessages();
    void displayMessageBoxAndQuit(const common::CFatalError &error);
    char *getKeyName(engine::EInputCodeType keycode);
    // The window was closed: waits for input give up, and menus take it as a cancel.
    [[nodiscard]] bool getInputDisabled() const override;
    // Set when the window regains focus; the game takes it to restore its camera view.
    [[nodiscard]] bool getFocusRegained() const;
    void setFocusRegained(bool regained);

    [[nodiscard]] std::span<std::uint8_t, kInputCodeCount> getKeyboardState() override;
    [[nodiscard]] int getInputKeyMask() const override;
    void setInputKeyMask(int mask) override;
    [[nodiscard]] int getMouseX() const override;
    [[nodiscard]] int getMouseY() const override;
    [[nodiscard]] int getMouseButtonFlags() const override;
    void releaseLeftMouseButton() override;
    [[nodiscard]] int takeMouseWheelNotches() override;
    void clearInput() override;

private:
    static constexpr std::size_t kInputBufferSize = 20;

    void mainWindowProc(const platform::SWindowEvent &event);
    void activate(int active);
    void clearInputUntilTick();
    void pressMouseButton(const platform::SWindowEvent &event);
    void releaseMouseButton(const platform::SWindowEvent &event);
    [[nodiscard]] std::size_t getInputCode(std::uint16_t scancode) const;

    platform::IWindow &window_;
    platform::IClock &clock_;
    double timer_calibration_;
    std::uint64_t performance_counter_;
    std::uint32_t accumulated_game_time_ = 0;
    std::array<std::uint8_t, kInputCodeCount> keyboard_state_{};
    // Codes released during the current pump, cleared from the state at the next.
    std::array<bool, kInputCodeCount> message_flags_{};
    int input_key_mask_ = 0x7f;
    int mouse_x_ = 0;
    int mouse_y_ = 0;
    int mouse_button_flags_ = 0;
    int mouse_wheel_notches_ = 0;
    std::array<int, kInputBufferSize> input_buffer_{};
    std::size_t input_read_index_ = 0;
    std::size_t input_write_index_ = 0;
    // -1 until the first activation, then whether the window has focus.
    int window_active_ = -1;
    int previous_active_state_ = -1;
    bool focus_regained_ = false;
    bool input_disabled_ = false;
};

} // namespace nocturne::wincore
