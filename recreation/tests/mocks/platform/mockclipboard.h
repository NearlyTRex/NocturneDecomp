#pragma once

#include "platform/clipboard.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockClipboard : public IClipboard {
public:
    MOCK_METHOD(std::string, getClipboardText, (), (override));
    MOCK_METHOD(void, setClipboardText, (std::string_view text_data), (override));
};

} // namespace nocturne::platform
