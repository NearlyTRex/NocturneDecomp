#pragma once

// =============================================================================
// CONSOLE SCALING — resolution-aware sizing for CConsole
// =============================================================================
//
// An addition, not a reconstruction. The console is built once in
// engine/console.cpp's static init with a fixed grid, and CConsole::render
// hardcodes a 7x11-pixel character cell, so its on-screen size is a constant
// number of pixels no matter what the framebuffer is. At 640x480 that filled
// the screen; at 1280x1024 it is a quarter of it, in unreadably small text.
//
// The grid itself cannot simply grow: CConsole::console_buffer is 4000 bytes
// with an 80-byte row stride baked into CConsole::writeChar's addressing
// (`row*4 + row << 4` at 0044198d), capping the console at 80 columns and 50
// rows. So the fill comes from scaling the glyphs instead — the same grid, in
// bigger pixels — with the row and column counts trimmed to whatever the
// framebuffer has room for at that scale.
//
// Gated by NOCTURNE_AUTHENTIC_CONSOLE: with it set the console renders exactly
// as shipped, 1x through drawString, and none of this is reached.

#ifdef __cplusplus
extern "C" {
#endif

// Character cell of the 2D console font at 1x. The width is CConsole::render's
// own per-column advance (glyphs are proportional and may be a pixel or two
// wider); the height is the glyph bitmap's row count.
#define NOCTURNE_CONSOLE_CELL_W 7
#define NOCTURNE_CONSOLE_CELL_H 11

// Fit the console to the current framebuffer (g_WindowWidth/g_WindowHeight).
// screen_x/screen_y are the console's top-left corner, max_cols/max_rows the
// caller's buffer limits. Writes the glyph scale to use and the grid that fits
// at that scale. Never returns a scale below 1 or an empty grid.
void nocturne_console_layout(int screen_x, int screen_y, int max_cols, int max_rows,
                             int *out_scale, int *out_cols, int *out_rows);

// One console glyph blitted at `scale`x, mirroring drawCharacterMaskedColor's
// clip rule, palette lookup and 8/16/32bpp paths. Pixel-identical to it at
// scale 1. Characters below 0x20 draw nothing, as they do there.
void nocturne_console_draw_char(int char_code, int x, int y, int color, int scale);

#ifdef __cplusplus
}
#endif
