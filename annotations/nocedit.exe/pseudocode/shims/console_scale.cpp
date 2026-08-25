// =============================================================================
// CONSOLE SCALING — implementation
// =============================================================================
//
// See console_scale.h for what this is for and why the grid cannot just grow.

#include "console_scale.h"
#include "shim_config.h"

#include "nocturne.h"

// The 2D font's glyph bitmaps are `width` bytes per row for 11 rows —
// drawCharacterMaskedColor walks the scanline table from y*4 to y*4 + 0x2c.
#define CONSOLE_GLYPH_ROWS NOCTURNE_CONSOLE_CELL_H

// Scale up only while the grid still holds a usable console. 72 columns is the
// classic terminal width and clears the longest line the game logs; 16 rows
// keeps enough scrollback to read a startup sequence. Below either, a bigger
// glyph would be trading away more than it gains.
#define CONSOLE_MIN_COLUMNS 72
#define CONSOLE_MIN_ROWS    16

// Framebuffer to lay out against, before setScreenResolution has run.
#define CONSOLE_FALLBACK_W 640
#define CONSOLE_FALLBACK_H 480

static int console_screen_width(void) {
    return (g_WindowWidth > 0) ? g_WindowWidth : CONSOLE_FALLBACK_W;
}

static int console_screen_height(void) {
    return (g_WindowHeight > 0) ? g_WindowHeight : CONSOLE_FALLBACK_H;
}

static int console_columns(int screen_x, int max_cols, int scale) {
    // One pixel spare on the right for render's border line.
    int cols = (console_screen_width() - screen_x - 1) /
               (NOCTURNE_CONSOLE_CELL_W * scale);
    if (cols > max_cols) cols = max_cols;
    if (cols < 1) cols = 1;
    return cols;
}

static int console_rows(int screen_y, int max_rows, int scale) {
    // Two spare below: render draws its bottom border one pixel past the grid.
    int rows = (console_screen_height() - screen_y - 2) /
               (NOCTURNE_CONSOLE_CELL_H * scale);
    if (rows > max_rows) rows = max_rows;
    if (rows < 1) rows = 1;
    return rows;
}

void nocturne_console_layout(int screen_x, int screen_y, int max_cols, int max_rows,
                             int *out_scale, int *out_cols, int *out_rows) {
    int scale = 1;

    // Largest integer scale that still leaves a usable grid. 640x480 and
    // 800x600 stay at 1x; 1024x768 and 1280x1024 reach 2x; 1920x1080 reaches 3x.
    while (scale < 8) {
        if (console_columns(screen_x, max_cols, scale + 1) < CONSOLE_MIN_COLUMNS) break;
        if (console_rows(screen_y, max_rows, scale + 1) < CONSOLE_MIN_ROWS) break;
        scale = scale + 1;
    }

    if (out_scale != 0) { *out_scale = scale; }
    if (out_cols  != 0) { *out_cols  = console_columns(screen_x, max_cols, scale); }
    if (out_rows  != 0) { *out_rows  = console_rows(screen_y, max_rows, scale); }
}

void nocturne_console_draw_char(int char_code, int x, int y, int color, int scale) {
    const SFontGlyph *glyph;
    const uchar *src;
    int glyph_w;
    int cell_w;
    int cell_h;
    int row;
    int col;
    int rep;

    if (scale < 1) { scale = 1; }
    // drawString skips everything below 0x20, so control characters never
    // reach the blitter there either.
    if (char_code < 0x20 || 0xff < char_code) { return; }

    glyph = &g_FontTable[char_code - 0x20];
    glyph_w = (int)glyph->width;
    if (glyph_w < 1) { return; }

    cell_w = glyph_w * scale;
    cell_h = CONSOLE_GLYPH_ROWS * scale;

    // drawCharacterMaskedColor rejects a glyph that would not fit whole rather
    // than clipping it (its `g_ClipBottom + -10 < y_pos` test is the 11-row
    // form of this). Same rule, widened to the scaled cell.
    if (x < g_ClipLeft || y < g_ClipTop) { return; }
    if (g_ClipRight < x + cell_w - 1 || g_ClipBottom < y + cell_h - 1) { return; }
    if ((int)(sizeof(g_ScreenBufferArray) / sizeof(g_ScreenBufferArray[0])) < y + cell_h) {
        return;
    }

    for (row = 0; row < cell_h; row++) {
        void *line = g_ScreenBufferArray[y + row];
        if (line == 0) { continue; }
        src = glyph->bitmap + (row / scale) * glyph_w;

        if (g_BitsPerPixel == 8) {
            byte *dst = (byte *)line + x;
            for (col = 0; col < glyph_w; col++) {
                if (src[col] != 0) {
                    for (rep = 0; rep < scale; rep++) { dst[col * scale + rep] = (byte)color; }
                }
            }
        }
        else if (g_BitsPerPixel == 0x10) {
            ushort *dst = (ushort *)line + x;
            for (col = 0; col < glyph_w; col++) {
                if (src[col] != 0) {
                    for (rep = 0; rep < scale; rep++) { dst[col * scale + rep] = g_ColorTable16[color]; }
                }
            }
        }
        else {
            uint *dst = (uint *)line + x;
            for (col = 0; col < glyph_w; col++) {
                if (src[col] != 0) {
                    for (rep = 0; rep < scale; rep++) { dst[col * scale + rep] = g_ColorTable32[color]; }
                }
            }
        }
    }
}
