# Nocturne Complete Render Function Renaming Guide

**MAJOR DISCOVERY**: We found **97 total render functions** across the entire codebase, revealing a sophisticated 4-tier rendering architecture!

**CRITICAL ARCHITECTURE UNDERSTANDING:**
- **CDemonRenderer functions (26) = CORE ENGINE** - The actual 3D rendering system
- **engine_3d.c functions (56) = API LAYER** - High-level convenience wrappers
- **wincore functions (6) = RASTERIZATION BACKEND** - Low-level scanline renderers
- **prim.c functions (6) = INFRASTRUCTURE** - Primitive operation support

## 4-Tier Rendering Architecture

### Tier 1: High-Level API Layer (engine_3d.c - 56 functions)
Convenience wrappers that configure state and delegate to core engine:

| Address  | Current Misleading Name | Flags | Flag2 | Correct Technical Name | Key Functionality |
|----------|------------------------|-------|-------|----------------------|-------------------|
| 00403ad0 | renderLitPolygonBasic | 0x10 | 0 | renderPolygonLastPixelMode | Line rendering with last pixel |
| 00403cc0 | renderPolygonBasic | 0x01 | 0 | renderPolygonTextureEnable | Basic texture mapping only |
| 00403d60 | renderPrimitiveBasic | 0x05 | 4 | renderPrimitiveUVWrappedSpecial | UV wrapping + special processing |
| 00403f20 | renderPolygonSimple | 0x01 | 2 | renderPolygonTextureNormalized | Texture with coordinate normalization |
| 00404020 | renderOverlayBasic | 0x01 | 0 | renderOverlayTextureEnable | Basic overlay rendering |
| 00404120 | renderPolygonEnhanced | 0x03 | 0 | renderPolygonVertexLit | Vertex-based lighting |
| 00404220 | renderPolygonLitDetailed | 0x13/0x33 | 0 | renderPolygonLitDetailed | Detailed lighting (conditional alpha) |
| 004044a0 | renderPolygonBasicEnhanced | 0x01 | 2 | renderPolygonTextureNormalized | Same as 00403f20 |
| 004046c0 | renderPrimitiveFullFeatured | 0xD9 | 1 | renderPrimitivePlaneMaskedComplex | Full feature set with plane masking |
| 00404840 | renderPrimitiveAdaptive | 0xD1/0xD0 | 3/1/0 | renderPrimitiveAdaptivePlaneMasked | Adaptive quality plane masking |
| 00404a40 | renderPolygon | 0xD1 | 3 | renderPolygonPlaneMaskedNearPlane | Plane masking with near-plane correction |
| 00404ae0 | renderPolygonAdaptive | 0x10/0xD0 | 0/1 | renderPolygonAdaptiveDepthMode | Adaptive depth buffer mode |
| 00404c60 | renderPolygonFullFeatured | 0xD9 | 1 | renderPolygonPlaneMaskedComplex | Complex plane masking operations |
| 00404d50 | renderPolygonUVMappedComplex | 0xC4 | 1 | renderPolygonTextureComplexMode | Complex texture operations |
| 00404e40 | renderPolygonAdvancedPrimitive | 0x09 | 3 | renderPolygonVertexLitNearPlane | Vertex lighting + near-plane correction |
| 00404ee0 | renderPolygonBasicAdvanced | 0x01 | 3 | renderPolygonTextureNearPlane | Texture with near-plane correction |
| 00404f80 | renderPolygonAdvancedEnhanced | 0x09 | 2 | renderPolygonVertexLitNormalized | Vertex lighting + texture normalization |
| 00405020 | renderPolygonAdvancedStandard | 0x09 | 2 | renderPolygonVertexLitNormalized | Same as 00404f80 |
| 00405170 | renderPolygonUVBasic | 0x01 | 0 | renderPolygonUVTextureEnable | Basic UV texture mapping |
| 004052b0 | renderPolygonLitComplex | 0x23 | 0 | renderPolygonLitComplexAlpha | Complex lighting with alpha |
| 00405350 | renderPolygonUVSimple | 0x01 | 0 | renderPolygonUVTextureEnable | Same as UV Basic |
| 00405430 | renderPolygonUVEnhanced | 0x01 | 2 | renderPolygonUVTextureNormalized | UV with texture normalization |
| 00405510 | renderPolygonUVAdvanced | 0x09 | 2 | renderPolygonUVVertexLitNormalized | UV + vertex lighting + normalization |
| 004055b0 | renderPolygonPerspectiveBasic | 0x01 | 2 | renderPolygonPerspectiveNormalized | Perspective with texture normalization |
| 00405690 | renderPolygonPerspectiveEffect | 0x20D/0x0D | 0/4 | renderPolygonEnginePlaneMaskedEffect | Engine processing + plane masking |
| 004057b0 | renderPolygonPerspectiveAdvanced | 0x20D/0x0D | 5 | renderPolygonEnginePlaneMaskedAdvanced | Engine + plane mask + alt normalization |
| 004058d0 | renderPolygonPerspectiveSpecial | 0x05 | 5 | renderPolygonUVWrappedAdvanced | UV wrapping + advanced normalization |
| 00405960 | renderPolygonTexturedBasic | 0x80 | 1 | renderPolygonDepthWriteTextured | Depth buffer writing + texture |
| 00405a00 | renderPolygonUVHighQuality | 0x01 | 0 | renderPolygonUVTextureEnable | Basic UV texture (NOT high quality) |
| 00405aa0 | renderPolygonUVEnhancedQuality | 0x03 | 0 | renderPolygonUVVertexLit | UV + vertex lighting (NOT enhanced quality) |
| 00405b50 | renderPolygonUVMapped | 0xC5/0xCD | 1 | renderPolygonTextureWrappedPlaneMasked | Texture wrapping + plane masking |
| 00405ce0 | renderPolygonUVMappedStandard | 0xC5 | 1 | renderPolygonTextureWrappedStandard | Standard texture wrapping |
| 00405d80 | renderPolygonTexturedLit | 0x81 | 1 | renderPolygonDepthWriteTexturedLit | Depth write + texture + lighting |
| 00405e20 | renderPolygonTexturedAdvanced | 0x85 | 1 | renderPolygonDepthWriteTexturedAdvanced | Advanced depth write + texture |
| 00405ec0 | renderPolygonTexturedSimple | 0x01 | 0 | renderPolygonTexturedBasic | Basic textured rendering |
| 00405f60 | renderPolygonTexturedOverlay | 0x01 | 0 | renderPolygonOverlayTextured | Textured overlay rendering |
| 00406000 | renderPolygonTexturedLitBasic | 0x81 | 1 | renderPolygonDepthWriteTexturedLit | Same as 00405d80 |
| 004060a0 | renderPolygonUVPerspectiveCorrect | 0xC3 | 1 | renderPolygonTexturePerspectiveCorrect | Perspective-correct texture mapping |
| 00406150 | renderPolygonUVMappedLit | 0xC1 | 1 | renderPolygonTextureWrappedLit | Texture wrapping + lighting |
| 004061f0 | renderPolygonUVMappedEnhanced | 0x01 | 2 | renderPolygonUVTextureNormalized | UV texture + normalization |
| 00406290 | renderPolygonUVPerspective | 0xC3 | 1 | renderPolygonTexturePerspectiveCorrect | Same as 004060a0 |
| 00406430 | renderPolygonUVAdaptive | 0xC1/0xC0 | 0/1 | renderPolygonTextureAdaptiveWrapped | Adaptive texture wrapping |
| 004066d0 | renderPolygonLitStandard | 0x10 | 0 | renderPolygonLastPixelMode | Line rendering (NOT lit standard) |
| 004067a0 | renderPolygonUVPerspectiveSpecial | 0xC3/0xE3 | 1 | renderPolygonPerspectiveAlphaSpecial | Perspective + conditional alpha |
| 00406860 | renderPolygonDetailedComplex | 0xD3 | 1 | renderPolygonPlaneMaskedDetailedComplex | Complex plane masking operations |
| 00406a20 | renderPolygonLitDetailedBasic | 0x13 | 0 | renderPolygonLitDetailed | Detailed lighting mode |
| 00406b40 | renderPolygonDynamicQuality | 499 | 1 | renderPolygonExtremeQualityMode | Extreme quality processing |
| 00406be0 | renderPolygonHighQuality | 0x163 | 1 | renderPolygonEngineDepthLit | Engine processing + depth + lighting |
| 00406c80 | renderPolygonUltraDetail | 0x267/0x67 | 1 | renderPolygonEngineEnhancedDepthLit | Enhanced engine processing |
| 00406de0 | renderPolygonComplexEffect | 0x28D/0x8D | 0/4 | renderPolygonSpecialEffectsPlaneMasked | Special effects with plane masking |
| 00406f20 | renderPolygonAdvancedEffect | 0x28D/0x8D | 5 | renderPolygonSpecialEffectsAdvanced | Advanced special effects |
| 004070c0 | renderPolygonPremium | 0x1E7 | 1 | renderPolygonEngineAPIPremiumMultiState | API premium multi-state rendering |
| 00407290 | renderPolygonPremiumQuality | 0x1E7 | 1 | renderPolygonEngineAPIPremiumMultiState | Same as 004070c0 |
| 00407470 | renderPolygon | 0x1E7 | 1 | renderPolygonEngineAPIPremiumMultiState | Generic API premium rendering |
| 00407620 | renderPolygon | None | 1/5 | renderPolygonAPIAdaptivePreprocessing | Adaptive preprocessing only |
| 00407720 | renderPolygon | 0x08 | 1/5 | renderPolygonAPIAdaptivePreprocessing | Adaptive with minimal flags |

