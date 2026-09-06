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

// Forget what the pipeline is believed to hold, so the next draw states all of
// it again. Required after anything outside this file has touched the state the
// cache describes — presenting a frame turns off depth testing, blending and
// culling to draw its quad, and a cache that still describes the last draw
// would skip re-enabling them and put the following frame's geometry out with
// no depth test at all.
void nocturne_trigl_gl_invalidate_state(void);

// Counts how many times the pipeline record above has been abandoned. Anything
// that keeps its own view of what the pipeline holds must compare this and treat
// a change as "everything differs"; see the note beside the counter.
unsigned nocturne_trigl_gl_state_epoch(void);


// The colour a fully fogged fragment becomes. Components are 0..1.
void nocturne_trigl_gl_set_fog_color(float r, float g, float b);

// --- textures ----------------------------------------------------------------
// The engine identifies a texture by name, and separately by the dimension it is
// currently working at; the same name at two dimensions is two textures.
//
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

// Whether a texture is already resident, without uploading anything. Lets the
// caller skip expanding an image the cache already holds — the expansion is the
// expensive half, and selectTexture is called for every state change, not once
// per texture.
//
unsigned nocturne_trigl_gl_texture_cached(const char *name, int dimension);

// Bind a texture id from the call above for subsequent draws. 0 unbinds.
void nocturne_trigl_gl_bind_texture(unsigned texture);

// Drop every cached texture, e.g. when the engine changes video mode.
void nocturne_trigl_gl_release_textures(void);

// Paints a quantity instead of the fragment, so a live frame can be asked what
// the shader is reading rather than having it inferred from how the result
// looks. Settable from a debugger, and resolved from NOCTURNE_TRIGL_DEBUG on
// first use so a whole session can be started in one of these modes.
//   -1 resolve from the environment (default 0)
//    0 off   1 texture alpha   2 final alpha   3 texture coordinate
//    4 vertex colour   5 texture colour
extern int nocturne_trigl_debug;

// Whether textures carry a mip chain. Off matches what the engine's own
// renderer does — it uploads one level and samples it at every distance, so
// fine detail survives minification instead of being averaged away.
//   -1 resolve from NOCTURNE_TRIGL_MIPMAPS (default 0)   0 off   1 on
extern int nocturne_trigl_mipmaps;

// What the driver calls itself, for the card list the options screen shows.
// Never null; a generic name before the context is up.
const char *nocturne_trigl_gl_renderer_name(void);

// --- master depth ------------------------------------------------------------
// The engine renders the static world once, keeps its depth, and restores that
// instead of clearing on the frames that follow. Saving is whole-buffer;
// restoring takes a rectangle, so only the region that moved is paid for.
//
// Rectangles arrive top-down, as the engine measures them; GL measures from the
// bottom. Both are given the target height so the flip happens here rather than
// at each call site.
int nocturne_trigl_gl_save_depth(int slot, int width, int height);
int nocturne_trigl_gl_restore_depth(int slot, int left, int top, int right, int bottom,
                                    int width, int height);
void nocturne_trigl_gl_release_depth(void);

// --- drawing -----------------------------------------------------------------
// Submit an accumulated batch. Does nothing for an empty one; the caller resets
// it afterwards.
void nocturne_trigl_gl_draw_batch(const NocturneTriglBatch *batch);

// --- what reached the hardware -----------------------------------------------
// Updated once per polygon rather than per vertex, so it costs nothing to leave
// on and can be read from a debugger without a breakpoint. A breakpoint in the
// per-vertex path is not a usable instrument: it fires hundreds of thousands of
// times a second and the game stops advancing, which reads as "no such draw"
// rather than as "too slow to observe".
typedef struct NocturneTriglStats {
    unsigned polygons;
    unsigned draws;
    unsigned blended_draws;
    unsigned untextured_draws;
    unsigned missing_texture_draws;   // texturing on with nothing bound
    int screen_min_x, screen_max_x;   // whole pixels, as submitted
    int screen_min_y, screen_max_y;
    // The largest depth-restore rectangle the engine has asked for, as it asked
    // for it. Compare against the target size: a rectangle that stops at 640x480
    // on a larger target is being given in the hold buffer's space.
    unsigned depth_saves, depth_restores;
    int depth_rect_max_x, depth_rect_max_y;
    // Texels uploaded, and how many of them the colour key made transparent.
    // A texture whose surround should vanish and does not is either not being
    // keyed or not being tested, and these separate the two.
    unsigned texels_uploaded, texels_keyed;
    unsigned uploads, uploads_with_opacity;
} NocturneTriglStats;

extern NocturneTriglStats nocturne_trigl_stats;
void nocturne_trigl_stats_reset(void);

// --- what each draw resolved to ----------------------------------------------
// The counters above say how many draws went out but not what they drew with,
// which is the question when an object is painted with another object's image.
// This records one line per draw of the frame being built — the texture name the
// engine selected, the dimension it was resolved at, and the GL texture that
// ended up bound — plus the cache the lookups ran against. Both are needed: a
// draw naming the wrong texture is a resolution fault, and a draw naming the
// right one and still looking wrong is an upload fault.
//
// The ring holds one frame, cleared at beginScene. A frame held on screen with
// the renderer idle — the pause menu, or the Options screen's redraw — can
// therefore be interrogated at leisure from a debugger:
//   call (int)nocturne_trigl_dump_draws("/tmp/draws.txt")
int nocturne_trigl_dump_draws(const char *path);

// Appends the texture cache to an open report. Exposed for the dump above.
void nocturne_trigl_gl_report_textures(void *report_file);

// Writes a resident texture back out as a PPM, so an image that looks wrong on
// a model can be examined as an image. Reads it from GL rather than from the
// engine's data, which is what distinguishes a bad upload from bad texture
// coordinates: an image that is correct here and wrong on the model is being
// sampled wrongly, not stored wrongly.
//   call (int)nocturne_trigl_gl_dump_texture("STRCOAT.RAW", 256, "/tmp/t.ppm")
// Returns the dimension written, or 0 if the name is not resident.
int nocturne_trigl_gl_dump_texture(const char *name, int dimension, const char *path);

// Whether per-vertex fog is applied. The engine supplies a fog factor on nearly
// every vertex, but a whole-frame comparison could not separate it from
// animation drift, so it is off until a measurement can see it.
//   -1 resolve from NOCTURNE_TRIGL_VERTEX_FOG (default 0)   0 off   1 on
extern int nocturne_trigl_vertex_fog;

#ifdef __cplusplus
}
#endif
