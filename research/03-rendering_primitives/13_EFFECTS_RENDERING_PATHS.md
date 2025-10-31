# Effects Rendering Paths: Water and Fire Analysis

## Question
Do water and fire effects use the same rendering paths as KFM/DFM models?

## Answer: **Mixed - They Use Multiple Renderers Based on Quality Settings**

Water and fire effects use a **hybrid approach** - they build primitives dynamically and select renderers based on quality/state flags, using **some of the same renderers as DFM** but with additional high-quality variants.

---

## Water Rendering (`core_water.cpp_FUN_005ea320`)

### Rendering Path Selection

Water uses **THREE different rendering paths** based on runtime conditions:

```c
if (*in_stack_00000004 != 0) {  // Check some flag (possibly "animated wave" flag)
    // PATH 1: Animated water with transparency
    engine_drender_cpp_CDemonRenderer_setRenderAlpha(g_CDemonRendererPtr, 0xa000);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant(
        g_CDemonRendererPtr, (SPrimitive*)&DAT_00684678);
}
else if (g_UseExternalRenderer != 0) {
    // PATH 2: External/software renderer mode
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor(g_CDemonRendererPtr, 1);
    engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant(
        g_CDemonRendererPtr, (SPrimitive*)&DAT_00684678);
}
else if (in_stack_00000008 != 0) {  // Some quality flag
    // PATH 3a: High quality mode
    engine_drender_cpp_CDemonRenderer_renderPremium(
        g_CDemonRendererPtr, (SPrimitive*)&DAT_00684678);
}
else {
    // PATH 3b: Normal quality mode
    engine_drender_cpp_CDemonRenderer_renderSpecialDepth(
        g_CDemonRendererPtr, (SPrimitive*)&DAT_00684678);
}
```

### Assembly Evidence

**File**: `core_water.cpp_FUN_005ea320`

**Path 1: Animated water** (lines 714-731, asm 005ea745-005ea767):
```asm
005ea745: JZ 0x005ea7ad              ; Skip if not animated
005ea747: PUSH 0xa000                ; Alpha value
005ea752: PUSH EDX                   ; renderer
005ea753: CALL setRenderAlpha
005ea75b: PUSH 0x684678              ; Primitive structure address
005ea766: PUSH ECX                   ; renderer
005ea767: CALL renderEnhancedQualityVariant  ; ← PATH 1
```

**Path 2: Software renderer** (lines 173-188, asm 005ea7ad-005ea7eb):
```asm
005ea7ad: CMP dword ptr [0x02d03e94],0x0  ; g_UseExternalRenderer
005ea7b4: JNZ 0x005ea7cf             ; Jump to software path
005ea7cf: PUSH 0x1                   ; Color parameter
005ea7d7: PUSH EDI                   ; renderer
005ea7d8: CALL setCurrentPolygonColor
005ea7e0: PUSH 0x684678              ; Primitive structure address
005ea7ea: PUSH EAX                   ; renderer
005ea7eb: CALL renderBasicTexturedVariant  ; ← PATH 2 (same as DFM!)
```

**Path 3: Hardware renderer** (lines 174-180, asm 005ea7b6-005ea7c8):
```asm
005ea7ba: JZ 0x005ea7f5              ; Skip if quality flag not set
005ea7bc: PUSH 0x684678              ; Primitive structure
005ea7c7: PUSH EBX                   ; renderer
005ea7c8: CALL renderPremium         ; ← PATH 3a (high quality)

005ea7f5: PUSH 0x684678              ; Primitive structure
005ea800: PUSH ECX                   ; renderer
005ea801: CALL renderSpecialDepth    ; ← PATH 3b (normal quality)
```

### Primitive Format

Water uses a **GLOBAL static primitive structure at address 0x684678**.

**Evidence**: All render calls push the same address:
- Line 723: `PUSH 0x684678`
- Line 774: `PUSH 0x684678`
- Line 794: `PUSH 0x684678`
- Line 805: `PUSH 0x684678`

This structure is likely **pre-allocated and reused** for each water tile, populated dynamically each frame:

