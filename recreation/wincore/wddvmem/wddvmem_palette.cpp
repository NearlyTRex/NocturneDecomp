#include "engine/2d/2d.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "platform/renderer.h"
#include "wincore/wddvmem/wddvmem.h"

#include <cstddef>

namespace nocturne::wincore {
namespace {

// x86 shifts by the low five bits of the count; a channel with no dither bits has a shift of 32.
std::uint32_t shiftRight(std::uint32_t value, int count) {
    return value >> (static_cast<unsigned>(count) & 31U);
}

std::uint32_t shiftLeft(std::uint32_t value, int count) {
    return value << (static_cast<unsigned>(count) & 31U);
}

// An 8-bit level scaled down to the channel's width and moved to its place.
std::uint32_t packLevel(std::uint8_t level, const common::SChannelLayout &channel) {
    return shiftLeft(level / static_cast<std::uint32_t>(channel.scale_factor),
                     channel.bit_position);
}

} // namespace

// nocedit 0x005ed8f0
void CWddVMem::setupColorPalette() {
    if (special_.getUseExternalRenderer()) {
        renderer_.setColorTable16(two_d_.getSourcePaletteData().data(), color_table16_.data());
        convertPaletteToDirectColor();
        return;
    }
    if (bits_per_pixel_ == 8) {
        display_.setPalette(two_d_.getSourcePaletteData());
        return;
    }
    analyzePixelFormat();
}

// Locking the back surface only read its channel masks, which the display reports directly.
// nocedit 0x005ed730
void CWddVMem::analyzePixelFormat() {
    const common::SPixelFormat format = display_.getPixelFormat();
    color_channels_.red = common::getChannelLayout(format.red_mask);
    color_channels_.green = common::getChannelLayout(format.green_mask);
    color_channels_.blue = common::getChannelLayout(format.blue_mask);
    convertPaletteToDirectColor();
}

// nocedit 0x004f41c0
void CWddVMem::convertPaletteToDirectColor() {
    if (bits_per_pixel_ == 16) {
        convertPaletteTo16Bit();
        return;
    }
    if (bits_per_pixel_ != 32) {
        return;
    }
    const engine::C2d::Palette &palette = two_d_.getSourcePaletteData();
    for (std::size_t i = 0; i < color_table32_.size(); ++i) {
        color_table32_[i] = shiftLeft(palette[i * 3], color_channels_.red.bit_position) |
                            shiftLeft(palette[(i * 3) + 1], color_channels_.green.bit_position) |
                            shiftLeft(palette[(i * 3) + 2], color_channels_.blue.bit_position);
    }
}

void CWddVMem::convertPaletteTo16Bit() {
    const engine::C2d::Palette &palette = two_d_.getSourcePaletteData();
    const engine::SColorChannels &channels = color_channels_;
    for (std::size_t i = 0; i < color_table16_.size(); ++i) {
        color_table16_[i] =
            static_cast<std::uint16_t>(packLevel(palette[i * 3], channels.red) |
                                       packLevel(palette[(i * 3) + 1], channels.green) |
                                       packLevel(palette[(i * 3) + 2], channels.blue));
    }
    const std::uint32_t red_levels = shiftRight(0xff, channels.red.dither_shift);
    const std::uint32_t green_levels = shiftRight(0xff, channels.green.dither_shift);
    const std::uint32_t blue_levels = shiftRight(0xff, channels.blue.dither_shift);
    color_masks_.red_mask16 = shiftLeft(red_levels, channels.red.bit_position);
    color_masks_.green_mask16 = shiftLeft(green_levels, channels.green.bit_position);
    color_masks_.blue_mask16 = shiftLeft(blue_levels, channels.blue.bit_position);
    color_masks_.red_mask32 = shiftLeft(red_levels, channels.red.dither_shift) << 16U;
    color_masks_.green_mask32 = shiftLeft(green_levels, channels.green.dither_shift) << 8U;
    color_masks_.blue_mask32 = shiftLeft(blue_levels, channels.blue.dither_shift);
    color_masks_.blue_bit_shift = channels.blue.dither_shift;
    color_masks_.total_dither_shift =
        channels.red.dither_shift + channels.green.dither_shift + channels.blue.dither_shift;
    color_masks_.green_blue_dither_shift = channels.green.dither_shift + channels.blue.dither_shift;
}

} // namespace nocturne::wincore
