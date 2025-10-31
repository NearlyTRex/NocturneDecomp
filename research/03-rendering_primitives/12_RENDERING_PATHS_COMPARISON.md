# Rendering Path Comparison: KFM vs DFM

## Question
Do KFM and DFM models use different rendering methods? Should some renderers take MRGL_DFM primitives and others take MRGL_KFM primitives?

## Answer: **YES - They Use Different Rendering Paths**

KFM (keyframed) and DFM (deformable/skeletal) models use **completely different rendering functions** despite both using MRGL-based primitive formats.

## KFM Rendering Path

### Call Chain
```
CKeyFramedModel_submitToRenderer (00477980)
  ↓
core_set.cpp_FUN_00570770 (00570770)
  ↓
CDemonRenderer_renderPrimitiveBatch (0048ce90)
```

### Evidence

**File**: `core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980`

**Lines 71, 88**: Direct calls to `core_set.cpp_FUN_00570770`
```c
core_set_cpp_FUN_00570770();  // Called with 72-byte MRGL quad primitives
```

**File**: `core_set.cpp_FUN_00570770`

**Assembly line 140**: `ADD EBX,0x48` - Advances by **72 bytes (0x48)**

**Assembly line 163**:
```asm
0057082e: CALL engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
```

**Cross-references for FUN_00570770**:
```
core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 at 00477bb3
core_cloth.cpp_FUN_0043bae0 at 0043be28
core_curtain.cpp_FUN_0044b060 at 0044b305
core_wateract.cpp_CWaterActor_FUN_005eb280 at 005eb445
```

### Primitive Format: 72-Byte MRGL Quads

```c
typedef struct MRGL_KFM_Quad {
    int type;                   // 0x00: MRGL type (0x18, 0x29, 0x41, etc.)
    int element_count;          // 0x04: 4 (quads)
    SClipPlane surface_normal;  // 0x08: 16 bytes

    // 4 vertices × 12 bytes each = 48 bytes
    struct {
        int vertex_index;       // Index into transformed buffer
        int texture_u;          // UV coordinate (POPULATED)
        int texture_v;          // UV coordinate (POPULATED)
    } vertices[4];              // 0x18-0x47

    // Total: 72 bytes (0x48)
} MRGL_KFM_Quad;
```

### renderPrimitiveBatch Details

**File**: `engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90`

**Assembly**:
```asm
0048cee6: PUSH 0x48                ; Pass 72 as stride parameter
0048cee8: PUSH EBP                 ; primitive_count
0048cee9: PUSH ESI                 ; primitive_array
```

This function processes an **array of 72-byte primitives** with full vertex indices + UV data.

## DFM Rendering Path

### Call Chain
```
CDeformableModelInstance_renderPolygons (005a0340)
  ↓
CDeformableModel_FUN_0059abf0 (0059abf0)
  ↓
CDemonRenderer_renderBasicTexturedVariant (0048a8a0)
```

### Evidence

**File**: `core_skeleton.cpp_CDeformableModel_FUN_0059abf0`

**Assembly line 1036**: Direct call to different renderer
```asm
0059b381: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
```

**Cross-references for renderBasicTexturedVariant**:
```
core_skeleton.cpp_CDeformableModel_FUN_0059abf0 at 0059b381
core_dtri.cpp_renderTriangle_FUN_0049cbd0 at 0049cd0d
core_dtrace.cpp_CDemonRaytrace_renderDebugGridCube_FUN_00496e70 at 00497296
core_water.cpp_FUN_005ea320 at 005ea7eb
shape_meshlod.cpp_FUN_0051e990 at 0051ea5a
shape_meshlod.cpp_FUN_0051ead0 at 0051ecbd
```

### Primitive Format: 60-Byte MRGL Triangles (Degenerate)

```c
typedef struct MRGL_DFM_Triangle {
    int unknown_00;             // 0x00: (not written)
    int element_count;          // 0x04: 3 (triangles)
    SClipPlane surface_normal;  // 0x08: 16 bytes (not written in observed path)

    // 3 vertices × 12 bytes each = 36 bytes
    // BUT only first 4 bytes of each slot are written!
    struct {
        int vertex_index;       // Index into transformed buffer (POPULATED)
        int texture_u;          // UV coordinate (NOT WRITTEN)
        int texture_v;          // UV coordinate (NOT WRITTEN)
    } vertices[3];              // 0x18-0x3B

    // Total: 60 bytes (0x3C)
    // But only vertex indices are actually written
} MRGL_DFM_Triangle;
```

### renderBasicTexturedVariant Details

**File**: `engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0`

**Assembly**:
```asm
0048a8c2: MOV EBX,dword ptr [EAX + 0x18]  ; Read vertex index at offset 0x18
0048a8c5: MOV dword ptr [ECX + 0x2c6d5a8],EBX  ; Write to g_VertexIndexBuffer
0048a8cf: ADD EAX,0xc                     ; Advance by 12 bytes to next vertex slot
```

