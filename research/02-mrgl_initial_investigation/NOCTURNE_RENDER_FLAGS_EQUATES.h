/**
 * NOCTURNE RENDER FLAGS EQUATES FOR GHIDRA
 * Generated from systematic analysis of ALL 97 render functions across entire codebase
 *
 * Import this as a C header in Ghidra to get meaningful flag names
 * instead of raw hex values in the decompiled code.
 *
 * CRITICAL DISCOVERIES:
 * - Found 97 total render functions (not just 57 from engine_3d.c)
 * - CDemonRenderer functions are the CORE ENGINE (26 functions)
 * - engine_3d.c functions are high-level API wrappers (56 functions)
 * - All generic "quality" function names are WRONG!
 * - Core engine has higher quality modes than API layer exposes
 */

#ifndef NOCTURNE_RENDER_FLAGS_H
#define NOCTURNE_RENDER_FLAGS_H

// ============================================================================
// g_RenderStateFlags - Main Rendering Control Flags
// Based on DirectX 6/7 render states but optimized for performance
// ============================================================================

// Base DirectX-Compatible Flags
#define RENDER_TEXTURE_ENABLE           0x001   // Basic texture mapping enable
#define RENDER_ALPHA_BLEND              0x002   // Alpha blending operations
#define RENDER_VERTEX_LIGHTING          0x003   // TEXTURE_ENABLE | ALPHA_BLEND
#define RENDER_PRIMITIVE_SPECIAL        0x004   // Special primitive processing
#define RENDER_UV_WRAP_U                0x005   // D3DRENDERSTATE_WRAPU coordinate wrapping
#define RENDER_ADVANCED_MODE            0x008   // Advanced rendering mode flag
#define RENDER_ADVANCED_TEXTURED        0x009   // ADVANCED_MODE | TEXTURE_ENABLE
#define RENDER_PLANEMASK                0x00D   // D3DRENDERSTATE_PLANEMASK for decals/effects
#define RENDER_LASTPIXEL                0x010   // D3DRENDERSTATE_LASTPIXEL line rendering
#define RENDER_LIT_DETAILED             0x013   // LASTPIXEL | VERTEX_LIGHTING - detailed lighting
#define RENDER_ALPHA_CHANNEL            0x020   // Alpha channel processing
#define RENDER_LIT_COMPLEX              0x023   // ALPHA_CHANNEL | VERTEX_LIGHTING - complex lighting
#define RENDER_ALPHA_DETAILED           0x033   // ALPHA_CHANNEL | LIT_DETAILED

// Depth Buffer Control
#define RENDER_DEPTH_TEST               0x040   // Z-buffer testing enable
#define RENDER_DEPTH_WRITE              0x080   // Z-buffer writing enable
#define RENDER_DEPTH_TEST_WRITE         0x0C0   // Both depth test and write

// Texture Operations Base (DirectX WRAP0 equivalent)
#define RENDER_TEXTURE_BASE             0x0C0   // Base texture operations
#define RENDER_TEXTURE_LIT              0x0C1   // TEXTURE_BASE | TEXTURE_ENABLE
#define RENDER_TEXTURE_PERSPECTIVE      0x0C3   // TEXTURE_BASE | VERTEX_LIGHTING
#define RENDER_TEXTURE_COMPLEX          0x0C4   // TEXTURE_BASE | PRIMITIVE_SPECIAL
#define RENDER_TEXTURE_UV_WRAPPED       0x0C5   // TEXTURE_BASE | UV_WRAP_U
#define RENDER_TEXTURE_ENHANCED         0x0CD   // TEXTURE_BASE | PLANEMASK

// Combined Depth + Texture Operations
#define RENDER_DEPTH_TEXTURED           0x081   // DEPTH_WRITE | TEXTURE_ENABLE
#define RENDER_DEPTH_TEXTURED_LIT       0x083   // DEPTH_WRITE | VERTEX_LIGHTING
#define RENDER_DEPTH_TEXTURED_ADV       0x085   // DEPTH_WRITE | UV_WRAP_U
#define RENDER_COMPLEX_EFFECTS          0x08D   // DEPTH_WRITE | PLANEMASK
#define RENDER_ALTERNATIVE_DEPTH        0x090   // Alternative depth buffer mode

// Engine Processing Layers
#define RENDER_ENGINE_BASE              0x100   // Engine-specific processing
#define RENDER_ENGINE_ENHANCED          0x200   // Enhanced engine processing
#define RENDER_ENGINE_PREMIUM           0x300   // Premium engine processing (0x200 | 0x100)

// High-Level Rendering Modes (Engine + Features)
#define RENDER_ENGINE_HIGH_QUALITY      0x163   // ENGINE_BASE | depth+texture+lighting (0x100|0x63)
#define RENDER_ENGINE_PREMIUM_QUALITY   0x1E7   // ENGINE_BASE | premium features (0x100|0xE7)
#define RENDER_ENGINE_ULTRA_QUALITY     0x267   // ENGINE_ENHANCED | ultra features (0x200|0x67)
#define RENDER_ENGINE_ADVANCED_QUALITY  0x367   // ENGINE_PREMIUM | advanced features (0x300|0x67)

// Special Effects Combinations
#define RENDER_SPECIAL_EFFECTS          0x28D   // ENGINE_ENHANCED | COMPLEX_EFFECTS (0x200|0x8D)
#define RENDER_PERSPECTIVE_ENHANCED     0x20D   // ENGINE_ENHANCED | PLANEMASK (0x200|0x0D)

