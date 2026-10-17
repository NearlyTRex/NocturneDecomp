#include "engine/texture/texturecache.h"

#include "common/error/error.h"
#include "common/math/bits.h"
#include "engine/2d/2d.h"
#include "engine/dosio/dosio.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"

#include <algorithm>
#include <bit>
#include <cstddef>
#include <format>
#include <optional>
#include <string_view>

namespace nocturne::engine {
namespace {

constexpr int kSmallestDimension = 32;
constexpr int kLargestDimension = 1024;
// The rasteriser's texel coordinates are 8.24.
constexpr int kTexelFractionBits = 24;

// The side of the square texture a file of this many texels holds; 0 for none.
int dimensionForSize(std::int64_t size) {
    for (int dimension = kSmallestDimension; dimension <= kLargestDimension; dimension *= 2) {
        if (size == static_cast<std::int64_t>(dimension) * dimension) {
            return dimension;
        }
    }
    return 0;
}

// A short file leaves the rest zero, where the original kept whatever the slot held.
void copyFile(std::string_view file, std::span<std::uint8_t> out) {
    std::ranges::transform(file.substr(0, out.size()), out.begin(),
                           [](char c) { return static_cast<std::uint8_t>(c); });
}

} // namespace

// deferred: clearing the cache's has-wrapped flag, with getTextureCacheStats
// nocedit 0x005dcab0
CTextureCache::CTextureCache(int max_texture_count, const STextureOwners &owners)
    : owners_(owners), max_texture_count_(max_texture_count),
      slots_(static_cast<std::size_t>(std::max(max_texture_count, 0))) {}

int CTextureCache::getMaxTextureCount() const {
    return max_texture_count_;
}

// deferred: clearing the cache's has-wrapped flag, with getTextureCacheStats
// nocedit 0x005dcb30
void CTextureCache::freeTextures() {
    current_texture_count_ = 0;
    std::ranges::fill(slots_, STextureSlot{});
}

// Retail quits with "Bad texture length" on 512 and 1024 textures; they load here, as in nocedit,
// so higher-resolution art works. The original read an .opa into a null buffer when the slot kept
// its dimension but had lost its opacity. A failed allocation throws where it quit "Out of memory".
// deferred: setting the cache's has-wrapped flag when the next slot goes back to the first, with
//   getTextureCacheStats
// nocedit 0x005dcc00
int CTextureCache::loadTexture(std::string_view texture_name) {
    const std::int64_t size = owners_.dosio.getFileSize("art", texture_name);
    const int dimension = dimensionForSize(size);
    if (dimension == 0) {
        common::displayErrorAndQuit(
            std::format("CTextureCache::load - Bad texture length : {},{}", texture_name, size));
    }
    const std::size_t dot = texture_name.find('.');
    if (dot == std::string_view::npos) {
        common::displayErrorAndQuit("CTextureCache::load - Can't find extension");
    }
    const std::string stem(texture_name.substr(0, dot));
    const auto texels = static_cast<std::size_t>(size);
    STextureSlot &slot = slots_[static_cast<std::size_t>(current_texture_count_)];
    slot.palette = {};
    if (const std::optional<std::string> palette = owners_.dosio.readFile("art", stem + ".act")) {
        copyFile(*palette, slot.palette);
    } else {
        slot.palette = owners_.two_d.getSourcePaletteData();
    }
    slot.name = texture_name;
    slot.data.assign(texels, 0);
    if (const std::optional<std::string> data = owners_.dosio.readFile("art", stem + ".raw")) {
        copyFile(*data, slot.data);
    }
    slot.opacity.clear();
    if (const std::optional<std::string> opacity = owners_.dosio.readFile("art", stem + ".opa")) {
        slot.opacity.assign(texels, 0);
        copyFile(*opacity, slot.opacity);
    }
    slot.dimension = dimension;
    const int index = current_texture_count_++;
    if (current_texture_count_ >= max_texture_count_) {
        current_texture_count_ = 0;
    }
    return index;
}

// nocedit 0x005dd180
int CTextureCache::findTexture(int hint_index, std::string_view texture_name) const {
    if (hint_index >= 0 && hint_index < max_texture_count_ &&
        slots_[static_cast<std::size_t>(hint_index)].name == texture_name) {
        return hint_index;
    }
    const auto loaded = std::span(slots_).first(static_cast<std::size_t>(current_texture_count_));
    const auto found = std::ranges::find(loaded, texture_name, &STextureSlot::name);
    return found == loaded.end() ? -1 : static_cast<int>(found - loaded.begin());
}

// The shifts and masks follow from the dimension; a slot never loaded leaves them as they were.
// Retail has no 512 or 1024 case, since its loadTexture rejects those sizes.
// nocedit 0x005dd200
void CTextureCache::setupTexture(int texture_index) {
    STextureSlot &slot = slots_.at(static_cast<std::size_t>(texture_index));
    SCurrentTexture &current = owners_.current_texture;
    current.data = slot.data;
    current.opacity = slot.opacity;
    current.offset_u = 0;
    current.offset_v = 0;
    current.dimension = slot.dimension;
    current.palette = slot.palette;
    if (!owners_.special.getUseExternalRenderer()) {
        setupHardwarePalettes(slot.palette);
    }
    if (slot.dimension == 0) {
        return;
    }
    const int bits = std::countr_zero(static_cast<unsigned>(slot.dimension));
    const auto mask = static_cast<std::uint32_t>(slot.dimension - 1);
    current.texture_shift1 = kTexelFractionBits - bits;
    current.texture_shift2 = kTexelFractionBits - (2 * bits);
    current.texture_mask1 = mask;
    current.texture_mask2 = mask << static_cast<unsigned>(bits);
    current.texture_bits = bits;
}

// Below 32 bits the 16-bit palette is in the mode's layout and the 32-bit one is plain 8-8-8; at
// 32 bits the 32-bit palette is in the mode's layout.
void CTextureCache::setupHardwarePalettes(std::span<const std::uint8_t, kPaletteBytes> palette) {
    const SColorChannels &channels = owners_.screen.getColorChannels();
    const std::span<std::uint16_t, 256> palette16 = owners_.screen.getHardwarePalette16();
    const std::span<std::uint32_t, 256> palette32 = owners_.screen.getHardwarePalette32();
    const bool is32 = owners_.screen.getBitsPerPixel() == 32;
    for (std::size_t i = 0; i < palette32.size(); ++i) {
        const std::uint32_t red = palette[i * 3];
        const std::uint32_t green = palette[(i * 3) + 1];
        const std::uint32_t blue = palette[(i * 3) + 2];
        if (is32) {
            palette32[i] = common::shiftLeft(red, channels.red.bit_position) |
                           common::shiftLeft(green, channels.green.bit_position) |
                           common::shiftLeft(blue, channels.blue.bit_position);
        } else {
            palette16[i] = static_cast<std::uint16_t>(common::packLevel(red, channels.red) |
                                                      common::packLevel(green, channels.green) |
                                                      common::packLevel(blue, channels.blue));
            palette32[i] = (red << 16U) | (green << 8U) | blue;
        }
    }
}

} // namespace nocturne::engine
