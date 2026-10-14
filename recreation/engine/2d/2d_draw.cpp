#include "common/error/error.h"
#include "engine/2d/2d.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::engine {
namespace {

template <typename TPixel>
void fillPixels(std::span<void *> rows, int x, int y, int count, TPixel value) {
    auto *row = static_cast<TPixel *>(rows[static_cast<std::size_t>(y)]);
    std::fill_n(row + x, count, value);
}

} // namespace

bool C2d::fillRun(int x, int y, int count) {
    const std::span<void *> rows = screen_.getScreenRows();
    const auto color = static_cast<std::size_t>(active_render_color_);
    switch (screen_.getBitsPerPixel()) {
    case 8:
        fillPixels(rows, x, y, count, static_cast<std::uint8_t>(active_render_color_));
        return true;
    case 16:
        fillPixels(rows, x, y, count, screen_.getColorTable16()[color]);
        return true;
    case 32:
        fillPixels(rows, x, y, count, screen_.getColorTable32()[color]);
        return true;
    default:
        return false;
    }
}

// nocedit 0x00402ee0
void C2d::drawHLine(int x1, int y, int x2) {
    if (y < clip_top_ || y > clip_bottom_) {
        return;
    }
    x1 = std::max(x1, clip_left_);
    x2 = std::min(x2, clip_right_);
    const int count = (x2 - x1) + 1;
    if (count > 0 && !fillRun(x1, y, count)) {
        common::displayErrorAndQuit("hLine - invalid bitsPerPixel");
    }
}

// nocedit 0x00402ff0
void C2d::drawVLine(int x, int y1, int y2) {
    if (x < clip_left_ || x > clip_right_) {
        return;
    }
    y1 = std::max(y1, clip_top_);
    y2 = std::min(y2, clip_bottom_);
    for (int y = y1; y <= y2; ++y) {
        if (!fillRun(x, y, 1)) {
            common::displayErrorAndQuit("vLine - invalid bitsPerPixel");
        }
    }
}

// nocedit 0x00403120
void C2d::drawRect(int x1, int y1, int x2, int y2) {
    drawHLine(x1, y1, x2);
    drawHLine(x1, y2, x2);
    drawVLine(x1, y1, y2);
    drawVLine(x2, y1, y2);
}

// nocedit 0x00403170
void C2d::fillRectColor(int x1, int y1, int x2, int y2, int color) {
    const int saved_color = active_render_color_;
    x1 = std::max(x1, clip_left_);
    x2 = std::min(x2, clip_right_);
    if (x1 <= x2) {
        y1 = std::max(y1, clip_top_);
        y2 = std::min(y2, clip_bottom_);
        active_render_color_ = color;
        for (int y = y1; y <= y2; ++y) {
            drawHLine(x1, y, x2);
        }
    }
    active_render_color_ = saved_color;
}

// nocedit 0x00403200
void C2d::fillRectWithBorder(int x1, int y1, int x2, int y2, int fill_color, int border_color) {
    fillRectColor(x1, y1, x2, y2, fill_color);
    const int saved_color = active_render_color_;
    active_render_color_ = border_color;
    drawRect(x1 - 1, y1 - 1, x2 + 1, y2 + 1);
    active_render_color_ = saved_color;
}

// The original cleared, waited for the game clock to tick over and cleared again; the decomp
// doesn't wait, and nothing new arrives between two clears without a pump.
// nocedit 0x00403260
void C2d::clearInputAndWait() {
    raw_input_.clearInput();
}

} // namespace nocturne::engine
