#pragma once

// =============================================================================
// GL PRESENT — OpenGL context ownership and the 2D framebuffer blit
// =============================================================================
//
// The engine draws its 2D/UI layer (and, with no 3D renderer DLL loaded, the
// entire frame) into a CPU-side back buffer that DirectDraw hands out via
// Lock/Unlock. Historically that buffer was presented through an SDL_Renderer
// streaming texture.
//
// Hooking a decompiled renderer DLL up to real OpenGL means the process needs a
// GL context, and SDL_Renderer cannot safely share a window with raw GL calls.
// So this module takes ownership of the context: it presents the 2D buffer as a
// textured fullscreen quad, and the renderer DLL's 3D output lands in the same
// default framebuffer, composited on the GPU. One SDL_GL_SwapWindow per frame.
//
// Compatibility-profile GL (1.x fixed function) is used on purpose — the DX6-era
// render states the renderer DLL drives (alpha test, fog, shade mode, texture
// env blend) have direct fixed-function equivalents, so the D3D→GL translation
// stays a state-for-state mapping rather than a shader reimplementation.
//
// Everything here is a no-op returning failure when NOCTURNE_GL_PRESENT is 0,
// in which case ddraw.cpp keeps its SDL_Renderer path.

struct SDL_Window;

#ifdef __cplusplus
extern "C" {
#endif

// Create the GL context on `window` and build the present resources. Safe to
// call more than once; later calls just re-apply the logical size. Returns 1 on
// success, 0 if GL is unavailable or disabled — callers must fall back.
int nocturne_gl_init(struct SDL_Window *window);

// 1 once nocturne_gl_init has succeeded. Call sites use this to choose between
// the GL present path and the legacy SDL_Renderer one.
int nocturne_gl_is_active(void);

// The game's native render resolution (e.g. 640x480). The presented quad is
// integer-scaled to the largest whole multiple that fits the window and
// centered, matching what SDL_RenderSetLogicalSize + integer scale did.
void nocturne_gl_set_logical_size(int width, int height);

// Upload `pixels` and draw it as a fullscreen quad, then swap. `bpp` selects the
// source format: 16 = RGB565, 24 = RGB24 byte order, 32 = ARGB8888 (BGRA bytes).
// This is the frame boundary — it is the only place that swaps.
void nocturne_gl_present_framebuffer(const void *pixels, int width, int height,
                                     int pitch, int bpp);

// Present whatever is already in the default framebuffer, with no upload. Used
// when a 3D renderer drew the frame on the GPU and there is no CPU-side buffer
// to composite — uploading a stale one would erase the frame.
void nocturne_gl_swap_only(void);

// Read the presented frame back as tightly packed RGB24 at window resolution.
// Caller frees *out_rgb with free(). Returns 0 on success. Backs
// nocturne_dump_frontbuffer once the SDL_Renderer readback is gone.
int nocturne_gl_read_front(unsigned char **out_rgb, int *out_width, int *out_height);

void nocturne_gl_shutdown(void);

#ifdef __cplusplus
}
#endif