### Tier 2: CORE DEMON ENGINE (CDemonRenderer - 26 functions)
**THE ACTUAL 3D ENGINE** - These are the real rendering functions:

| Address  | Function Name | Flags | Flag2 | Core Engine Technical Name | Native Engine Mode |
|----------|--------------|-------|-------|---------------------------|-------------------|
| 0048a740 | CDemonRenderer_clipAndFillPolygon | - | - | coreEngineClipAndFillPolygon | Core clipping |
| 0048a820 | CDemonRenderer_renderPrim | 0xC0/0 | 6/0 | coreEngineRenderBasicTextured | Basic engine texture |
| 0048a8a0 | CDemonRenderer_renderPrim | 0xC0/0 | 6/0 | coreEngineRenderBasicTexturedVariant | Basic texture variant |
| 0048a950 | CDemonRenderer_renderPrim | 0x90/0 | 6/0 | coreEngineRenderAlternativeDepth | Alternative depth mode |
| 0048aa50 | CDemonRenderer_renderPrim | 0xC0 | 6 | coreEngineRenderStandardTextured | Standard texture mode |
| 0048ab50 | CDemonRenderer_renderPrim | 0xC0/0 | 6/0 | coreEngineRenderTexturedBasic | Engine textured basic |
| 0048ac40 | CDemonRenderer_renderPrim | 0xC1/0 | 3/0 | coreEngineRenderTexturedLitNearPlane | Textured+lit with near-plane |
| 0048ae10 | CDemonRenderer_renderPrim | 0/- | 6/0 | coreEngineRenderWireframeDebug | Engine wireframe/debug |
| 0048aeb0 | CDemonRenderer_renderPrim | 0/- | 6/0 | coreEngineRenderWireframeVariant | Wireframe variant |
| 0048b030 | CDemonRenderer_renderPrim | 0/- | 6/0 | coreEngineRenderWireframeAdvanced | Advanced wireframe |
| 0048b1e0 | CDemonRenderer_renderPrim | **0x2CD**/0 | 6/0 | **coreEngineRenderPremium** | **Engine premium mode** |
| 0048b320 | CDemonRenderer_renderPrim | **0x2CD**/0 | 6/0 | **coreEngineRenderPremiumVariant** | **Engine premium variant** |
| 0048b420 | CDemonRenderer_renderPrim | **0x41**/0 | 6/0 | **coreEngineRenderSpecialDepth** | **Special engine depth mode** |
| 0048b550 | CDemonRenderer_renderPrim | 0xC3/1 | 6/0 | coreEngineRenderPerspectiveLit | Perspective+lit engine |
| 0048b970 | CDemonRenderer_renderPrim | **0x2E7**/1 | 6/0 | **coreEngineRenderUltraPremium** | **Ultra premium engine** |
| 0048bad0 | CDemonRenderer_renderPrim | **0x367**/0 | 6/0 | **coreEngineRenderMaximumQuality** | **MAXIMUM ENGINE QUALITY** |
| 0048bba0 | CDemonRenderer_renderPrim | **0x367**/0 | 6/0 | **coreEngineRenderMaximumQualityVariant** | **Maximum quality variant** |
| 0048bcf0 | CDemonRenderer_renderPrim | 0x267/0 | 6/0 | coreEngineRenderEnhancedQuality | Enhanced engine quality |
| 0048bdc0 | CDemonRenderer_renderPrim | 0x267/0 | 6/0 | coreEngineRenderEnhancedQualityVariant | Enhanced quality variant |
| 0048bf10 | CDemonRenderer_renderPrim | **0x327**/0 | 0 | **coreEngineRenderComplexMultiFeature** | **Complex multi-feature** |
| 0048c8d0 | CDemonRenderer_renderLitObject | 0xC4 | 6 | coreEngineRenderLitObject | Engine lit object |
| 0048cf00 | CDemonRenderer_demonGZFacetList1 | 0/- | 6 | coreEngineGZFacetList1 | GZ facet processing |
| 0048d170 | CDemonRenderer_demonGZFacetList2 | 0/- | 6/0 | coreEngineGZFacetList2 | GZ facet processing variant |
| 0048d410 | CDemonRenderer | 0/- | 6/0 | coreEngineGenericProcessor | Generic engine processor |
| 005fcfc0 | unkVertProcessing | - | - | coreEngineVertexProcessing | Engine vertex processing |
| 005fd4e0 | renderClippedPolygons | - | - | coreEngineRenderClippedPolygons | Engine clipped polygon rendering |

