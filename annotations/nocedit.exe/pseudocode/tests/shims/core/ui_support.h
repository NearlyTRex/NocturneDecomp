#pragma once

// =============================================================================
// UI SUPPORT — the framebuffer, fonts and engine draw calls the UI shims reach
// =============================================================================
//
// The game's globals they read, defined here; a framebuffer whose rows the
// screen-buffer table points at; and the engine's own text and bitmap routines,
// stood in for and recording what they were handed. A test sets the answers it
// needs and reads back the rest; reset() puts both back.

#include "nocturne.h"

#include <set>
#include <string>
#include <vector>

namespace ui_support {

// One call to a row blender or a whole-bitmap routine.
struct Row {
    void *dest;
    int count;
    int alpha;
    unsigned first; // the first source index, or the blend colour
};

struct Stand {
    std::vector<Row> rows32;            // renderAlphaRow32
    std::vector<Row> rows16;            // renderAlphaRow16
    std::vector<Row> blended;           // drawAlphaBlendedPixels
    std::vector<std::string> displayed; // CAlphaBitmap::display and render
    std::vector<std::string> drawn;     // CBitFont::drawText
    int palettes = 0;                   // CAlphaBitmap::initPalette
    int wraps = 0;                      // CBitFont::wrapText, and the width it was given
    int wrap_width = 0;
    int char_height = 10;   // getCharHeight; text width is 8 a character
    int updates = 0;        // CGame::updateDT
    int moon_frames = 0;    // CMoon::update and render, each
    std::vector<int> wheel; // nocturne_mouse_wheel_take, front first; 0 after
    std::set<int> pressed;  // keys read once by getAndClearKeyState

    void reset();
};

extern Stand stand;

// A framebuffer `width` x `height` of 32-bit cells, zeroed, at `bits` per
// pixel, the clip rectangle the whole of it.
void screen(int width, int height, int bits);

// The cell at (x, y), as 32 or 16 bits.
unsigned pixel32(int x, int y);
unsigned pixel16(int x, int y);

} // namespace ui_support
