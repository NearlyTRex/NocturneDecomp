#include "wincore/wddvmem/wddvmem.h"

#include "engine/2d/2d.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "platform/renderer.h"
#include "wincore/winrun/winrun.h"

#include <utility>

namespace nocturne::wincore {
namespace {

// What the original's setScreenResolution does to clear every buffer of the flip chain.
constexpr int kClearedSwaps = 3;

} // namespace

CWddVMem::CWddVMem(platform::IDisplay &display, platform::IRenderer &renderer, CWinRun &winrun,
                   engine::CSpecial &special, engine::C2d &two_d)
    : display_(display), renderer_(renderer), winrun_(winrun), special_(special), two_d_(two_d) {}

// The DirectDraw object it recreated belongs to the display adapter.
// nocedit 0x005ecc10
int CWddVMem::initializeGraphicsSystem(int /*width*/, int /*height*/) {
    allocateRenderBuffers();
    special_.loadExternalRenderer();
    return 1;
}

// freeRenderBuffers released the old buffers first; assigning new ones does that here.
// nocedit 0x005ecac0
// nocedit 0x005ecba0
void CWddVMem::allocateRenderBuffers() {
    const std::size_t pixels =
        static_cast<std::size_t>(window_width_) * static_cast<std::size_t>(window_height_);
    back_buffer_.assign(getRowBytes() * static_cast<std::size_t>(window_height_), std::byte{0});
    back_surface_.assign(back_buffer_.size(), std::byte{0});
    z_buffer_.assign(pixels, 0);
}

// nocedit 0x005ece60
void CWddVMem::initializeScanlinePointers() {
    const std::size_t row_bytes = getRowBytes();
    const auto width = static_cast<std::size_t>(window_width_);
    for (std::size_t y = 0; std::cmp_less(y, window_height_); ++y) {
        screen_buffer_array_[y] = back_buffer_.data() + (y * row_bytes);
        z_buffer_scanline_array_[y] = z_buffer_.data() + (y * width);
    }
}

// The original took the new size and depth and replaced the buffers before asking for the mode,
// so a refusal left rows pointing into freed buffers; here the old mode stays whole. Its 24-bit
// retry of a refused 32-bit mode never runs: the display takes all three depths.
// nocedit 0x005ecef0
bool CWddVMem::setScreenResolution(int width, int height, int bits_per_pixel) {
    if (bits_per_pixel != 8 && bits_per_pixel != 16 && bits_per_pixel != 32) {
        return false;
    }
    if (width <= 0 || height <= 0 || std::cmp_greater(height, kMaxScanlines) ||
        !display_.setDisplayMode(width, height, bits_per_pixel)) {
        return false;
    }
    bits_per_pixel_ = bits_per_pixel;
    window_width_ = width;
    window_height_ = height;
    allocateRenderBuffers();
    initializeScanlinePointers();
    two_d_.setupViewportAndClipping(0, 0, width - 1, height - 1);
    setupColorPalette();
    for (int i = 0; i < kClearedSwaps; ++i) {
        special_.clearScreen();
        swapBuffers();
    }
    return true;
}

// nocedit 0x005ed580
void CWddVMem::openScreenDevice() {
    if (special_.getUseExternalRenderer()) {
        return;
    }
    const std::size_t row_bytes = getRowBytes();
    for (std::size_t y = 0; std::cmp_less(y, window_height_); ++y) {
        screen_buffer_array_[y] = back_surface_.data() + (y * row_bytes);
    }
}

// nocedit 0x005ed630
void CWddVMem::closeScreenDevice() {
    if (!special_.getUseExternalRenderer()) {
        initializeScanlinePointers();
    }
    flip_pending_ = true;
}

// A frame drawn on the back surface is shown as it is; otherwise the back buffer is.
// nocedit 0x005eda20
void CWddVMem::swapBuffers() {
    if (special_.getUseExternalRenderer()) {
        special_.presentToExternalRenderer();
    } else {
        display_.present(flip_pending_ ? back_surface_ : back_buffer_,
                         static_cast<int>(getRowBytes()));
    }
    flip_pending_ = false;
    winrun_.processWindowMessages();
}

std::size_t CWddVMem::getRowBytes() const {
    return static_cast<std::size_t>(window_width_) * static_cast<std::size_t>(bits_per_pixel_ / 8);
}

int CWddVMem::getWindowWidth() const {
    return window_width_;
}

int CWddVMem::getWindowHeight() const {
    return window_height_;
}

int CWddVMem::getBitsPerPixel() const {
    return bits_per_pixel_;
}

void CWddVMem::setBitsPerPixel(int bits_per_pixel) {
    bits_per_pixel_ = bits_per_pixel;
}

std::span<void *> CWddVMem::getScreenRows() {
    return screen_buffer_array_;
}

std::span<std::uint32_t *> CWddVMem::getZBufferRows() {
    return z_buffer_scanline_array_;
}

std::span<std::uint16_t, 256> CWddVMem::getColorTable16() {
    return color_table16_;
}

std::span<const std::uint32_t, 256> CWddVMem::getColorTable32() const {
    return color_table32_;
}

std::span<std::uint16_t, 256> CWddVMem::getHardwarePalette16() {
    return hardware_palette16_;
}

std::span<std::uint32_t, 256> CWddVMem::getHardwarePalette32() {
    return hardware_palette32_;
}

engine::SColorChannels &CWddVMem::getColorChannels() {
    return color_channels_;
}

const engine::SColorMasks &CWddVMem::getColorMasks() const {
    return color_masks_;
}

} // namespace nocturne::wincore