### Tier 3: Low-Level Rasterization Backend (wincore - 6 functions)
**The actual pixel-level rasterizers** that g_ScanlineRenderFunc points to:

| Address  | Function Name | Technical Purpose |
|----------|--------------|-------------------|
| 005b4031 | renderMMXPerspectiveScanline32 | MMX-optimized 32-bit perspective scanline rasterizer |
| 005b4823 | renderMMXPerspectiveScanline16 | MMX-optimized 16-bit perspective scanline rasterizer |
| 005b50ec | renderPerspectiveCorrectScanline32 | Software 32-bit perspective scanline rasterizer |
| 005b5322 | renderPerspectiveCorrectScanline16 | Software 16-bit perspective scanline rasterizer |
| 005b5710 | renderScanline | Generic scanline rasterizer |
| 005b5716 | renderScanline | Alternative generic scanline rasterizer |

### Tier 4: Primitive Infrastructure (prim.c - 6 functions)
**Foundation layer** for polygon operations:

| Address  | Function Name | Technical Purpose |
|----------|--------------|-------------------|
| 00551d60 | setupSoftwareEdgeWithZMode | Edge setup with depth buffer mode |
| 00552510 | renderPolygonSoftware | Software polygon fallback renderer |
| 00552a40 | renderIndexedPolygonSoftware | Indexed software polygon renderer |
| 00553190 | setupColoredSoftwareEdge | Colored edge setup for software rendering |
| 00553470 | renderScanlinePolygon | Main scanline polygon renderer |
| 00553b10 | renderIndexedPolygonAdvanced | Advanced indexed polygon renderer |

