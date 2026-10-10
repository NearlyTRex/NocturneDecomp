#pragma once

namespace nocturne::common {

struct SExtent {
    int width = 0;
    int height = 0;

    bool operator==(const SExtent &) const = default;
};

struct SPoint {
    int x = 0;
    int y = 0;

    bool operator==(const SPoint &) const = default;
};

struct SViewport {
    int x = 0;
    int y = 0;
    int width = 0;
    int height = 0;

    bool operator==(const SViewport &) const = default;
};

// How the game's frame sits in the window. Window units are what mouse events and warps use;
// drawable units are pixels, which differ on a high-density display.
struct SPresentation {
    SExtent window;
    SExtent drawable;
    // The render resolution; empty until a mode is set, when the drawable stands in for it.
    SExtent logical;
};

// The largest aspect-preserving fit of logical in drawable, centred. The scale is fractional and
// may be below one, so a window smaller than the render shows the whole frame shrunk.
[[nodiscard]] SViewport fitViewport(SExtent drawable, SExtent logical);
// Whether the fit is a whole multiple of the logical width, where nearest sampling stays even.
[[nodiscard]] bool isWholeMultiple(const SViewport &viewport, SExtent logical);
// A window point in render pixels, clamped into the frame so a click on a bar finds the edge.
[[nodiscard]] SPoint windowToLogical(const SPresentation &presentation, SPoint point);
// A render pixel's centre in window units, for warping the cursor onto it.
[[nodiscard]] SPoint logicalToWindow(const SPresentation &presentation, SPoint point);

} // namespace nocturne::common