```c
// Water builds 4 vertices (quad) dynamically
for (int i = 0; i < 4; i++) {
    // Calculate sine wave displacement for each vertex
    float wave_height = sin(vertex_x * wave_freq + vertex_z * wave_freq + time);

    // Transform and project to screen space
    wincore_windll_cpp_transformAndProjectPoint(&vertex_buffer[i], &calculated_pos);

    // Set lighting/fog for each vertex
    vertex_buffer[i].light = lighting_value;
    vertex_buffer[i].color = water_color;
    vertex_buffer[i].fog = fog_value;
}

// Pass pre-allocated primitive structure to renderer
renderXXX(renderer, &water_primitive_structure);
```

### Key Characteristics

1. **Quad-based geometry**: Water tiles are rendered as 4-vertex quads
2. **Dynamic vertex calculation**: Sine wave displacement computed per-frame
3. **Reused primitive structure**: Global structure at 0x684678
4. **Quality-based renderer selection**: Different renderers for different settings
5. **Vertex-only submission**: Like DFM, vertices are pre-transformed before render call

---

## Fire Rendering (`core_fire.cpp_FUN_004c25c0`)

### Rendering Path Selection

Fire uses **TWO different rendering paths** based on a flag:

```c
if (iStack0000001c == 0) {
    // PATH 1: Standard fire rendering with alpha
    engine_drender_cpp_CDemonRenderer_setRenderAlpha(g_CDemonRendererPtr, (int)render_alpha);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant(
        g_CDemonRendererPtr, (SPrimitive*)(local_278 + 4));
}
else {
    // PATH 2: Maximum quality fire with custom alpha per vertex
    g_CDemonRendererPtr->vertex_buffer_ptr[0].w_recip = render_alpha;
    g_CDemonRendererPtr->vertex_buffer_ptr[1].w_recip = 0.0;
    g_CDemonRendererPtr->vertex_buffer_ptr[2].w_recip = 0.0;
    g_CDemonRendererPtr->vertex_buffer_ptr[3].w_recip = render_alpha;
    engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant(
        pCVar4, (SPrimitive*)local_278);
}
```

### Assembly Evidence

**File**: `core_fire.cpp_FUN_004c25c0`

**Path 1: Standard quality** (lines 433-437, asm 004c3410-004c3415):
```asm
004c3410: PUSH EAX                   ; Alpha value
004c3411: PUSH dword ptr [...]      ; renderer
004c3413: CALL setRenderAlpha
004c3415: CALL renderEnhancedQualityVariant  ; ← PATH 1
```

**Path 2: Maximum quality** (lines 439-445):
```c
g_CDemonRendererPtr->vertex_buffer_ptr[0].w_recip = render_alpha;
g_CDemonRendererPtr->vertex_buffer_ptr[1].w_recip = 0.0;
g_CDemonRendererPtr->vertex_buffer_ptr[2].w_recip = 0.0;
g_CDemonRendererPtr->vertex_buffer_ptr[3].w_recip = render_alpha;
engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant(pCVar4, (SPrimitive*)local_278);
```

### Primitive Format

Fire builds primitives **on the stack** (like DFM):

**Evidence from pseudocode** (lines 506-522):
```c
uStack_21c = 4;                        // Offset -0x21c: vertex_count = 4
local_20c = 0.0;                       // Offset -0x20c: padding/data
local_218._8_4_ = 0.0;                 // Offset -0x218+8: data
local_218._4_4_ = 0.0;                 // Offset -0x218+4: data
local_218._0_4_ = 0.0;                 // Offset -0x218+0: data
fStack_208 = 0.0;                      // Offset -0x208: data
local_1e4 = 3;                         // Some counter or flag
SStack_204.primitive_type = 0x80000;   // Offset -0x204: primitive type
SStack_204.vertex_count = 0x80000;     // Offset -0x1fc: vertex count (duplicate?)
SStack_204.surface_normal.B = ...;    // Surface normal data
SStack_204.surface_normal.C = 0x80000;
SStack_204.vertex_list = ...;         // Vertex list pointer
```

**Stack layout suggests**:
- Primitive structure starts around offset -0x204 from stack frame
- `uStack_21c = 4` writes vertex count at offset -0x21c (24 bytes before primitive header)
- This is **NOT a standard MRGL format** - it's a custom variant

### Key Characteristics

1. **Quad-based billboards**: Fire particles rendered as camera-facing quads
2. **Stack-allocated primitives**: Built dynamically on stack each call (like DFM)
3. **Custom primitive format**: Not standard MRGL - uses non-standard type 0x80000
4. **Quality-based renderer selection**: Standard vs maximum quality paths
5. **Per-vertex alpha**: Can set custom alpha for gradient effects (vertices 0,3 vs 1,2)

