#pragma once

#include "engine/gamepadinput.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockfilesystem.h"
#include "tests/mocks/platform/mockgamepad.h"

#include <gmock/gmock.h>

#include <cstdint>

namespace nocturne::engine {

// A pad layer over a mock pad that reads as unplugged unless a test says otherwise, on a clock
// counting milliseconds that stands still unless a test moves it.
struct SGamepadInputParts {
    static constexpr std::uint64_t kMillisecondsPerSecond = 1000;

    SGamepadInputParts() {
        ON_CALL(clock, getCounterFrequency())
            .WillByDefault(::testing::Return(kMillisecondsPerSecond));
    }

    ::testing::NiceMock<platform::MockGamepad> gamepad;
    ::testing::NiceMock<platform::MockFileSystem> file_system;
    ::testing::NiceMock<platform::MockClock> clock;
    CGamepadInput input{gamepad, file_system, clock};
};

} // namespace nocturne::engine
