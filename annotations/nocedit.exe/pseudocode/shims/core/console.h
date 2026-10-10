#pragma once

// =============================================================================
// CONSOLE — sizing, history and glyph rendering for CConsole
// =============================================================================
//
// An addition, not a reconstruction. Three things the shipped console cannot do
// on a modern window, kept together because they are one feature:
//
//   sizing   The console is built once in engine/console.cpp's static init with
//            a fixed grid, and CConsole::render hardcodes a 7x11-pixel character
//            cell, so its on-screen size is a constant number of pixels no
//            matter what the framebuffer is. At 640x480 that filled the screen;
//            at 1280x1024 it is a quarter of it, in unreadably small text. The
//            fill comes from scaling the glyphs — the same grid, in bigger
//            pixels — with rows and columns trimmed to what fits at that scale.
//
//   history  CConsole::console_buffer is 4000 bytes with an 80-byte row stride
//            baked into CConsole::writeChar's addressing (`row*4 + row << 4` at
//            0044198d), so the shipped console can never exceed 80 columns or
//            50 rows however much room the window has. The grid below belongs
//            to the shim instead, which lets the console both fill a large
//            window and keep more scrollback than 50 lines.
//
//   borders  CConsole::render frames the grid with four drawLine calls. They
//            are drawn from the grid extent, so at any size where the glyph
//            scale does not divide the framebuffer exactly they sit off the
//            text rather than around it. The dev path omits them.
//
// Gated by NOCTURNE_AUTHENTIC_CONSOLE: with it set the console is the shipped
// 40x32 grid rendered 1x through drawString inside its border box, out of the
// struct's own buffer, and none of this is reached.

#ifdef __cplusplus
extern "C" {
#endif

// Character cell of the 2D console font at 1x. The width is CConsole::render's
// own per-column advance (glyphs are proportional and may be a pixel or two
// wider); the height is the glyph bitmap's row count.
#define NOCTURNE_CONSOLE_CELL_W 7
#define NOCTURNE_CONSOLE_CELL_H 11

// Extent of the shim-owned grid. Wide enough for the longest line the game
// logs at 1x on an ultrawide, and deep enough that the scrollback outlives a
// full startup sequence; 256 x 200 is 50 KB, against the struct's 4 KB.
#define NOCTURNE_CONSOLE_MAX_COLS 256
#define NOCTURNE_CONSOLE_MAX_ROWS 200

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

// --- history grid ------------------------------------------------------------
//
// Replaces CConsole::console_buffer on the dev path. Same shape — a flat char
// grid, one row per line, NUL for an empty cell — so the console code keeps its
// original row-pointer walk and only the base and stride change.

// Base of `row`, or NULL if the row is outside the grid. Callers index it by
// column exactly as they indexed console_buffer.
char *nocturne_console_row(int row);

// Bytes per row. The counterpart of GAME_CONSOLE_ROW_STRIDE.
int nocturne_console_stride(void);

// Drop the top line and blank the last, over `width` columns of `height` rows —
// the shipped scrollUp, against the shim grid.
void nocturne_console_scroll_up(int width, int height);

// Blank the whole grid.
void nocturne_console_clear(void);

// Rows the write cursor may advance through before the grid scrolls. The
// shipped console bounds the cursor by the number of VISIBLE rows, so a line
// leaving the screen is destroyed; bounding it by the grid instead is what
// turns the extra rows into scrollback.
int nocturne_console_capacity(void);

// --- view window -------------------------------------------------------------
//
// The grid holds more rows than the screen shows, so render draws a window into
// it. The window follows the newest output until the user scrolls back, then
// holds its position — including while new lines arrive, so reading history is
// not interrupted by output.

// First grid row to draw, for a cursor at `cursor_row` and `visible_rows` on
// screen. Clamped to the rows that actually exist.
int nocturne_console_view_top(int cursor_row, int visible_rows);

// Move the window by `delta_rows` (negative scrolls back into history) and stop
// following the newest output unless the move lands at the bottom.
void nocturne_console_scroll_view(int delta_rows, int cursor_row, int visible_rows);

// Resume following the newest output.
void nocturne_console_reset_view(void);

// The console's own input, polled from render so it runs exactly while the
// console is on screen and nothing has to be threaded through the game's
// hotkey handling: PageUp/PageDown page the window, End returns to the newest,
// and the mouse wheel scrolls a few lines a notch.
void nocturne_console_process_input(int cursor_row, int visible_rows);

#ifdef __cplusplus
}
#endif
