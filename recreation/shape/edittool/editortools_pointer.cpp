#include "engine/2d/2d.h"
#include "engine/gameclock.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "shape/edittool/editortools.h"

#include <array>
#include <cstddef>
#include <cstdint>

namespace nocturne::shape {
namespace {

// The colour cube's black, white, green and magenta.
constexpr std::array<std::size_t, 4> kCycleColors = {0, 0x7fff, 0x3e0, 0x7c1f};
constexpr int kDefaultCursorHeight = 11;

int roundUpToOdd(int size) {
    return size | 1;
}

} // namespace

// nocedit 0x004a1330
int CEditorTools::getTimeCycledColorByte() {
    const auto phase = (static_cast<std::uint32_t>(game_clock_.getTime()) >> 16) & 3;
    return two_d_.getColorCubeLookup()[kCycleColors[phase]];
}

// The original's clip test left out the clip's right column and bottom row.
// nocedit 0x004a1380
void CEditorTools::drawMousePointer(bool use_clipping) {
    two_d_.setActiveRenderColor(getTimeCycledColorByte());
    const int mouse_x = raw_input_.getMouseX();
    const int mouse_y = raw_input_.getMouseY();
    if (mouse_cursor_type_ == EMouseCursorType::Cross) {
        drawCrossPointer(mouse_x, mouse_y, use_clipping);
    } else if (mouse_cursor_type_ == EMouseCursorType::IBeam) {
        drawIBeamPointer(mouse_x, mouse_y, use_clipping);
    } else {
        drawDiagonalPointer(mouse_x, mouse_y, use_clipping);
    }
}

// The original also failed on a type outside the three, which the enum can't hold.
// nocedit 0x004a2920
void CEditorTools::setMousePointerType(EMouseCursorType cursor_type, int height, int width) {
    mouse_cursor_type_ = cursor_type;
    if (height < 1) {
        height = kDefaultCursorHeight;
    }
    if (cursor_type == EMouseCursorType::IBeam) {
        if (width < 1) {
            width = height / 2;
        }
    } else {
        if (width < 1) {
            width = ((height * screen_.getWindowWidth() * 3) / screen_.getWindowHeight()) / 4;
        }
        height = roundUpToOdd(height);
    }
    cursor_size_horizontal_ = roundUpToOdd(width);
    cursor_size_vertical_ = height;
}

void CEditorTools::plotPointerPixel(int x, int y, bool use_clipping) {
    const engine::SClipRect clip = two_d_.getClipRect();
    if (use_clipping && (x < clip.left || x > clip.right || y < clip.top || y > clip.bottom)) {
        return;
    }
    two_d_.plotPixel(x, y);
}

void CEditorTools::drawCrossPointer(int x, int y, bool use_clipping) {
    plotPointerPixel(x, y, use_clipping);
    for (int offset = 1; offset <= cursor_size_horizontal_ / 2; ++offset) {
        plotPointerPixel(x - offset, y, use_clipping);
        plotPointerPixel(x + offset, y, use_clipping);
    }
    for (int offset = 1; offset <= cursor_size_vertical_ / 2; ++offset) {
        plotPointerPixel(x, y - offset, use_clipping);
        plotPointerPixel(x, y + offset, use_clipping);
    }
}

// The original's stem stopped short of the serif rows, which skip the stem's column, so each
// serif came apart from the stem.
void CEditorTools::drawIBeamPointer(int x, int y, bool use_clipping) {
    const int top = y - (cursor_size_vertical_ / 2);
    const int bottom = top + cursor_size_vertical_ - 1;
    for (int stem_y = top; stem_y <= bottom; ++stem_y) {
        plotPointerPixel(x, stem_y, use_clipping);
    }
    for (int offset = 1; offset <= cursor_size_horizontal_ / 2; ++offset) {
        plotPointerPixel(x - offset, top, use_clipping);
        plotPointerPixel(x + offset, top, use_clipping);
        plotPointerPixel(x - offset, bottom, use_clipping);
        plotPointerPixel(x + offset, bottom, use_clipping);
    }
}

void CEditorTools::drawDiagonalPointer(int x, int y, bool use_clipping) {
    plotPointerPixel(x, y, use_clipping);
    for (int offset = 1; offset <= cursor_size_horizontal_ / 2; ++offset) {
        plotPointerPixel(x - offset, y - offset, use_clipping);
        plotPointerPixel(x + offset, y - offset, use_clipping);
        plotPointerPixel(x - offset, y + offset, use_clipping);
        plotPointerPixel(x + offset, y + offset, use_clipping);
    }
}

} // namespace nocturne::shape
