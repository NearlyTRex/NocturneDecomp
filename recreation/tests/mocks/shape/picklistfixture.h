#pragma once

#include "engine/keys/inputcodetype.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "shape/edittool/picklist.h"
#include "tests/mocks/shape/edcontrolsfixture.h"

#include <gmock/gmock.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <deque>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::shape {

// A pick list on a 192x144 screen, at a HUD scale of 1, whose rows are 3 pixels tall (a 'j' of
// 2 and a pixel) and whose letters and digits are 4 pixels wide; only '!' draws. The test holds
// keys down, queues typed characters and moves the mouse, which the list's pointer warp moves.
class CPickListFixture : public CEdControlsFixture {
protected:
    static constexpr int kWidth = 192;
    static constexpr int kHeight = 144;
    static constexpr int kRowHeight = 3;
    static constexpr int kCharWidth = 4;

    CPickListFixture() : CEdControlsFixture(kWidth, kHeight) {
        using ::testing::_;
        font_.setCharYOffsetRange(2, 'j', 'j');
        for (int c = '0'; c <= 'Z'; ++c) {
            font_.setCharWidth(c, kCharWidth);
        }
        ON_CALL(raw_input_, getKeyboardState()).WillByDefault([this] {
            return std::span<std::uint8_t, engine::IRawInput::kInputCodeCount>(keyboard_);
        });
        ON_CALL(raw_input_, wasKeyPressed()).WillByDefault([this] {
            return typed_.empty() ? 0 : 1;
        });
        ON_CALL(raw_input_, getNextKeypress(_)).WillByDefault([this](engine::IScreenDevice &) {
            const int key = typed_.front();
            typed_.pop_front();
            return key;
        });
        ON_CALL(raw_input_, setCursorPosition(_, _)).WillByDefault([this](int x, int y) {
            mouse_x_ = x;
            mouse_y_ = y;
        });
        ON_CALL(raw_input_, getInputKeyMask()).WillByDefault([this] { return key_mask_; });
        ON_CALL(raw_input_, setInputKeyMask(_)).WillByDefault([this](int mask) {
            key_mask_ = mask;
        });
    }

    void press(engine::EInputCodeType code) {
        keyboard_[static_cast<std::size_t>(code)] = 1;
    }

    void type(std::string_view text) {
        for (const char c : text) {
            typed_.push_back(static_cast<unsigned char>(c));
        }
    }

    void addCopies(int count, std::string_view item) {
        for (int i = 0; i < count; ++i) {
            list_.add(item);
        }
    }

    [[nodiscard]] engine::SClipRect clip() const {
        return two_d_.getClipRect();
    }

    // A click with the left button at x, y, read on the next frame.
    void clickAt(int x, int y) {
        mouseAt(x, y, true);
    }

    std::array<std::uint8_t, engine::IRawInput::kInputCodeCount> keyboard_{};
    std::deque<int> typed_;
    int key_mask_ = 0x1ff;
    engine::CMenuInput menu_input_{keys_};
    CPickList list_{{.controls = controls_,
                     .keys = keys_,
                     .menu_input = menu_input_,
                     .three_d = three_d_,
                     .screen = screen_}};
};

} // namespace nocturne::shape
