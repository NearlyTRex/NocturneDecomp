#include "common/error/error.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "engine/dosio/dosio.h"
#include "engine/drender/demonrenderer.h"
#include "engine/screendevice.h"
#include "engine/texture/currenttexture.h"
#include "support/codec/lzwdecompress.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

constexpr std::size_t kPaletteColors = 256;
constexpr std::size_t kPaletteSize = kPaletteColors * 3;
constexpr int kImageWidth = 640;
constexpr int kImageHeight = 480;
constexpr std::size_t kImageSize = static_cast<std::size_t>(kImageWidth) * kImageHeight;
constexpr int kHalfImageHeight = kImageHeight / 2;
constexpr int kFullBitsPerPixel = 32;
// Two bits off each channel, so four of them add up without carrying.
constexpr std::uint32_t kQuarterMask = 0xfcfcfc;
constexpr int kQuarterShift = 2;
constexpr std::uint32_t kChannelMask = 0xff;
constexpr int kGreenShift = 8;
constexpr int kRedShift = 16;
// 8.8 steps across the image, and the far side of each pixel's footprint.
constexpr int kImageWidthFixed = kImageWidth << 8;
constexpr int kImageHeightFixed = kImageHeight << 8;
constexpr int kFootprintWidthFixed = 0x27d80;
constexpr int kFootprintHeightFixed = 0x1de20;
constexpr int kFractionMask = 0xff;
constexpr int kFixedShift = 8;
constexpr std::size_t kTextureDimension = 256;
constexpr std::size_t kTextureSize = kTextureDimension * kTextureDimension;
// What the planes are shrunk to for a 512 by 384 window's display.
constexpr int kSmallWindowHeight = 384;
constexpr std::size_t kSmallDisplayWidth = 256;
constexpr std::size_t kSmallDisplayHeight = 192;
// The planes after the grid: their tag, at most this many compressed bytes, and their 6-bit
// values, each a quarter of the step from the value before it.
constexpr std::size_t kFogGridSize = sizeof(SFogGrid::planes);
constexpr std::size_t kTagSize = 3;
constexpr std::string_view kLzwTag = "LZW";
constexpr std::string_view kEfdTag = "EFD";
constexpr std::size_t kMaxCompressedFog = 500000;
constexpr int kFogDictionarySize = 0x10000;
constexpr int kFogValueBits = 6;
constexpr int kFogDeltaScale = 4;
constexpr int kDriftingFogPlanes = 16;

// The image is searched for where the backdrops are, then with the art.
std::optional<std::string> readBackdropFile(const engine::CDosIo &dosio,
                                            std::string_view filename) {
    std::optional<std::string> data = dosio.readFile("backdrop", filename);
    if (!data) {
        data = dosio.readFile("art", filename);
    }
    return data;
}

std::span<const std::uint8_t> asBytes(const std::string &data) {
    return {reinterpret_cast<const std::uint8_t *>(data.data()), data.size()};
}

// Each value is a running sum along its row, scaled, over the plane before's.
void undoFogDeltas(std::span<std::uint8_t> planes, int plane_count) {
    for (std::size_t plane = 0; std::cmp_less(plane, plane_count); ++plane) {
        const std::size_t start = plane * SCameraTables::kFogPlaneSize;
        for (std::size_t row = 0; row < SCameraTables::kFogPlaneHeight; ++row) {
            const std::size_t row_start = start + (row * SCameraTables::kFogPlaneWidth);
            int sum = 0;
            for (std::size_t x = 0; x < SCameraTables::kFogPlaneWidth; ++x) {
                std::uint8_t &value = planes[row_start + x];
                sum += static_cast<std::int8_t>(value);
                int decoded = sum * kFogDeltaScale;
                if (plane > 0) {
                    decoded += planes[row_start + x - SCameraTables::kFogPlaneSize];
                }
                value = static_cast<std::uint8_t>(decoded);
            }
        }
    }
}

// Each plane's top left as the small display's, picking the nearest of the plane.
void shrinkFogPlanes(std::span<std::uint8_t> planes, int plane_count) {
    for (std::size_t y = 0; y < kSmallDisplayHeight; ++y) {
        const std::size_t from_y = (y * SCameraTables::kFogPlaneHeight) / kSmallDisplayHeight;
        for (std::size_t x = 0; x < kSmallDisplayWidth; ++x) {
            const std::size_t from_x = (x * SCameraTables::kFogPlaneWidth) / kSmallDisplayWidth;
            for (std::size_t plane = 0; std::cmp_less(plane, plane_count); ++plane) {
                const std::size_t start = plane * SCameraTables::kFogPlaneSize;
                planes[start + (y * SCameraTables::kFogPlaneWidth) + x] =
                    planes[start + (from_y * SCameraTables::kFogPlaneWidth) + from_x];
            }
        }
    }
}

std::uint32_t channel(std::uint32_t color, int shift) {
    return (color >> shift) & kChannelMask;
}

} // namespace

