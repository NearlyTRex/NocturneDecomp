/*
 * Nocturne 3D Rendering Flags - Ghidra Constants
 *
 * This file contains all the render state flags found in the Nocturne engine
 * with their DirectX mappings and custom engine extensions.
 *
 * Usage: Import into Ghidra as a header file for automatic constant resolution
 */

#ifndef NOCTURNE_RENDER_FLAGS_H
#define NOCTURNE_RENDER_FLAGS_H

// =============================================================================
// DIRECTX 6/7 RENDER STATE CONSTANTS (Confirmed from d3dtypes.h)
// =============================================================================

#define D3DRENDERSTATE_TEXTUREHANDLE      1    /* Texture handle */
#define D3DRENDERSTATE_ANTIALIAS          2    /* Antialiasing prim edges */
#define D3DRENDERSTATE_TEXTUREADDRESS     3    /* D3DTEXTUREADDRESS */
#define D3DRENDERSTATE_TEXTUREPERSPECTIVE 4    /* TRUE for perspective correction */
#define D3DRENDERSTATE_WRAPU              5    /* TRUE for wrapping in u */
#define D3DRENDERSTATE_WRAPV              6    /* TRUE for wrapping in v */
#define D3DRENDERSTATE_ZENABLE            7    /* TRUE to enable z test */
#define D3DRENDERSTATE_FILLMODE           8    /* D3DFILL_MODE */
#define D3DRENDERSTATE_SHADEMODE          9    /* D3DSHADEMODE */
#define D3DRENDERSTATE_LINEPATTERN        10   /* D3DLINEPATTERN */
#define D3DRENDERSTATE_MONOENABLE         11   /* TRUE to enable mono rasterization */
#define D3DRENDERSTATE_ROP2               12   /* ROP2 */
#define D3DRENDERSTATE_PLANEMASK          13   /* DWORD physical plane mask */
#define D3DRENDERSTATE_ZWRITEENABLE       14   /* TRUE to enable z writes */
#define D3DRENDERSTATE_ALPHATESTENABLE    15   /* TRUE to enable alpha tests */
#define D3DRENDERSTATE_LASTPIXEL          16   /* TRUE for last-pixel on lines */
#define D3DRENDERSTATE_TEXTUREMAG         17   /* D3DTEXTUREFILTER */
#define D3DRENDERSTATE_TEXTUREMIN         18   /* D3DTEXTUREFILTER */
#define D3DRENDERSTATE_SRCBLEND           19   /* D3DBLEND */
#define D3DRENDERSTATE_DESTBLEND          20   /* D3DBLEND */
#define D3DRENDERSTATE_TEXTUREMAPBLEND    21   /* D3DTEXTUREBLEND */
#define D3DRENDERSTATE_CULLMODE           22   /* D3DCULL */
#define D3DRENDERSTATE_ZFUNC              23   /* D3DCMPFUNC */
#define D3DRENDERSTATE_ALPHAREF           24   /* D3DFIXED */
#define D3DRENDERSTATE_ALPHAFUNC          25   /* D3DCMPFUNC */
#define D3DRENDERSTATE_DITHERENABLE       26   /* TRUE to enable dithering */
#define D3DRENDERSTATE_BLENDENABLE        27   /* TRUE to enable alpha blending */
#define D3DRENDERSTATE_FOGENABLE          28   /* TRUE to enable fog */
#define D3DRENDERSTATE_SPECULARENABLE     29   /* TRUE to enable specular */
#define D3DRENDERSTATE_ZVISIBLE           30   /* TRUE to enable z checking */
#define D3DRENDERSTATE_SUBPIXEL           31   /* TRUE to enable subpixel correction */
#define D3DRENDERSTATE_SUBPIXELX          32   /* TRUE to enable correction in X only */
#define D3DRENDERSTATE_STIPPLEDALPHA      33   /* TRUE to enable stippled alpha */
#define D3DRENDERSTATE_FOGCOLOR           34   /* D3DCOLOR */
#define D3DRENDERSTATE_FOGTABLEMODE       35   /* D3DFOGMODE */
#define D3DRENDERSTATE_FOGTABLESTART      36   /* Fog table start */
#define D3DRENDERSTATE_FOGTABLEEND        37   /* Fog table end */
#define D3DRENDERSTATE_FOGTABLEDENSITY    38   /* Fog table density */
#define D3DRENDERSTATE_STIPPLEENABLE      39   /* TRUE to enable stippling */

