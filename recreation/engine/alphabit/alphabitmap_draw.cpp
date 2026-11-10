#include "engine/alphabit/alphabitmap.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

constexpr std::uint32_t kChannelMask = 0xff;
constexpr unsigned kChannelBits = 8;
constexpr unsigned kColorBits = 24;
constexpr float kHalfPixel = 0.5F;

template <typename TPixel>
std::span<TPixel> getPixels(void *row, int left, std::size_t count) {
    return {static_cast<TPixel *>(row) + left, count};
}

// Where a screen pixel's centre falls in the image, in image pixels from its first centre.
float getSourcePosition(int screen_offset, int screen_length, int image_length) {
    return ((static_cast<float>(screen_offset) + kHalfPixel) * static_cast<float>(image_length) /
            static_cast<float>(screen_length)) -
           kHalfPixel;
}

int getNearest(int screen_offset, int screen_length, int image_length) {
    return std::clamp(screen_offset * image_length / screen_length, 0, image_length - 1);
}

// One image pixel's share of a blend.
struct SSample {
    std::uint32_t color;
    float weight;
};

// The colours mixed by weight and opacity, so a clear pixel lends none of its colour; and the
// opacity they come to.
void blendSamples(std::span<const SSample> samples, std::uint32_t &color, std::uint8_t &opacity) {
    std::array<float, 3> channels{};
    float total = 0.0F;
    for (const SSample &sample : samples) {
        total += sample.weight;
        for (unsigned channel = 0; channel < channels.size(); ++channel) {
            channels.at(channel) +=
                sample.weight *
                static_cast<float>((sample.color >> (channel * kChannelBits)) & kChannelMask);
        }
    }
    color = 0;
    opacity = static_cast<std::uint8_t>(std::lround(std::min(total, 1.0F) * kChannelMask));
    if (total <= 0.0F) {
        return;
    }
    for (unsigned channel = 0; channel < channels.size(); ++channel) {
        const auto level = static_cast<std::uint32_t>(std::lround(channels.at(channel) / total));
        color |= std::min(level, kChannelMask) << (channel * kChannelBits);
    }
    color &= (1U << kColorBits) - 1U;
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

// Drawn a row at a time through the same blends as display: the image's indices picked for
// Nearest, colours mixed for Smooth.
void CAlphaBitmap::displayScaled(int x, int y, int width, int height, int alpha,
                                 EBitmapFilter filter) {
    if (width == width_ && height == height_) {
        display(x, y, alpha);
        return;
    }
    const int window_width = screen_.getWindowWidth();
    const int window_height = screen_.getWindowHeight();
    if (width <= 0 || height <= 0 || width_ <= 0 || height_ <= 0 || x + width < 0 ||
        x >= window_width || y + height < 0 || y >= window_height) {
        return;
    }
    initPalette();
    const int left = std::max(x, 0);
    const int top = std::max(y, 0);
    const int right = std::min(x + width, window_width);
    const int bottom = std::min(y + height, window_height);
    if (left >= right || top >= bottom) {
        return;
    }
    const int bits_per_pixel = screen_.getBitsPerPixel();
    const std::span<void *> rows = screen_.getScreenRows();
    const auto count = static_cast<std::size_t>(right - left);
    std::vector<std::uint8_t> indices(count);
    std::vector<std::uint32_t> colors(count);
    std::vector<std::uint8_t> opacity(count);
    const auto pixel = [this](int column, int row) {
        return (static_cast<std::size_t>(row) * static_cast<std::size_t>(width_)) +
               static_cast<std::size_t>(column);
    };
    for (int row = top; row < bottom; ++row) {
        const float source_y = getSourcePosition(row - y, height, height_);
        const int y0 = std::clamp(static_cast<int>(std::floor(source_y)), 0, height_ - 1);
        const int y1 = std::min(y0 + 1, height_ - 1);
        const float fy = std::clamp(source_y - static_cast<float>(y0), 0.0F, 1.0F);
        const int nearest_y = getNearest(row - y, height, height_);
        for (std::size_t i = 0; i < count; ++i) {
            const int column = left + static_cast<int>(i) - x;
            if (filter == EBitmapFilter::Nearest) {
                const std::size_t at = pixel(getNearest(column, width, width_), nearest_y);
                indices[i] = raw_[at];
                opacity[i] = opa_[at];
                continue;
            }
            const float source_x = getSourcePosition(column, width, width_);
            const int x0 = std::clamp(static_cast<int>(std::floor(source_x)), 0, width_ - 1);
            const int x1 = std::min(x0 + 1, width_ - 1);
            const float fx = std::clamp(source_x - static_cast<float>(x0), 0.0F, 1.0F);
            const auto sample = [&](int sx, int sy, float weight) {
                const std::size_t at = pixel(sx, sy);
                return SSample{.color = act_.at(raw_[at]),
                               .weight = weight * static_cast<float>(opa_[at]) / kChannelMask};
            };
            const std::array<SSample, 4> samples{
                sample(x0, y0, (1.0F - fx) * (1.0F - fy)), sample(x1, y0, fx * (1.0F - fy)),
                sample(x0, y1, (1.0F - fx) * fy), sample(x1, y1, fx * fy)};
            blendSamples(samples, colors[i], opacity[i]);
        }
        void *pixels = rows[static_cast<std::size_t>(row)];
        const bool nearest = filter == EBitmapFilter::Nearest;
        if (bits_per_pixel == 32) {
            auto dest = getPixels<std::uint32_t>(pixels, left, count);
            if (nearest) {
                special_.renderAlphaRow32(dest, indices, opacity, alpha);
            } else {
                special_.renderColorRow32(dest, colors, opacity, alpha);
            }
        } else if (bits_per_pixel == 16) {
            auto dest = getPixels<std::uint16_t>(pixels, left, count);
            if (nearest) {
                special_.renderAlphaRow16(dest, indices, opacity, alpha);
            } else {
                special_.renderColorRow16(dest, colors, opacity, alpha);
            }
        }
    }
}

} // namespace nocturne::engine