// A short palette or image leaves the rest black, where the original kept the last one's.
// deferred: clearing the coronas' blurred light, with compositeLightmapToFramebuffer
// nocedit 0x0044f3e0
void CDemonCamera::loadImage(std::string_view filename) {
    const std::size_t dot = filename.find('.');
    if (dot == std::string_view::npos) {
        common::displayErrorAndQuit("CDemonCamera::loadImage - no extention");
    }
    const std::string_view stem = filename.substr(0, dot);
    const std::optional<std::string> palette_file =
        readBackdropFile(owners_.dosio, std::string(stem) + ".ACT");
    if (!palette_file) {
        return;
    }
    std::array<std::uint8_t, kPaletteSize> palette{};
    std::ranges::copy(asBytes(*palette_file).first(std::min(palette_file->size(), kPaletteSize)),
                      palette.begin());
    loadFog(std::string(stem) + ".fog");
    const std::optional<std::string> image_file = readBackdropFile(owners_.dosio, filename);
    if (!image_file) {
        return;
    }
    const std::array<std::uint32_t, kPaletteColors> colors = convertPaletteToDisplayFormat(palette);
    std::vector<std::uint8_t> image(kImageSize);
    std::ranges::copy(asBytes(*image_file).first(std::min(image_file->size(), kImageSize)),
                      image.begin());
    scaleImageToFramebuffer(image, colors);
    uploadBackdropTexture(image, palette);
    if (owners_.screen.getWindowHeight() == kSmallWindowHeight) {
        shrinkFogPlanes(owners_.tables.fog_planes, owners_.tables.fog_plane_count);
    }
}

// A fog with no density has blank planes. Without a tag the planes are raw, from just after the
// grid. The original's check of the decoder is left out: it never fails.
void CDemonCamera::loadFog(std::string_view filename) {
    const std::optional<std::string> file = owners_.dosio.readFile("backdrop", filename);
    if (!file) {
        return;
    }
    const std::span<const std::uint8_t> data = asBytes(*file);
    SCameraTables &tables = owners_.tables;
    std::memcpy(tables.fog_grid.planes.data(), data.data(), std::min(data.size(), kFogGridSize));
    std::vector<std::uint8_t> &planes = tables.fog_planes;
    if (tables.fog_grid.density_multiplier == 0) {
        std::ranges::fill(planes, 0);
        return;
    }
    const common::CVector3i &drift = tables.fog_grid.scroll_vector;
    tables.fog_plane_count = drift.x == 0 && drift.y == 0 && drift.z == 0 ? 1 : kDriftingFogPlanes;
    const std::size_t tag_start = std::min(data.size(), kFogGridSize);
    const std::size_t tag_end = std::min(data.size(), kFogGridSize + kTagSize);
    const std::string_view tag = std::string_view(*file).substr(tag_start, tag_end - tag_start);
    if (tag != kLzwTag && tag != kEfdTag) {
        const std::span<const std::uint8_t> raw =
            data.subspan(tag_end - std::min(tag_end, kTagSize));
        const std::size_t wanted =
            static_cast<std::size_t>(tables.fog_plane_count) * SCameraTables::kFogPlaneSize;
        std::ranges::copy(raw.first(std::min(raw.size(), wanted)), planes.begin());
        return;
    }
    const std::span<const std::uint8_t> compressed = data.subspan(tag_end);
    if (compressed.empty()) {
        common::displayErrorAndQuit(std::format("Hell froze loading {}", filename));
    }
    if (compressed.size() > kMaxCompressedFog) {
        common::displayErrorAndQuit(
            std::format("{} too big to fit in decompress buffer", filename));
    }
    support::CLZWDecompress decompress(kFogDictionarySize, kFogValueBits);
    decompress.init();
    std::vector<std::uint8_t> decoded;
    decompress.processBuffer(std::as_bytes(compressed), decoded);
    std::ranges::copy(std::span(decoded).first(std::min(decoded.size(), planes.size())),
                      planes.begin());
    undoFogDeltas(planes, tables.fog_plane_count);
}

// nocedit 0x0044f290
std::array<std::uint32_t, 256>
CDemonCamera::convertPaletteToDisplayFormat(std::span<const std::uint8_t> palette) const {
    std::array<std::uint32_t, kPaletteColors> colors{};
    const engine::SColorChannels &channels = owners_.screen.getColorChannels();
    const bool full = owners_.screen.getBitsPerPixel() == kFullBitsPerPixel;
    for (std::size_t index = 0; index < kPaletteColors; ++index) {
        const std::uint32_t red = palette[index * 3];
        const std::uint32_t green = palette[(index * 3) + 1];
        const std::uint32_t blue = palette[(index * 3) + 2];
        colors[index] = full ? (blue << channels.blue.bit_position) |
                                   (green << channels.green.bit_position) |
                                   (red << channels.red.bit_position)
                             : (red << kRedShift) | (green << kGreenShift) | blue;
    }
    return colors;
}

