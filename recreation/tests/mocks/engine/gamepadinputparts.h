#pragma once

#include "engine/gamepadinput.h"
#include "tests/mocks/platform/mockfilesystem.h"
#include "tests/mocks/platform/mockgamepad.h"

#include <gmock/gmock.h>

namespace nocturne::engine {

// A pad layer over a mock pad that reads as unplugged unless a test says otherwise.
struct SGamepadInputParts {
    ::testing::NiceMock<platform::MockGamepad> gamepad;
    ::testing::NiceMock<platform::MockFileSystem> file_system;
    CGamepadInput input{gamepad, file_system};
};

} // namespace nocturne::engine
