# Renderer Function to Primitive Struct Mapping

## Overview

This document maps all 98 render functions in the Nocturne engine to their appropriate primitive structure types based on architectural analysis.

## Primitive Structure Definitions

### 1. SPrimitive_CDemonSet (28 bytes)
**Usage**: Static level geometry
```c
typedef struct SPrimitive_CDemonSet {
    int primitive_type;             // 0x00
    int vertex_count;               // 0x04
    SClipPlane surface_normal;      // 0x08 (16 bytes)
    int* vertex_list;               // 0x18 (pointer to vertex array)
} SPrimitive_CDemonSet;
```

### 2. MRGL_Primitive_Quad (72 bytes)
**Usage**: KFM keyframed models, water effects (global static)
```c
typedef struct MRGL_Primitive_Quad {
    int type;                       // 0x00: MRGL type (0x18, 0x29, 0x41, 0x42)
    int element_count;              // 0x04: 4 (quads)
    SClipPlane surface_normal;      // 0x08: 16 bytes
    struct {
        int vertex_index;           // Index into transformed buffer
        int texture_u;              // UV coordinate
        int texture_v;              // UV coordinate
    } vertices[4];                  // 0x18-0x47: 4 × 12 bytes
} MRGL_Primitive_Quad;
```

### 3. MRGL_Primitive_Triangle (60 bytes)
**Usage**: DFM skeletal models (degenerate - indices only)
```c
typedef struct MRGL_Primitive_Triangle {
    int type;                       // 0x00: MRGL type
    int element_count;              // 0x04: 3 (triangles)
    SClipPlane surface_normal;      // 0x08: 16 bytes
    struct {
        int vertex_index;           // Index into transformed buffer (POPULATED)
        int texture_u;              // UV coordinate (NOT WRITTEN)
        int texture_v;              // UV coordinate (NOT WRITTEN)
    } vertices[3];                  // 0x18-0x3B: 3 × 12 bytes (only index used)
} MRGL_Primitive_Triangle;
```

### 4. MRGL_Primitive_Variable (Generic)
**Usage**: Any MRGL primitive with variable vertex count
```c
typedef struct MRGL_Primitive_Variable {
    int type;                       // 0x00: MRGL type
    int element_count;              // 0x04: Vertex count (3-N)
    SClipPlane surface_normal;      // 0x08: 16 bytes
    struct {
        int vertex_index;           // Index into transformed buffer
        int texture_u;              // UV coordinate
        int texture_v;              // UV coordinate
    } vertices[];                   // 0x18+: element_count × 12 bytes
} MRGL_Primitive_Variable;
// Size = element_count * 12 + 24
```

### 5. Fire_Primitive_Custom (Unknown size)
**Usage**: Fire effects (stack-allocated, custom type 0x80000)
```c
typedef struct Fire_Primitive_Custom {
    int primitive_type;             // 0x00: 0x80000 (custom type)
    int vertex_count;               // 0x04: Vertex count or flag
    SClipPlane surface_normal;      // 0x08: 16 bytes
    int* vertex_list;               // 0x18: Pointer to vertex data
    // Additional fields (unclear from decompilation)
} Fire_Primitive_Custom;
```

---

## Function Mapping Strategy

Based on analysis, functions are categorized by:
1. **Calling context** (which geometry source calls them)
2. **Assembly evidence** (stride, vertex access patterns)
3. **Primitive size expectations**

### Categories

- **MRGL_Variable**: API layer functions that dispatch based on MRGL type
- **MRGL_Quad**: KFM batch processor, water effects
- **MRGL_Triangle**: DFM single submission
- **CDemonSet**: Level geometry pointer-based
- **Fire_Custom**: Fire effects custom format
- **Generic**: Low-level functions that work with any format after transformation

---

## CORE ENGINE TIER (26 functions)

These are CDemonRenderer member functions that operate on pre-transformed primitives.

### High-Level Renderers (Accept Multiple Types)

