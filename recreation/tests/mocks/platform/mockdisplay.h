#pragma once

#include "platform/display.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockDisplay : public IDisplay {
public:
    MOCK_METHOD(bool, setDisplayMode, (int width, int height, int bits_per_pixel), (override));
    MOCK_METHOD(common::SPixelFormat, getPixelFormat, (), (override));
    MOCK_METHOD(void, setPalette, ((std::span<const std::uint8_t, 768> rgb)), (override));
    MOCK_METHOD(void, present, (std::span<const std::byte> pixels, int pitch), (override));
    MOCK_METHOD(void, setWindowMode, (EWindowMode mode), (override));
    MOCK_METHOD(void, setWindowSize, (int width, int height), (override));
};

} // namespace nocturne::platform
