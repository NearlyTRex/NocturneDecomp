#include "common/math/bits.h"
#include "common/video/framebuffer.h"
#include "engine/2d/2d.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "platform/renderer.h"
#include "wincore/wddvmem/wddvmem.h"

#include <cstddef>

namespace nocturne::wincore {

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
        color_table32_[i] =
            common::shiftLeft(palette[i * 3], color_channels_.red.bit_position) |
            common::shiftLeft(palette[(i * 3) + 1], color_channels_.green.bit_position) |
            common::shiftLeft(palette[(i * 3) + 2], color_channels_.blue.bit_position);
    }
}

void CWddVMem::convertPaletteTo16Bit() {
    const engine::C2d::Palette &palette = two_d_.getSourcePaletteData();
    const engine::SColorChannels &channels = color_channels_;
    for (std::size_t i = 0; i < color_table16_.size(); ++i) {
        color_table16_[i] =
            static_cast<std::uint16_t>(common::packLevel(palette[i * 3], channels.red) |
                                       common::packLevel(palette[(i * 3) + 1], channels.green) |
                                       common::packLevel(palette[(i * 3) + 2], channels.blue));
    }
    const std::uint32_t red_levels = common::shiftRight(0xff, channels.red.dither_shift);
    const std::uint32_t green_levels = common::shiftRight(0xff, channels.green.dither_shift);
    const std::uint32_t blue_levels = common::shiftRight(0xff, channels.blue.dither_shift);
    color_masks_.red_mask16 = common::shiftLeft(red_levels, channels.red.bit_position);
    color_masks_.green_mask16 = common::shiftLeft(green_levels, channels.green.bit_position);
    color_masks_.blue_mask16 = common::shiftLeft(blue_levels, channels.blue.bit_position);
    color_masks_.red_mask32 = common::shiftLeft(red_levels, channels.red.dither_shift) << 16U;
    color_masks_.green_mask32 = common::shiftLeft(green_levels, channels.green.dither_shift) << 8U;
    color_masks_.blue_mask32 = common::shiftLeft(blue_levels, channels.blue.dither_shift);
    color_masks_.blue_bit_shift = channels.blue.dither_shift;
    color_masks_.total_dither_shift =
        channels.red.dither_shift + channels.green.dither_shift + channels.blue.dither_shift;
    color_masks_.green_blue_dither_shift = channels.green.dither_shift + channels.blue.dither_shift;
}

} // namespace nocturne::wincore
