#pragma once

// =============================================================================
// GL BLIT — the full-target textured quad
// =============================================================================
//
// gl_present.cpp draws the same quad twice — once to put the CPU framebuffer on
// the window, once to seed the scene FBO mid-frame. This is that quad: a static
// four-vertex buffer object, a vertex array recording how to read it, and a
// two-line program.
//
// WHY IT IS RENDERER-AGNOSTIC, and the reason it lives here rather than inside a
// renderer's own shader support:
//
//   A renderer's draw shader belongs to that renderer and is selected by picking
//   it in Graphics Options. This quad belongs to no renderer — SOFTWARE mode
//   reaches the screen through it, and so does every accelerated renderer, the
//   2D DirectDraw blits in ddraw.cpp and movie playback in mci_video.cpp. It
//   cannot be branched per renderer, and a mistake here takes software rendering
//   with it rather than one optional path. So it sits beside its callers and
//   depends on nothing but gl_api.
//
// A return of 0 means the quad could not be built — no shader or buffer entry
// points, or a program that failed to compile — and nothing was drawn. One
// runtime check covers GL-absent, driver-without-shaders and failed-to-compile
// alike, and every caller says so in the log rather than presenting a frame that
// silently came from somewhere else.

#ifdef __cplusplus
extern "C" {
#endif

// Draw the unit quad over the current viewport, sampling `texture` with the
// sampling state the caller already set on it. Reproduces GL_REPLACE: the
// fragment IS the texel, primary colour ignored, alpha included.
//
// The caller owns everything that is real pipeline state — viewport, scissor,
// depth mask and test, blend, cull, and the texture's own filters and wrap. This
// touches only what a shader owns, and puts back the program and vertex array it
// found, so it is safe to call mid-frame between the renderer's own draws.
//
// Returns 1 when it drew, 0 when nothing was drawn.
int nocturne_gl_blit_quad(unsigned int texture);

// The same quad sampling bottom-up. A render target is drawn with its origin at
// the bottom, where an uploaded CPU image has its first row at the top, so a
// target presented with nocturne_gl_blit_quad would come out upside down.
int nocturne_gl_blit_quad_flipped(unsigned int texture);

// Drop the program, buffer and vertex array, e.g. on context teardown.
void nocturne_gl_blit_shutdown(void);

#ifdef __cplusplus
}
#endif
