#pragma once

// =============================================================================
// DEBUG WINDOW SUPPORT — the game and engine 2D calls the debug window makes
// =============================================================================
//
// The globals it reads, defined here, and the frame-buffer mapping, the two
// views' renderers and drawText, stood in for and recording what they were
// handed. reset() puts everything back and gives the game, a script and three
// lights.

#include "nocturne.h"

#include <string>
#include <vector>

namespace debug_window_support {

struct Mapping {
    void *buffer;
    int width, height, bpp, stride;
};

struct Rect {
    int left, top, right, bottom;
};

struct Thumb {
    CDemonLight *light;
    int x, y, size;
};

struct Text {
    std::string text;
    int x, y;
};

struct Stand {
    CGame game = {};
    CScript script = {};
    CDemonLight lights[3] = {};

    std::vector<Mapping> mapped; // mapFrameBuffer
    int unmapped = 0;            // unmapFrameBuffer
    std::vector<Rect> editors;   // CScript::renderEditor
    std::vector<Thumb> thumbs;   // CDemonLight::renderShadowMapDebugView
    std::vector<Text> texts;     // drawText
    std::vector<void *> icons;   // nocturne_apply_window_icon's window
    // The script's text, as CStrList answers for it; getStringWidth makes
    // every character six pixels wide.
    std::vector<std::string> lines;
    // The pixel renderEditor writes at the mapped buffer's first byte, to show
    // the drawing reaches the window.
    unsigned char ink = 0xff;

    void reset();
};

extern Stand stand;

} // namespace debug_window_support
