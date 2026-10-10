#include "common/render/textureexpansion.h"
#include "common/video/framebuffer.h"
#include "platform/gl/gldevice.h"
#include "platform/gl/glrenderer.h"
#include "platform/mrgltexturebasic.h"

#include <algorithm>
#include <cstddef>
#include <string_view>

namespace nocturne::platform::gl {
namespace {

constexpr std::size_t kPaletteEntries = 256;
constexpr std::size_t kPaletteBytes = kPaletteEntries * 3;

std::string_view textureName(const SMRGLTextureBasic &texture) {
    const auto &name = texture.texture_name;
    return {name.data(), static_cast<std::size_t>(std::ranges::find(name, '\0') - name.begin())};
}

void publish(int *slot, int value) {
    if (slot != nullptr) {
        *slot = value;
    }
}

std::uint32_t packChannel(std::uint8_t level, const common::SChannelLayout &channel) {
    return (std::uint32_t{level} / static_cast<std::uint32_t>(channel.scale_factor))
           << static_cast<std::uint32_t>(channel.bit_position);
}

} // namespace

// Describes the frame's pixel format to the engine's 2D and converts its palette into the
// 16-bit table it draws with. The format is the CPU image the device shares, not a surface's.
int CGlRenderer::setColorTable16(std::uint8_t *source_palette, std::uint16_t *color_table) {
    color_palette_ = source_palette;
    if (!bridge_ || source_palette == nullptr) {
        return 1;
    }
    const bool is16 = hasDevice() && device_->getBitsPerPixel() == 16;
    const common::SPixelFormat format = common::getPixelFormat(
        is16 ? common::EPixelLayout::Rgb565 : common::EPixelLayout::Bgra8888);
    const common::SChannelLayout red = common::getChannelLayout(format.red_mask);
    const common::SChannelLayout green = common::getChannelLayout(format.green_mask);
    const common::SChannelLayout blue = common::getChannelLayout(format.blue_mask);
    publish(bridge_->red_bit_position, red.bit_position);
    publish(bridge_->red_scale_factor, red.scale_factor);
    publish(bridge_->red_dither_shift, red.dither_shift);
    publish(bridge_->green_bit_position, green.bit_position);
    publish(bridge_->green_scale_factor, green.scale_factor);
    publish(bridge_->green_dither_shift, green.dither_shift);
    publish(bridge_->blue_bit_position, blue.bit_position);
    publish(bridge_->blue_scale_factor, blue.scale_factor);
    publish(bridge_->blue_dither_shift, blue.dither_shift);
    if (color_table == nullptr) {
        return 1;
    }
    const std::span<const std::uint8_t> palette(source_palette, kPaletteBytes);
    const std::span<std::uint16_t> table(color_table, kPaletteEntries);
    for (std::size_t i = 0; i < kPaletteEntries; ++i) {
        // A 32-bit layout keeps its low half, as the table's entries are 16 bits wide.
        table[i] = static_cast<std::uint16_t>(packChannel(palette[i * 3], red) |
                                              packChannel(palette[(i * 3) + 1], green) |
                                              packChannel(palette[(i * 3) + 2], blue));
    }
    return 1;
}

// The dimension comes from the bridge, as the shipped renderer reads it, not from the
// argument.
int CGlRenderer::selectTexture(SMRGLTextureBasic *texture_info, int /*texture_dimension*/,
                               std::uint8_t *texture_data, std::uint8_t *palette_data,
                               std::uint8_t *opacity_data) {
    return nameTexture(texture_info, texture_data, palette_data, opacity_data, false);
}

// The engine calls this when an image changed under a name it has used before.
int CGlRenderer::updateTexture(SMRGLTextureBasic *texture_info, int /*texture_dimension*/,
                               std::uint8_t *texture_data, std::uint8_t *palette_data,
                               std::uint8_t *opacity_data) {
    return nameTexture(texture_info, texture_data, palette_data, opacity_data, true);
}

int CGlRenderer::nameTexture(const SMRGLTextureBasic *texture_info,
                             const std::uint8_t *texture_data, const std::uint8_t *palette_data,
                             const std::uint8_t *opacity_data, bool refresh) {
    texture_data_ = texture_data;
    texture_palette_ = palette_data;
    texture_opacity_ = opacity_data;
    texture_object_ = resolveTexture(texture_info, refresh);
    return 1;
}

GLuint CGlRenderer::resolveTexture(const SMRGLTextureBasic *texture_info, bool refresh) {
    if (!hasDevice() || texture_info == nullptr || texture_data_ == nullptr ||
        texture_palette_ == nullptr) {
        return 0;
    }
    const int dimension = readBridge(&CExternalRendererBridge::texture_dimension, 0);
    if (dimension <= 0 || dimension > kMaxTextureDimension) {
        return 0;
    }
    const std::string_view name = textureName(*texture_info);
    CGlTextureCache &textures = device_->getTextures();
    // selectTexture comes with every state change, so a resident image is answered without
    // touching its texels.
    if (!refresh) {
        if (const GLuint resident = textures.find(name, dimension); resident != 0) {
            return resident;
        }
    }
    const auto texels = static_cast<std::size_t>(dimension) * static_cast<std::size_t>(dimension);
    expanded_.resize(texels);
    const auto palette = common::packTexturePalette(
        std::span<const std::uint8_t, kPaletteBytes>(texture_palette_, kPaletteBytes));
    std::span<const std::uint8_t> opacity;
    if (texture_opacity_ != nullptr) {
        opacity = std::span(texture_opacity_, texels);
    }
    common::expandTexture(std::span(texture_data_, texels), palette, opacity, expanded_);
    return textures.upload(name, dimension, expanded_);
}

} // namespace nocturne::platform::gl
