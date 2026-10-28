#pragma once

// =============================================================================
// UPSCALE SHADERS — the fragment program behind each upscaler
// =============================================================================
//
// One fragment shader per NOCTURNE_UPSCALER_* filter, each a single draw that
// enlarges the finished frame onto the window (gl_blit draws it, gl_present
// picks it; see gl/upscaler.h for the setting). Every one is written against
// the same interface, so adding a filter is one shader here and one row in the
// table:
//
//   uniform sampler2D u_tex;   the frame, on texture unit 0
//   uniform vec2  u_src;       its size in texels
//   uniform float u_sharp;     the Options sharpness, 0 to 1 (read only by
//                              the filters that sharpen)
//   in  vec2 v_uv;             gl_blit's quad, already flipped for the source
//   out vec4 o_color;
//
// The shaders hold their own licence notices; the four ported ones (FSR 1,
// Snapdragon GSR 1, NVIDIA Image Scaling and xBR-lv2) are MIT or BSD-3-Clause,
// and Lanczos is textbook.

#ifdef __cplusplus
extern "C" {
#endif

// The fragment source for upscaler `mode`, or null for Standard, which is the
// presenter's own filtering, and for a mode that does not exist.
const char *nocturne_upscale_fragment_source(int mode);

// 1 when `mode` must read its source unfiltered (texture set to GL_NEAREST):
// xBR, which compares individual texels and blends between them itself. The
// others fetch texels directly or want bilinear samples.
int nocturne_upscale_wants_nearest(int mode);

#ifdef __cplusplus
}
#endif
