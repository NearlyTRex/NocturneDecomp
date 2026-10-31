#pragma once

#include "common/video/framebuffer.h"

#include <cstdint>
#include <span>

namespace nocturne::engine {

// How each channel of the current mode packs an 8-bit level; the hardware renderer rewrites them
// for its own format through the bridge.
struct SColorChannels {
    common::SChannelLayout red;
    common::SChannelLayout green;
    common::SChannelLayout blue;
};

// What convertPaletteToDirectColor derives from the channels for the 16-bit pixel writers and
// the 32-bit lightmap blenders.
struct SColorMasks {
    std::uint32_t red_mask16 = 0;
    std::uint32_t green_mask16 = 0;
    std::uint32_t blue_mask16 = 0;
    std::uint32_t red_mask32 = 0;
    std::uint32_t green_mask32 = 0;
    std::uint32_t blue_mask32 = 0;
    int blue_bit_shift = 0;
    int total_dither_shift = 0;
    int green_blue_dither_shift = 0;

    bool operator==(const SColorMasks &) const = default;
};

// wddvmem's screen, for the code below wincore that draws on it: the render mode, the rows the
// software renderer writes, and the colour tables built from the palette.
class IScreenDevice {
public:
    virtual ~IScreenDevice() = default;

    virtual int initializeGraphicsSystem(int width, int height) = 0;
    // False for a depth other than 8, 16 or 32, or a mode the display refuses.
    virtual bool setScreenResolution(int width, int height, int bits_per_pixel) = 0;
    // With Direct3D on, hands the current mode to the hardware renderer; when it refuses, turns
    // Direct3D off and sets the mode again for software.
    virtual void resetGraphicsSystem() = 0;
    virtual void setupColorPalette() = 0;
    virtual void convertPaletteToDirectColor() = 0;
    // Points the rows at the surface the next swap shows, until closeScreenDevice.
    virtual void openScreenDevice() = 0;
    virtual void closeScreenDevice() = 0;
    virtual void swapBuffers() = 0;

    [[nodiscard]] virtual int getWindowWidth() const = 0;
    [[nodiscard]] virtual int getWindowHeight() const = 0;
    [[nodiscard]] virtual int getBitsPerPixel() const = 0;
    // While the hardware renderer holds the frame, the rows are in its depth.
    virtual void setBitsPerPixel(int bits_per_pixel) = 0;
    // One per possible row; the current mode's are first, and the hardware renderer may
    // repoint them.
    [[nodiscard]] virtual std::span<void *> getScreenRows() = 0;
    [[nodiscard]] virtual std::span<std::uint32_t *> getZBufferRows() = 0;
    [[nodiscard]] virtual std::span<std::uint16_t, 256> getColorTable16() = 0;
    [[nodiscard]] virtual std::span<const std::uint32_t, 256> getColorTable32() const = 0;
    // The colours an indexed image draws with, filled by whoever draws one: in a 16-bit mode's
    // layout, and 8-8-8.
    [[nodiscard]] virtual std::span<std::uint16_t, 256> getHardwarePalette16() = 0;
    [[nodiscard]] virtual std::span<std::uint32_t, 256> getHardwarePalette32() = 0;
    [[nodiscard]] virtual SColorChannels &getColorChannels() = 0;
    [[nodiscard]] virtual const SColorMasks &getColorMasks() const = 0;
};

} // namespace nocturne::engine