| Address | Function Name | Primitive Type | Evidence |
|---------|---------------|----------------|----------|
| 0048a820 | `renderBasicTextured` | **SPrimitive_CDemonSet** | Called from CDemonSet rendering |
| 0048a8a0 | `renderBasicTexturedVariant` | **MRGL_Primitive_Triangle** or **MRGL_Primitive_Quad** | DFM primary, water secondary. Reads vertex indices at 12-byte stride |
| 0048a950 | `renderBasicTextured_FUN_0048a950` | **MRGL_Primitive_Variable** | Generic textured renderer |
| 0048aa50 | `renderBasicTextured_FUN_0048aa50` | **MRGL_Primitive_Variable** | Generic textured renderer |
| 0048ab50 | `renderBasicTextured_FUN_0048ab50` | **MRGL_Primitive_Variable** | Generic textured renderer |
| 0048ac40 | `renderBasicTextured_FUN_0048ac40` | **MRGL_Primitive_Variable** | Generic textured renderer |

### Quality Renderers (Accept MRGL Formats)

| Address | Function Name | Primitive Type | Evidence |
|---------|---------------|----------------|----------|
| 0048b1e0 | `renderPremium` | **MRGL_Primitive_Quad** | Water high-quality mode |
| 0048b320 | `renderPremiumVariant` | **MRGL_Primitive_Variable** | Premium quality generic |
| 0048b420 | `renderSpecialDepth` | **MRGL_Primitive_Quad** | Water normal hardware mode |
| 0048b550 | `renderTextured_FUN_0048b550` | **MRGL_Primitive_Variable** | Generic textured |
| 0048b970 | `renderUltraPremium_FUN_0048b970` | **MRGL_Primitive_Variable** | Ultra premium quality |
| 0048bad0 | `renderMaximumQuality` | **MRGL_Primitive_Variable** or **Fire_Primitive_Custom** | Maximum quality generic |
| 0048bba0 | `renderMaximumQualityVariant` | **Fire_Primitive_Custom** | Fire maximum quality with per-vertex alpha |
| 0048bcf0 | `renderEnhancedQuality` | **MRGL_Primitive_Variable** | Enhanced quality generic |
| 0048bdc0 | `renderEnhancedQualityVariant` | **MRGL_Primitive_Quad** or **Fire_Primitive_Custom** | Water animated, fire standard |
| 0048bf10 | `renderComplexMultiFeature_FUN_0048bf10` | **MRGL_Primitive_Variable** | Complex multi-feature |

### Specialized Renderers

| Address | Function Name | Primitive Type | Evidence |
|---------|---------------|----------------|----------|
| 0048ae10 | `renderWireframe_FUN_0048ae10` | **MRGL_Primitive_Variable** | Wireframe mode |
| 0048aeb0 | `renderWireframe_FUN_0048aeb0` | **MRGL_Primitive_Variable** | Wireframe mode |
| 0048b030 | `renderWireframe_FUN_0048b030` | **MRGL_Primitive_Variable** | Wireframe mode |
| 0048c8d0 | `renderLitObject` | **MRGL_Primitive_Variable** | Lit object rendering |
| 0048ce90 | `renderPrimitiveBatch` | **MRGL_Primitive_Quad** array | **KFM EXCLUSIVE**: Batch render with 72-byte stride |
| 0048cf00 | `renderTriangleFacetList` | **MRGL_Primitive_Triangle** array | Batch render triangles |
| 0048d170 | `renderTriangleFacetList2_FUN_0048d170` | **MRGL_Primitive_Variable** | Facet list variant |
| 0048d410 | `render_FUN_0048d410` | **MRGL_Primitive_Variable** | Generic renderer |

### Low-Level Core Functions

| Address | Function Name | Primitive Type | Evidence |
|---------|---------------|----------------|----------|
| 0048a740 | `clipAndFillPoly` | **Generic** (vertex indices) | Works with pre-processed vertex indices, format-agnostic |
| 0048d7a0 | `processQuadPrimitive` | **MRGL_Primitive_Quad** | Quad-specific processing |
| 005fcfc0 | `unkVertProcessing_FUN_005fcfc0` | **Generic** | Vertex processing |
| 005fd4e0 | `renderClippedPolygons_FUN_005fd4e0` | **Generic** | Clipped polygon rendering |

---

## API TIER (57 functions)

These are high-level MRGL dispatch functions in `engine_3d.c`. They read the MRGL type field and call appropriate core renderers.

