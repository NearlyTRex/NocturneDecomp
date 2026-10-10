#include "common/video/framebuffer.h"

#include <algorithm>
#include <iterator>

namespace nocturne::common {
namespace {

constexpr std::size_t kPaletteEntries = 256;
constexpr std::size_t kBgraSize = 4;

} // namespace

std::optional<EPixelLayout> layoutForDepth(int bits_per_pixel) {
    switch (bits_per_pixel) {
    case 8:
        return EPixelLayout::Indexed8;
    case 16:
        return EPixelLayout::Rgb565;
    case 32:
        return EPixelLayout::Bgra8888;
    default:
        return std::nullopt;
    }
}

SPixelFormat getPixelFormat(EPixelLayout layout) {
    constexpr std::array<SPixelFormat, 3> kFormats = {{
        {},
        {.red_mask = 0xf800, .green_mask = 0x07e0, .blue_mask = 0x001f},
        {.red_mask = 0x00ff0000, .green_mask = 0x0000ff00, .blue_mask = 0x000000ff},
    }};
    return kFormats.at(static_cast<std::size_t>(layout));
}

int getBytesPerPixel(EPixelLayout layout) {
    constexpr std::array<int, 3> kSizes = {1, 2, 4};
    return kSizes.at(static_cast<std::size_t>(layout));
}

std::vector<std::uint8_t> packRows(std::span<const std::byte> pixels, int width, int height,
                                   int pitch) {
    if (width <= 0 || height <= 0 || pitch < width) {
        return {};
    }
    const auto row = static_cast<std::size_t>(width);
    const auto rows = static_cast<std::size_t>(height);
    const auto stride = static_cast<std::size_t>(pitch);
    if (pixels.size() < (stride * (rows - 1)) + row) {
        return {};
    }
    std::vector<std::uint8_t> packed;
    packed.reserve(row * rows);
    for (std::size_t y = 0; y < rows; ++y) {
        std::ranges::transform(
            pixels.subspan(y * stride, row), std::back_inserter(packed),
            [](std::byte value) { return std::to_integer<std::uint8_t>(value); });
    }
    return packed;
}

void CFrameConverter::setMode(EPixelLayout layout, int width, int height) {
    layout_ = layout;
    width_ = width;
    height_ = height;
}

void CFrameConverter::setPalette(std::span<const std::uint8_t, 768> rgb) {
    for (std::size_t i = 0; i < kPaletteEntries; ++i) {
        const auto colour = rgb.subspan(i * 3, 3);
        palette_.at(i) = {std::byte{colour[2]}, std::byte{colour[1]}, std::byte{colour[0]},
                          std::byte{0}};
    }
}

EPixelLayout CFrameConverter::getUploadLayout() const {
    return layout_ == EPixelLayout::Indexed8 ? EPixelLayout::Bgra8888 : layout_;
}

std::optional<SFrameUpload> CFrameConverter::convert(std::span<const std::byte> pixels, int pitch) {
    if (!fits(pixels, pitch)) {
        return std::nullopt;
    }
    if (layout_ == EPixelLayout::Indexed8) {
        return expand(pixels, pitch);
    }
    return SFrameUpload{
        .layout = layout_, .pixels = pixels, .row_length = pitch / getBytesPerPixel(layout_)};
}

bool CFrameConverter::fits(std::span<const std::byte> pixels, int pitch) const {
    const int bytes_per_pixel = getBytesPerPixel(layout_);
    const int row_bytes = width_ * bytes_per_pixel;
    if (width_ <= 0 || height_ <= 0 || pitch < row_bytes || pitch % bytes_per_pixel != 0) {
        return false;
    }
    // The last row needs only its own pixels, not the padding after them.
    const auto needed = (static_cast<std::size_t>(pitch) * static_cast<std::size_t>(height_ - 1)) +
                        static_cast<std::size_t>(row_bytes);
    return pixels.size() >= needed;
}

SFrameUpload CFrameConverter::expand(std::span<const std::byte> pixels, int pitch) {
    const auto width = static_cast<std::size_t>(width_);
    const auto height = static_cast<std::size_t>(height_);
    expanded_.resize(width * height * kBgraSize);
    for (std::size_t y = 0; y < height; ++y) {
        const auto row = pixels.subspan(y * static_cast<std::size_t>(pitch), width);
        auto out = std::span(expanded_).subspan(y * width * kBgraSize, width * kBgraSize);
        for (std::size_t x = 0; x < width; ++x) {
            const auto &entry = palette_.at(std::to_integer<std::size_t>(row[x]));
            std::ranges::copy(entry, out.subspan(x * kBgraSize, kBgraSize).begin());
        }
    }
    return {.layout = EPixelLayout::Bgra8888, .pixels = expanded_, .row_length = width_};
}

} // namespace nocturne::common
