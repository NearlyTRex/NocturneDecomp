#pragma once

#include "platform/gamepad.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockGamepad : public IGamepad {
public:
    MOCK_METHOD(bool, updateGamepad, (), (override));
    MOCK_METHOD(bool, getGamepadButton, (EGamepadButton button), (override));
    MOCK_METHOD(std::int16_t, getGamepadAxis, (EGamepadAxis axis), (override));
    MOCK_METHOD(EGamepadType, getGamepadType, (), (override));
    MOCK_METHOD(int, addGamepadMappings, (std::string_view path), (override));
};

} // namespace nocturne::platform
