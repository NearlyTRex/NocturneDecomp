#pragma once

#include "engine/palette/font.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::engine {

// An OS font a bitmap font hands its lines to.
class MockFont : public CFont {
public:
    MOCK_METHOD(int, drawText, (std::string_view, int, int, int, int), (override));
    MOCK_METHOD(int, getStringWidth, (std::string_view), (override));
    MOCK_METHOD(int, getStringHeight, (std::string_view), (override));
};

} // namespace nocturne::engine
