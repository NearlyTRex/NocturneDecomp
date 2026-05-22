#pragma once

// =============================================================================
// SHIM CONSTANTS — numeric magnitudes used by keep/shim code
// =============================================================================
// Plain magnitude constants only. Behavior toggles live in shim_config.h; the
// keeps decide *whether* to apply a constant (e.g. via #if NOCTURNE_AUTHENTIC_*),
// this header just names the magnitude.

// NOCTURNE_BACKBUFFER_GUARD_BYTES
//   Trailing slack added to the g_BackBuffer software-framebuffer malloc in
//   setScreenResolution when NOT building NOCTURNE_AUTHENTIC_WINDOWS.
//
//   The original allocates g_BackBuffer tight (bytes_per_pixel * width * height).
//   The software scanline rasterizers (renderScanline* / renderMMXPerspectiveScanline*
//   in windll.cpp) fill spans [left_x, right_x) with no horizontal clamp (verified
//   against asm at 005b4055-4067), so clip-boundary fixed-point rounding can leave
//   the bottom scanline writing/reading one pixel past the buffer end. On Windows
//   the heap allocator's slack absorbed it (latent bug); on Linux + ASan the tight
//   malloc's redzone makes it a fatal heap-buffer-overflow. The off-screen pixel is
//   never presented (the blit copies only width*height), so the slack changes
//   nothing visible. 0x40 mirrors the Z-buffer's existing headroom in the same
//   function.
#define NOCTURNE_BACKBUFFER_GUARD_BYTES 0x40
