#pragma once

#include "engine/gameclock.h"

#include <gmock/gmock.h>

namespace nocturne::engine {

class MockGameClock : public IGameClock {
public:
    MOCK_METHOD(int, getTime, (), (override));
};

} // namespace nocturne::engine
