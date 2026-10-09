#pragma once

#include "platform/display.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockDisplay : public IDisplay {
public:
    MOCK_METHOD(bool, setDisplayMode, (int width, int height, int bits_per_pixel), (override));
    MOCK_METHOD(SPixelFormat, getPixelFormat, (), (override));
    MOCK_METHOD(void, setPalette, ((std::span<const std::uint8_t, 768> rgb)), (override));
    MOCK_METHOD(void, present, (std::span<const std::byte> pixels, int pitch), (override));
};

} // namespace nocturne::platform
