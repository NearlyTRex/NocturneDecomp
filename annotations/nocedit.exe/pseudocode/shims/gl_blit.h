#pragma once

// =============================================================================
// GL BLIT — the full-target textured quad, on a shader instead of glBegin
// =============================================================================
//
// Phase 4 of research/17-shader_renderer_migration. gl_present.cpp draws the
// same quad twice — once to put the CPU framebuffer on the window, once to seed
// the scene FBO mid-frame — and both did it with glOrtho, an immediate-mode
// GL_TRIANGLE_STRIP and GL_REPLACE TexEnv. Those were the last matrix-stack and
// glBegin users left after the draw path moved to buffer objects, so the context
// cannot leave the compatibility profile while they stand.
//
// WHAT MAKES THIS UNLIKE THE DRAW PATH, and the reason it is a separate file
// rather than a call into tridx7's gl_shader.cpp:
//
//   The draw-path shader belongs to one renderer and is selected by choosing it
//   in Graphics Options. This quad is renderer-agnostic — SOFTWARE mode reaches
//   the screen through it, and so do tridx7, trigl, the 2D DirectDraw blits in
//   ddraw.cpp and movie playback in mci_video.cpp. It cannot be branched behind
//   a renderer, and getting it wrong breaks software rendering rather than one
//   optional path. So it lives on the nocedit side, beside its only callers, and
//   depends on nothing but gl_api.
//
// Everything here is optional at runtime, the same contract as gl_shader.h: if
// the driver has no shader or buffer entry points, or the program fails to
// compile, nocturne_gl_blit_quad() returns 0 and the caller draws its
// fixed-function quad exactly as before. One runtime check covers GL-absent,
// driver-without-shaders and failed-to-compile alike.

#ifdef __cplusplus
extern "C" {
#endif

// Draw the unit quad over the current viewport, sampling `texture` with the
// sampling state the caller already set on it. Reproduces GL_REPLACE: the
// fragment IS the texel, primary colour ignored, alpha included.
//
// The caller owns everything that is real pipeline state — viewport, scissor,
// depth mask and test, blend, cull, and the texture's own filters and wrap. This
// touches only what a shader owns, and puts back the program and array-buffer
// binding it found, so it is safe to call mid-frame between the renderer DLL's
// own draws.
//
// Returns 1 when it drew, 0 when the shader path is unavailable and the caller
// must fall back to its own quad.
int nocturne_gl_blit_quad(unsigned int texture);

// Which path the blit takes, live-settable from a debugger so one run can
// capture the same frame both ways rather than comparing across scenes — the
// measurement rule research/17 is built on:
//   -1 resolve from NOCTURNE_GL_BLIT_SHADER (default 1)   0 fixed function   1 shader
// Read on every blit, so a change lands on the next frame with no rebuild.
extern int nocturne_gl_blit_shader;

// Drop the program and buffer, e.g. on context teardown.
void nocturne_gl_blit_shutdown(void);

#ifdef __cplusplus
}
#endif