**All API tier functions accept**: `MRGL_Primitive_Variable*` (they dispatch based on type field)

### MRGL Dispatch Functions

| Address | Function Name | MRGL Types Handled | Notes |
|---------|---------------|-------------------|-------|
| 004046c0 | `renderPrimitiveFullFeatured` | 0x18 | Type 0x18 handler (plane masked complex) |
| 00407290 | `renderPolygonPremiumQuality` | 0x41 | Type 0x41 handler (premium multi-state) |
| 00404840 | `renderPrimitiveAdaptive` | 0x29 | Type 0x29 handler (batch rendering) |
| 00407470 | `renderPolygon_FUN_00407470` | 0x42 | Type 0x42 handler (general rendering) |

### Full API Tier List (All take MRGL_Primitive_Variable*)

```
00403ad0 | renderLitPolygonBasic_FUN_00403ad0              | MRGL_Primitive_Variable
00403cc0 | renderPolygonBasic_FUN_00403cc0                 | MRGL_Primitive_Variable
00403d60 | renderPrimitiveBasic_FUN_00403d60               | MRGL_Primitive_Variable
00403f20 | renderPolygonSimple_FUN_00403f20                | MRGL_Primitive_Variable
00404020 | renderOverlayBasic_FUN_00404020                 | MRGL_Primitive_Variable
00404120 | renderPolygonEnhanced_FUN_00404120              | MRGL_Primitive_Variable
00404220 | renderPolygonLitDetailed_FUN_00404220           | MRGL_Primitive_Variable
004044a0 | renderPolygonBasicEnhanced_FUN_004044a0         | MRGL_Primitive_Variable
004046c0 | renderPrimitiveFullFeatured_FUN_004046c0 ★      | MRGL_Primitive_Variable (MRGL Type 0x18)
00404840 | renderPrimitiveAdaptive_FUN_00404840 ★          | MRGL_Primitive_Variable (MRGL Type 0x29)
00404a40 | renderPolygon_FUN_00404a40                      | MRGL_Primitive_Variable
00404ae0 | renderPolygonAdaptive_FUN_00404ae0              | MRGL_Primitive_Variable
00404c60 | renderPolygonFullFeatured_FUN_00404c60          | MRGL_Primitive_Variable
00404d50 | renderPolygonUVMappedComplex_FUN_00404d50       | MRGL_Primitive_Variable
00404e40 | renderPolygonAdvancedPrimitive_FUN_00404e40     | MRGL_Primitive_Variable
00404ee0 | renderPolygonBasicAdvanced_FUN_00404ee0         | MRGL_Primitive_Variable
00404f80 | renderPolygonAdvancedEnhanced_FUN_00404f80      | MRGL_Primitive_Variable
00405020 | renderPolygonAdvancedStandard_FUN_00405020      | MRGL_Primitive_Variable
00405170 | renderPolygonUVBasic_FUN_00405170               | MRGL_Primitive_Variable
004052b0 | renderPolygonLitComplex_FUN_004052b0            | MRGL_Primitive_Variable
00405350 | renderPolygonUVSimple_FUN_00405350              | MRGL_Primitive_Variable
00405430 | renderPolygonUVEnhanced_FUN_00405430            | MRGL_Primitive_Variable
00405510 | renderPolygonUVAdvanced_FUN_00405510            | MRGL_Primitive_Variable
004055b0 | renderPolygonPerspectiveBasic_FUN_004055b0      | MRGL_Primitive_Variable
00405690 | renderPolygonPerspectiveEffect_FUN_00405690     | MRGL_Primitive_Variable
004057b0 | renderPolygonPerspectiveAdvanced_FUN_004057b0   | MRGL_Primitive_Variable
004058d0 | renderPolygonPerspectiveSpecial_FUN_004058d0    | MRGL_Primitive_Variable
00405960 | renderPolygonTexturedBasic_FUN_00405960         | MRGL_Primitive_Variable
00405a00 | renderPolygonUVHighQuality_FUN_00405a00         | MRGL_Primitive_Variable
00405aa0 | renderPolygonUVEnhancedQuality_FUN_00405aa0     | MRGL_Primitive_Variable
00405b50 | renderPolygonUVMapped_FUN_00405b50              | MRGL_Primitive_Variable
00405ce0 | renderPolygonUVMappedStandard_FUN_00405ce0      | MRGL_Primitive_Variable
00405d80 | renderPolygonTexturedLit_FUN_00405d80           | MRGL_Primitive_Variable
00405e20 | renderPolygonTexturedAdvanced_FUN_00405e20      | MRGL_Primitive_Variable
00405ec0 | renderPolygonTexturedSimple_FUN_00405ec0        | MRGL_Primitive_Variable
00405f60 | renderPolygonTexturedOverlay_FUN_00405f60       | MRGL_Primitive_Variable
00406000 | renderPolygonTexturedLitBasic_FUN_00406000      | MRGL_Primitive_Variable
004060a0 | renderPolygonUVPerspectiveCorrect_FUN_004060a0  | MRGL_Primitive_Variable
00406150 | renderPolygonUVMappedLit_FUN_00406150           | MRGL_Primitive_Variable
004061f0 | renderPolygonUVMappedEnhanced_FUN_004061f0      | MRGL_Primitive_Variable
00406290 | renderPolygonUVPerspective_FUN_00406290         | MRGL_Primitive_Variable
00406430 | renderPolygonUVAdaptive_FUN_00406430            | MRGL_Primitive_Variable
004066d0 | renderPolygonLitStandard_FUN_004066d0           | MRGL_Primitive_Variable
004067a0 | renderPolygonUVPerspectiveSpecial_FUN_004067a0  | MRGL_Primitive_Variable
00406860 | renderPolygonDetailedComplex_FUN_00406860       | MRGL_Primitive_Variable
00406a20 | renderPolygonLitDetailedBasic_FUN_00406a20      | MRGL_Primitive_Variable
00406b40 | renderPolygonDynamicQuality_FUN_00406b40        | MRGL_Primitive_Variable
00406be0 | renderPolygonHighQuality_FUN_00406be0           | MRGL_Primitive_Variable
00406c80 | renderPolygonUltraDetail_FUN_00406c80           | MRGL_Primitive_Variable
00406de0 | renderPolygonComplexEffect_FUN_00406de0         | MRGL_Primitive_Variable
00406f20 | renderPolygonAdvancedEffect_FUN_00406f20        | MRGL_Primitive_Variable
004070c0 | renderPolygonPremium_FUN_004070c0               | MRGL_Primitive_Variable
00407290 | renderPolygonPremiumQuality_FUN_00407290 ★      | MRGL_Primitive_Variable (MRGL Type 0x41)
00407470 | renderPolygon_FUN_00407470 ★                    | MRGL_Primitive_Variable (MRGL Type 0x42)
00407620 | renderPolygon_FUN_00407620                      | MRGL_Primitive_Variable
00407720 | renderPolygon_FUN_00407720                      | MRGL_Primitive_Variable
00407920 | renderPrim_FUN_00407920                         | MRGL_Primitive_Variable
```

