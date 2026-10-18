#pragma once

#include "engine/rawinput.h"

#include <gmock/gmock.h>

namespace nocturne::engine {

class MockRawInput : public IRawInput {
public:
    MOCK_METHOD((std::span<std::uint8_t, kInputCodeCount>), getKeyboardState, (), (override));
    MOCK_METHOD(int, getInputKeyMask, (), (const, override));
    MOCK_METHOD(void, setInputKeyMask, (int mask), (override));
    MOCK_METHOD(int, getMouseX, (), (const, override));
    MOCK_METHOD(int, getMouseY, (), (const, override));
    MOCK_METHOD(int, getMouseButtonFlags, (), (const, override));
    MOCK_METHOD(void, releaseLeftMouseButton, (), (override));
    MOCK_METHOD(void, setCursorPosition, (int x, int y), (override));
    MOCK_METHOD(int, takeMouseWheelNotches, (), (override));
    MOCK_METHOD(void, clearInput, (), (override));
    MOCK_METHOD(void, clearKeypresses, (), (override));
    MOCK_METHOD(int, wasKeyPressed, (), (const, override));
    MOCK_METHOD(bool, getInputDisabled, (), (const, override));
    MOCK_METHOD(int, getNextKeypress, (IScreenDevice & screen), (override));
};

} // namespace nocturne::engine
