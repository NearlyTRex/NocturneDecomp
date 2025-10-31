# Complete Rendering Architecture Analysis

## Overview

The Nocturne engine uses **multiple primitive formats and rendering paths** depending on the geometry source. This document synthesizes findings from analyzing KFM models, DFM models, water effects, and fire effects.

---

## Primitive Formats Summary

### 1. CDemonSet (Static Level Geometry)
**Size**: 28 bytes
**Format**: Pointer-based
**Source**: Level geometry files (.SET)

```c
typedef struct SPrimitive_CDemonSet {
    int primitive_type;             // 0x00
    int vertex_count;               // 0x04
    SClipPlane surface_normal;      // 0x08 (16 bytes)
    int* vertex_list;               // 0x18 (pointer to vertex array)
    // Total: 28 bytes (0x1C)
} SPrimitive_CDemonSet;
```

### 2. MRGL Quad (KFM Keyframed Models)
**Size**: 72 bytes
**Format**: Embedded vertex data
**Source**: Keyframed model files (.KFM)

```c
typedef struct MRGL_KFM_Quad {
    int type;                       // 0x00: MRGL type (0x18, 0x29, 0x41, 0x42)
    int element_count;              // 0x04: 4 (quads)
    SClipPlane surface_normal;      // 0x08: 16 bytes

    struct {
        int vertex_index;           // Index into transformed buffer
        int texture_u;              // UV coordinate (POPULATED)
        int texture_v;              // UV coordinate (POPULATED)
    } vertices[4];                  // 0x18-0x47: 4 × 12 bytes = 48 bytes

    // Total: 72 bytes (0x48)
} MRGL_KFM_Quad;
```

### 3. MRGL Triangle (DFM Deformable Models)
**Size**: 60 bytes
**Format**: Degenerate (indices only)
**Source**: Skeletal model files (.DFM)

```c
typedef struct MRGL_DFM_Triangle {
    int unknown_00;                 // 0x00: (not written)
    int element_count;              // 0x04: 3 (triangles)
    SClipPlane surface_normal;      // 0x08: 16 bytes (not written)

    struct {
        int vertex_index;           // Index into transformed buffer (POPULATED)
        int texture_u;              // UV coordinate (NOT WRITTEN)
        int texture_v;              // UV coordinate (NOT WRITTEN)
    } vertices[3];                  // 0x18-0x3B: 3 × 12 bytes = 36 bytes
                                    // Only vertex_index populated

    // Total: 60 bytes (0x3C)
} MRGL_DFM_Triangle;
```

### 4. MRGL Quad (Water Effects)
**Size**: 72 bytes (likely)
**Format**: Global static, reused
**Source**: Runtime generated

```c
typedef struct MRGL_Water_Quad {
    int type;                       // 0x00: MRGL type
    int element_count;              // 0x04: 4 (quads)
    SClipPlane surface_normal;      // 0x08: 16 bytes

    struct {
        int vertex_index;           // Sequential indices (0, 1, 2, 3)
        int texture_u;              // UV coordinate (possibly in vertex buffer)
        int texture_v;              // UV coordinate (possibly in vertex buffer)
    } vertices[4];                  // 0x18-0x47: 4 × 12 bytes = 48 bytes

    // Total: 72 bytes (0x48) - Same as KFM format
    // Stored at global address 0x684678
} MRGL_Water_Quad;
```

### 5. Custom (Fire Effects)
**Size**: Unknown
**Format**: Non-MRGL custom format
**Source**: Stack-allocated

```c
typedef struct Fire_Primitive {
    int primitive_type;             // 0x00: 0x80000 (custom type)
    int vertex_count;               // 0x04: 0x80000 (duplicate/flag?)
    SClipPlane surface_normal;      // 0x08: 16 bytes
    int* vertex_list;               // 0x18: Pointer to vertex data

    // Additional fields (unclear from decompilation)
    // Total size: Unknown, stack-allocated
} Fire_Primitive;
```

---

## Rendering Paths

### Path 1: KFM Models (Keyframe Animation)

