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
// Gated by NOCTURNE_AUTHENTIC_HUD_SCALE in shim_config_authentic.h.

struct CAlphaBitmap;
struct CBitFont;

#ifdef __cplusplus
extern "C" {
#endif

// Integer scale for HUD elements at the current framebuffer, 480 tall being
// the size everything was drawn for. 1 at 480 and 600, 2 at 768 through 1080,
// and so on, capped so nothing can run away.
int nocturne_ui_scale(void);

// Integer scale for the goggles view, per axis. This one is not measured
// against the HUD's 640x480: CDemonLight::drawShadowDepthBuffer blits the
// shadow map 1:1 up to 320x240 and doubles past it, so the resolution
// everything else is authored for already draws the goggles at 2x.
//
// The axes are counted separately because the shipped build counts them
// separately — it tests width against 320 and height against 240 in different
// places — and that is not academic: 320x400 is one of the nine modes in
// g_ResolutionTable, and it is the one where the two disagree, doubling
// vertically while staying 1:1 across. Rounding each axis to its own base
// reproduces all nine shipped modes exactly (320x400 included) and holds the
// same fraction of the screen above them.
//
// Both CDemonSet::renderGogglesView (which centres the image) and
// drawShadowDepthBuffer (which draws it) must use these same numbers.
int nocturne_goggles_scale_x(void);
int nocturne_goggles_scale_y(void);

// Ceiling on what those can return, so the blit can size the row-pointer array
// it collects each source row into. Twice the HUD's own cap.
#define NOCTURNE_GOGGLES_MAX_SCALE 8

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
int nocturne_ui_text_height(struct CBitFont *font, char *text, int scale);
int nocturne_ui_char_height(struct CBitFont *font, int character_code, int scale);

// Whether nocturne_ui_draw_text will honour `scale` at the current bit depth.
// Callers use it to keep their wrap width and metrics in step with the text.
int nocturne_ui_text_scale_supported(void);

// =============================================================================
// The editor/dialog widget layer (CPickList, CEditorTools windows, CEdButton,
// CEdScrollBar) — the in-game pause menu among them
// =============================================================================
//
// That layer measures everything in two globals, g_FontCharacterWidth and
// g_FontCharacterHeight, which every dialog entry point recomputes from
// g_EditorFont before doing anything else. Box size, row pitch, button extents,
// scrollbar geometry and the mouse hit-testing that shares the same arithmetic
// all derive from them, so setting them scaled carries the whole widget — but
// only if the text drawn into it is scaled to match, or the box grows around
// glyphs that stayed small.
//
// nocturne_ui_editor_scale() is the number to pass to nocturne_ui_draw_text and
// friends at those call sites, so the two halves cannot drift apart.

// The scale the dialog layer is running at: nocturne_ui_scale(), or 1 when the
// bit depth has no scaled glyph path and the text could not follow.
int nocturne_ui_editor_scale(void);

// Set g_FontCharacterWidth/g_FontCharacterHeight for the current g_EditorFont
// at that scale. Replaces the two-line recompute the dialog entry points open
// with.
// Safe with a null g_EditorFont — callers already fatal on that themselves.
void nocturne_ui_editor_metrics(void);

#ifdef __cplusplus
}
#endif
