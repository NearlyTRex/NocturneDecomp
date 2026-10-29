#pragma once

#include "platform/log.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::platform {

class MockLog : public ILog {
public:
    MOCK_METHOD(void, write, (ELogSubsystem subsystem, std::string_view line), (override));
};

// For a test that writes logs it doesn't look at.
class CNullLog final : public ILog {
public:
    void write(ELogSubsystem /*subsystem*/, std::string_view /*line*/) override {}
};

} // namespace nocturne::platform