// Stipple pattern constants (64-95)
#define D3DRENDERSTATE_STIPPLEPATTERN00   64   /* Stipple pattern 00 */
#define D3DRENDERSTATE_STIPPLEPATTERN01   65   /* Stipple pattern 01 */
// ... (continuing to 95, not all listed for brevity)

#define D3DSTATE_OVERRIDE_BIAS            256  /* Override bias for state */

// =============================================================================
// CRITICAL DISCOVERY: MULTI-PARAMETER FLAG SYSTEM
// =============================================================================

/*
 * FUNCTION SIGNATURE ANALYSIS (from renderPolygon_FUN_00407620):
 *
 * renderPolygon(SPrimitive *primitive,
 *               int render_flags,           // Parameter 2 - Purpose unknown
 *               int render_state_flags,     // Parameter 3 -> g_RenderStateFlags
 *               int alpha_blend_flags,      // Parameter 4 -> Alpha blending control
 *               int special_render_mode)    // Parameter 5 -> g_RenderStateFlag2
 *
 * This reveals the engine uses FOUR separate flag parameters, not just two!
 */

// =============================================================================
// NOCTURNE ENGINE FLAGS - DIRECTX COMPATIBLE LAYER (render_state_flags)
// =============================================================================

// These flags are passed directly to external hardware renderers (DirectX)
// and correspond to actual DirectX render state constants

// Basic DirectX render states used by Nocturne
#define NOCTURNE_WRAPU                    0x5    // D3DRENDERSTATE_WRAPU
#define NOCTURNE_SHADEMODE                0x9    // D3DRENDERSTATE_SHADEMODE
#define NOCTURNE_PLANEMASK                0xd    // D3DRENDERSTATE_PLANEMASK
#define NOCTURNE_LIGHTING_ENABLE          0x10   // CONFIRMED: Lighting enable flag
#define NOCTURNE_LASTPIXEL                0x10   // D3DRENDERSTATE_LASTPIXEL (same as lighting)

// =============================================================================
// NOCTURNE ENGINE FLAGS - ALPHA BLENDING OPERATIONS (alpha_blend_flags)
// =============================================================================

// DISCOVERY: 0xc0 is related to alpha blending, not just textures!
// When (alpha_blend_flags & 0xc0) != 0, forces depth buffer preparation
#define NOCTURNE_ALPHA_BLEND_BASE         0xc0   // 192 - Alpha blending operations base
#define NOCTURNE_ALPHA_DEPTH_PREP_MASK    0xc0   // Mask for depth buffer preparation trigger

// Alpha blending + texture operation flags (all based on 0xc0)
#define NOCTURNE_ALPHA_BASIC              0xc0   // Basic alpha blending operations
#define NOCTURNE_ALPHA_TEXTURE_ENABLED    0xc1   // 0xc0 | 0x1 - Alpha + texture enabled
#define NOCTURNE_ALPHA_COMPLEX            0xc3   // 0xc0 | 0x3 - Complex alpha mode
#define NOCTURNE_ALPHA_PERSPECTIVE        0xc4   // 0xc0 | 0x4 - Alpha + perspective
#define NOCTURNE_ALPHA_WRAPU              0xc5   // 0xc0 | 0x5 - Alpha + U wrapping

// Legacy texture names (for compatibility)
#define NOCTURNE_TEXTURE_BASE             NOCTURNE_ALPHA_BLEND_BASE
#define NOCTURNE_TEXTURE_BASIC            NOCTURNE_ALPHA_BASIC
#define NOCTURNE_TEXTURE_ENABLED          NOCTURNE_ALPHA_TEXTURE_ENABLED
#define NOCTURNE_TEXTURE_COMPLEX          NOCTURNE_ALPHA_COMPLEX
#define NOCTURNE_TEXTURE_PERSPECTIVE      NOCTURNE_ALPHA_PERSPECTIVE
#define NOCTURNE_TEXTURE_WRAPU            NOCTURNE_ALPHA_WRAPU

// =============================================================================
// NOCTURNE ENGINE FLAGS - SOFTWARE RENDERER BITFIELD FLAGS
// =============================================================================

