#pragma once

// =============================================================================
// RENDER PROBE — what actually reaches the hardware path, and with what state
// =============================================================================
//
// Answers some questions about lighting differences with DLL
//
//   1. Which geometry is really going through the DLL when acceleration is on?
//      The A/B reference frames show the static world rendering BIT-IDENTICAL
//      to the software build while only the characters change — yet every
//      rasterizer entry point in engine/prim.c and engine/clipper.c diverts to
//      drawPolygon when `g_UseExternalRenderer && !g_TexturesDisabled`. One of
//      those two readings is wrong and only a live count can say which.
//
//   2. Which `render_flags` combos arrive? tridx7's buildTLVertex takes its
//      per-vertex lighting from bit 0x004 (Gouraud) and its flat lighting from
//      bit 0x010, so the combos in play decide whether vertex lighting is
//      reaching the hardware at all.
//
//   3. What diffuse/specular bytes come out the other end? The measured
//      accel-on transfer is `on = 0.5*off + 12`, and the two candidate causes
//      leave different fingerprints here:
//        - a ~50% blend against the backdrop  -> diffuse ALPHA clusters at 0x80,
//          and/or GL_BLEND is on for opaque geometry
//        - the overbright never engaging      -> specular is 0 on every vertex
//
// Cost is a handful of adds per vertex, so this stays compiled in rather than
// hiding behind a build flag — the point is to be able to ask a running game
// without rebuilding it. Nothing here is called by the game; the accumulators
// only move when the DLL draws.
//
// Usage from gdb (see scripts/Bash/dbg.sh):
//     call (int)nocturne_dump_render_flags("/tmp/rf.txt")
//     call (int)nocturne_dump_render_flags(0)      // defaults to /tmp/nocturne_render_flags.txt
//
// The dump does NOT reset the counters; pass a nonzero second argument to
// nocturne_reset_render_flags() first if you want a clean window (e.g. to
// measure one scene rather than everything since launch).

#ifdef __cplusplus
extern "C" {
#endif

// Entry-point identifiers, matching the four APIDLL draw exports.
#define NOCTURNE_PROBE_DRAWPOLYGON   0
#define NOCTURNE_PROBE_DRAWPOLYGON2  1
#define NOCTURNE_PROBE_DRAWPOLYLIST  2
#define NOCTURNE_PROBE_DRAWPOLYLIST2 3

// One call per APIDLL draw entry. `polygons` is 1 for the single-polygon
// entries, the list length for the list entries.
void nocturne_render_probe_draw(unsigned render_flags, int polygons, int entry);

// One call per converted vertex, from gl_ddraw's convert_vertices. Colors are
// the D3D-packed 0xAARRGGBB the DLL wrote.
void nocturne_render_probe_color(unsigned diffuse, unsigned specular);

// One call per glDrawElements, recording the GL state the batch was drawn
// under. `src_blend`/`dst_blend` are the raw GL enums.
void nocturne_render_probe_batch(int triangles, int blend_enabled,
                                 unsigned src_blend, unsigned dst_blend,
                                 int alpha_test_enabled, int textured);

// One call per presented frame (from surface_Flip).
void nocturne_render_probe_frame(void);

// Set the engine texture currently selected, keyed by the engine's own
// g_CurrentTextureData pointer. Called from the draw wrappers so that vertex
// colors can be bucketed PER OBJECT rather than only per render_flags —
// characters and set geometry share flags 0x2cd, so a flags-keyed mean cannot
// separate them, and every measurement before this one was a scene-wide mean.
// The same pointer keys the software-side sample, so the two runs can be
// matched texture by texture.
void nocturne_render_probe_texture(const void *texture_data);

// Write the per-texture vertex-color report. `path` may be null.
int nocturne_dump_texture_light(const char *path);

// Write the accumulated report. `path` may be null. Returns 1 on success.
int nocturne_dump_render_flags(const char *path);

// Zero every accumulator. Returns 1.
int nocturne_reset_render_flags(void);

#ifdef __cplusplus
}
#endif
