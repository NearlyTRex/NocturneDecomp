#pragma once

#include "platform/joystick.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockJoystick : public IJoystick {
public:
    MOCK_METHOD(std::optional<SJoystickCaps>, getCaps, (), (override));
    MOCK_METHOD(bool, readState, (SJoystickState & state), (override));
};

} // namespace nocturne::platform
