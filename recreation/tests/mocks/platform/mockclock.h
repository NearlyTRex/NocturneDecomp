#pragma once

#include "platform/clock.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockClock : public IClock {
public:
    MOCK_METHOD(std::uint64_t, getCounter, (), (override));
    MOCK_METHOD(std::uint64_t, getCounterFrequency, (), (override));
    MOCK_METHOD(void, sleep, (std::chrono::duration<double> duration), (override));
};

} // namespace nocturne::platform
