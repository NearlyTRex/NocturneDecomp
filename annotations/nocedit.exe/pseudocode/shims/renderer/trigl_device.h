#pragma once

// =============================================================================
// TRIGL DEVICE — the frame, and the CPU image the engine shares with it
// =============================================================================
//
// The engine renders a frame in two halves and expects to be able to move
// between them. Hardware geometry goes to a colour buffer that persists across
// frames the way DirectDraw surface memory does; then the engine LOCKS the
// frame, gets scanline pointers, draws its 2D over the same pixels on the CPU,
// unlocks, and presents. This owns that arrangement.
//
// The persistent target belongs to gl_present.cpp, which created the context
// and keeps a framebuffer object precisely because GL's default framebuffer
// loses its contents on every swap. What lives here is the CPU mirror of it and
// the traffic in both directions: read the target back at lock, upload it again
// at unlock.
//
// ABOVE 480 LINES the engine does not lock the frame at all. It composites into
// a 640x480 hold buffer instead and hands that over to be stretched, so the
// two paths have to end up in the same place.

#include "renderer/trigl_batch.h"

#ifdef __cplusplus
extern "C" {
#endif

// Bring the device up on the window the engine is using. Returns 0 if the GL
// context or the renderer's hardware side is unavailable.
int nocturne_trigl_device_open(void);
void nocturne_trigl_device_close(void);

// Set the resolution. `scanlines`, when given, is filled with one pointer per
// row of the CPU image, which is how the engine addresses it. Returns 0 if the
// mode could not be taken.
int nocturne_trigl_device_set_mode(int width, int height, int bpp, void **scanlines);

int nocturne_trigl_device_width(void);
int nocturne_trigl_device_height(void);
int nocturne_trigl_device_bpp(void);

// Scene bracketing. Geometry is only accepted between them, matching the engine
// — a draw outside a scene is dropped rather than queued.
int nocturne_trigl_device_begin_scene(void);
int nocturne_trigl_device_end_scene(void);
int nocturne_trigl_device_in_scene(void);

// Hand the accumulated geometry to the hardware. Called at the end of a scene,
// when state changes in a way a batch cannot span, and when the engine asks.
void nocturne_trigl_device_flush(void);

// Read the target back into the CPU image, or push the CPU image to the target.
// Locking ends any open scene first, because the geometry has to have landed
// before it can be read.
int nocturne_trigl_device_lock_frame(void);
int nocturne_trigl_device_unlock_frame(void);
int nocturne_trigl_device_frame_locked(void);

// The 640x480 buffer the engine composites into above 480 lines. Locking points
// the engine's own scanline array at it; unlocking puts the frame's rows back
// and stretches the hold buffer onto the target.
int nocturne_trigl_device_lock_hold_buffer(void);
int nocturne_trigl_device_unlock_hold_buffer(void);

// Clear colour, clear depth, and the box-limited depth clear the engine uses to
// reset a region rather than the whole buffer.
void nocturne_trigl_device_clear_color(void);
void nocturne_trigl_device_clear_depth(void);
void nocturne_trigl_device_clear_depth_box(int left, int right, int top, int bottom);

// Present the frame.
void nocturne_trigl_device_present(void);

// --- holding a screen across a mode change -----------------------------------
// A video mode change discards the picture. The CPU image is reallocated, the
// engine clears the target several times on the way through, and what was on
// screen is gone — which only matters when the caller has no way to draw it
// again, because the simulation is standing still and nothing will redraw
// until it moves.
//
// Save copies the CPU image aside; restore puts it back and pushes it to the
// target so the two agree. Restoring into a different mode than was saved does
// nothing, since the picture no longer describes the screen. Both return
// non-zero on success.
int nocturne_trigl_device_save_screen(void);
int nocturne_trigl_device_restore_screen(void);

// The engine's own pointer to what it is rendering with, published at init.
struct CExternalRendererBridge;
void nocturne_trigl_device_set_bridge(struct CExternalRendererBridge *bridge);
struct CExternalRendererBridge *nocturne_trigl_device_bridge(void);

// The batch the draw entry points append to. Null until the device is open.
struct NocturneTriglBatch *nocturne_trigl_device_batch(void);

#ifdef __cplusplus
}
#endif
