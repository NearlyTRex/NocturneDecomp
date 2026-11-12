#pragma once

// =============================================================================
// FRONT-END LAYOUT — the 640x480 screens drawn at the game's resolution
// =============================================================================
//
// An addition, gated on NOCTURNE_AUTHENTIC_MENU. Every front-end screen is laid
// out for 640x480: the moon and its logo, the menu lists, the copyright, the
// fangs. The front end runs at the resolution the game will (with
// acceleration; 640x480 without), and draws that layout scaled to fit the
// screen and centred on it: text at the scale through the fractional text
// routines (core/ui_scale.h), pictures through nocturne_layout_display.
//
// At 640x480 the layout is the screen and every screen draws as it always has.
// A screen smaller than 640x480 - a mission's pause menu at a small mode -
// keeps the scale at 1 and the layout at its top-left, as before.

#include <math.h>

struct CAlphaBitmap;

#ifdef __cplusplus
extern "C" {
#endif

// The layout's size.
#define NOCTURNE_LAYOUT_WIDTH 640
#define NOCTURNE_LAYOUT_HEIGHT 480

// Where the layout sits on the screen and how much larger it is drawn.
typedef struct NocturneLayout {
    float scale;
    int left;
    int top;
} NocturneLayout;

// The layout on the screen as it is now (g_WindowWidth by g_WindowHeight).
NocturneLayout nocturne_layout(void);

// A layout length on the screen, at least a pixel for one of at least a pixel,
// and a layout point's screen position along each axis.
static inline int nocturne_layout_length(NocturneLayout layout, int length) {
    const int scaled = (int)lroundf((float)length * layout.scale);
    return length > 0 && scaled < 1 ? 1 : scaled;
}
static inline int nocturne_layout_x(NocturneLayout layout, int x) {
    return layout.left + (int)lroundf((float)x * layout.scale);
}
static inline int nocturne_layout_y(NocturneLayout layout, int y) {
    return layout.top + (int)lroundf((float)y * layout.scale);
}

// The mode the front end runs at: the picked resolution with acceleration, its
// width down to a multiple of 16 as clearScreen needs; else 640x480, as for a
// pick smaller than that.
void nocturne_front_end_mode(int *width, int *height);

// Puts the screen in the front end's mode at 32 bits, or in 640x480 where the
// renderer refuses it. setScreenResolution's answer: 0 when neither was taken.
int nocturne_front_end_set_mode(void);

// How the layout's pictures are enlarged, following the Upscaler setting:
// Nearest and xBR, a pixel-art filter, keep the pictures' pixels; Standard
// keeps them at a whole multiple; the rest blend.
#define NOCTURNE_LAYOUT_FILTER_NEAREST 0
#define NOCTURNE_LAYOUT_FILTER_SMOOTH 1
int nocturne_layout_filter(float scale);

// `bitmap` drawn into `width` by `height` at (x, y) on the screen, through the
// engine's alpha blend at `alpha`, its pixels repeated (NEAREST) or mixed with
// their neighbours (SMOOTH). Its own size is CAlphaBitmap::display. SMOOTH
// needs 32 bits; at 16 it is NEAREST.
void nocturne_alpha_display_scaled(struct CAlphaBitmap *bitmap, int x, int y, int width, int height,
                                   int alpha, int filter);

// `bitmap` at layout (x, y), its own size in the layout, drawn where and as
// large as the screen shows it, enlarged as nocturne_layout_filter says.
void nocturne_layout_display(struct CAlphaBitmap *bitmap, int x, int y, int alpha);

#ifdef __cplusplus
}
#endif