This function extracts **only vertex indices** from the primitive (reading at 0xC-byte stride), ignoring UV data.

## Key Differences

| Aspect | KFM Path | DFM Path |
|--------|----------|----------|
| **Render Function** | `renderPrimitiveBatch` | `renderBasicTexturedVariant` |
| **Primitive Size** | 72 bytes (0x48) | 60 bytes (0x3C) |
| **Topology** | Quads (4 vertices) | Triangles (3 vertices) |
| **Vertex Data** | Index + U + V (12 bytes × 4) | Index only (4 bytes × 3, rest uninitialized) |
| **UV Handling** | Embedded in primitive | Not stored (already in vertex buffer) |
| **Stride** | 0x48 (72 bytes) | 0xC per vertex (12 bytes) |
| **Wrapper Function** | `FUN_00570770` (intermediate processing) | Direct call |
| **Surface Normal** | Written by `lightVerticies` | Not written (may be computed elsewhere) |

## Why Different Paths?

### KFM (Keyframed Models)
- **Pre-baked UVs**: UV coordinates are static per keyframe, stored in file
- **Quad topology**: Original 3DS Max models exported as quads
- **Batch rendering**: Multiple quads rendered together with same texture
- **Full MRGL format**: All fields populated for maximum flexibility

### DFM (Deformable Models)
- **Skeletal deformation**: Vertices transformed by bone matrices each frame
- **Triangle topology**: More flexible for deformation and LOD
- **Per-vertex UVs**: UVs already in transformed vertex buffer after bone deformation
- **Simplified primitives**: Only need indices to reference pre-transformed vertices
- **Single triangle submission**: Each triangle rendered individually with calculated normals

## Architecture Insight

The engine has **two distinct MRGL primitive subtypes**:

### MRGL_KFM (Full Format)
- Used by: Keyframed models, cloth, curtains, water actors
- Size formula: `element_count * 0xC + 0x18` where `element_count = 4`
- Contains: Full vertex references with UVs
- Processed by: `renderPrimitiveBatch` with array iteration

### MRGL_DFM (Degenerate Format)
- Used by: Skeletal models, debug geometry, water, mesh LOD
- Size formula: `element_count * 0xC + 0x18` where `element_count = 3`
- Contains: Vertex indices only (UVs uninitialized)
- Processed by: `renderBasicTexturedVariant` with vertex-only extraction

Both formats use the **same MRGL type IDs** (0x18, 0x29, 0x41, 0x42) but are **distinguished by which rendering function is called**, not by the type ID itself.

## Rendering Function Selection

The code determines which renderer to use based on the **source of the geometry**, not by inspecting the primitive:

```
if (source == CKeyFramedModel) {
    // Use renderPrimitiveBatch path
    // Expects 72-byte quads with UVs
    FUN_00570770(primitives, count, flags);
}
else if (source == CDeformableModel) {
    // Use renderBasicTexturedVariant path
    // Expects 60-byte triangles, indices only
    renderBasicTexturedVariant(renderer, primitive);
}
```

## Shared Components

Despite different paths, both eventually reach common low-level rendering:

```
renderPrimitiveBatch → processQuadPrimitive → clipAndFillPoly → scanline renderers
renderBasicTexturedVariant → clipAndFillPoly → scanline renderers
```

The **scanline renderers** (final rasterization) are shared - the difference is in how primitives are prepared and batched before reaching that stage.

## Naming Recommendations

For clarity in the codebase, consider these distinctions:

| Current Name | Suggested Name | Usage |
|--------------|----------------|-------|
| SPrimitive | SPrimitive_CDemonSet | 28-byte pointer-based (CDemonSet static geometry) |
| SPrimitive (72-byte) | MRGL_Primitive_Quad_KFM | 72-byte MRGL quad with UVs (KFM models) |
| SPrimitive (60-byte) | MRGL_Primitive_Triangle_DFM | 60-byte MRGL triangle, indices only (DFM models) |

Or more generically:
- `MRGL_Primitive_Full` (72-byte with UVs)
- `MRGL_Primitive_IndexOnly` (60-byte without UVs)

## Conclusion

**YES - KFM and DFM use fundamentally different rendering methods:**

1. **Different render functions**: `renderPrimitiveBatch` vs `renderBasicTexturedVariant`
2. **Different primitive formats**: 72-byte quads vs 60-byte triangles
3. **Different data expectations**: Full vertex+UV vs index-only
4. **Different batching**: Array processing vs single primitive submission

The renderer is **not polymorphic** - the calling code must know which format it has and call the appropriate rendering function. The formats are **not interchangeable** even though both use MRGL type IDs.