**Call Chain**:
```
CKeyFramedModel_submitToRenderer (00477980)
  ↓
core_set.cpp_FUN_00570770 (00570770)
  ↓ (iterates array with 72-byte stride)
CDemonRenderer_renderPrimitiveBatch (0048ce90)
  ↓
clipAndFillPoly
  ↓
Scanline renderers
```

**Key Evidence**:
- Assembly: `ADD EBX,0x48` (advances 72 bytes)
- Assembly: `PUSH 0x48` (passes stride to renderPrimitiveBatch)
- Uses **full MRGL quad format** with embedded UV data

**Characteristics**:
- Batch processing of primitives
- Pre-loaded from file
- UV coordinates embedded in primitive
- Surface normals calculated by `lightVerticies`

### Path 2: DFM Models (Skeletal Animation)

**Call Chain**:
```
CDeformableModelInstance_renderPolygons (005a0340)
  ↓
CDeformableModel_FUN_0059abf0 (0059abf0)
  ↓ (builds 60-byte triangle on stack)
CDemonRenderer_renderBasicTexturedVariant (0048a8a0)
  ↓
clipAndFillPoly
  ↓
Scanline renderers
```

**Key Evidence**:
- Assembly: `MOV EAX,0x3` (vertex_count = 3)
- Assembly: Writes at offsets 0x18, 0x24, 0x30 (12-byte stride)
- Assembly: Only writes vertex indices, not UVs
- Assembly: `ADD EAX,0xc` (renderer advances 12 bytes per vertex)

**Characteristics**:
- Single primitive submission
- Stack-allocated each call
- Vertex indices only (UVs in vertex buffer)
- Pre-transformed by skeletal deformation

### Path 3: Water Effects (Dynamic)

**Call Chain** (quality-dependent):
```
core_set.cpp_CDemonSet_setCameraView (or similar)
  ↓
core_water.cpp_FUN_005ea320 (water renderer)
  ↓ (transforms vertices, calculates sine waves)
  ↓
IF animated_flag:
    renderEnhancedQualityVariant (0048bdc0) [with alpha]
ELSE IF external_renderer:
    renderBasicTexturedVariant (0048a8a0) [software mode]
ELSE IF quality_flag:
    renderPremium (0048b1e0) [high quality hardware]
ELSE:
    renderSpecialDepth (0048b420) [normal hardware]
  ↓
clipAndFillPoly
  ↓
Scanline renderers
```

**Key Evidence**:
- Assembly: All paths push same address `0x684678` (global primitive)
- Pseudocode: Builds 4 vertices with sine wave displacement
- Multiple conditional branches to different renderers

**Characteristics**:
- Global reusable primitive structure
- Vertex data updated each frame
- Quality-based renderer selection
- Quad topology (4 vertices)

### Path 4: Fire Effects (Dynamic)

**Call Chain**:
```
Fire actor process (various sources)
  ↓
core_fire.cpp_FUN_004c25c0 (fire renderer)
  ↓ (builds primitive on stack, sets vertex alpha)
  ↓
IF standard_mode:
    renderEnhancedQualityVariant (0048bdc0) [with global alpha]
ELSE:
    renderMaximumQualityVariant (0048bba0) [with per-vertex alpha]
  ↓
clipAndFillPoly
  ↓
Scanline renderers
```

**Key Evidence**:
- Pseudocode: `uStack_21c = 4` (vertex_count = 4)
- Pseudocode: `SStack_204.primitive_type = 0x80000` (custom type)
- Two quality modes with different alpha handling

**Characteristics**:
- Stack-allocated each frame
- Custom primitive type (not MRGL)
- Per-vertex alpha support (w_recip field)
- Quad topology (4 vertices)

---

## Renderer Function Map

### renderPrimitiveBatch (0x0048ce90)
**Signature**: `void renderPrimitiveBatch(CDemonRenderer* renderer, SPrimitive* array, int count, int stride)`

**Used By**:
- **KFM models** (exclusive)

**Purpose**: Batch-render array of primitives with fixed stride

**Assembly Evidence**:
```asm
0048cee6: PUSH 0x48      ; stride = 72 bytes
0048cee8: PUSH EBP       ; count
0048cee9: PUSH ESI       ; primitive_array
```

---

