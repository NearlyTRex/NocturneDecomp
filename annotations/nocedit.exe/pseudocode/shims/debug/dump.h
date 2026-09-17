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
// Compile-time gated by NOCTURNE_DUMP_TOOLS in shim_config_debug.h. When 0, every
// function is a no-op stub returning -1 (the symbols stay so `call` from gdb
// doesn't fail).
//
// Nothing here is wired into the game. There is no hotkey and no per-frame
// tick: these are called from gdb, or from a call added to a keep for as long
// as an investigation needs it and removed with the investigation. Anything
// that has to observe a point the debugger cannot reach belongs in a probe
// under research/, not in a permanent hook.
//
// Returns 0 on success, -1 on failure. Files are overwritten if they exist.

#ifdef __cplusplus
extern "C" {
#endif

// Frame buffer (color) — writes <path> PPM + <path>.txt metadata.
// Captures camera transform, render flags, vertex lighting, rasterizer
// cursors, and a per-pixel-brightness histogram.
//
// NOTE: this reads g_BackBuffer (the software render TARGET), which is the
// scene MID-render. It is NOT necessarily what the user sees — post-render
// passes (mirror reflections, HUD) and the present-time copy can differ.
// For "what's actually on screen", use nocturne_dump_frontbuffer.
int nocturne_dump_screenshot(const char *path);

// Front buffer — writes <path> PPM of the ACTUAL presented image (what the
// user sees on screen), read back from the SDL renderer / primary surface in
// the DirectDraw shim. Unlike nocturne_dump_screenshot, this captures the
// final, post-everything frame regardless of where in the frame you call it
// (it reflects the last present), so it is the reliable way to capture a
// visual bug. Implemented in shims/ddraw.cpp (needs SDL/surface access).
// Returns 0 on success, -1 if the shim/surface isn't available.
int nocturne_dump_frontbuffer(const char *path);

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
int nocturne_dump_collision_grid(const char *path, struct CVector3f *pos);

// World geometry — the grid's extent plus the ENTIRE collision triangle list in
// world space, one triangle per line with its normal and dominant axis, and the
// hero's position and area so an offline pass can pick a height band. No
// classification or projection is done here on purpose: the mesh comes out
// intact so that what counts as a wall, and how to handle stacked floors, can be
// decided offline against a single capture instead of by rebuilding the game.
// Expect a few MB on a large level.
int nocturne_dump_geometry(const char *path);

// Lighting / vertex-pipeline state — writes <path> as plain text. Captures
// a sample of `g_VertexNormalArray` and `g_TransformedVertexArray` with
// magnitude statistics, plus the ambient/spot/dynamic light counts and the
// per-frame vertex-color start/delta values. Useful when geometry rasterizes
// but pixels come back near-zero (lighting modulation, normal scaling, or
// gradient setup gone wrong).
int nocturne_dump_lighting_state(const char *path);

// Appends one line summarising a static-lighting bake: checksums of the bake's
// per-pixel INPUTS (camera Z-buffer, and the world positions / normals
// precomputeNormals derives from it) and of its OUTPUTS (each spot light's lit
// scanline extents and per-pixel corona buffers), plus the backdrop
// framebuffer. Call at the end of setCameraView and correlate `tag` with a
// screenshot taken a few frames later: two bakes that read identical scalar
// lighting globals but produced different screen brightness will differ here.
int nocturne_dump_bake_signature(const char *path, int tag);

// Continuous per-frame actor-state auto-dump. Independent of gdb — meant to
// be toggled at runtime from a keyboard hotkey (see user32 shim) so a session
// can be recorded while the user drives the game. Two slots are exposed so
// player and a chosen NPC can be dumped in parallel.
//
//   slot:          0 or 1. Out-of-range calls are ignored.
//   path_template: printf-style path with one `%d` for the frame counter
//                  (e.g. "/tmp/dump_p0_%04d.txt"). Pass NULL to disarm the
//                  slot. Each slot keeps its own counter that resets on (re)arm.
//   actor:         snapshot of the target. The pointer is held for the lifetime
//                  of the slot — re-arm if the actor is destroyed/respawned.
//
// The arm/disarm operation also fprintfs to stderr, so a toggle made from gdb
// is visible in the terminal.
struct CDemonActor;
void nocturne_auto_dump_set_slot(int slot, const char *path_template,
                                  struct CDemonActor *actor);

// Returns non-zero if the slot is currently armed, so a caller can flip between
// arm and disarm without tracking external state.
int  nocturne_auto_dump_is_armed(int slot);

// Tick all armed slots — each writes one numbered actor-state file per call.
// Nothing in the game calls this; drive it from a `commands` block on a
// per-frame breakpoint.
void nocturne_auto_dump_tick(void);

// Convenience toggles. Each looks up the relevant actor pointer
// (player = `g_HeroActors[g_LocalHeroIndex]`; svetlana = first CSvetlana in
// the active scene) and flips the matching slot. Path templates are fixed:
//   slot 0 (player):   /tmp/auto_dump_player_%05d.txt
//   slot 1 (svetlana): /tmp/auto_dump_svetlana_%05d.txt
// Returns 1 if newly armed, 0 if disarmed, -1 if the actor couldn't be found.
int nocturne_auto_dump_toggle_player(void);
int nocturne_auto_dump_toggle_svetlana(void);

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

// Decoded streaming PCM, as it comes out of the decoder and before the mixer
// resamples or attenuates it. Only MP3s stream, so this is the decoder's own
// output for one sample, which is what an offline decode of the same file can
// be diffed against.
//
// Armed by the environment variable NOCTURNE_DUMP_STREAM_PCM, whose value is a
// directory. Each sample writes <dir>/<sample name>.raw, appended across the
// batches that make it up; the header the decoder reports is written beside it
// as <dir>/<sample name>.txt so the raw file can be interpreted without
// guessing. Unset, and under NOCTURNE_DUMP_TOOLS=0, this is a no-op.
//
// Raw rather than WAV because a stream arrives in batches and the length is not
// known until it ends — see NOCTURNE_AUTHENTIC_STREAM_LENGTH. The sidecar
// carries what a WAV header would.
void nocturne_dump_stream_pcm(const char *sample_name, const short *pcm, int frames,
                              int num_channels, int bit_depth, int sample_rate);

// Actor creation gates — writes <path> as plain text. An actor named in a set
// is not created until CDemonMission::buildActiveSetActorList decides it is,
// and that decision reads exactly three things: the actor's lifecycle_state,
// its create_event string, and what CEventList::evaluateCondition makes of
// that string. This records all three for every actor carrying a gating
// create_event, alongside whether the actor reached the active set.
//
// The containers evaluateCondition consults are dumped with it — the staging
// block, current events, game flags, persistent events and timers — so a
// condition that answers true can be traced to the container that made it
// true, or shown to answer true with nothing backing it. The staging block is
// the one the on-screen event display never draws.
int nocturne_dump_create_gates(const char *path);

// Flame visibility — writes <path> as plain text, one row per CFlame in the
// mission. A flame's sprite quad is drawn only while its `is_visible` is set,
// and that field is decided ONCE per camera angle: CFlame::renderBackground
// runs from CDemonSet::renderBackgroundActors, records the verdict of
// CBoundingBox3D::isVisible, and clears `do_visibility_check` so
// CFlame::renderTransparent never tests again. The corona is a separate
// CDemonGlobe light and is unaffected, so a stale verdict shows up as a glow
// with no flame in it.
//
// Each row carries the stored verdict alongside a fresh one: the bounding box
// is re-fetched and re-tested right now, through the same setupRenderState
// bracket renderBackground uses. A stored 0 against a fresh 1 means the verdict
// is stale — taken when the camera was in a different state. A fresh 0 means
// the box genuinely fails the test, and the `with_camera` column says whether
// it failed the frustum gate or something after it.
//
// The re-test writes g_PerspectiveReciprocal and g_SolidColorMode; both are
// saved and put back, so the probe leaves no state behind.
int nocturne_dump_flame_visibility(const char *path);

// Flame draw trace — records what each flame sprite is actually drawn with, at
// the point CFlame::renderTransparent has finished computing it and is about to
// hand the quad to the renderer. A snapshot taken from the event loop cannot
// answer this: the render pass has a camera and a fog depth that the event loop
// does not, so every box test there reports "not visible" whatever the truth.
//
// Armed by nocturne_probe_flame_draw_arm, which takes a row budget and a path;
// the hook writes rows until the budget runs out and then disarms itself, so a
// single keypress captures a few frames rather than an unbounded file. Each row
// carries the fog value the alpha was derived from, the final alpha, and the
// four projected screen positions of the quad — enough to separate "drawn
// transparent" from "drawn somewhere unexpected" from "not drawn at all", since
// a flame that never reaches the hook writes no row.
void nocturne_probe_flame_draw_arm(const char *path, int rows);
void nocturne_probe_flame_draw(const char *name, int fog, int alpha);

#ifdef __cplusplus
}
#endif
