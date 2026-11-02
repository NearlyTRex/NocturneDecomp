#pragma once

// =============================================================================
// HUD LAYOUT — where the in-game HUD's boxes go
// =============================================================================
//
// An addition: the geometry the HUD (game/hud.h) is laid out with. The shipped
// HUD positions every element from the window's own corners, in whatever space
// it happens to be drawn in; above 640x480 that puts parts of one element in
// two spaces, and on a wider screen the scene they sit on is reframed under
// them. Here every element is a box placed in a parent box.
//
// The outermost box is the frame: the columns the scene's picture spans, at
// the screen's full height. On a pillarboxed screen that is the 4:3 picture, so
// the HUD sits on the game as it did at 4:3; otherwise it is the whole screen,
// and the HUD keeps to the screen's real corners.
//
// The inventory panels are drawn as 3D in the camera's own space. That space is
// laid onto the frame at one scale, its bottom-right corner on the frame's, so
// a panel the engine places in the camera's corner lands in the frame's, and
// its text, placed in the same box, lands on it.

namespace nocturne_hud {

// Screen pixels; right and bottom exclusive.
struct Rect {
    int left = 0;
    int top = 0;
    int right = 0;
    int bottom = 0;

    int width() const {
        return right - left;
    }
    int height() const {
        return bottom - top;
    }
};

// The HUD's frame on a `width` x `height` screen.
Rect frame(int width, int height);

// A space `space_width` x `space_height` laid onto a box at one scale, the
// space's bottom-right corner on the box's: a point (x, y) in it is at
// (x * scale + offset_x, y * scale + offset_y). The scale is the box's height
// over the space's.
struct Space {
    float scale = 1.0f;
    float offset_x = 0.0f;
    float offset_y = 0.0f;
};
Space corner_space(const Rect &box, int space_width, int space_height);

// A box `width` x `height` at the space's bottom-right corner, `inset` in from
// it on both sides, in the space's own units, as a screen rectangle.
Rect from_corner(const Rect &box, const Space &space, int width, int height, int inset = 0);

// Where a box of `width` x `height` goes in `parent`.
enum Anchor { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };
Rect place(const Rect &parent, Anchor anchor, int width, int height, int margin_x, int margin_y);

// `box` with `pad` taken off every side.
Rect inset(const Rect &box, int pad);

// The x at which a line `line_width` wide is centred in `box`.
int centre_x(const Rect &box, int line_width);

// The height of each letterbox bar at full extension: the 1.85:1 band the
// shipped bars leave, measured over the scene's 4:3 picture rather than over
// the window, so a wider screen does not thin the bars to nothing. Panned and
// scanned, the crop already takes off most of what the bars would cover, so
// a bar is what is left of the shipped one on screen, and no less than
// `least`.
int letterbox_bar(int width, int height, int least);

} // namespace nocturne_hud
