#pragma once

// =============================================================================
// MIRROR RENDER-STAGE TOGGLES (debug)
// =============================================================================
//
// The mirror room renders each reflected pass as a sub-loop gated on
// `CDemonSet::mirror_glass_actor_count`. To bisect which pass corrupts the
// frame WITHOUT fragile gdb forcing, every such sub-loop's iteration count is
// wrapped in MIRROR_STAGE(bit, count). A runtime bitmask (g_MirrorStageMask)
// decides, per stage, whether the real count or 0 is used — 0 disables that
// reflected pass for the frame.
//
// Toggle from gdb, e.g.:
//   (gdb) call (void)nocturne_mirror_only(MIRROR_STAGE_FIRE)   // 0x10
//   (gdb) call (void)nocturne_mirror_disable(0x04)             // particles off
//   (gdb) call (void)nocturne_mirror_all()
//   (gdb) call (void)nocturne_mirror_status()
//
// Compile-time gated by NOCTURNE_DUMP_TOOLS (shim_config_debug.h). When 0, the macro
// expands to the bare count expression — the canonical build is unaffected.

#include "shim_config.h"

// Stage bits (bitmask in g_MirrorStageMask). Match the renderScene/processFrame
// pass order so the values are easy to read in a hex mask.
#define MIRROR_STAGE_CORONA       0x01  // renderScene corona + globe reflected sub-loops
#define MIRROR_STAGE_OPAQUE       0x02  // renderOpaqueActors per-actor reflected sub-loop
#define MIRROR_STAGE_PARTICLES    0x04  // renderScene gore-particle reflected sub-loop
#define MIRROR_STAGE_TRANSPARENT  0x08  // renderTransparentActors per-actor reflected sub-loop
#define MIRROR_STAGE_FIRE         0x10  // renderScene fire reflected sub-loop
#define MIRROR_STAGE_BLOOM        0x20  // renderScene dynamic-light bloom reflected sub-loop
#define MIRROR_STAGE_GLOW         0x40  // renderScene dynamic-light glow reflected sub-loop
#define MIRROR_STAGE_STATICLIGHTS 0x80  // renderStaticLights reflected sub-loop
#define MIRROR_STAGE_ALL          0xFF

#ifdef __cplusplus
extern "C" {
#endif

#if NOCTURNE_DUMP_TOOLS

// Bitmask of enabled stages. Defaults to MIRROR_STAGE_ALL (all reflected passes
// run, i.e. stock behavior).
extern int g_MirrorStageMask;

// Loop-count gate: returns real_count when the stage's bit is set, else 0.
int nocturne_mirror_stage_count(int stage_bit, int real_count);

// gdb-callable controls. Each prints the resulting status to stderr.
void nocturne_mirror_set_mask(int mask);    // replace the whole mask
void nocturne_mirror_enable(int stage_bit); // OR a stage on
void nocturne_mirror_disable(int stage_bit);// AND a stage off
void nocturne_mirror_only(int stage_bit);   // enable ONLY this stage
void nocturne_mirror_all(void);             // enable every stage
int  nocturne_mirror_get_mask(void);
void nocturne_mirror_status(void);          // print readable per-stage status

#define MIRROR_STAGE(bit, count) nocturne_mirror_stage_count((bit), (count))

#else  // NOCTURNE_DUMP_TOOLS == 0 — canonical build, no overhead, no behavior change.

#define MIRROR_STAGE(bit, count) (count)

#endif

#ifdef __cplusplus
}
#endif
