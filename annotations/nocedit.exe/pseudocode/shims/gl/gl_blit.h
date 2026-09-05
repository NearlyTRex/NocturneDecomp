#pragma once

// =============================================================================
// GL BLIT — the full-target textured quad, on a shader instead of glBegin
// =============================================================================
//
// gl_present.cpp draws the same quad twice — once to put the CPU framebuffer on
// the window, once to seed the scene FBO mid-frame. This is that quad: a static
// four-vertex buffer object and a two-line program, with the immediate-mode
// GL_TRIANGLE_STRIP kept at each call site as a fallback.
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
// Everything here is optional at runtime: if the driver has no shader or buffer
// entry points, or the program fails to compile, nocturne_gl_blit_quad() returns
// 0 and the caller draws its own quad. One runtime check covers GL-absent,
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

// The same quad sampling bottom-up. A render target is drawn with its origin at
// the bottom, where an uploaded CPU image has its first row at the top, so a
// target presented with nocturne_gl_blit_quad would come out upside down.
int nocturne_gl_blit_quad_flipped(unsigned int texture);

// Which path the blit takes, live-settable from a debugger so one run can
// capture the same frame both ways rather than comparing across scenes, which
// no two frames of this game survive:
//   -1 resolve from NOCTURNE_GL_BLIT_SHADER (default 1)   0 fixed function   1 shader
// Read on every blit, so a change lands on the next frame with no rebuild.
extern int nocturne_gl_blit_shader;

// Drop the program and buffer, e.g. on context teardown.
void nocturne_gl_blit_shutdown(void);

#ifdef __cplusplus
}
#endif
