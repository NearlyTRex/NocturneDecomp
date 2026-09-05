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
// NOT gated on NOCTURNE_AUTHENTIC_SHADER_LIGHTING, deliberately. The consumer is
// gl_shader.cpp, which is compiled as part of tridx7 against tridx7's stub
// shim_config.h and so cannot see nocedit's toggles at all. Compiling these
// symbols away would leave that call unresolved at link time. The toggle lives
// at the ONE call site instead — the update inside the composite — so under
// NOCTURNE_AUTHENTIC_SHADER_LIGHTING nothing ever calls it, `valid` stays 0, and
// the renderer takes the same fall-back path it takes on a driver with no
// shader support.

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
