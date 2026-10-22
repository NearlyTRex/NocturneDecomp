#pragma once

#include "core/loadingscreen.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::core {

class MockLoadingScreen : public ILoadingScreen {
public:
    MOCK_METHOD(void, update, (std::string_view text, bool clear_screen), (override));
};

} // namespace nocturne::core
