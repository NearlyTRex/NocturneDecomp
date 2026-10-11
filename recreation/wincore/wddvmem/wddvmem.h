#pragma once

#include "engine/fwd.h"
#include "engine/screendevice.h"
#include "platform/fwd.h"
#include "wincore/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::wincore {

// The game's screen: a back buffer the software renderer draws into, a z-buffer, and the
// surface drawing can go to directly, each shown by swapBuffers. The display adapter takes
// every depth it is given, so the original's fall-back to 24 bits is gone.
class CWddVMem : public engine::IScreenDevice {
public:
    // The tallest mode the resolution list offers.
    static constexpr std::size_t kMaxScanlines = 1200;

    CWddVMem(platform::IDisplay &display, platform::IRenderer &renderer, CWinRun &winrun,
             engine::CSpecial &special, engine::C2d &two_d);

    // The buffers take the current mode's size; the arguments are not read.
    int initializeGraphicsSystem(int width, int height) override;
    void cleanupGraphicsSystem();
    bool setScreenResolution(int width, int height, int bits_per_pixel) override;
    void resetGraphicsSystem();
    void reinitializeGraphicsSystem();
    void openScreenDevice() override;
    void closeScreenDevice() override;
    void setupColorPalette() override;
    void convertPaletteToDirectColor() override;
    void swapBuffers() override;

    [[nodiscard]] int getWindowWidth() const override;
    [[nodiscard]] int getWindowHeight() const override;
    [[nodiscard]] int getBitsPerPixel() const override;
    void setBitsPerPixel(int bits_per_pixel) override;
    [[nodiscard]] std::span<void *> getScreenRows() override;
    [[nodiscard]] std::span<std::uint32_t *> getZBufferRows() override;
    [[nodiscard]] std::span<std::uint16_t, 256> getColorTable16() override;
    [[nodiscard]] std::span<const std::uint32_t, 256> getColorTable32() const override;
    [[nodiscard]] engine::SColorChannels &getColorChannels() override;
    [[nodiscard]] const engine::SColorMasks &getColorMasks() const override;

private:
    [[nodiscard]] std::size_t getRowBytes() const;
    void allocateRenderBuffers();
    void initializeScanlinePointers();
    void analyzePixelFormat();
    void convertPaletteTo16Bit();

    platform::IDisplay &display_;
    platform::IRenderer &renderer_;
    CWinRun &winrun_;
    engine::CSpecial &special_;
    engine::C2d &two_d_;
    int window_width_ = 320;
    int window_height_ = 200;
    int bits_per_pixel_ = 8;
    std::vector<std::byte> back_buffer_;
    // What openScreenDevice hands out, standing in for DirectDraw's back surface.
    std::vector<std::byte> back_surface_;
    std::vector<std::uint32_t> z_buffer_;
    std::array<void *, kMaxScanlines> screen_buffer_array_{};
    std::array<std::uint32_t *, kMaxScanlines> z_buffer_scanline_array_{};
    // The back surface was drawn into, so the next swap shows it.
    bool flip_pending_ = false;
    std::array<std::uint16_t, 256> color_table16_{};
    std::array<std::uint32_t, 256> color_table32_{};
    engine::SColorChannels color_channels_;
    engine::SColorMasks color_masks_;
};

} // namespace nocturne::wincore
