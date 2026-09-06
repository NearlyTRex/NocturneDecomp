// =============================================================================
// LIGHTING BRIDGE — implementation
// =============================================================================
//
// See lighting_bridge.h for what this is for and why it is not part of
// CExternalRendererBridge.
//
// Everything here is a snapshot of globals the composite has just finished
// preparing. It copies no pixels: the grids are static arrays that live for the
// process, so the renderer reads them in place and only the scalars are stored.
//
// The toggle lives at the ONE call site — the update inside the composite —
// rather than around these definitions, so the symbols resolve whatever the
// build believes about lighting. Under NOCTURNE_AUTHENTIC_SHADER_LIGHTING
// nothing calls the update and `valid` stays 0.
//
// No renderer reads the published grid: measurement says hardware geometry
// arrives at final brightness and the per-pixel grid is the software
// rasterizer's own lighting mechanism (research/17, open item 2). This exists so
// that a per-fragment lighting model can be measured against the composite
// without rebuilding the plumbing first.

#include "nocturne.h"

namespace {

NocturneLightingBridge g_bridge = {};

// g_SolidColorMode is packed for the surface the composite is writing, so the
// bit positions differ between the 32bpp and 16bpp branches of the composite.
// Unpack here rather than in the shader, which has no business knowing either.
void unpack_solid_color(float out_rgb[3], int out_lane[3]) {
    unsigned int shift[3] = { 16, 8, 0 };

    if (g_BitsPerPixel == 0x20) {
        shift[0] = g_RedBitPosition.bytes[0]   & 0x1f;
        shift[1] = g_GreenBitPosition.bytes[0] & 0x1f;
        shift[2] = g_BlueBitPosition.bytes[0]  & 0x1f;
    }

    const unsigned int solid = (unsigned int)g_SolidColorMode;
    for (int c = 0; c < 3; ++c) {
        out_rgb[c] = (float)((solid >> shift[c]) & 0xff);
        // The blend's lanes are byte/word c at bit c*8 of the packed pixel, so
        // the bit position IS the lane index once divided by 8. Clamp rather
        // than trust it: a mode with an odd bit layout would otherwise index
        // past a 4-lane entry.
        int lane = (int)(shift[c] >> 3);
        out_lane[c] = (lane < 0 || lane > 3) ? c : lane;
    }
}

}  // namespace

extern "C" const NocturneLightingBridge *nocturne_lighting_bridge(void) {
    return &g_bridge;
}

extern "C" void nocturne_lighting_bridge_update(int fb_width, int fb_height,
                                                int scale_factor) {
    g_bridge.corona_grid = (const unsigned char *)g_CoronaBlurWorkBuffer;
    g_bridge.plane_grid  = (const unsigned char *)g_CameraPlaneWorkBuffer.pixels;
    g_bridge.grid_pitch  = 320;
    // g_CoronaBlurWorkBuffer has 241 rows to the plane's 240 — the blur writes
    // one row past the bottom. Only the rows both have are safe to read.
    g_bridge.grid_rows   = 240;

    g_bridge.lightmap_table = g_LightmapData;
    g_bridge.palette        = g_LightmapTexturePalette;

    unpack_solid_color(g_bridge.solid_rgb, g_bridge.channel_lane);

    g_bridge.fb_width        = fb_width;
    g_bridge.fb_height       = fb_height;
    g_bridge.downscale_shift = (int)(g_CameraDownscaleIterations.bytes[0] & 0x1f);
    g_bridge.scale_factor    = (scale_factor > 0) ? scale_factor : 1;
    g_bridge.shake_x         = g_CameraShakeOffsetX;
    g_bridge.shake_y         = g_CameraShakeOffsetY;

    g_bridge.serial += 1;
    g_bridge.valid   = 1;
}