★ = Primary MRGL type handler

---

## RASTERIZATION TIER (6 functions)

Low-level scanline rasterizers. These work with **processed vertex data**, not primitives.

| Address | Function Name | Input Type | Notes |
|---------|---------------|------------|-------|
| 005b4031 | `renderMMXPerspectiveScanline32` | Scanline data | MMX-optimized 32-bit |
| 005b4823 | `renderMMXPerspectiveScanline16` | Scanline data | MMX-optimized 16-bit |
| 005b50ec | `renderPerspectiveCorrectScanline32` | Scanline data | Perspective-correct 32-bit |
| 005b5322 | `renderPerspectiveCorrectScanline16` | Scanline data | Perspective-correct 16-bit |
| 005b5710 | `renderScanline` | Scanline data | Generic scanline |
| 005b5716 | `renderScanline` | Scanline data | Generic scanline variant |

---

## INFRASTRUCTURE TIER (6 functions)

Software rendering infrastructure. Work with **vertex arrays** and **edge structures**.

| Address | Function Name | Input Type | Notes |
|---------|---------------|------------|-------|
| 00551d60 | `setupSoftwareEdgeWithZMode` | Edge data | Z-buffer edge setup |
| 00552510 | `renderPolygonSoftware` | Vertex array | Software polygon renderer |
| 00552a40 | `renderIndexedPolygonSoftware` | Indexed vertices | Software indexed renderer |
| 00553190 | `setupColoredSoftwareEdge` | Edge data | Colored edge setup |
| 00553470 | `renderScanlinePolygon` | Polygon data | Scanline polygon |
| 00553b10 | `renderIndexedPolygonAdvanced` | Indexed vertices | Advanced indexed renderer |