### renderBasicTexturedVariant (0x0048a8a0)
**Signature**: `void renderBasicTexturedVariant(CDemonRenderer* renderer, SPrimitive* primitive)`

**Used By**:
- **DFM models** (primary)
- **Water** (software renderer mode)
- Debug geometry

**Purpose**: Simple textured rendering, vertex indices only

**Assembly Evidence**:
```asm
0048a8c2: MOV EBX,dword ptr [EAX + 0x18]  ; Read vertex index
0048a8cf: ADD EAX,0xc                     ; Advance 12 bytes
```

**Key Feature**: Reads only vertex indices (stride 0xC), ignores UV fields

---

### renderEnhancedQualityVariant (0x0048bdc0)
**Signature**: `void renderEnhancedQualityVariant(CDemonRenderer* renderer, SPrimitive* primitive)`

**Used By**:
- **Water** (animated mode)
- **Fire** (standard quality)
- Smoke particles

**Purpose**: Enhanced rendering with alpha blending support

**Key Features**:
- Alpha blending
- Texture filtering
- Moderate performance cost

---

### renderPremium (0x0048b1e0)
**Signature**: `void renderPremium(CDemonRenderer* renderer, SPrimitive* primitive)`

**Used By**:
- **Water** (high quality hardware mode)

**Purpose**: Highest quality software rasterization

**Key Features**:
- Advanced filtering
- Possibly perspective-correct texturing
- CPU-intensive

---

### renderMaximumQualityVariant (0x0048bba0)
**Signature**: `void renderMaximumQualityVariant(CDemonRenderer* renderer, SPrimitive* primitive)`

**Used By**:
- **Fire** (maximum quality mode)

**Purpose**: Maximum quality with per-vertex alpha

**Key Features**:
- Per-vertex alpha (uses w_recip field)
- Gradient transparency
- High-quality blending

---

### renderSpecialDepth (0x0048b420)
**Signature**: `void renderSpecialDepth(CDemonRenderer* renderer, SPrimitive* primitive)`

**Used By**:
- **Water** (normal hardware mode)

**Purpose**: Depth-aware rendering

**Key Features**:
- Depth buffer writes
- Possibly for water reflections/refractions

---

## Primitive Format Decision Tree

```
Geometry Source?
│
├─ Static Level Geometry (CDemonSet)
│  └─ 28-byte pointer-based SPrimitive
│     └─ renderBasicTextured (pointer dereference)
│
├─ Keyframed Models (.KFM)
│  └─ 72-byte MRGL quads (embedded UV)
│     └─ renderPrimitiveBatch (array iteration)
│
├─ Skeletal Models (.DFM)
│  └─ 60-byte MRGL triangles (indices only)
│     └─ renderBasicTexturedVariant (single submission)
│
├─ Water Effects
│  └─ 72-byte MRGL quads (global static)
│     ├─ renderEnhancedQualityVariant (animated)
│     ├─ renderBasicTexturedVariant (software)
│     ├─ renderPremium (high quality)
│     └─ renderSpecialDepth (normal quality)
│
└─ Fire Effects
   └─ Custom format (stack-allocated)
      ├─ renderEnhancedQualityVariant (standard)
      └─ renderMaximumQualityVariant (per-vertex alpha)
```

---

## MRGL Size Formula

For MRGL types 0x18, 0x29, 0x41, 0x42:

```c
size = element_count * 0xC + 0x18
     = element_count * 12 + 24
```

**Examples**:
- Triangle (3 vertices): `3 × 12 + 24 = 60 bytes`
- Quad (4 vertices): `4 × 12 + 24 = 72 bytes`
- Pentagon (5 vertices): `5 × 12 + 24 = 84 bytes`

**Format**:
```
[8-byte header][16-byte surface normal][12 × element_count vertex data]
```

---

## Key Architectural Insights

### 1. No Polymorphism
The renderer is **not polymorphic** - calling code must know which format it has and call the appropriate rendering function. The formats are **not interchangeable** even though some use the same MRGL type IDs.

### 2. Format Determined by Source
Primitive format is determined by the **geometry source**, not by inspecting the primitive:

