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
    MOCK_METHOD(EWindowMode, getWindowMode, (), (const, override));
    MOCK_METHOD(void, setWindowSize, (int width, int height), (override));
    MOCK_METHOD(void, setUpscaler, (EUpscaler upscaler), (override));
    MOCK_METHOD(EUpscaler, getUpscaler, (), (const, override));
    MOCK_METHOD(void, setUpscalerSharpness, (int percent), (override));
    MOCK_METHOD(int, getUpscalerSharpness, (), (const, override));
};

} // namespace nocturne::platform
