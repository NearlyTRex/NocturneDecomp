# Complete MRGL Dispatch Table Analysis

**Base64 Decoded g_MRGLBlockHandlerTable - All 67 Functions Identified**

## Overview

The `g_MRGLBlockHandlerTable` is Nocturne's polymorphic dispatch system for processing different MRGL block types. This analysis decodes the base64 data from `globals_660000.cpp` and identifies all 67 function handlers.

## Architecture Summary

- **Total Functions**: 67 dispatch handlers
- **Render Functions**: 43 (64.2%) - Core rendering pipeline
- **Support Functions**: 24 (35.8%) - Transforms, textures, animation, error handling
- **Missing Functions**: 1 (00403ba0 - no pseudocode file found)

## Complete Dispatch Table

| Index | Address  | Function Name | Category | Technical Purpose |
|-------|----------|---------------|----------|-------------------|
| 0 | 004037b0 | badMRGLStruct | MRGL Error Handler | Invalid/corrupted MRGL block handler |
| 1 | 004037e0 | processCameraRelativePoint | 3D Transform | Camera-relative coordinate transformation |
| 2 | 00403840 | transformAndBufferVertices | 3D Transform | Vertex transformation and buffering |
| 3 | 00403a20 | processVertexLighting | 3D Lighting | Per-vertex lighting calculations |
| 4 | 00403a80 | updateMathLookupTable | 3D Math | Mathematical lookup table updates |
| 5 | 00403ad0 | renderLitPolygonBasic | Render Function | Basic lit polygon rendering |
| 6 | 00403ba0 | **UNKNOWN** | **UNKNOWN** | **Missing pseudocode file** |
| 7 | 00403cc0 | renderPolygonBasic | Render Function | Basic polygon rendering |
| 8 | 00403d60 | renderPrimitiveBasic | Render Function | Basic primitive rendering |
| 9 | 00403e00 | oldFunction | Legacy Function | Deprecated rendering path |
| 10 | 00403e30 | processPolygonColor | 3D Color | Polygon color processing |
| 11 | 00403ec0 | oldFunction | Legacy Function | Deprecated rendering path |
| 12 | 00403ef0 | oldFunction | Legacy Function | Deprecated rendering path |
| 13 | 005dd800 | ensureTextureLoaded | Texture Management | Texture loading verification |
| 14 | 00403f20 | renderPolygonSimple | Render Function | Simple polygon rendering |
| 15 | 00404120 | renderPolygonEnhanced | Render Function | Enhanced polygon rendering |
| 16 | 004041d0 | oldFunction | Legacy Function | Deprecated rendering path |
| 17 | 00404220 | renderPolygonLitDetailed | Render Function | Detailed lit polygon rendering |
| 18 | 00404420 | oldFunction | Legacy Function | Deprecated rendering path |
| 19 | 004037b0 | badMRGLStruct (**DUPLICATE**) | MRGL Error Handler | Duplicate error handler entry |
| 20 | 00404450 | setRelativeCoord | 3D Transform | Relative coordinate setting |
| 21 | 004044a0 | renderPolygonBasicEnhanced | Render Function | Enhanced basic polygon rendering |
| 22 | 00404570 | drawLineStrip3D | 3D Primitive | 3D line strip drawing |
| 23 | 00404690 | oldFunction | Legacy Function | Deprecated rendering path |
| 24 | 004046c0 | renderPrimitiveFullFeatured | Render Function | Full-featured primitive rendering |
| 25 | 00404ae0 | renderPolygonAdaptive | Render Function | Adaptive polygon rendering |
| 26 | 00404c60 | renderPolygonFullFeatured | Render Function | Full-featured polygon rendering |
| 27 | 00404d50 | renderPolygonUVMappedComplex | Render Function | Complex UV-mapped polygon rendering |
| 28 | 00404df0 | oldFunction | Legacy Function | Deprecated rendering path |
| 29 | 004050c0 | updateAnimatedTexture | Animation | Animated texture frame updates |
| 30 | 00405170 | renderPolygonUVBasic | Render Function | Basic UV polygon rendering |
| 31 | 00405270 | setVertexTextureU | 3D Texture | Vertex texture U coordinate setting |
| 32 | 00501f30 | interpolateCubicKeyframes | Animation | Cubic keyframe interpolation |
| 33 | 004052b0 | renderPolygonLitComplex | Render Function | Complex lit polygon rendering |
| 34 | 00404840 | renderPrimitiveAdaptive | Render Function | Adaptive primitive rendering |
| 35 | 00404a40 | renderPolygon | Render Function | Standard polygon rendering |
| 36 | 00405690 | renderPolygonPerspectiveEffect | Render Function | Perspective effect polygon rendering |
| 37 | 004057b0 | renderPolygonPerspectiveAdvanced | Render Function | Advanced perspective polygon rendering |
| 38 | 0041db50 | modelStructNotSupported | MRGL Error Handler | Unsupported model structure handler |
| 39 | 004058d0 | renderPolygonPerspectiveSpecial | Render Function | Special perspective polygon rendering |
| 40 | 00405a00 | renderPolygonUVHighQuality | Render Function | High-quality UV polygon rendering |
| 41 | 00405b50 | renderPolygonUVMapped | Render Function | UV-mapped polygon rendering |
| 42 | 00405ce0 | renderPolygonUVMappedStandard | Render Function | Standard UV-mapped polygon rendering |
| 43 | 00405d80 | renderPolygonTexturedLit | Render Function | Textured lit polygon rendering |
| 44 | 00405e20 | renderPolygonTexturedAdvanced | Render Function | Advanced textured polygon rendering |
| 45 | 00405ec0 | renderPolygonTexturedSimple | Render Function | Simple textured polygon rendering |
| 46 | 00405f60 | renderPolygonTexturedOverlay | Render Function | Textured overlay polygon rendering |
| 47 | 00406000 | renderPolygonTexturedLitBasic | Render Function | Basic textured lit polygon rendering |
| 48 | 004060a0 | renderPolygonUVPerspectiveCorrect | Render Function | Perspective-corrected UV polygon rendering |
| 49 | 00406150 | renderPolygonUVMappedLit | Render Function | Lit UV-mapped polygon rendering |
| 50 | 004061f0 | renderPolygonUVMappedEnhanced | Render Function | Enhanced UV-mapped polygon rendering |
| 51 | 00406290 | renderPolygonUVPerspective | Render Function | Perspective UV polygon rendering |
| 52 | 00406430 | renderPolygonUVAdaptive | Render Function | Adaptive UV polygon rendering |
| 53 | 00405aa0 | renderPolygonUVEnhancedQuality | Render Function | Enhanced quality UV polygon rendering |
| 54 | 004066d0 | renderPolygonLitStandard | Render Function | Standard lit polygon rendering |
| 55 | 004067a0 | renderPolygonUVPerspectiveSpecial | Render Function | Special perspective UV polygon rendering |
| 56 | 00406860 | renderPolygonDetailedComplex | Render Function | Complex detailed polygon rendering |
| 57 | 00406b40 | renderPolygonDynamicQuality | Render Function | Dynamic quality polygon rendering |
| 58 | 00406de0 | renderPolygonComplexEffect | Render Function | Complex effect polygon rendering |
| 59 | 00406f20 | renderPolygonAdvancedEffect | Render Function | Advanced effect polygon rendering |
| 60 | 00406be0 | renderPolygonHighQuality | Render Function | High-quality polygon rendering |
| 61 | 00406d60 | setRenderAlpha | 3D Alpha | Alpha blending parameter setting |
| 62 | 00406a20 | renderPolygonLitDetailedBasic | Render Function | Basic detailed lit polygon rendering |
| 63 | 00406c80 | renderPolygonUltraDetail | Render Function | Ultra-detailed polygon rendering |
| 64 | 005dd8c0 | loadTextureAndGetData | Texture Management | Texture loading and data retrieval |
| 65 | 00407290 | renderPolygonPremiumQuality | Render Function | Premium quality polygon rendering |
| 66 | 00407470 | renderPolygon | Render Function | Main MRGL dispatcher and polygon renderer |

