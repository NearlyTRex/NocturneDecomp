#pragma once

// =============================================================================
// UI SCALING — resolution-aware HUD elements
// =============================================================================
//
// An addition, not a reconstruction. Every in-game HUD element is fixed-size
// pixel art authored for 640x480: the battery and health bitmaps, the ammo
// icons, and all of the text, which comes from CBitFont glyph bitmaps rather
// than a scalable font. The engine's own concession to resolution is one step
// DOWNWARD — CInventory::loadAssets halves the bitmaps and the HUD picks
// g_MicroFont when the framebuffer is below 384 tall — with nothing in the
// other direction, so at 1024x768 and up the HUD shrinks into a corner.
//
// The OS-font path (CWinFont, SDL_ttf-backed through the wingdi shim) would
// have solved the text half by itself, but initFonts only builds those fonts
// when g_MessageCount is non-zero, i.e. when msglist.txt is present. It is not
// in the shipped POD, so every glyph on screen is a bitmap and scaling has to
// happen at blit time.
//
// These helpers take an integer scale and are exact no-ops at scale 1: they
// delegate straight to the engine routine they mirror, so a 640x480 frame is
// pixel-identical to the shipped build.
//
// Gated by NOCTURNE_AUTHENTIC_HUD_SCALE in shim_config.h.

struct CAlphaBitmap;
struct CBitFont;

#ifdef __cplusplus
extern "C" {
#endif

// Integer scale for HUD elements at the current framebuffer, 480 tall being
// the size everything was drawn for. 1 at 480 and 600, 2 at 768 through 1080,
// and so on, capped so nothing can run away.
int nocturne_ui_scale(void);

// CAlphaBitmap::display with each source pixel expanded to a scale x scale
// block. Alpha blending, palette init and edge clipping all match the engine's.
void nocturne_ui_blit_alpha(struct CAlphaBitmap *bitmap, int x, int y, int alpha, int scale);

// CAlphaBitmap::render — a source sub-rectangle, for the partially-filled
// health bar — scaled the same way. Note the engine's render() does no bounds
// checking at all; this one clips, since a scaled rect can reach past an edge
// the 1x source never could.
void nocturne_ui_blit_alpha_rect(struct CAlphaBitmap *bitmap, int dest_x, int dest_y,
                                 int left_x, int top_y, int right_x, int bottom_y,
                                 int alpha, int scale);

// CBitFont::drawText scaled the same way, newlines included. Returns the width
// drawn, as the engine's does. 16 and 32bpp both scale; at 8bpp the text is
// drawn unscaled (the engine never selects that depth here).
int nocturne_ui_draw_text(struct CBitFont *font, char *text, int x, int y,
                          int color_mode, int color_value, int scale);

// Scaled metrics, so callers lay out against what will actually be drawn.
int nocturne_ui_text_width(struct CBitFont *font, char *text, int scale);
int nocturne_ui_char_height(struct CBitFont *font, int character_code, int scale);

// Whether nocturne_ui_draw_text will honour `scale` at the current bit depth.
// Callers use it to keep their wrap width and metrics in step with the text.
int nocturne_ui_text_scale_supported(void);

#ifdef __cplusplus
}
#endif
