#pragma once

// =============================================================================
// TRIGL GL — the hardware side of the renderer
// =============================================================================
//
// Everything in the renderer that touches OpenGL. The modules beside it decide
// what to draw — trigl_state maps the engine's render flags onto pipeline
// state, trigl_vertex converts a vertex, trigl_texture expands a palettised
// image, trigl_batch turns polygons into an indexed triangle list — and none of
// them name a GL symbol. This submits the result.
//
// Written against the core profile: a vertex array object is bound for every
// draw, vertices arrive through a buffer object with named attributes, and the
// projection is a uniform. Nothing here reads the fixed-function pipeline, so
// the context can be a core one wherever the rest of the process allows it.
//
// The GL context itself belongs to gl_present.cpp, which owns the window and
// the persistent scene target. This draws into whatever is bound.

#include "renderer/trigl_batch.h"
#include "renderer/trigl_state.h"

#ifdef __cplusplus
extern "C" {
#endif

// Build the program, buffers and vertex array object. Returns 0 if the driver
// cannot support the renderer, in which case nothing else here may be called.
// Requires a current GL context.
int nocturne_trigl_gl_init(void);

// Release everything. Safe to call without a successful init.
void nocturne_trigl_gl_shutdown(void);

// Non-zero once init has succeeded.
int nocturne_trigl_gl_ready(void);

// The pixel-space projection every draw uses, for a target of this size.
// Screen coordinates arrive in pixels with y growing downward.
void nocturne_trigl_gl_set_target_size(int width, int height);

// Push a draw's pipeline state. Redundant changes are dropped, so a run of
// draws sharing a state costs one call each rather than a dozen.
void nocturne_trigl_gl_apply_state(const NocturneTriglPipelineState *state);

// The colour a fully fogged fragment becomes. Components are 0..1.
void nocturne_trigl_gl_set_fog_color(float r, float g, float b);

// --- textures ----------------------------------------------------------------
// The engine identifies a texture by a 16-character name, and separately by the
// dimension it is currently working at; the same name at two dimensions is two
// textures. `name` need not be null-terminated within those 16 bytes.
//
// `rgba` is `dimension * dimension` words of 0xAARRGGBB from
// nocturne_trigl_expand_texture. `refresh` re-uploads an image already cached,
// which is what the engine asks for when a texture's content has changed.
//
// Returns 0 if the texture could not be created, in which case the draw goes
// out untextured rather than with someone else's image.
unsigned nocturne_trigl_gl_texture(const char *name, int dimension,
                                   const unsigned *rgba, int mipmapped,
                                   int refresh);

// Bind a texture id from the call above for subsequent draws. 0 unbinds.
void nocturne_trigl_gl_bind_texture(unsigned texture);

// Drop every cached texture, e.g. when the engine changes video mode.
void nocturne_trigl_gl_release_textures(void);

// What the driver calls itself, for the card list the options screen shows.
// Never null; a generic name before the context is up.
const char *nocturne_trigl_gl_renderer_name(void);

// --- drawing -----------------------------------------------------------------
// Submit an accumulated batch. Does nothing for an empty one; the caller resets
// it afterwards.
void nocturne_trigl_gl_draw_batch(const NocturneTriglBatch *batch);

// Whether per-vertex fog is applied. The engine supplies a fog factor on nearly
// every vertex, but a whole-frame comparison could not separate it from
// animation drift, so it is off until a measurement can see it.
//   -1 resolve from NOCTURNE_TRIGL_VERTEX_FOG (default 0)   0 off   1 on
extern int nocturne_trigl_vertex_fog;

#ifdef __cplusplus
}
#endif
