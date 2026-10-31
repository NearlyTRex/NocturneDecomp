#pragma once

#include "engine/screendevice.h"

#include <gmock/gmock.h>

namespace nocturne::engine {

class MockScreenDevice : public IScreenDevice {
public:
    MOCK_METHOD(int, initializeGraphicsSystem, (int width, int height), (override));
    MOCK_METHOD(bool, setScreenResolution, (int width, int height, int bits_per_pixel), (override));
    MOCK_METHOD(void, resetGraphicsSystem, (), (override));
    MOCK_METHOD(void, setupColorPalette, (), (override));
    MOCK_METHOD(void, convertPaletteToDirectColor, (), (override));
    MOCK_METHOD(void, openScreenDevice, (), (override));
    MOCK_METHOD(void, closeScreenDevice, (), (override));
    MOCK_METHOD(void, swapBuffers, (), (override));
    MOCK_METHOD(int, getWindowWidth, (), (const, override));
    MOCK_METHOD(int, getWindowHeight, (), (const, override));
    MOCK_METHOD(int, getBitsPerPixel, (), (const, override));
    MOCK_METHOD(void, setBitsPerPixel, (int bits_per_pixel), (override));
    MOCK_METHOD(std::span<void *>, getScreenRows, (), (override));
    MOCK_METHOD(std::span<std::uint32_t *>, getZBufferRows, (), (override));
    MOCK_METHOD((std::span<std::uint16_t, 256>), getColorTable16, (), (override));
    MOCK_METHOD((std::span<const std::uint32_t, 256>), getColorTable32, (), (const, override));
    MOCK_METHOD((std::span<std::uint16_t, 256>), getHardwarePalette16, (), (override));
    MOCK_METHOD((std::span<std::uint32_t, 256>), getHardwarePalette32, (), (override));
    MOCK_METHOD(SColorChannels &, getColorChannels, (), (override));
    MOCK_METHOD(const SColorMasks &, getColorMasks, (), (const, override));
};

} // namespace nocturne::engine