```c
if (source == CKeyFramedModel) {
    renderPrimitiveBatch(primitives, count, 72);  // 72-byte quads
}
else if (source == CDeformableModel) {
    renderBasicTexturedVariant(primitive);  // 60-byte triangles
}
else if (source == WaterActor) {
    switch (quality_flags) {
        case ANIMATED: renderEnhancedQualityVariant(primitive); break;
        case SOFTWARE: renderBasicTexturedVariant(primitive); break;
        // etc.
    }
}
```

### 3. Vertex Buffer is Key
Most rendering paths rely on a **pre-populated vertex buffer** (`CDemonRenderer->vertex_buffer_ptr`):
- **DFM**: Vertices transformed by skeletal deformation, then primitive references them
- **Water**: Vertices calculated with sine waves, then primitive references them
- **Fire**: Vertices set with custom alpha, then primitive references them

Only **KFM** embeds full vertex data (indices + UVs) in the primitive itself.

### 4. Quality vs Performance Trade-offs
The engine provides multiple rendering paths for the same geometry type, allowing runtime quality/performance trade-offs:

| Renderer | Quality | Performance | Use Case |
|----------|---------|-------------|----------|
| renderBasicTexturedVariant | Low | Fast | Software mode, DFM |
| renderEnhancedQualityVariant | Medium | Moderate | Water, fire, effects |
| renderPremium | High | Slow | High-quality water |
| renderMaximumQualityVariant | Highest | Slowest | Maximum quality fire |
| renderPrimitiveBatch | N/A | Batch-optimized | KFM arrays |

### 5. Convergence at Low Level
Despite different high-level paths, all eventually reach shared low-level functions:

```
[Multiple primitive formats and renderers]
            ↓
      clipAndFillPoly
            ↓
   [Scanline renderers]
            ↓
   [Screen buffer pixels]
```

---

## Files Analyzed

### Core Models
- `core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980`
- `core_skeleton.cpp_CDeformableModel_FUN_0059abf0`
- `core_set.cpp_FUN_00570770`

### Effects
- `core_water.cpp_FUN_005ea320`
- `core_fire.cpp_FUN_004c25c0`

### Renderers
- `engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0`
- `engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90`
- `engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0`
- `engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0`
- `engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0`
- `engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420`

### Size Calculation
- `engine_model.c_getMRGLSize_FUN_00528700`

---

## Naming Recommendations

For clarity in the codebase, consider these naming conventions:

| Current Name | Suggested Name | Usage |
|--------------|----------------|-------|
| SPrimitive | SPrimitive_CDemonSet | 28-byte pointer-based (static level geometry) |
| SPrimitive (72-byte) | MRGL_Primitive_Quad_KFM | 72-byte MRGL quad with UVs (KFM models) |
| SPrimitive (60-byte) | MRGL_Primitive_Triangle_DFM | 60-byte MRGL triangle, indices only (DFM models) |
| SPrimitive (water) | MRGL_Primitive_Quad_Water | 72-byte MRGL quad, global static (water effects) |
| SPrimitive (fire) | Fire_Primitive_Custom | Custom format (fire effects) |

Or more generically:
- `MRGL_Primitive_Full` (72-byte with UVs)
- `MRGL_Primitive_IndexOnly` (60-byte without UVs)
- `MRGL_Primitive_Static` (28-byte pointer-based)

---

## Conclusion

The Nocturne rendering engine is **not a single unified system**, but rather **a collection of specialized paths** optimized for different geometry types:

1. **Static level geometry**: Pointer-based primitives, minimal memory overhead
2. **Keyframed models**: Batch-processed quads, pre-baked animation
3. **Skeletal models**: Single-submission triangles, deformable animation
4. **Water effects**: Quality-adaptive rendering, sine wave dynamics
5. **Fire effects**: Custom primitives, per-vertex alpha support

All paths converge at low-level rasterization, but take different routes based on:
- Memory layout requirements
- Animation system needs
- Quality/performance trade-offs
- Hardware vs software rendering modes

This architecture reflects a **pragmatic game engine design** from the late 1990s / early 2000s, where different geometry types had fundamentally different requirements and optimization strategies.