### Support Functions (clipper.c - 3 functions)
Polygon clipping operations:

| Address  | Function Name | Technical Purpose |
|----------|--------------|-------------------|
| 004366e0 | clipPolygonToViewFrustum | View frustum clipping |
| 00437ca0 | clipPolygonToViewFrustumAdvanced | Advanced frustum clipping |
| 00438420 | clipPolygonToViewport | Viewport clipping |

## Core Engine Quality Hierarchy (CDemonRenderer)

The **CDemonRenderer functions represent the true engine quality modes**, higher than what the API layer typically exposes:

**Quality Hierarchy (Low to High):**
1. **0x000** - Wireframe/Debug modes
2. **0x041** - Special depth+texture mode
3. **0x090** - Alternative depth mode
4. **0xC0-0xC4** - Standard texture modes
5. **0x267** - Enhanced engine quality
6. **0x2CD** - Premium engine mode
7. **0x2E7** - Ultra premium engine
8. **0x327** - Complex multi-feature
9. **0x367** - **MAXIMUM ENGINE QUALITY**

## Key Flag Insights

### Flag2=6 is Core Engine Standard
Almost all CDemonRenderer functions use **Flag2=6 (W-coordinate depth replacement)**, which is the **native precision mode** of the core engine.

### Core vs API Quality Modes
- **API Layer (engine_3d.c)**: Uses 0x100/0x200/0x300 series
- **Core Engine (CDemonRenderer)**: Uses 0x2CD/0x2E7/0x327/0x367 series
- **The core engine has higher maximum quality than the API exposes!**

## Ghidra Renaming Instructions

1. **Import the updated header**: Use `NOCTURNE_RENDER_FLAGS_EQUATES.h`
2. **Prioritize CDemonRenderer functions**: These are the actual engine core
3. **Rename by tier**: Core engine functions are most important
4. **Apply flag equates**: Replace hex values with meaningful names
5. **Update comments**: Explain the 4-tier architecture

## Critical Architecture Discovery

What we initially thought was the complete rendering system (engine_3d.c) was actually just the **convenience API layer**. The real power lies in the **CDemonRenderer core engine functions** with their sophisticated native quality modes and precision rendering capabilities.

This explains the system's sophistication - Nocturne provides both a **high-level convenience API** and direct access to the **powerful core engine** for performance-critical operations.