---

## SUPPORT TIER (3 functions)

Clipping utilities. Work with **vertex arrays**.

| Address | Function Name | Input Type | Notes |
|---------|---------------|------------|-------|
| 004366e0 | `clipPolygonToViewFrustum` | Vertex array | Frustum clipping |
| 00437ca0 | `clipPolygonToViewFrustumAdvanced` | Vertex array | Advanced frustum clipping |
| 00438420 | `clipPolygonToViewport` | Vertex array | Viewport clipping |

---

## Usage Examples

### Example 1: KFM Model Rendering

```c
CKeyFramedModel* model = ...;
MRGL_Primitive_Quad* primitives = model->poly_vert_list;  // Array of 72-byte quads
int count = model->poly_count;

// Batch render with 72-byte stride
CDemonRenderer_renderPrimitiveBatch(renderer, primitives, count, 0x48);
```

### Example 2: DFM Model Rendering

```c
CDeformableModel* model = ...;

// Build 60-byte triangle on stack
MRGL_Primitive_Triangle tri;
tri.type = 0x18;
tri.element_count = 3;
tri.vertices[0].vertex_index = vertex_idx_0;  // Only index, no UVs
tri.vertices[1].vertex_index = vertex_idx_1;
tri.vertices[2].vertex_index = vertex_idx_2;

// Single submission
CDemonRenderer_renderBasicTexturedVariant(renderer, &tri);
```

### Example 3: Water Rendering

```c
// Water uses global static primitive at 0x684678
MRGL_Primitive_Quad* water_prim = (MRGL_Primitive_Quad*)0x684678;

// Transform vertices (sine wave displacement)
calculateWaterVertices(&renderer->vertex_buffer_ptr[0], ...);

// Quality-based dispatch
if (animated_flag) {
    CDemonRenderer_setRenderAlpha(renderer, 0xa000);
    CDemonRenderer_renderEnhancedQualityVariant(renderer, water_prim);
}
else if (software_mode) {
    CDemonRenderer_renderBasicTexturedVariant(renderer, water_prim);
}
else if (high_quality) {
    CDemonRenderer_renderPremium(renderer, water_prim);
}
else {
    CDemonRenderer_renderSpecialDepth(renderer, water_prim);
}
```

### Example 4: Fire Rendering

```c
// Fire builds custom primitive on stack
Fire_Primitive_Custom fire_prim;
fire_prim.primitive_type = 0x80000;
fire_prim.vertex_count = 4;
// ... set other fields

// Transform vertices with alpha
renderer->vertex_buffer_ptr[0].w_recip = alpha_value;
renderer->vertex_buffer_ptr[3].w_recip = alpha_value;

// Quality-based dispatch
if (standard_mode) {
    CDemonRenderer_setRenderAlpha(renderer, alpha);
    CDemonRenderer_renderEnhancedQualityVariant(renderer, &fire_prim);
}
else {
    CDemonRenderer_renderMaximumQualityVariant(renderer, &fire_prim);
}
```

### Example 5: MRGL Dispatch

```c
// API layer receives MRGL primitive chain
MRGL_Primitive_Variable* cmd = mrgl_chain;

while (cmd->type != 0) {
    switch (cmd->type) {
        case 0x18:  // Plane masked complex
            renderPrimitiveFullFeatured(cmd);
            break;
        case 0x29:  // Batch rendering
            renderPrimitiveAdaptive(cmd);
            break;
        case 0x41:  // Premium multi-state
            renderPolygonPremiumQuality(cmd);
            break;
        case 0x42:  // General rendering
            renderPolygon_FUN_00407470(cmd);
            break;
    }

    // Advance by MRGL size
    int size = getMRGLSize(cmd);  // element_count * 12 + 24
    cmd = (MRGL_Primitive_Variable*)((char*)cmd + size);
}
```

