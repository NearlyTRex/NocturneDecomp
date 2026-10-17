#include "engine/alphabit/alphabitmap.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"

#include <algorithm>
#include <cstddef>
#include <span>

namespace nocturne::engine {
namespace {

template <typename TPixel>
std::span<TPixel> getPixels(void *row, int left, std::size_t count) {
    return {static_cast<TPixel *>(row) + left, count};
}

} // namespace

// nocedit 0x00410cf0
void CAlphaBitmap::initPalette() {
    std::ranges::copy(act_, screen_.getHardwarePalette32().begin());
}

// The original clipped the right edge from x rather than from the screen's left, so an image
// overhanging both edges ran off the end of each row; and it drew an 8-bit screen as 16-bit.
// nocedit 0x00410950
void CAlphaBitmap::display(int x, int y, int alpha) {
    const int window_width = screen_.getWindowWidth();
    const int window_height = screen_.getWindowHeight();
    if (x + width_ < 0 || x >= window_width || y + height_ < 0 || y >= window_height) {
        return;
    }
    // An image touching the screen installs its palette even when none of it is visible.
    initPalette();
    const int left = std::max(x, 0);
    const int top = std::max(y, 0);
    const int right = std::min(x + width_, window_width);
    const int bottom = std::min(y + height_, window_height);
    if (left >= right || top >= bottom) {
        return;
    }
    const int bits_per_pixel = screen_.getBitsPerPixel();
    const std::span<void *> rows = screen_.getScreenRows();
    const auto count = static_cast<std::size_t>(right - left);
    for (int row = top; row < bottom; ++row) {
        const std::size_t offset =
            (static_cast<std::size_t>(row - y) * static_cast<std::size_t>(width_)) +
            static_cast<std::size_t>(left - x);
        const std::span<const std::uint8_t> indices = std::span(raw_).subspan(offset, count);
        const std::span<const std::uint8_t> opacity = std::span(opa_).subspan(offset, count);
        void *pixels = rows[static_cast<std::size_t>(row)];
        if (bits_per_pixel == 32) {
            special_.renderAlphaRow32(getPixels<std::uint32_t>(pixels, left, count), indices,
                                      opacity, alpha);
        } else if (bits_per_pixel == 16) {
            special_.renderAlphaRow16(getPixels<std::uint16_t>(pixels, left, count), indices,
                                      opacity, alpha);
        }
    }
}

} // namespace nocturne::engine
