#pragma once

// =============================================================================
// ANTI-ALIASING — smoothing the scene's polygon edges
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_MENU, whose Graphic Options page sets it. The
// original drew its actors with no anti-aliasing of any kind. FXAA is one pass
// over the finished scene in its target (gl_present's nocturne_gl_scene_antialias),
// run by the renderer once a frame's 3D has landed and before the engine's 2D is
// drawn over it, so the HUD, subtitles and menus stay as sharp as they are.
// Multisampling is not offered: the scene target is read back to the CPU and
// written again every frame, and each of those steps would need a resolve.
//
// The setting lives in [Graphics] of system\nocturne.ini, is read on first use
// and cached, and takes effect on the next frame.

#ifdef __cplusplus
extern "C" {
#endif

// The values are what [Graphics] antialias stores, so a new one goes on the end.
enum { NOCTURNE_ANTIALIAS_OFF = 0, NOCTURNE_ANTIALIAS_FXAA = 1, NOCTURNE_ANTIALIAS_COUNT = 2 };

// The stored choice, from [Graphics] antialias. Defaults to Off, and is always
// Off under NOCTURNE_AUTHENTIC_MENU=1.
int nocturne_antialias_get(void);

// Steps the choice by `step`, wrapping, and saves it, for a left/right press on
// the Options line. Returns the new value.
int nocturne_antialias_cycle(int step);

// The choice's name for the menu line: "Off" or "FXAA". Each mode but Off has
// its program in gl/antialias_shaders.h.
const char *nocturne_antialias_name(int mode);

#ifdef __cplusplus
}
#endif
