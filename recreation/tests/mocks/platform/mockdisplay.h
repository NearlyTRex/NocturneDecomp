#pragma once

#include "platform/display.h"

#include <gmock/gmock.h>

#include <vector>

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
    MOCK_METHOD(void, setDisplayIndex, (int index), (override));
    MOCK_METHOD(int, getDisplayIndex, (), (const, override));
    MOCK_METHOD(void, setFullscreenSize, (EFullscreenSize size), (override));
    MOCK_METHOD(EFullscreenSize, getFullscreenSize, (), (const, override));
    MOCK_METHOD(void, setRefreshRate, (int hertz), (override));
    MOCK_METHOD(int, getRefreshRate, (), (const, override));
    MOCK_METHOD(void, setVsync, (bool on), (override));
    MOCK_METHOD(bool, getVsync, (), (const, override));
    MOCK_METHOD(std::vector<SDisplayInfo>, getDisplays, (), (const, override));
    MOCK_METHOD(void, setUpscaler, (EUpscaler upscaler), (override));
    MOCK_METHOD(EUpscaler, getUpscaler, (), (const, override));
    MOCK_METHOD(void, setUpscalerSharpness, (int percent), (override));
    MOCK_METHOD(int, getUpscalerSharpness, (), (const, override));
    MOCK_METHOD(void, setAntialias, (EAntialias antialias), (override));
    MOCK_METHOD(EAntialias, getAntialias, (), (const, override));
    MOCK_METHOD(void, setWidescreen, (common::EWidescreen widescreen), (override));
    MOCK_METHOD(common::EWidescreen, getWidescreen, (), (const, override));
};

} // namespace nocturne::platform