---

## Comparison: KFM vs DFM vs Water vs Fire

| Aspect | KFM | DFM | Water | Fire |
|--------|-----|-----|-------|------|
| **Primitive Storage** | File-loaded array | Stack-allocated | Global static | Stack-allocated |
| **Primitive Size** | 72 bytes (quads) | 60 bytes (triangles) | Unknown (quads) | Unknown (quads) |
| **Topology** | Quads (4 vertices) | Triangles (3 vertices) | Quads (4 vertices) | Quads (4 vertices) |
| **Vertex Data** | Index + UV embedded | Index only | Pre-transformed | Pre-transformed |
| **Rendering Functions** | `renderPrimitiveBatch` via `FUN_00570770` | `renderBasicTexturedVariant` | Multiple (quality-based) | Multiple (quality-based) |
| **Renderer Count** | 1 primary path | 1 primary path | 4 different paths | 2 different paths |
| **UV Handling** | Embedded in primitive | In vertex buffer | In vertex buffer | In vertex buffer |
| **Animation** | Keyframe interpolation | Skeletal deformation | Sine wave displacement | Billboard rotation |

---

## Renderer Function Usage Map

### renderBasicTexturedVariant (0x0048a8a0)
**Used by**:
- **DFM models** (skeletal animation) ← Primary use case
- **Water** (software renderer mode) ← Secondary use
- Debug geometry (raytrace grid cubes)

**Characteristics**:
- Reads vertex indices only (12-byte stride)
- Looks up full vertex data from vertex buffer
- Simple, fast rendering path
- No advanced effects

### renderEnhancedQualityVariant (0x0048bdc0)
**Used by**:
- **Water** (animated water mode) ← Primary use case
- **Fire** (standard quality) ← Primary use case
- Smoke particles

**Characteristics**:
- Supports alpha blending
- Moderate quality level
- Texture filtering/interpolation
- Used for transparent effects

### renderPremium (0x0048b1e0)
**Used by**:
- **Water** (high quality hardware mode)

**Characteristics**:
- Highest quality software rasterization
- Advanced filtering
- Possibly perspective-correct texturing
- CPU-intensive path

### renderMaximumQualityVariant (0x0048bba0)
**Used by**:
- **Fire** (maximum quality mode)

**Characteristics**:
- Supports per-vertex alpha (w_recip field)
- Gradient transparency effects
- High-quality blending

### renderSpecialDepth (0x0048b420)
**Used by**:
- **Water** (normal hardware mode)

**Characteristics**:
- Depth-aware rendering
- Possibly writes to depth buffer
- Used for water reflections/refractions?

### renderPrimitiveBatch (0x0048ce90)
**Used by**:
- **KFM models** (keyframe animation) ← Exclusive use

**Characteristics**:
- Batch processes arrays of primitives
- 72-byte stride (quad primitives)
- Optimized for static/keyframed geometry

---

## Primitive Format Analysis

### Water Primitive (Global Static)

**Location**: 0x684678 (global data segment)

**Format** (inferred):
```c
typedef struct SWaterPrimitive {
    // MRGL header (8 bytes)
    int type;                   // 0x00: MRGL type (possibly 0x41 or 0x42)
    int vertex_count;           // 0x04: 4 (quads)

    // Surface data (16 bytes)
    SClipPlane surface_normal;  // 0x08: Normal/clip plane

    // Vertex indices (12 bytes × 4)
    // NOTE: Since water pre-transforms vertices, these are likely just indices 0,1,2,3
    struct {
        int vertex_index;       // Index 0-3 (sequential)
        int texture_u;          // UV coordinate (may be in vertex buffer instead)
        int texture_v;          // UV coordinate (may be in vertex buffer instead)
    } vertices[4];              // 0x18-0x47

    // Total: 72 bytes (MRGL quad format)
} SWaterPrimitive;
```

**Key insight**: Water likely uses **the same 72-byte MRGL quad format as KFM**, but:
1. Builds it **once at startup** in global memory
2. **Reuses** it for every water tile
3. Updates **vertex buffer** (not primitive) each frame
4. Vertex indices are sequential (0, 1, 2, 3) pointing to vertex_buffer_ptr[0-3]

### Fire Primitive (Stack-Allocated)

