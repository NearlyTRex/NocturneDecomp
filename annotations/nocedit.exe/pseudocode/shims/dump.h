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

#ifdef __cplusplus
}
#endif
