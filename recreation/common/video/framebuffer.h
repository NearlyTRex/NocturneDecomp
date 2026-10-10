#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <vector>

namespace nocturne::common {

// The display depths setScreenResolution accepts: 8, 16 and 32 bits per pixel.
enum class EPixelLayout : std::uint8_t {
    Indexed8,
    Rgb565,
    // B, G, R, then a byte the game leaves zero.
    Bgra8888,
};

// The channel masks the game reads from a locked surface to build its colour tables.
struct SPixelFormat {
    std::uint32_t red_mask = 0;
    std::uint32_t green_mask = 0;
    std::uint32_t blue_mask = 0;

    bool operator==(const SPixelFormat &) const = default;
};

// Empty for a depth setScreenResolution rejects.
[[nodiscard]] std::optional<EPixelLayout> layoutForDepth(int bits_per_pixel);
// All zero for Indexed8, which has a palette instead.
[[nodiscard]] SPixelFormat getPixelFormat(EPixelLayout layout);
[[nodiscard]] int getBytesPerPixel(EPixelLayout layout);

// A frame ready to upload: Rgb565 or Bgra8888, rows row_length pixels apart.
struct SFrameUpload {
    EPixelLayout layout = EPixelLayout::Bgra8888;
    std::span<const std::byte> pixels;
    int row_length = 0;
};

// Turns the game's framebuffer into an upload. Direct-colour frames pass through untouched;
// an 8-bit frame is expanded through the palette into Bgra8888.
class CFrameConverter {
public:
    void setMode(EPixelLayout layout, int width, int height);
    // 256 RGB triples, as CreatePalette takes them.
    void setPalette(std::span<const std::uint8_t, 768> rgb);
    // The layout every upload of the current mode has.
    [[nodiscard]] EPixelLayout getUploadLayout() const;
    // Empty when pixels is too small for the mode at that pitch, or the pitch is not a whole
    // number of pixels at least a row wide.
    [[nodiscard]] std::optional<SFrameUpload> convert(std::span<const std::byte> pixels, int pitch);

private:
    [[nodiscard]] bool fits(std::span<const std::byte> pixels, int pitch) const;
    [[nodiscard]] SFrameUpload expand(std::span<const std::byte> pixels, int pitch);

    EPixelLayout layout_ = EPixelLayout::Bgra8888;
    int width_ = 0;
    int height_ = 0;
    std::array<std::array<std::byte, 4>, 256> palette_{};
    std::vector<std::byte> expanded_;
};

} // namespace nocturne::common
