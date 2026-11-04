#pragma once

#include "core/event/eventconditions.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::core {

class MockEventConditions : public IEventConditions {
public:
    MOCK_METHOD(bool, evaluateCondition, (std::string_view condition_expression), (override));
};

} // namespace nocturne::core
