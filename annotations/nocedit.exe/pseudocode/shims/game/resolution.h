#pragma once

// =============================================================================
// RESOLUTION LIST — what the Graphics Options selector can offer
// =============================================================================
//
// An addition, not a reconstruction.
//
// The shipped selector is a hardcoded chain of game_pixy comparisons in
// CGame's configureGraphicsOptions — no table, no loop — and it can reach
// exactly six modes: 320x240, 512x384, 640x480, 800x600, 1024x768, 1280x1024.
// Three consequences, all visible:
//
//   * g_ResolutionTable[9] is NOT that list. Its only reader is
//     engine/2d.c initGraphicsSystem, indexed by g_RenderingMode, to set the
//     initial 8bpp mode the external SETUP program chose. The menu never looks
//     at it, so 1600x1200 sits in the table and cannot be picked.
//   * 400x300 is a phantom: it has a display label AND a step case in both
//     directions, but nothing anywhere assigns game_pixy = 300. You can only
//     reach it by editing the INI, and one keypress leaves it forever.
// The acceleration gate on modes above 640x480 is NOT one of those problems and
// is deliberately kept. The software rasteriser is happy at any size — it
// writes scanlines straight into g_ScreenBufferArray at the native resolution —
// but two things past 480 lines belong to the renderer:
// CDemonCamera::lockAndRenderToBuffer takes the renderer's hold buffer (fatal
// when no renderer DLL is loaded), and compositeLightmapToFramebuffer maps the
// 640x480 lighting grid onto the screen row-for-row, so the per-pixel lighting
// would only cover a corner. Raising that needs the lighting composite scaled,
// not a bigger list.
//
// This replaces the chain with one ordered table, so the labels and the
// stepping cannot disagree.
//
// Gated by NOCTURNE_AUTHENTIC_RESOLUTION_LIST in shim_config_authentic.h.
//
// The table is 4:3 throughout except 1280x1024, which the shipped game already
// offered. That matters because CDemonCamera::init derives its width as
// height*4/3 regardless of what the screen is, so a non-4:3 mode renders with a
// camera whose aspect does not match the framebuffer. g_ResolutionTable's
// 320x200 and 320x400 are deliberately not carried over for that reason.

#ifdef __cplusplus
extern "C" {
#endif

// How many modes the selector offers.
int nocturne_resolution_count(void);

// Mode `index` (0 = smallest). Writes nothing and returns 0 when out of range.
int nocturne_resolution_at(int index, int *width, int *height);

// Index of an exact width/height match, or -1. Used to tell "the current mode
// is in the list" from "the INI holds something we have to snap out of".
int nocturne_resolution_index_of(int width, int height);

// Step from the current mode to the next one, wrapping at both ends. `step` is
// +1 for a larger mode and -1 for a smaller one, matching the Options screen's
// right/left. A current mode that is not in the table (400x300 from an old INI,
// say) snaps to the nearest by height rather than falling through to the
// smallest, which is what the shipped chain's default case did.
//
// Returns 1 and writes the new mode, or 0 if the table is empty.
int nocturne_resolution_step(int current_width, int current_height, int step,
                             int *out_width, int *out_height);

// "Resolution : 1024x768" for the Options line, built into static storage.
// Never null, so the caller can hand it straight to the localiser.
const char *nocturne_resolution_label(int width, int height);

#ifdef __cplusplus
}
#endif
