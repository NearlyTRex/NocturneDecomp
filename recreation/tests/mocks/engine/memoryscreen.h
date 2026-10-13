#pragma once

#include "common/video/framebuffer.h"
#include "engine/screendevice.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <span>
#include <vector>

namespace nocturne::engine {

// A screen whose rows are real memory, in the display's 5-6-5 or 8-8-8 layout. Each colour table
// entry i is i in every channel.
class CMemoryScreen : public IScreenDevice {
public:
    CMemoryScreen(int width, int height, int bits_per_pixel)
        : width_(width), height_(height), bits_per_pixel_(bits_per_pixel),
          pixels_(static_cast<std::size_t>(width * height * ((bits_per_pixel + 7) / 8))),
          rows_(static_cast<std::size_t>(height)) {
        const std::size_t row_bytes = static_cast<std::size_t>(width * ((bits_per_pixel + 7) / 8));
        for (std::size_t y = 0; y < rows_.size(); ++y) {
            rows_[y] = pixels_.data() + (y * row_bytes);
        }
        const common::SPixelFormat format = common::getPixelFormat(
            bits_per_pixel == 16 ? common::EPixelLayout::Rgb565 : common::EPixelLayout::Bgra8888);
        channels_ = {.red = common::getChannelLayout(format.red_mask),
                     .green = common::getChannelLayout(format.green_mask),
                     .blue = common::getChannelLayout(format.blue_mask)};
        masks_.red_mask16 = format.red_mask;
        masks_.green_mask16 = format.green_mask;
        masks_.blue_mask16 = format.blue_mask;
        if (bits_per_pixel == 16) {
            masks_.red_mask32 = 0xf80000;
            masks_.green_mask32 = 0xfc00;
            masks_.blue_mask32 = 0xf8;
            masks_.blue_bit_shift = 3;
            masks_.total_dither_shift = 8;
            masks_.green_blue_dither_shift = 5;
        }
        for (std::size_t i = 0; i < 256; ++i) {
            color_table16_[i] = static_cast<std::uint16_t>(pack16(i, i, i));
            color_table32_[i] = static_cast<std::uint32_t>((i << 16U) | (i << 8U) | i);
        }
    }

    // A 5-6-5 pixel from 8-bit levels, as convertPaletteToDirectColor packs one.
    static std::uint32_t pack16(std::size_t red, std::size_t green, std::size_t blue) {
        return static_cast<std::uint32_t>(((red >> 3U) << 11U) | ((green >> 2U) << 5U) |
                                          (blue >> 3U));
    }

    int initializeGraphicsSystem(int, int) override {
        return 1;
    }
    bool setScreenResolution(int, int, int) override {
        return !refuse_modes;
    }
    void setupColorPalette() override {}
    void convertPaletteToDirectColor() override {}
    void openScreenDevice() override {}
    void closeScreenDevice() override {}
    void swapBuffers() override {
        ++swaps;
    }
    [[nodiscard]] int getWindowWidth() const override {
        return reported_width_ > 0 ? reported_width_ : width_;
    }

    // What the screen claims its width is, for a test of a mode change; the rows stay as made.
    void setWindowWidth(int width) {
        reported_width_ = width;
    }
    [[nodiscard]] int getWindowHeight() const override {
        return height_;
    }
    [[nodiscard]] int getBitsPerPixel() const override {
        return bits_per_pixel_;
    }
    void setBitsPerPixel(int bits_per_pixel) override {
        bits_per_pixel_ = bits_per_pixel;
    }
    [[nodiscard]] std::span<void *> getScreenRows() override {
        return rows_;
    }
    [[nodiscard]] std::span<std::uint32_t *> getZBufferRows() override {
        return {};
    }
    [[nodiscard]] std::span<std::uint16_t, 256> getColorTable16() override {
        return color_table16_;
    }
    [[nodiscard]] std::span<const std::uint32_t, 256> getColorTable32() const override {
        return color_table32_;
    }
    [[nodiscard]] std::span<std::uint16_t, 256> getHardwarePalette16() override {
        return hardware_palette16_;
    }
    [[nodiscard]] std::span<std::uint32_t, 256> getHardwarePalette32() override {
        return hardware_palette32_;
    }
    [[nodiscard]] SColorChannels &getColorChannels() override {
        return channels_;
    }
    [[nodiscard]] const SColorMasks &getColorMasks() const override {
        return masks_;
    }

    // The pixel at (x, y), whatever the depth.
    [[nodiscard]] std::uint32_t pixel(int x, int y) const {
        const int bytes = (bits_per_pixel_ + 7) / 8;
        std::uint32_t value = 0;
        std::memcpy(&value, pixels_.data() + (((y * width_) + x) * bytes),
                    static_cast<std::size_t>(bytes));
        return value;
    }

    void fill(std::uint32_t value) {
        for (int y = 0; y < height_; ++y) {
            for (int x = 0; x < width_; ++x) {
                setPixel(x, y, value);
            }
        }
    }

    void setPixel(int x, int y, std::uint32_t value) {
        const int bytes = (bits_per_pixel_ + 7) / 8;
        std::memcpy(pixels_.data() + (((y * width_) + x) * bytes), &value,
                    static_cast<std::size_t>(bytes));
    }

    int swaps = 0;
    // Every mode change is refused while set.
    bool refuse_modes = false;

private:
    int width_;
    int reported_width_ = 0;
    int height_;
    int bits_per_pixel_;
    std::vector<std::uint8_t> pixels_;
    std::vector<void *> rows_;
    std::array<std::uint16_t, 256> color_table16_{};
    std::array<std::uint32_t, 256> color_table32_{};
    std::array<std::uint16_t, 256> hardware_palette16_{};
    std::array<std::uint32_t, 256> hardware_palette32_{};
    SColorChannels channels_;
    SColorMasks masks_;
};

} // namespace nocturne::engine
