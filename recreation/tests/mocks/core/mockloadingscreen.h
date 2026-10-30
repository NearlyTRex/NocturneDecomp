#pragma once

#include "core/loadingscreen.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::core {

class MockLoadingScreen : public ILoadingScreen {
public:
    MOCK_METHOD(void, show, (int total_frames, bool use_custom_viewport, int image_variant),
                (override));
    MOCK_METHOD(void, update, (std::string_view text, bool clear_screen), (override));
};

} // namespace nocturne::core