// At 240 lines each pixel is the average of four, at 480 a copy; between, four corners of the
// pixel's footprint weighted by their nearness across plus their nearness down. Each is divided
// by the weight it was given, so the backdrop keeps its brightness (the decomp's backdrop filter
// fix), where the original's constant made a 512 by 384 backdrop too bright and a 400 by 300 one
// cross-hatched. The original's nearest pixel above 480 lines is left out: init never makes one.
void CDemonCamera::scaleImageToFramebuffer(std::span<const std::uint8_t> image,
                                           const std::array<std::uint32_t, 256> &colors) {
    const auto at = [&](int x, int y) {
        return colors[image[(static_cast<std::size_t>(y) * kImageWidth) +
                            static_cast<std::size_t>(x)]];
    };
    auto pixel = framebuffer_.begin();
    if (framebuffer_height_ == kHalfImageHeight) {
        for (int y = 0; y < kHalfImageHeight; ++y) {
            for (int x = 0; x < kImageWidth / 2; ++x, ++pixel) {
                const auto quarter = [&](int from_x, int from_y) {
                    return (at(from_x, from_y) & kQuarterMask) >> kQuarterShift;
                };
                *pixel = quarter(x * 2, y * 2) + quarter((x * 2) + 1, y * 2) +
                         quarter(x * 2, (y * 2) + 1) + quarter((x * 2) + 1, (y * 2) + 1);
            }
        }
        return;
    }
    if (framebuffer_height_ == kImageHeight) {
        std::ranges::transform(image, framebuffer_.begin(),
                               [&](std::uint8_t index) { return colors[index]; });
        return;
    }
    for (int y = 0; y < framebuffer_height_; ++y) {
        const int top = (y * kImageHeightFixed) / framebuffer_height_;
        const int bottom = top + (kFootprintHeightFixed / framebuffer_height_);
        const auto near_top = static_cast<std::uint32_t>(kFractionMask - (top & kFractionMask));
        const auto near_bottom = static_cast<std::uint32_t>(bottom & kFractionMask);
        for (int x = 0; x < framebuffer_width_; ++x, ++pixel) {
            const int left = (x * kImageWidthFixed) / framebuffer_width_;
            const int right = left + (kFootprintWidthFixed / framebuffer_width_);
            const auto near_left =
                static_cast<std::uint32_t>(kFractionMask - (left & kFractionMask));
            const auto near_right = static_cast<std::uint32_t>(right & kFractionMask);
            const std::uint32_t top_left = at(left >> kFixedShift, top >> kFixedShift);
            const std::uint32_t top_right = at(right >> kFixedShift, top >> kFixedShift);
            const std::uint32_t bottom_left = at(left >> kFixedShift, bottom >> kFixedShift);
            const std::uint32_t bottom_right = at(right >> kFixedShift, bottom >> kFixedShift);
            const std::uint32_t weight =
                std::max((near_left + near_right + near_top + near_bottom) * 2, 1U);
            const auto filter = [&](int shift) {
                const std::uint32_t sum =
                    (channel(top_left, shift) * (near_top + near_left)) +
                    (channel(top_right, shift) * (near_right + near_top)) +
                    (channel(bottom_left, shift) * (near_left + near_bottom)) +
                    (channel(bottom_right, shift) * (near_bottom + near_right));
                return std::min(sum / weight, kChannelMask) << shift;
            };
            *pixel = filter(0) | filter(kGreenShift) | filter(kRedShift);
        }
    }
}

// As in retail, the image and palette go into the texture the capture selects; nocedit's copy
// inside loadImage had lost that (the decomp's backdrop slot fix).
// nocedit 0x0044f310
void CDemonCamera::uploadBackdropTexture(std::span<const std::uint8_t> image,
                                         std::span<std::uint8_t> palette) {
    std::array<std::uint8_t, kTextureSize> texels{};
    for (std::size_t row = 0; row < kTextureDimension; ++row) {
        const std::size_t from_row = (row * kImageHeight) / kTextureDimension;
        for (std::size_t column = 0; column < kTextureDimension; ++column) {
            const std::size_t from_column = (column * kImageWidth) / kTextureDimension;
            texels[(row * kTextureDimension) + column] =
                image[(from_row * kImageWidth) + from_column];
        }
    }
    platform::SMRGLTextureBasic &texture = owners_.tables.backdrop_texture;
    owners_.renderer.captureTexture(texture);
    const engine::SCurrentTexture &current = owners_.renderer.getSelectedTexture();
    std::ranges::copy(std::span(texels).first(std::min(current.data.size(), kTextureSize)),
                      current.data.begin());
    std::ranges::copy(palette.first(std::min(current.palette.size(), palette.size())),
                      current.palette.begin());
    owners_.renderer.updateTexture(texture, palette);
}

} // namespace nocturne::core
