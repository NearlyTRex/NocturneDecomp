#pragma once

// =============================================================================
// UPSCALER — the filter that enlarges the frame onto the window
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_MENU, whose Graphic Options page sets it. The
// original drew straight into a fullscreen mode of its own resolution and never
// scaled its picture; here every frame is scaled onto the window. Standard is
// the presenter's own scaling (nearest at a whole multiple, bilinear
// otherwise); the rest are gl_blit drawing one of gl/upscale_shaders.h's
// fragment programs. Only how the
// picture is enlarged changes: its size, place and aspect are the letterbox's,
// either way.
//
// Both settings live in [Graphics] of system\nocturne.ini, are read on first use
// and cached, and take effect on the next frame.

#ifdef __cplusplus
extern "C" {
#endif

// Each filter but Standard is a fragment program in gl/upscale_shaders.cpp. The
// values are what [Graphics] upscaler stores, so a new one goes on the end.
enum {
    NOCTURNE_UPSCALER_STANDARD = 0,
    NOCTURNE_UPSCALER_FSR = 1,
    NOCTURNE_UPSCALER_LANCZOS = 2,
    NOCTURNE_UPSCALER_GSR = 3,
    NOCTURNE_UPSCALER_NIS = 4,
    NOCTURNE_UPSCALER_XBR = 5,
    NOCTURNE_UPSCALER_COUNT = 6
};

// The sharpness steps the Options line offers, in percent.
enum {
    NOCTURNE_UPSCALER_SHARPNESS_STEP = 25,
    NOCTURNE_UPSCALER_SHARPNESS_MAX = 100,
    NOCTURNE_UPSCALER_SHARPNESS_DEFAULT = 50
};

// The stored choice, from [Graphics] upscaler. Defaults to Standard, and is
// always Standard under NOCTURNE_AUTHENTIC_MENU=1.
int nocturne_upscaler_get(void);

// Steps the choice by `step`, wrapping, and saves it, for a left/right press on
// the Options line. Returns the new value.
int nocturne_upscaler_cycle(int step);

// The filter's name for the menu line: "Standard", "FSR", "Lanczos", "GSR",
// "NIS" or "xBR".
const char *nocturne_upscaler_name(int mode);

// 1 for a filter the sharpness setting tunes: FSR, GSR and NIS.
int nocturne_upscaler_sharpens(int mode);

// The sharpness in percent, 0 (softest) to 100, from [Graphics] fsrSharpness,
// the key kept from when FSR was the only filter it tuned. A value outside
// that range is the default.
int nocturne_upscaler_sharpness_get(void);

// Steps the sharpness by `step` whole steps, wrapping, and saves it. A value
// set by hand between steps is taken from the step below. Returns the new
// value.
int nocturne_upscaler_sharpness_cycle(int step);

#ifdef __cplusplus
}
#endif