---

## Key Function Identification

### Critical Functions by Usage Pattern

**KFM Exclusive**:
- `0048ce90 | renderPrimitiveBatch` - Only function that takes array with 72-byte stride

**DFM Primary**:
- `0048a8a0 | renderBasicTexturedVariant` - Reads vertex indices at 12-byte stride

**Water Multi-Path**:
- `0048bdc0 | renderEnhancedQualityVariant` (animated)
- `0048a8a0 | renderBasicTexturedVariant` (software)
- `0048b1e0 | renderPremium` (high quality)
- `0048b420 | renderSpecialDepth` (normal)

**Fire Dual-Path**:
- `0048bdc0 | renderEnhancedQualityVariant` (standard)
- `0048bba0 | renderMaximumQualityVariant` (per-vertex alpha)

**MRGL Type Handlers**:
- `004046c0 | renderPrimitiveFullFeatured` (Type 0x18)
- `00404840 | renderPrimitiveAdaptive` (Type 0x29)
- `00407290 | renderPolygonPremiumQuality` (Type 0x41)
- `00407470 | renderPolygon_FUN_00407470` (Type 0x42)

---

## Struct Assignment Summary

| Struct Type | Function Count | Usage |
|-------------|----------------|-------|
| `MRGL_Primitive_Variable` | 57 (API tier) | MRGL dispatch, generic handlers |
| `MRGL_Primitive_Quad` | 5-10 (Core tier) | KFM batch, water, quad-specific |
| `MRGL_Primitive_Triangle` | 2-3 (Core tier) | DFM, triangle lists |
| `SPrimitive_CDemonSet` | 1-2 (Core tier) | Static level geometry |
| `Fire_Primitive_Custom` | 1-2 (Core tier) | Fire effects custom format |
| `Generic / Vertex arrays` | 15 (Raster/Infra/Support) | Low-level processing |

---

## Recommendations for Codebase

1. **Create type-safe wrappers** for each category:
   ```c
   void renderKFMModel(CDemonRenderer* renderer, MRGL_Primitive_Quad* quads, int count);
   void renderDFMModel(CDemonRenderer* renderer, MRGL_Primitive_Triangle* triangle);
   void renderWaterEffect(CDemonRenderer* renderer, MRGL_Primitive_Quad* water_quad, int quality);
   void renderFireEffect(CDemonRenderer* renderer, Fire_Primitive_Custom* fire_prim, bool max_quality);
   ```

2. **Use unions for API layer** to allow type punning:
   ```c
   typedef union {
       MRGL_Primitive_Variable generic;
       MRGL_Primitive_Quad quad;
       MRGL_Primitive_Triangle triangle;
   } MRGL_Primitive;
   ```

3. **Document calling conventions** in each function's header comment:
   ```c
   // Takes: MRGL_Primitive_Quad* (72-byte quads only)
   // Called by: KFM rendering pipeline
   // Stride: 0x48 (72 bytes)
   void CDemonRenderer_renderPrimitiveBatch(CDemonRenderer* this,
                                            MRGL_Primitive_Quad* primitives,
                                            int count, int stride);
   ```

4. **Add compile-time size assertions**:
   ```c
   static_assert(sizeof(MRGL_Primitive_Quad) == 72, "KFM quad size mismatch");
   static_assert(sizeof(MRGL_Primitive_Triangle) == 60, "DFM triangle size mismatch");
   static_assert(sizeof(SPrimitive_CDemonSet) == 28, "CDemonSet primitive size mismatch");
   ```

---

## Conclusion

This mapping provides a complete assignment of primitive structure types to all 98 render functions in Nocturne. The architecture shows a clear separation:

- **High-level API** (engine_3d.c): MRGL dispatch, works with variable-size primitives
- **Mid-level Core** (drender.cpp): Format-specific renderers for each geometry type
- **Low-level Raster** (windll.cpp, prim.c): Format-agnostic scanline rasterization

By using the appropriate struct type for each function, the decompiled code will be type-safe and self-documenting.
