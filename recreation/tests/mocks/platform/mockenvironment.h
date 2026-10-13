#pragma once

#include "platform/environment.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockEnvironment : public IEnvironment {
public:
    MOCK_METHOD(std::optional<std::string>, getVariable, (std::string_view name), (override));
};

} // namespace nocturne::platform
