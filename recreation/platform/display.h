#pragma once

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::platform {

struct SPixelFormat {
    std::uint32_t red_mask = 0;
    std::uint32_t green_mask = 0;
    std::uint32_t blue_mask = 0;
};

class IDisplay {
public:
    virtual ~IDisplay() = default;

    // 8, 16 or 32 bits per pixel.
    [[nodiscard]] virtual bool setDisplayMode(int width, int height, int bits_per_pixel) = 0;
    [[nodiscard]] virtual SPixelFormat getPixelFormat() = 0;
    // 256 RGB triples, used only at 8 bits per pixel.
    virtual void setPalette(std::span<const std::uint8_t, 768> rgb) = 0;
    // One frame in the current mode's format, top row first.
    virtual void present(std::span<const std::byte> pixels, int pitch) = 0;
};

} // namespace nocturne::platform
