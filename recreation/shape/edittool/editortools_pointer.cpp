#include "engine/2d/2d.h"
#include "engine/gameclock.h"
#include "engine/package/gamecontent.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "shape/edittool/editortools.h"

#include <array>
#include <cstddef>
#include <cstdint>

namespace nocturne::shape {
namespace {

int roundUpToOdd(int size) {
    return size | 1;
}

} // namespace

// BW1's and BW3's colours were palette indices as they are; Nocturne's the nearest to cube
// colours.
// bw3 0x004803d0
// bw1 0x00497830
// nocedit 0x004a1330
int CEditorTools::getTimeCycledColorByte() {
    const auto phase = (static_cast<std::uint32_t>(game_clock_.getTime()) >> 16) & 3;
    const engine::SPointerLook &pointer = getListLook().pointer;
    const int colour = pointer.colours.at(phase);
    if (pointer.palette_indices) {
        return colour;
    }
    return two_d_.getColorCubeLookup()[static_cast<std::size_t>(colour)];
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
        height = getListLook().pointer.default_height;
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
    cursor_size_ = std::pair{roundUpToOdd(width), height};
}

int CEditorTools::getCursorWidth() const {
    return cursor_size_ ? cursor_size_->first : getListLook().pointer.size;
}

int CEditorTools::getCursorHeight() const {
    return cursor_size_ ? cursor_size_->second : getListLook().pointer.size;
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
    for (int offset = 1; offset <= getCursorWidth() / 2; ++offset) {
        plotPointerPixel(x - offset, y, use_clipping);
        plotPointerPixel(x + offset, y, use_clipping);
    }
    for (int offset = 1; offset <= getCursorHeight() / 2; ++offset) {
        plotPointerPixel(x, y - offset, use_clipping);
        plotPointerPixel(x, y + offset, use_clipping);
    }
}

// The original's stem stopped short of the serif rows, which skip the stem's column, so each
// serif came apart from the stem.
void CEditorTools::drawIBeamPointer(int x, int y, bool use_clipping) {
    const int top = y - (getCursorHeight() / 2);
    const int bottom = top + getCursorHeight() - 1;
    for (int stem_y = top; stem_y <= bottom; ++stem_y) {
        plotPointerPixel(x, stem_y, use_clipping);
    }
    for (int offset = 1; offset <= getCursorWidth() / 2; ++offset) {
        plotPointerPixel(x - offset, top, use_clipping);
        plotPointerPixel(x + offset, top, use_clipping);
        plotPointerPixel(x - offset, bottom, use_clipping);
        plotPointerPixel(x + offset, bottom, use_clipping);
    }
}

void CEditorTools::drawDiagonalPointer(int x, int y, bool use_clipping) {
    plotPointerPixel(x, y, use_clipping);
    for (int offset = 1; offset <= getCursorWidth() / 2; ++offset) {
        plotPointerPixel(x - offset, y - offset, use_clipping);
        plotPointerPixel(x + offset, y - offset, use_clipping);
        plotPointerPixel(x - offset, y + offset, use_clipping);
        plotPointerPixel(x + offset, y + offset, use_clipping);
    }
}

} // namespace nocturne::shape
