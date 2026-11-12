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
    int char_height = 10;          // getCharHeight; text width is 8 a character
    int updates = 0;               // CGame::updateDT
    int moon_frames = 0;           // CMoon::update and render, each
    std::vector<int> wheel;        // nocturne_mouse_wheel_take, front first; 0 after
    std::vector<int> viewports;    // pushViewport's width, or -1 for a pop, in order
    std::vector<float> overlays;   // begin_overlay's horizontal scale; 0 for an end
    std::vector<float> overlays_y; // and its vertical one
    int overlay_opens = 1;         // what begin_overlay answers
    std::set<int> pressed;         // keys read once by getAndClearKeyState
    int upscaler = 0;              // nocturne_upscaler_get
    // setScreenResolution: each mode asked for, "WxHxB"; it takes all but a
    // width in `refused`, and screen() is then that mode.
    std::vector<std::string> modes;
    std::set<int> refused;
    int resets = 0;                  // reinitializeGraphicsSystem
    int clears = 0;                  // clearScreen
    int swaps = 0;                   // swapBuffers
    std::vector<std::string> loaded; // CAlphaBitmap::load, "name WxH"
    int freed = 0;                   // CAlphaBitmap's destructor
    std::vector<int> displayed_at;   // CAlphaBitmap::display's x and y, in turn
    // OS fonts: each CWinFont made, "height y_offset1 y_offset2", and how many
    // freed. Text a font draws or measures through one is its height a
    // character wide, and each drawing is recorded as "text x y height".
    std::vector<std::string> os_fonts;
    int os_fonts_freed = 0;
    std::vector<std::string> os_drawn;

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
