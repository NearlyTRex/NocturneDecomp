#pragma once

// =============================================================================
// DEBUG DUMP TOOLS
// =============================================================================
//
// C-callable helpers for snapshotting various pieces of engine state to disk.
// Intended for use from gdb when you want to capture a wide picture of what
// the renderer / scene / camera are doing at a specific point in the frame
// without paying the round-trip cost of many separate `print` commands.
//
// All functions write their output to the path given by the caller. The PPM
// dumpers also produce a sidecar `<path>.txt` with relevant engine state and
// derived statistics (histograms, bounding boxes, min/max values, etc.).
//
// Compile-time gated by NOCTURNE_DUMP_TOOLS in shim_config.h. When 0, every
// function is a no-op stub returning -1 (the symbols stay so `call` from gdb
// doesn't fail).
//
// Returns 0 on success, -1 on failure. Files are overwritten if they exist.

#ifdef __cplusplus
extern "C" {
#endif

// Frame buffer (color) — writes <path> PPM + <path>.txt metadata.
// Captures camera transform, render flags, vertex lighting, rasterizer
// cursors, and a per-pixel-brightness histogram.
int nocturne_dump_screenshot(const char *path);

// Z-buffer — writes <path> PPM (grayscale, normalized) + <path>.txt metadata.
// Reads g_ZBufferScanlineArray[0..g_WindowHeight] row pointers. Sidecar
// reports min/max depth, percentage of pixels with non-cleared depth, and
// the bounding box of touched pixels — answers "did the rasterizer
// actually run?" independent of color output.
int nocturne_dump_zbuffer(const char *path);

// Display list — writes <path> as a plain text table of every actor queued
// for render this frame, with index, pointer, name, position, orientation.
// Pulled from g_CDemonSetInstance.sorted_render_actors. Useful when the
// renderer fires but produces nothing visible — confirms the actor list
// is populated and where in the world the entities actually are.
int nocturne_dump_display_list(const char *path);

// Actor state — writes <path> as plain text. Detects the actor's class via
// castToClassHash and dumps every level of the inheritance chain it walks
// (CDemonActor → CCharacter → CHero → CStranger). Pass
// `g_HeroActors[g_LocalHeroIndex]` for the player; pass any actor pointer
// for AI / NPC inspection. Use `nocturne_dump_ground_probes` and
// `nocturne_dump_collision_grid` separately for collision-system diagnostics.
struct CDemonActor;
int nocturne_dump_actor_state(const char *path, struct CDemonActor *actor);

// Ground probes — getGroundHeight (radius=0) plus cylinderGroundCheck at a
// sweep of radii (0.5/1/2/5) at the given world-space position. Useful when
// an actor is falling and you want to know whether the cube under their
// exact (x, z) lacks ground but a slightly wider check would find it. Pass
// `&actor->location.position` from gdb to probe at an actor's spot.
struct CVector3f;
int nocturne_dump_ground_probes(const char *path, struct CVector3f *pos);

// Collision grid — raytrace bbox/cell_size/grid_coord; if `pos` is non-NULL,
// also writes the probe-position grid index, the y-column triangle counts
// at that (x, z), and a triangle dump for the probe cube plus its 4 adjacent
// xz neighbors and the densest cube in the column. Pass `pos = NULL` for
// just the grid extent.
int nocturne_dump_collision_grid(constf char *path, struct CVector3f *pos);

// Lighting / vertex-pipeline state — writes <path> as plain text. Captures
// a sample of `g_VertexNormalArray` and `g_TransformedVertexArray` with
// magnitude statistics, plus the ambient/spot/dynamic light counts and the
// per-frame vertex-color start/delta values. Useful when geometry rasterizes
// but pixels come back near-zero (lighting modulation, normal scaling, or
// gradient setup gone wrong).
int nocturne_dump_lighting_state(const char *path);

// Auto-capture sequence — gdb-callable, like the other dump shims. Hook this
// into a `commands` block on a per-frame breakpoint and it'll write a
// numbered screenshot + sidecar display-list-txt every `every_n` calls, up
// to `max_count` captures total.
//   path_template: printf-style path with one `%d`, e.g. "/tmp/auto_%03d.ppm".
//                  The display-list sidecar gets ".txt" appended after replacing
//                  the .ppm extension.
//   every_n:       capture on every Nth call. <= 0 treated as 1.
//   max_count:     stop after this many captures.
//   reset:         non-zero -> reset internal call/written counters. Useful
//                  when re-arming with new path or new window.
// Pass `path_template == NULL` to disarm: subsequent calls become no-ops
// until armed again with a non-NULL path.
void nocturne_auto_capture(const char *path_template, int every_n, int max_count, int reset);

#ifdef __cplusplus
}
#endif
