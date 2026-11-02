#pragma once

// =============================================================================
// ANTI-ALIASING SHADERS — the fragment program behind each anti-aliasing mode
// =============================================================================
//
// One fragment shader per NOCTURNE_ANTIALIAS_* mode but Off, each a single draw
// over the finished scene in its target (gl_present's
// nocturne_gl_scene_antialias, drawn by gl_blit; see gl/antialias.h for the
// setting). Every one is written against the interface gl/upscale_shaders.h
// gives, so gl_blit draws it on the same quad, and adding a mode is one shader
// here, one row in the table, and a value on the end of the enum:
//
//   uniform sampler2D u_tex;   the scene, on texture unit 0, sampled bilinear
//   uniform vec2  u_src;       its size in texels
//   in  vec2 v_uv;             gl_blit's quad, already flipped for the source
//   out vec4 o_color;

#ifdef __cplusplus
extern "C" {
#endif

// The fragment source for anti-aliasing `mode`, or null for Off and for a mode
// that does not exist.
const char *nocturne_antialias_fragment_source(int mode);

#ifdef __cplusplus
}
#endif
