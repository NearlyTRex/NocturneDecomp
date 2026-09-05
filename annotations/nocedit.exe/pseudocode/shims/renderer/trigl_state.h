#pragma once

// =============================================================================
// TRIGL STATE — render flags to pipeline state
// =============================================================================
//
// The engine describes a draw with one 32-bit `render_flags` word and a handful
// of values it publishes through CExternalRendererBridge. This turns that pair
// into the pipeline state a draw needs. It is the whole of the renderer's state
// model: there is nothing else to decide.
//
// PURE ON PURPOSE. Nothing here calls GL, reads a global, or includes a system
// header, so the mapping can be tested exhaustively rather than inspected. The
// flag word has eight meaningful bits in the state model, which is 256 cases —
// small enough to cover completely, and worth covering, because a wrong bit
// here is a whole class of draw rendered with the wrong depth or blend and no
// error anywhere.
//
// The blend/depth/compare constants are the renderer's own rather than GL's for
// the same reason: a test should need no GL headers and no context. The backend
// translates them at the point it calls GL.

#ifdef __cplusplus
extern "C" {
#endif

// --- render_flags bits -------------------------------------------------------
// Bit 8 upward select where a vertex's colour and alpha come from; they affect
// vertices, not pipeline state, and are consumed in trigl_vertex.h.
enum {
    NOCTURNE_TRIGL_FLAG_TEXTURED    = 0x001,  // sample the bound texture
    NOCTURNE_TRIGL_FLAG_BLEND       = 0x002,  // alpha blend and alpha test
    NOCTURNE_TRIGL_FLAG_SMOOTH      = 0x004,  // gouraud rather than flat
    NOCTURNE_TRIGL_FLAG_SOLIDALPHA  = 0x008,  // per-vertex fog factor is live
    NOCTURNE_TRIGL_FLAG_LIGHTING    = 0x010,  // modulate by the current light level
    NOCTURNE_TRIGL_FLAG_SRCALPHA    = 0x020,  // scale the source by its own alpha
    NOCTURNE_TRIGL_FLAG_DEPTH_TEST  = 0x040,  // compare against the depth buffer
    NOCTURNE_TRIGL_FLAG_DEPTH_WRITE = 0x080,  // write depth
    NOCTURNE_TRIGL_FLAG_VERTEX_ALPHA = 0x100, // alpha per vertex, not per draw
    NOCTURNE_TRIGL_FLAG_VERTEX_COLOR = 0x200  // colour per vertex, not per draw
};

// --- pipeline constants ------------------------------------------------------
enum {
    NOCTURNE_TRIGL_BLEND_ZERO = 0,
    NOCTURNE_TRIGL_BLEND_ONE,
    NOCTURNE_TRIGL_BLEND_SRC_ALPHA,
    NOCTURNE_TRIGL_BLEND_INV_SRC_ALPHA
};

enum {
    NOCTURNE_TRIGL_DEPTH_ALWAYS = 0,
    NOCTURNE_TRIGL_DEPTH_LEQUAL
};

// Texture sampling, chosen by the engine's own quality settings rather than by
// the draw.
enum {
    NOCTURNE_TRIGL_FILTER_NEAREST = 0,
    NOCTURNE_TRIGL_FILTER_LINEAR
};

enum {
    NOCTURNE_TRIGL_MIP_NONE = 0,
    NOCTURNE_TRIGL_MIP_LINEAR
};

// --- input -------------------------------------------------------------------
// Everything the mapping reads, gathered by the caller so this stays pure.
typedef struct NocturneTriglStateInput {
    unsigned render_flags;
    // CExternalRendererBridge::blend_mode. 0 blends against the destination,
    // 1 adds to it.
    int blend_mode;
    // True while the engine has a texture-opacity table loaded, which forces a
    // textured draw to blend and to scale by source alpha.
    int texture_opacity_present;
    // Whether colour and alpha arrive premultiplied.
    int premultiply;
    // Two bridge fields named for what their read sites do with them rather
    // than for what Ghidra called them: bilinear selects LINEAR min/mag
    // filtering, mipmapped selects a LINEAR mip filter.
    int bilinear;
    int mipmapped;
} NocturneTriglStateInput;

// --- output ------------------------------------------------------------------
typedef struct NocturneTriglPipelineState {
    int texture_enabled;
    int blend_enabled;
    int alpha_test_enabled;
    int src_blend;              // NOCTURNE_TRIGL_BLEND_*
    int dst_blend;
    int smooth_shading;
    int fog_enabled;
    int depth_test_enabled;
    int depth_write_enabled;
    int depth_func;             // NOCTURNE_TRIGL_DEPTH_*
    // The texture's alpha reaches the fragment's alpha only when set; otherwise
    // the texture contributes colour alone.
    int modulate_texture_alpha;
    int min_filter;             // NOCTURNE_TRIGL_FILTER_*
    int mag_filter;
    int mip_filter;             // NOCTURNE_TRIGL_MIP_*
} NocturneTriglPipelineState;

// The flag word a draw is actually rendered with. A textured draw with an
// opacity table loaded gains BLEND and SRCALPHA; SRCALPHA in turn suppresses
// SOLIDALPHA, so the two never apply together.
unsigned nocturne_trigl_effective_flags(const NocturneTriglStateInput *in);

// The pipeline state for a draw. `in` must be non-null; `out` is fully written,
// so a caller never has to pre-clear it.
void nocturne_trigl_pipeline_state(const NocturneTriglStateInput *in,
                                   NocturneTriglPipelineState *out);

// --- lighting ----------------------------------------------------------------
// The light level a draw modulates by, as a 0..255 multiplier plus the part
// that exceeded full brightness. The excess is added to the fragment rather
// than discarded, so an over-lit surface blows out toward white instead of
// clamping to its own colour.
typedef struct NocturneTriglLighting {
    int alpha;      // 0..255, the grey the vertex colour carries
    int overflow;   // 0..255, added on top
} NocturneTriglLighting;

// The draw's light level, from CExternalRendererBridge::current_lighting. An
// unlit draw is at full brightness. Applies to every vertex of the draw.
void nocturne_trigl_draw_lighting(unsigned render_flags, int current_lighting,
                                  NocturneTriglLighting *out);

// A vertex's own light level, carried in its red channel. Returns 0 and leaves
// `out` untouched for a draw that has no per-vertex light level, in which case
// the draw's own stands. A draw carrying full per-vertex colour is already at
// the brightness it wants, so it reports full and no overflow.
//
// The two gates differ deliberately: the draw level answers to LIGHTING, the
// vertex level to SMOOTH, and only the vertex level defers to VERTEX_COLOR.
int nocturne_trigl_vertex_lighting(unsigned render_flags, int vertex_red,
                                   NocturneTriglLighting *out);

#ifdef __cplusplus
}
#endif
