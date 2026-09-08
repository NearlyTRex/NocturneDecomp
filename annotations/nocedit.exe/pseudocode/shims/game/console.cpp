// =============================================================================
// CONSOLE — implementation
// =============================================================================
//
// See game/console.h for what this is for and why the shipped grid cannot just
// grow in place.

#include "game/console.h"
#include "shim_config.h"

#include <string.h>

#include "nocturne.h"

// The 2D font's glyph bitmaps are `width` bytes per row for 11 rows —
// drawCharacterMaskedColor walks the scanline table from y*4 to y*4 + 0x2c.
#define CONSOLE_GLYPH_ROWS NOCTURNE_CONSOLE_CELL_H

// Scale up only while the grid still holds a usable console. 72 columns is the
// classic terminal width and clears the longest line the game logs. The row
// floor is what decides how much output is on screen at once: at 40 a 1920x1080
// window settles on 2x for 137x49 rather than 3x for 91x32, which is the whole
// point of reading a console. A window too short for 40 rows at 1x is unaffected
// — the floor only ever prevents scaling UP, never forces a scale down.
#define CONSOLE_MIN_COLUMNS 72
#define CONSOLE_MIN_ROWS    40

// Framebuffer to lay out against, before setScreenResolution has run.
#define CONSOLE_FALLBACK_W 640
#define CONSOLE_FALLBACK_H 480

// The shim's history grid. Static rather than allocated so it behaves like the
// struct member it stands in for: alive before any ctor runs, and zeroed, which
// is the empty console the game expects.
static char console_grid[NOCTURNE_CONSOLE_MAX_ROWS * NOCTURNE_CONSOLE_MAX_COLS];

// First grid row on screen, and whether the window is pinned to the newest
// line. Following is the default so an untouched console behaves as it always
// did — the newest output at the bottom.
static int console_view_top = 0;
static int console_follow = 1;

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

char *nocturne_console_row(int row) {
    if (row < 0 || NOCTURNE_CONSOLE_MAX_ROWS <= row) { return 0; }
    return console_grid + (size_t)row * NOCTURNE_CONSOLE_MAX_COLS;
}

int nocturne_console_stride(void) {
    return NOCTURNE_CONSOLE_MAX_COLS;
}

void nocturne_console_scroll_up(int width, int height) {
    int row;

    if (width < 0) { width = 0; }
    if (width > NOCTURNE_CONSOLE_MAX_COLS) { width = NOCTURNE_CONSOLE_MAX_COLS; }
    if (height > NOCTURNE_CONSOLE_MAX_ROWS) { height = NOCTURNE_CONSOLE_MAX_ROWS; }
    if (height < 1) { return; }

    for (row = 0; row < height - 1; row++) {
        memcpy(console_grid + (size_t)row * NOCTURNE_CONSOLE_MAX_COLS,
               console_grid + (size_t)(row + 1) * NOCTURNE_CONSOLE_MAX_COLS,
               (size_t)width);
    }
    memset(console_grid + (size_t)(height - 1) * NOCTURNE_CONSOLE_MAX_COLS, 0,
           (size_t)width);

    // Every row moved up one, so a held window has to move with its content or
    // it would appear to scroll on its own.
    if (!console_follow && console_view_top > 0) { console_view_top--; }
}

void nocturne_console_clear(void) {
    memset(console_grid, 0, sizeof(console_grid));
    nocturne_console_reset_view();
}

int nocturne_console_capacity(void) {
    return NOCTURNE_CONSOLE_MAX_ROWS;
}

// Topmost row the window can start at without running past the newest line.
static int console_max_top(int cursor_row, int visible_rows) {
    int max_top = (cursor_row + 1) - visible_rows;
    if (max_top < 0) { max_top = 0; }
    return max_top;
}

int nocturne_console_view_top(int cursor_row, int visible_rows) {
    int max_top = console_max_top(cursor_row, visible_rows);

    if (console_follow) { return max_top; }
    if (console_view_top > max_top) { console_view_top = max_top; }
    if (console_view_top < 0) { console_view_top = 0; }
    return console_view_top;
}

void nocturne_console_scroll_view(int delta_rows, int cursor_row, int visible_rows) {
    int max_top = console_max_top(cursor_row, visible_rows);

    // Scrolling back from the bottom starts at wherever the bottom currently is.
    if (console_follow) { console_view_top = max_top; }
    console_view_top = console_view_top + delta_rows;
    if (console_view_top > max_top) { console_view_top = max_top; }
    if (console_view_top < 0) { console_view_top = 0; }
    console_follow = (console_view_top >= max_top);
}

void nocturne_console_reset_view(void) {
    console_view_top = 0;
    console_follow = 1;
}

// Lines per wheel notch. Three is the usual terminal step and is small enough
// that a touchpad's fine-grained notches still feel like scrolling rather than
// paging.
#define CONSOLE_WHEEL_LINES 3

void nocturne_console_process_input(int cursor_row, int visible_rows) {
    int notches;

    // PageUp/PageDown/End are extended codes (0x149/0x151/0x14f). They read
    // correctly here because the console is drawn from the gameplay frame,
    // where runGameSession widens g_InputKeyMask to 0x1ff; on a screen still
    // running the 0x7f mask they would fold onto their numpad twins and never
    // fire.
    if (g_CKeysPtr != 0) {
        if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_PRIOR) != 0) {
            nocturne_console_scroll_view(-visible_rows, cursor_row, visible_rows);
        }
        if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_NEXT) != 0) {
            nocturne_console_scroll_view(visible_rows, cursor_row, visible_rows);
        }
        if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_END) != 0) {
            nocturne_console_reset_view();
        }
    }

    // Wheel notches arrive through the window proc's extra-message hook. A
    // notch away from the user is positive, and scrolls back into history.
    notches = nocturne_mouse_wheel_take();
    if (notches != 0) {
        nocturne_console_scroll_view(-notches * CONSOLE_WHEEL_LINES,
                                     cursor_row, visible_rows);
    }
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
