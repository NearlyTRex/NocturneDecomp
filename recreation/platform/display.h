#pragma once

#include "common/video/framebuffer.h"

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::platform {

// The values are frozen: the game saves them as [Graphics] windowMode.
enum class EWindowMode : std::uint8_t {
    Windowed,
    // Changes the display mode to the window's size.
    Fullscreen,
    // Desktop-sized, without decorations.
    Borderless,
};

// The game's software framebuffer on screen, one frame per present, as swapBuffers copied
// g_BackBuffer to the DirectDraw primary. The frame is letterboxed into the window.
class IDisplay {
public:
    virtual ~IDisplay() = default;

    // The render resolution; 8, 16 or 32 bits per pixel. The window keeps the player's size.
    [[nodiscard]] virtual bool setDisplayMode(int width, int height, int bits_per_pixel) = 0;
    // The current mode's channel masks; all zero at 8 bits per pixel.
    [[nodiscard]] virtual common::SPixelFormat getPixelFormat() = 0;
    // 256 RGB triples, used only at 8 bits per pixel.
    virtual void setPalette(std::span<const std::uint8_t, 768> rgb) = 0;
    // One frame in the current mode's format, top row first; shown and swapped.
    virtual void present(std::span<const std::byte> pixels, int pitch) = 0;
    virtual void setWindowMode(EWindowMode mode) = 0;
    // The windowed size, applied now when windowed and on returning to windowed otherwise.
    virtual void setWindowSize(int width, int height) = 0;
};

} // namespace nocturne::platform