// These flags are used by the software scanline renderers for fast bitwise operations
// They are completely custom to Nocturne and have no DirectX equivalent

#define NOCTURNE_SW_TEXTURE_ENABLE        0x1    // Enable texture mapping
#define NOCTURNE_SW_OPACITY_MODE          0x2    // Transparency/alpha mode
#define NOCTURNE_SW_ZTEST_ENABLE          0x40   // Z-buffer test enable
#define NOCTURNE_SW_ZWRITE_ENABLE         0x80   // Z-buffer write enable

// =============================================================================
// NOCTURNE ENGINE FLAGS - COMPOSITE FLAGS (FREQUENT COMBINATIONS)
// =============================================================================

// Simple combinations
#define NOCTURNE_LIT_BASIC                0x10   // Basic lighting
#define NOCTURNE_LIT_ENHANCED             0x13   // Enhanced lighting
#define NOCTURNE_LIT_COMPLEX              0x23   // Complex lighting
#define NOCTURNE_LIT_ADVANCED             0x33   // Advanced lighting
#define NOCTURNE_ALPHA_BASIC              0x41   // Basic alpha
#define NOCTURNE_SHADED_BASIC             0x81   // Basic shaded
#define NOCTURNE_SHADED_SPECIAL           0x90   // Special shaded

// Plane mask combinations
#define NOCTURNE_PLANEMASK_TEXTURE        0x8d   // Plane mask + effects
#define NOCTURNE_PLANEMASK_TEXTURE_EXT    0x28d  // Extended plane mask + texture
#define NOCTURNE_PLANEMASK_ENHANCED       0xd1   // 0xd0 | 0x1 - Enhanced plane mask
#define NOCTURNE_PLANEMASK_COMPLEX        0xd9   // Complex plane mask effects

// High-quality rendering combinations
#define NOCTURNE_QUALITY_STANDARD         0x163  // Standard quality
#define NOCTURNE_QUALITY_PREMIUM          0x1e7  // Premium quality
#define NOCTURNE_QUALITY_DETAIL           0x67   // Detailed quality
#define NOCTURNE_QUALITY_ULTRA_BASE       0x267  // Ultra quality base
#define NOCTURNE_QUALITY_ULTRA_EXT        0x367  // Ultra quality extended

// =============================================================================
// NOCTURNE ENGINE FLAGS - COMPLEX MULTI-FEATURE FLAGS
// =============================================================================

// These combine engine features with DirectX states
// Pattern: High byte = engine flags, Low byte = DirectX + custom

// 0x2xx series - Engine feature set 1
#define NOCTURNE_ENG1_SPECIAL             0x2cd  // Engine set 1 + special
#define NOCTURNE_ENG1_ADVANCED            0x2e7  // Engine set 1 + advanced

// 0x3xx series - Engine feature set 2
#define NOCTURNE_ENG2_COMPLEX             0x327  // Engine set 2 + complex
#define NOCTURNE_ENG2_ULTRA               0x367  // Engine set 2 + ultra

// =============================================================================
// NOCTURNE PREPROCESSING FLAGS (g_RenderStateFlag2 / special_render_mode)
// =============================================================================

// These control vertex preprocessing algorithms before rendering
// AUTOMATIC ASSIGNMENT LOGIC (from renderPolygon_FUN_00407620):
// if (special_render_mode == 0) {
//   if ((alpha_blend_flags & 0xc0) != 0) {
//     g_RenderStateFlag2 = 1;  // Force depth buffer prep
//   }
// } else {
//   g_RenderStateFlag2 = 5;    // Force alternative normalization
// }

#define NOCTURNE_PREPROCESS_NONE          0     // No preprocessing
#define NOCTURNE_PREPROCESS_DEPTH         1     // prepareDepthBuffer() - FORCED by alpha
#define NOCTURNE_PREPROCESS_TEXNORM       2     // normalizeTextureCoords()
#define NOCTURNE_PREPROCESS_NEARPLANE     3     // adjustNearPlaneTextureCoords()
#define NOCTURNE_PREPROCESS_PRIMITIVE     4     // Custom primitive processing
#define NOCTURNE_PREPROCESS_TEXNORM_ALT   5     // Alternative normalization - FORCED mode
#define NOCTURNE_PREPROCESS_WREPLACE      6     // replaceWWithDepth()