**Location**: Stack offset -0x204 from frame pointer

**Format** (custom, non-standard):
```c
typedef struct SFirePrimitive {
    // Custom header (not standard MRGL)
    int primitive_type;         // 0x00: 0x80000 (custom fire type)
    int vertex_count;           // 0x04: 0x80000 (duplicate or special flag?)

    // Surface data (16 bytes)
    SClipPlane surface_normal;  // 0x08: Normal/clip plane
    //   int A;                  // Set to 1
    //   int B;                  // Set to complex value
    //   int C;                  // Set to 0x80000
    //   int D;                  // Set to 2

    // Vertex list pointer
    int* vertex_list;           // 0x18: Pointer to vertex indices

    // Additional data
    // ... (format unclear from pseudocode)
} SFirePrimitive;
```

**Key insight**: Fire uses a **non-standard primitive format** with:
1. Custom type ID (0x80000) not in MRGL dispatch table
2. Possibly pointer-based vertex list (like CDemonSet's 28-byte format)
3. Stack-allocated each frame (temporary structure)
4. Pre-transformed vertices in vertex buffer

---

## Answer to Original Question

**Do water and fire use the same rendering methods as KFM/DFM?**

### Water:
**Partially YES** - Water can use:
- `renderBasicTexturedVariant` (same as DFM) when in software renderer mode
- `renderEnhancedQualityVariant` (same as fire) for animated water
- `renderPremium` and `renderSpecialDepth` (unique to water/effects)

**Primitive format**: Likely 72-byte MRGL quads (same as KFM), but globally allocated and reused.

### Fire:
**Partially YES** - Fire uses:
- `renderEnhancedQualityVariant` (shared with water)
- `renderMaximumQualityVariant` (possibly shared with other effects)

**Primitive format**: Custom non-MRGL format (type 0x80000), stack-allocated like DFM but different structure.

---

## Rendering Architecture Summary

The Nocturne engine has **multiple rendering paths** organized by complexity/quality:

```
┌─────────────────────────────────────────────────────────────┐
│                  CDemonRenderer Layer                        │
└─────────────────────────────────────────────────────────────┘
                            │
           ┌────────────────┼────────────────┐
           │                │                │
    ┌──────▼──────┐  ┌──────▼──────┐  ┌─────▼──────┐
    │  Batch Path │  │  Basic Path │  │ Effect Path │
    │   (KFM)     │  │   (DFM)     │  │ (Water/Fire)│
    └──────┬──────┘  └──────┬──────┘  └─────┬──────┘
           │                │                │
           │                │          ┌─────┴─────────┐
           │                │          │               │
    renderPrimitiveBatch    │    renderEnhancedQuality │
           │                │          renderPremium   │
           │       renderBasicTextured renderMaxQuality│
           │                │          renderSpecialDepth
           │                │                │
           └────────────────┼────────────────┘
                            │
                   ┌────────▼────────┐
                   │ clipAndFillPoly │
                   └────────┬────────┘
                            │
                   ┌────────▼────────┐
                   │ Scanline Renderers│
                   └─────────────────┘
```

**Key insight**: The engine doesn't use a single unified primitive format. Instead:
1. **KFM models**: 72-byte MRGL quads, batch-processed
2. **DFM models**: 60-byte MRGL triangles, single-primitive submission
3. **Water effects**: 72-byte MRGL quads (likely), quality-based renderer selection
4. **Fire effects**: Custom format, stack-allocated, quality-based renderer selection

All paths eventually converge at `clipAndFillPoly` and the scanline renderers, but take different routes to get there.

---

## Files Analyzed

- `core_water.cpp_FUN_005ea320` (water rendering, lines 1-817)
- `core_fire.cpp_FUN_004c25c0` (fire rendering, lines 1-1992)
- `engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0`
- `engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0`
- `engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0`
- `engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0`
- `engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420`

---

## Next Steps for Further Analysis

1. **Disassemble fire primitive construction**: Determine exact layout of custom 0x80000 format
2. **Verify water primitive size**: Check if 0x684678 is actually 72 bytes or different
3. **Map all renderer quality levels**: Document differences between Basic/Enhanced/Premium/Maximum
4. **Check other effects**: Analyze smoke, explosions, particle systems
5. **Verify clipAndFillPoly convergence**: Confirm all paths reach same low-level rasterizers
