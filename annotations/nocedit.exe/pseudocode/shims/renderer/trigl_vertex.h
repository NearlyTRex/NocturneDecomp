#pragma once

// =============================================================================
// TRIGL VERTEX — engine vertex to screen vertex
// =============================================================================
//
// The engine hands the renderer vertices that are already projected: integer
// screen coordinates in 16.16, a depth, texture coordinates in 8.24, and colour
// channels in 8.8. This turns one of those into the screen-space vertex a draw
// submits — position, reciprocal w, depth, packed diffuse and specular, and
// texture coordinates.
//
// PURE ON PURPOSE, like trigl_state.h: no GL, no globals, no system headers, so
// the conversion can be tested against known inputs rather than inspected. That
// is worth more here than anywhere else in the renderer, because every quantity
// is a fixed-point format with an implicit scale and nothing downstream can
// tell a wrong scale from a strange model.
//
// Diffuse and specular stay PACKED as 0xAARRGGBB rather than being handed over
// as four floats. The packing is where the format actually lives — which
// channel carries the light level, which carries the fog factor, when alpha is
// the draw's and when it is the vertex's — and keeping it in one place means
// the backend only has to unpack, not to know.

#include "renderer/trigl_state.h"

#ifdef __cplusplus
extern "C" {
#endif

// One vertex as the engine describes it. Mirrors the fields of SRenderVertex
// that a draw reads, passed explicitly so this file needs none of the game's
// types.
typedef struct NocturneTriglVertexInput {
    int screen_x;       // 16.16 pixels
    int screen_y;       // 16.16 pixels
    int transformed_z;  // eye-space depth
    int u;              // 8.24
    int v;              // 8.24
    int r;              // 8.8
    int g;              // 8.8
    int b;              // 8.8
    int a;              // 8.8
} NocturneTriglVertexInput;

// What every vertex of a draw shares. Gathered by the caller from the engine's
// bridge and the renderer's own mode.
typedef struct NocturneTriglVertexContext {
    unsigned render_flags;      // already through nocturne_trigl_effective_flags

    float rhw_scale;            // numerator of the reciprocal-w the draw wants

    // A hold buffer renders at 640x480 and is stretched to the real screen, so
    // vertex positions scale with it. Both are 1.0 when it is not in use.
    float screen_scale_x;
    float screen_scale_y;

    // Where a vertex that has no colour of its own gets one: the draw's alpha,
    // and a 256-entry RGB triplet table indexed either by the draw's own colour
    // index or by the vertex's u channel.
    int current_alpha;                  // 0..255
    int palette_index;                  // 0..255, used by a flat untextured draw
    const unsigned char *palette;       // 256 RGB triplets, may be null if unused

    int premultiply;
    int blend_mode;

    // The draw's light level. A smooth-shaded draw overrides it per vertex.
    NocturneTriglLighting light;

    // Depth is written as a normalised 0..1 value. `w_buffer` selects the
    // reciprocal curve that spends its precision near the camera; otherwise
    // depth is linear in eye space. `lod_scale` normalises either against the
    // draw distance the engine chose.
    int   w_buffer;
    float lod_scale;
} NocturneTriglVertexContext;

// The submitted vertex. Field-for-field what the hardware path consumes.
typedef struct NocturneTriglScreenVertex {
    float x, y, z, rhw;
    unsigned diffuse;   // 0xAARRGGBB
    unsigned specular;  // 0xAARRGGBB — alpha is the fog factor, RGB the light
                        // level's overflow past full brightness
    float u, v;
} NocturneTriglScreenVertex;

// Convert one vertex. Every field of `out` is written.
void nocturne_trigl_convert_vertex(const NocturneTriglVertexContext *ctx,
                                   const NocturneTriglVertexInput *in,
                                   NocturneTriglScreenVertex *out);

// The normalised depth for an eye-space depth, on its own so the two curves can
// be checked directly. Always in 0..1.
float nocturne_trigl_depth(const NocturneTriglVertexContext *ctx, float eye_z);

#ifdef __cplusplus
}
#endif
