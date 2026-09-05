#pragma once

// =============================================================================
// LIGHTING BRIDGE — the per-pixel light/fog grid, for the shader renderer
// =============================================================================
//
// Phase 1 of research/17-shader_renderer_migration.
//
// WHY THIS EXISTS. CDemonCamera::compositeLightmapToFramebuffer applies the
// per-pixel light/fog grid to the CPU image *before* BeginScene, so hardware
// draws land after it and never receive it. That is measurably wrong: the
// chapel window renders at max 56 under acceleration against 28 in both our own
// software path and retail, because CGlass is drawn twice — once CPU-side into
// the composite's source (correctly darkened) and again as hardware geometry
// that misses the grid entirely. See research/12.
//
// The fix is to apply the same grid inside the fragment shader used for DLL
// draws. Hardware fragments then receive it and CPU-composited pixels do not,
// so every pixel gets it exactly once — no stencil, and no change to the
// composite itself.
//
// WHY IT IS NOT PART OF CExternalRendererBridge. That struct is the authentic
// nocedit<->tridx7 ABI (an array of pointers to live globals) and the engine
// already probes 60 APIDLL entry points against a DLL that exports 37.
// Extending it would deviate from the binary and widen that mismatch. This is a
// separate side-channel, referenced only by the shader path; the authentic
// struct keeps its exact layout.
//
// TIMING. The grids are only valid AFTER blurCoronaBufferAndClearEdges, which
// is the composite's first action — it is what fills g_CoronaBlurWorkBuffer.
// Reading them earlier yields the PREVIOUS frame's data; that already cost an
// iteration in research/12, where it produced a convincing 33% match that was
// pure coincidence. Hence nocturne_lighting_bridge_update() is called from
// inside the composite, after the blur, rather than from the renderer.

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NocturneLightingBridge {
    // ---- the two per-pixel grids, 320 bytes per row -------------------------
    // Corona/brightness indices — g_CoronaBlurWorkBuffer, post-blur. Indexes
    // g_LightmapTexturePalette to give a per-channel gain, where 64 is unity.
    const unsigned char *corona_grid;
    // Fog/light indices — g_CameraPlaneWorkBuffer.pixels.
    const unsigned char *plane_grid;
    int grid_pitch;            // 320, the static array's row stride
    int grid_rows;             // rows the grids actually have

    // ---- the two lookup tables ----------------------------------------------
    // g_LightmapData: 512 entries of four 16-bit words, one per channel. Every
    // word observed is exactly (v << 6) with v in 0..255 — see
    // research/17 — so the shader carries v directly as a byte.
    // Indexed lm = plane + (corona >> 1), max 255 + 127 = 382, inside 512.
    const unsigned short *lightmap_table;   // 2048 ushorts
    // g_LightmapTexturePalette: 256 packed colours, one per corona index.
    const unsigned int   *palette;          // 256 uints

    // ---- scalars ------------------------------------------------------------
    // g_SolidColorMode already unpacked to 0..255 per channel, so the shader
    // never has to know the surface's bit positions.
    float solid_rgb[3];
    // Which byte of a palette entry, and which 16-bit word of a lightmap entry,
    // carries red / green / blue. The blend works on packed lanes, so lane c is
    // whatever channel sits at bit c*8 of the surface — BGRA on the usual 32bpp
    // format. The renderer un-swizzles with this when it builds its lookup
    // textures, so nothing downstream has to guess.
    int channel_lane[3];

    int fb_width, fb_height;   // the camera framebuffer the grids cover
    // The two axes step through the grid INDEPENDENTLY, and by different
    // amounts. Rows advance one grid row per (1 << downscale_shift) pixels;
    // columns advance one grid column per scale_factor pixels, that being what
    // picks blendLightmapPerPx (1 index per pixel) over blendHBilerp...Px2
    // (1 index per two). They agree at 640x480 and need not anywhere else.
    int downscale_shift;       // g_CameraDownscaleIterations
    int scale_factor;          // CDemonCamera::scale_factor, 1 or 2
    int shake_x, shake_y;      // g_CameraShakeOffset*; screen = camera - shake

    unsigned int serial;       // bumped per composite; upload when it changes
    int valid;                 // 0 until the first composite has run
} NocturneLightingBridge;

// The current state. Never null; check `valid` before using it. Cheap — it
// hands back pointers and scalars, not the grids themselves.
const NocturneLightingBridge *nocturne_lighting_bridge(void);

// Called from compositeLightmapToFramebuffer once the blur has run and the fog
// colour is resolved, so the bridge describes this frame rather than last one.
void nocturne_lighting_bridge_update(int fb_width, int fb_height,
                                     int scale_factor);

#ifdef __cplusplus
}
#endif