// =============================================================================
// FLAG USAGE PATTERNS (for reference)
// =============================================================================

/*
 * USAGE PATTERNS FOUND IN CODE:
 *
 * Basic Operations:
 * - g_RenderStateFlags = 0x1;     // Simple texture enable
 * - g_RenderStateFlags = 0x10;    // LIGHTING ENABLE (confirmed!)
 * - g_RenderStateFlags = 0x23;    // Complex lighting
 *
 * Alpha Blending Operations (alpha_blend_flags parameter):
 * - alpha_blend_flags = 0xc0;     // Basic alpha blending
 * - alpha_blend_flags = 0xc1;     // Alpha + texture enabled
 * - alpha_blend_flags = 0xc3;     // Complex alpha mode
 * - alpha_blend_flags = 0xc4;     // Alpha + perspective
 * - alpha_blend_flags = 0xc5;     // Alpha + U wrapping
 *
 * When (alpha_blend_flags & 0xc0) != 0:
 *   Automatically sets g_RenderStateFlag2 = 1 (depth buffer prep)
 *
 * Quality Settings:
 * - g_RenderStateFlags = 0x163;   // Standard quality
 * - g_RenderStateFlags = 0x1e7;   // Premium quality
 * - g_RenderStateFlags = 0x267;   // Ultra base quality
 * - g_RenderStateFlags = 0x327;   // Complex rendering
 * - g_RenderStateFlags = 0x367;   // Ultra extended quality
 *
 * Special Effects:
 * - g_RenderStateFlags = 0x8d;    // Plane mask effects
 * - g_RenderStateFlags = 0x28d;   // Extended plane mask
 * - g_RenderStateFlags = 0x2cd;   // Special engine effects
 * - g_RenderStateFlags = 0x2e7;   // Advanced engine effects
 *
 * Preprocessing (g_RenderStateFlag2 / special_render_mode parameter):
 * - special_render_mode = 0;      // Auto-determined by alpha_blend_flags
 * - g_RenderStateFlag2 = 1;       // Depth buffer prep (auto from alpha)
 * - g_RenderStateFlag2 = 2;       // Texture normalization
 * - g_RenderStateFlag2 = 3;       // Near-plane correction
 * - g_RenderStateFlag2 = 5;       // Alternative normalization (auto)
 * - g_RenderStateFlag2 = 6;       // W-coordinate replacement
 *
 * AUTOMATIC ASSIGNMENT:
 * - If special_render_mode != 0: Forces g_RenderStateFlag2 = 5
 * - If alpha_blend_flags & 0xc0: Forces g_RenderStateFlag2 = 1
 */

// =============================================================================
// FLAG COMPOSITION ANALYSIS
// =============================================================================

/*
 * FLAG BIT PATTERNS:
 *
 * Software Renderer Bits (low byte):
 * Bit 0 (0x1)  - Texture enable
 * Bit 1 (0x2)  - Opacity/alpha mode
 * Bit 6 (0x40) - Z-buffer test
 * Bit 7 (0x80) - Z-buffer write
 *
 * DirectX State Integration:
 * 0x5  - WRAPU (DirectX constant)
 * 0x9  - SHADEMODE (DirectX constant)
 * 0xd  - PLANEMASK (DirectX constant)
 * 0x10 - LASTPIXEL (DirectX constant)
 *
 * Engine Feature Flags (high byte):
 * 0x100 - Engine feature set A
 * 0x200 - Engine feature set B
 * 0x300 - Engine feature set C
 *
 * Alpha Blend Base Discovery:
 * 0xc0 (192) - CONFIRMED as alpha blending operations base:
 *   - Controls alpha blending + texture combinations
 *   - Triggers automatic depth buffer preparation
 *   - Used in separate alpha_blend_flags parameter
 *   - NOT just a texture base - it's alpha blending control!
 *
 * Multi-Parameter Flag System:
 * render_flags (unknown) | render_state_flags | alpha_blend_flags | special_render_mode
 *          ?              |   g_RenderStateFlags  |     0xc0 series    | g_RenderStateFlag2
 */

#endif /* NOCTURNE_RENDER_FLAGS_H */