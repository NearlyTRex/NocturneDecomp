#pragma once

#include "engine/fwd.h"

#include <array>
#include <cstdint>
#include <span>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// How a scaled image fills its pixels: Nearest from the one under each, Smooth from the four
// around it, weighted by distance and opacity.
enum class EBitmapFilter : std::uint8_t {
    Nearest,
    Smooth,
};

// An indexed image with its own palette and an opacity per pixel, drawn over the screen.
class CAlphaBitmap {
public:
    CAlphaBitmap(const CDosIo &dosio, IScreenDevice &screen, CSpecial &special);
    ~CAlphaBitmap();

    void free();
    // art/<filename>.raw, .act and .opa, at width by height. Without an .opa, a pixel is opaque
    // unless its palette colour is black.
    void load(std::string_view filename, int width, int height);
    // alpha is a 16-bit level scaling every pixel's opacity.
    void display(int x, int y, int alpha);
    // Stretched to width by height with its corner at x, y; at the image's own size, display.
    void displayScaled(int x, int y, int width, int height, int alpha, EBitmapFilter filter);
    void render(int dest_x, int dest_y, int left_x, int top_y, int right_x, int bottom_y,
                int global_alpha);
    void scale(int scaleFactorX, int scaleFactorY);
    // Makes this image's palette the one indexed images draw with.
    void initPalette();
    // The palette indices, a row at a time.
    [[nodiscard]] std::span<const std::uint8_t> getRaw() const;
    [[nodiscard]] int getWidth() const;

private:
    void loadPalette(std::string_view filename);
    void loadOpacity(std::string_view filename);

    const CDosIo &dosio_;
    IScreenDevice &screen_;
    CSpecial &special_;
    std::vector<std::uint8_t> raw_;
    std::vector<std::uint8_t> opa_;
    // In the screen's 8-8-8 layout as it was at load.
    std::array<std::uint32_t, 256> act_{};
    int width_ = 0;
    int height_ = 0;
};

} // namespace nocturne::engine
