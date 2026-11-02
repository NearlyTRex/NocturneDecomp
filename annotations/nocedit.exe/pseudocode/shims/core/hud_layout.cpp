// =============================================================================
// HUD LAYOUT — implementation
// =============================================================================
//
// See hud_layout.h.

#include "core/hud_layout.h"

#include "gl/widescreen.h"

#include <cmath>

namespace nocturne_hud {

namespace {

int round_px(float value) {
    return (int)std::lround(value);
}

} // namespace

Rect frame(int width, int height) {
    Rect r;
    nocturne_widescreen_picture(width, height, &r.left, &r.right);
    r.top = 0;
    r.bottom = height;
    return r;
}

Space corner_space(const Rect &box, int space_width, int space_height) {
    Space s;
    s.scale = (float)box.height() / (float)space_height;
    s.offset_x = (float)box.right - (float)space_width * s.scale;
    s.offset_y = (float)box.bottom - (float)space_height * s.scale;
    return s;
}

Rect from_corner(const Rect &box, const Space &space, int width, int height, int inset) {
    Rect r;
    r.right = round_px((float)box.right - (float)inset * space.scale);
    r.bottom = round_px((float)box.bottom - (float)inset * space.scale);
    r.left = round_px((float)box.right - (float)(inset + width) * space.scale);
    r.top = round_px((float)box.bottom - (float)(inset + height) * space.scale);
    return r;
}

Rect place(const Rect &parent, Anchor anchor, int width, int height, int margin_x, int margin_y) {
    Rect r;
    const bool right = anchor == TOP_RIGHT || anchor == BOTTOM_RIGHT;
    const bool bottom = anchor == BOTTOM_LEFT || anchor == BOTTOM_RIGHT;
    r.left = right ? parent.right - margin_x - width : parent.left + margin_x;
    r.top = bottom ? parent.bottom - margin_y - height : parent.top + margin_y;
    r.right = r.left + width;
    r.bottom = r.top + height;
    return r;
}

Rect inset(const Rect &box, int pad) {
    Rect r;
    r.left = box.left + pad;
    r.top = box.top + pad;
    r.right = box.right - pad;
    r.bottom = box.bottom - pad;
    return r;
}

int centre_x(const Rect &box, int line_width) {
    return box.left + (box.width() - line_width) / 2;
}

int letterbox_bar(int width, int height, int least) {
    const int rows = nocturne_widescreen_shown_rows(width, height);
    if (rows < NOCTURNE_SCENE_HEIGHT) {
        // The shipped bar in scene rows, less the half of the crop that falls
        // above it — the crop is centred while the letterbox is up.
        const int bar_rows = (NOCTURNE_SCENE_HEIGHT - (NOCTURNE_SCENE_WIDTH * 100) / 0xb9) / 2;
        const int left_rows = bar_rows - (NOCTURNE_SCENE_HEIGHT - rows) / 2;
        const int bar = left_rows > 0 ? left_rows * height / rows : 0;
        return bar > least ? bar : least;
    }
    // The scene's picture is 4:3 however wide the window is; narrower windows
    // keep their own width, as shipped.
    const int picture = (height * 4) / 3 < width ? (height * 4) / 3 : width;
    return (height - (picture * 100) / 0xb9) / 2;
}

} // namespace nocturne_hud
