#pragma once

// =============================================================================
// SCREENSHOT DUMPER — debug helper
// =============================================================================
//
// Single C-callable helper for dumping the current g_BackBuffer contents to
// a PPM file. Intended for use from gdb when you want to snapshot what the
// rasterizer has produced at a specific point in the frame.
//
// Compile-time gated by NOCTURNE_SCREENSHOT_DUMP in shim_config.h. When 0
// the function is a no-op stub returning -1.
//
// Returns 0 on success, -1 on failure (file open error or unsupported BPP).
// Output is binary PPM (P6 magic) — open with any image viewer.

#ifdef __cplusplus
extern "C" {
#endif

int nocturne_screenshot_dump(const char *path);

#ifdef __cplusplus
}
#endif