// Plane Masking Variants (for decals, overlays, special effects)
#define RENDER_PLANE_MASKED             0x0D0   // Plane masking operations
#define RENDER_PLANE_MASKED_LIT         0x0D1   // PLANE_MASKED | TEXTURE_ENABLE
#define RENDER_PLANE_MASKED_COMPLEX     0x0D3   // PLANE_MASKED | VERTEX_LIGHTING
#define RENDER_FULL_FEATURED            0x0D9   // Complex multi-feature rendering

// Alpha Blending Variants
#define RENDER_ALPHA_PERSPECTIVE        0x0E3   // TEXTURE_PERSPECTIVE | ALPHA_CHANNEL (0xC3|0x20)

// CORE DEMON ENGINE FLAGS (CDemonRenderer functions)
// These are the ACTUAL engine core rendering modes - higher quality than API layer
#define RENDER_ENGINE_CORE_PREMIUM      0x2CD   // ENGINE_ENHANCED | TEXTURE_ENHANCED | PLANEMASK
#define RENDER_ENGINE_CORE_ULTRA        0x2E7   // ENGINE_ENHANCED | premium features
#define RENDER_ENGINE_CORE_COMPLEX      0x327   // ENGINE_PREMIUM | complex multi-feature
#define RENDER_ENGINE_CORE_MAXIMUM      0x367   // ENGINE_PREMIUM | maximum quality mode
#define RENDER_ENGINE_SPECIAL_DEPTH     0x041   // Special depth+texture engine mode

// Extreme Quality Modes
#define RENDER_EXTREME_QUALITY          499     // Highest possible quality (decimal!) - engine_3d.c only

// ============================================================================
// g_RenderStateFlag2 - Vertex Preprocessing Control
// Controls preprocessing operations before main rendering
// ============================================================================

#define PREPROCESS_NONE                    0    // No preprocessing - direct rendering
#define PREPROCESS_DEPTH_BUFFER_PREP       1    // Z-buffer preparation (most common)
#define PREPROCESS_TEXTURE_COORD_NORMALIZE 2    // Texture coordinate normalization
#define PREPROCESS_NEAR_PLANE_CORRECT      3    // Near-plane texture correction
#define PREPROCESS_PRIMITIVE_SPECIAL       4    // Special primitive processing
#define PREPROCESS_TEXTURE_NORMALIZE_ALT   5    // Alternative texture normalization
#define PREPROCESS_W_DEPTH_REPLACEMENT     6    // W-coordinate depth replacement

// CRITICAL: Flag2=6 is the CORE ENGINE'S NATIVE PRECISION MODE
// Almost all CDemonRenderer functions use this for high-precision rendering
#define PREPROCESS_CORE_ENGINE_PRECISION 6      // Core Demon Engine native precision mode

// ============================================================================
// FUNCTION NAME CORRECTIONS
// The generic "quality" names are misleading - here's what they actually do:
// ============================================================================

/*
ARCHITECTURE REVEALED - 4-TIER RENDERING SYSTEM:

Tier 1: High-Level API Layer (engine_3d.c - 56 functions)
  - Specialized geometric interfaces and convenience wrappers
  - Uses 0x100/0x200/0x300 series flags (API layer quality modes)
  - All ultimately delegate to core engine (CDemonRenderer)

Tier 2: CORE DEMON ENGINE (CDemonRenderer - 26 functions)
  - The ACTUAL 3D engine rendering system
  - Uses 0x2CD/0x2E7/0x327/0x367 (native engine quality modes)
  - Flag2=6 is the engine's native precision mode
  - Higher maximum quality than API layer exposes!

Tier 3: Low-Level Rasterization (wincore/windll.cpp - 6 functions)
  - MMX-optimized and software scanline renderers
  - All functions route here via g_ScanlineRenderFunc

Tier 4: Primitive Infrastructure (prim.c - 6 functions)
  - Foundation layer for polygon operations

CRITICAL CORRECTIONS TO MISLEADING FUNCTION NAMES:

engine_3d.c functions (API LAYER):
renderPolygonPremiumQuality_FUN_00407290    -> API wrapper for premium rendering
renderPolygonHighQuality_FUN_00406be0       -> API wrapper for high-quality rendering
renderPolygonUltraDetail_FUN_00406c80       -> API wrapper for ultra rendering

CDemonRenderer functions (CORE ENGINE):
CDemonRenderer_renderPrim_FUN_0048b970      -> RENDER_ENGINE_CORE_ULTRA (0x2E7)
CDemonRenderer_renderPrim_FUN_0048bad0      -> RENDER_ENGINE_CORE_MAXIMUM (0x367)
CDemonRenderer_renderPrim_FUN_0048bf10      -> RENDER_ENGINE_CORE_COMPLEX (0x327)
  - These are the ACTUAL engine core with highest quality modes!
*/

// ============================================================================
// GHIDRA USAGE INSTRUCTIONS
// ============================================================================

/*
1. Import this header file into Ghidra via "File -> Parse C Source"
2. Apply equates to global variables:
   - Right-click g_RenderStateFlags values -> "Set Equate"
   - Right-click g_RenderStateFlag2 values -> "Set Equate"
3. The decompiled code will show meaningful names instead of hex values
4. Use these technical names instead of the generic "quality" names
5. Look for the bit patterns to understand what each function actually does

EXAMPLE TRANSFORMATION:
  Before: g_RenderStateFlags = 0x1e7;
  After:  g_RenderStateFlags = RENDER_ENGINE_PREMIUM_QUALITY;

  Before: renderPolygonPremiumQuality_FUN_00407290
  After:  renderPolygonEnginePremiumTexturedDepth_FUN_00407290
*/

#endif /* NOCTURNE_RENDER_FLAGS_H */