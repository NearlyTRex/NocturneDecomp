#pragma once

#include "platform/window.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockWindow : public IWindow {
public:
    MOCK_METHOD(bool, pollEvent, (SWindowEvent & event), (override));
    MOCK_METHOD(void, warpMouse, (int x, int y), (override));
    MOCK_METHOD(std::string, getScancodeName, (std::uint16_t scancode), (override));
    MOCK_METHOD(void, showMessageBox, (std::string_view message, std::string_view title),
                (override));
};

} // namespace nocturne::platform
