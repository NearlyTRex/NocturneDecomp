#pragma once

// =============================================================================
// OS FONT SCALE — the OS fonts made again at the text's scale
// =============================================================================
//
// With OS fonts on, initFonts gives the medium, theme, tiny and small editor
// fonts each an OS font of a fixed pixel height, which draws at that height
// whatever the screen. Scaling its output would blur it; this makes the same
// font again at the asked scale's height instead, as the recreation does, so
// text on a larger front end or HUD is as large as the bitmap fonts' and as
// sharp. core/ui_scale draws and measures through it. Each of the four keeps
// one font, made again when its scale or its OS font changes.

struct CBitFont;
struct CWinFont;

#ifdef __cplusplus
extern "C" {
#endif

// The OS font `font` draws with, made at `scale`; null when `font` has none,
// the scale is 1, or its OS font is not one initFonts made.
struct CWinFont *nocturne_os_font_scaled(struct CBitFont *font, float scale);

#ifdef __cplusplus
}
#endif