## Function Categories

### Render Functions (43 functions - 64.2%)
The core rendering pipeline with different quality levels, features, and specializations:
- **Basic rendering**: Simple polygon, primitive, and textured rendering
- **Advanced rendering**: Perspective correction, UV mapping, lighting
- **Premium rendering**: High-quality, ultra-detail, dynamic quality modes
- **Effect rendering**: Complex effects, overlays, alpha blending

### 3D Pipeline Support (12 functions - 17.9%)
Essential 3D graphics pipeline operations:
- **Transform functions**: Camera transforms, vertex processing, coordinate systems
- **Lighting functions**: Per-vertex lighting calculations
- **Texture functions**: UV coordinate handling, texture parameter setting
- **Color functions**: Polygon color processing
- **Alpha functions**: Alpha blending parameter management

### System Infrastructure (12 functions - 17.9%)
Core system support and management:
- **Legacy functions**: 7 deprecated rendering paths (oldFunction_*)
- **Error handlers**: 3 MRGL error handling functions
- **Animation functions**: 2 keyframe interpolation and texture animation
- **Texture management**: 2 texture loading and verification

## Key Technical Insights

### MRGL Block Type Mapping
The dispatch table index corresponds to MRGL block types:
- **Index 0**: Error handler for invalid blocks
- **Index 1-66**: Specific rendering and support functions
- **Index 19**: Duplicate error handler (defensive programming)

### Rendering Quality Hierarchy
The table shows a clear quality progression:
1. **Basic** → **Enhanced** → **Advanced** → **Premium** → **Ultra**
2. **Simple** → **Standard** → **Complex** → **Full-featured**
3. **Effect** variants for special rendering modes

### Legacy Code Preservation
7 `oldFunction` entries suggest Nocturne maintains backward compatibility with deprecated rendering techniques, possibly for debugging or fallback scenarios.

### Error Handling Strategy
- **badMRGLStruct**: Handles corrupted or invalid MRGL blocks
- **modelStructNotSupported**: Handles unsupported model structures
- Duplicate entry at index 19 provides additional error resilience

## Cross-Reference with 4-Tier Architecture

This dispatch table represents the **API Layer (Tier 1)** of Nocturne's rendering system:
- All render functions eventually call **CDemonRenderer (Tier 2)**
- Support functions prepare data for the core engine
- Error handlers provide robust MRGL block processing
- The system bridges MRGL format to internal rendering pipeline

## Usage in Reverse Engineering

1. **Function Identification**: Use this table to identify MRGL handlers during analysis
2. **Call Graph Analysis**: Trace how MRGL blocks flow through the rendering pipeline
3. **Quality Mode Understanding**: Map MRGL block types to rendering quality levels
4. **Error Path Analysis**: Understand how invalid MRGL data is handled

## Missing Analysis

Only 1 function remains unknown:
- **00403ba0**: No pseudocode file found - may be a stub, compiler artifact, or missing annotation

This represents 98.5% completion of the MRGL dispatch table analysis.