# Fire/Flame Primitive Format - Same Structure, Different Meaning

## Discovery

The fire/flame rendering system uses the **same SPrimitive structure** (40 bytes) as CDemonSet geometry, but with **completely different field meanings**!

## Structure Definition

```c
typedef struct SPrimitive {
    int primitive_type;              // 0x00: 4 bytes
    int vertex_count;                // 0x04: 4 bytes
    SClipPlane surface_normal;       // 0x08: 16 bytes (A, B, C, D)
    int vertex_indices[3];           // 0x18: 12 bytes
    int padding;                     // 0x24: 4 bytes
    // Total: 40 bytes (0x28)
} SPrimitive;
```

This is the **same physical structure** used for:
- CDemonSet level geometry
- Fire/flame particle effects
- Light volume rendering
- Other effect types

## Field Usage Comparison

### CDemonSet Usage (Level Geometry)

From `buildAndRenderTrianglePrimitive_FUN_004566e0`:

```c
SPrimitive prim;
prim.primitive_type = ???;           // 0x00: Uninitialized (unused)
prim.vertex_count = 3;               // 0x04: Triangle vertex count
prim.surface_normal = {0,0,0,0};     // 0x08: Zeroed (backface culling disabled)
prim.vertex_indices[0] = index0;     // 0x18: First vertex index
prim.vertex_indices[1] = index1;     // 0x1C: Second vertex index
prim.vertex_indices[2] = index2;     // 0x20: Third vertex index
// 0x24: padding
```

**Rendering path**: `renderBasicTextured` → `clipAndFillPoly`

---

### Fire Usage Mode 1 (Quad Rendering)

From `FUN_004c25c0` lines 287-292:

```c
SPrimitive prim;
prim.primitive_type = 4;             // 0x00: 4 vertices (quad)
prim.vertex_count = 0;               // 0x04: 0 (special meaning?)
prim.surface_normal.A = 0;           // 0x08: Zeroed
prim.surface_normal.B = 0;           // 0x0C: Zeroed
prim.surface_normal.C = 0;           // 0x10: Zeroed
prim.surface_normal.D = 0;           // 0x14: Zeroed
// vertex_indices used for 4 vertex indices (0x18-0x24)
```

**Rendering path**: `renderMaximumQuality` → `clipAndFillPoly`

---

### Fire Usage Mode 2 (Light Volume)

From `FUN_004c25c0` lines 513-522:

```c
SPrimitive prim;
prim.primitive_type = 0x80000;       // 0x00: Light volume flag
prim.vertex_count = 0x80000;         // 0x04: Light volume flag (duplicate?)
prim.surface_normal.A = 1;           // 0x08: First light parameter
prim.surface_normal.B = (int)(g_LightBufferPool[0xb] + 0x2cdf8);  // 0x0C: Light buffer pointer
prim.surface_normal.C = 0x80000;     // 0x10: Light volume flag
prim.surface_normal.D = 2;           // 0x14: Second light parameter
prim.vertex_indices[0] = (int)(g_LightBufferPool[0xb] + 0x2cdf8);  // 0x18: Light buffer pointer (duplicate)
// 0x1C-0x27: Possibly more light parameters
```

**Rendering path**: `renderMaximumQuality` → (special light volume path?)

---

## Field Reinterpretation

### For CDemonSet Geometry:
- **primitive_type**: Unused (uninitialized)
- **vertex_count**: Number of vertices (3 for triangles)
- **surface_normal**: Backface culling plane (often zeroed)
- **vertex_indices**: Array of 3 indices into transformed vertex buffer

### For Fire Effects (Quad):
- **primitive_type**: Number of vertices (4 for quads)
- **vertex_count**: Special flag (0)
- **surface_normal**: Zeroed (no backface culling)
- **vertex_indices**: Array of 4 indices (uses padding slot)

### For Fire Effects (Light Volume):
- **primitive_type**: Light volume type flag (0x80000)
- **vertex_count**: Light volume flag (0x80000)
- **surface_normal.A**: First light parameter (count or intensity?)
- **surface_normal.B**: Pointer to light buffer data
- **surface_normal.C**: Light volume flag (0x80000)
- **surface_normal.D**: Second light parameter (type or mode?)
- **vertex_indices[0]**: Duplicate pointer to light buffer

## Assembly Evidence

From `renderMaximumQuality_FUN_0048bad0` assembly:

```asm
0048baf9: MOV EBX,dword ptr [EAX + 0x18]    ; Read vertex index/data
0048bafc: IMUL EBX,EBX,0x30                  ; Multiply by 48 (sizeof SRenderVertex)
0048bb00: AND ECX,dword ptr [EDI + EBX*0x1 + 0x10]  ; Access vertex buffer
0048bb07: ADD EAX,0x4                        ; Advance to next dword (0x1C, 0x20, etc.)
```

This shows the renderer **iterates through the structure starting at offset 0x18**, reading values at 4-byte intervals. The interpretation depends on the `primitive_type` and `vertex_count` flags.

## Renderer Behavior

### `renderMaximumQuality` (0x0048bad0)

```c
void renderMaximumQuality(CDemonRenderer* this_ptr, SPrimitive* polygon_info) {
    // Optional backface culling (checks surface_normal)
    if (this_ptr->plane_culling_enabled == 0 ||
        isVisiblePlane(&polygon_info->surface_normal)) {

        // Validate vertices (reads vertex_indices as array)
        uint clip_flags = 0xFFFFFFFF;
        for (int i = 0; i < polygon_info->vertex_count; i++) {
            int index = polygon_info->vertex_indices[i];
            clip_flags &= this_ptr->vertex_buffer_ptr[index].screen_x;
        }

        if (/* not completely off-screen */) {
            // Set render state based on pass
            if (this_ptr->face_count == 0) {
                g_ScanlineRenderFunc = renderMMXPerspectiveScanline;
                g_RenderStateFlags = RENDER_ENGINE_CORE_MAXIMUM;
            } else {
                g_ScanlineRenderFunc = renderDepthOnlyStandard;
                g_RenderStateFlags = 0;
            }

            // Pass to clipper
            clipAndFillPoly(this_ptr, polygon_info->vertex_count,
                           &polygon_info->vertex_indices[0]);
        }
    }
}
```

**Key insight**: The renderer treats `vertex_indices` as a **sequential array** regardless of whether the data represents geometry indices or light volume parameters!

## Type Discrimination

How does the renderer know which interpretation to use?

### Option 1: Implicit Context
The calling code determines the meaning. When rendering:
- **Geometry**: `primitive_type` is ignored, `vertex_count` determines polygon type
- **Light volumes**: `primitive_type = 0x80000` triggers special handling

### Option 2: Flag-Based Dispatch
The renderer may check `primitive_type`:

```c
if (prim->primitive_type == 0x80000) {
    // Light volume rendering path
    renderLightVolume(renderer, prim);
} else {
    // Normal geometry path
    clipAndFillPoly(renderer, prim->vertex_count, prim->vertex_indices);
}
```

Currently, the code suggests **implicit context** - the caller knows what type of primitive it's building and calls the appropriate renderer function.

## Comparison: CDemonSet vs Fire Primitives

| Aspect | CDemonSet | Fire (Quad) | Fire (Light Volume) |
|--------|-----------|-------------|---------------------|
| **Size** | 40 bytes | 40 bytes | 40 bytes |
| **primitive_type** | Uninitialized | 4 | 0x80000 |
| **vertex_count** | 3 | 0 | 0x80000 |
| **surface_normal** | {0,0,0,0} | {0,0,0,0} | {1, ptr, 0x80000, 2} |
| **vertex_indices[0]** | Vertex index | Vertex index | Light buffer pointer |
| **Purpose** | Level geometry | Particle quad | Light volume |
| **Renderer** | renderBasicTextured | renderMaximumQuality | renderMaximumQuality |

## Usage Patterns

### Pattern 1: Stack Allocation
All primitives are **stack-allocated** (not heap arrays):

```c
void renderFire() {
    SPrimitive SStack_204;  // 40-byte stack variable

    // Initialize fields
    SStack_204.primitive_type = 0x80000;
    // ...

    // Pass to renderer
    renderMaximumQuality(g_CDemonRendererPtr, &SStack_204);
}
```

### Pattern 2: Field Repurposing
The same fields store **completely different data types**:

```c
// CDemonSet: surface_normal.B is a plane coefficient
prim.surface_normal.B = 0;

// Fire: surface_normal.B is a memory address
prim.surface_normal.B = (int)(g_LightBufferPool[0xb] + 0x2cdf8);
```

This is **valid C** because all fields are `int` or `int*` types!

### Pattern 3: Duplicate Values
Fire mode stores the same pointer in multiple places:

```c
prim.surface_normal.B = (int)(g_LightBufferPool[0xb] + 0x2cdf8);  // 0x0C
prim.vertex_list = (int *)(g_LightBufferPool[0xb] + 0x2cdf8);     // 0x18
```

Why? Possibly:
- **Different renderers** read from different offsets
- **Redundancy** for cache alignment
- **Legacy code** that was refactored but left redundant fields

## Unknown Questions

1. **What does `0x80000` represent?**
   - Bit flag indicating light volume type?
   - Magic number for special rendering mode?
   - Enum value for effect type?

2. **What do surface_normal.A and .D mean in fire mode?**
   - Light count and type?
   - Animation frame and duration?
   - Intensity and falloff parameters?

3. **Why is the pointer stored twice?**
   - Does `renderMaximumQuality` read both locations?
   - Is one for vertex data and one for light data?

4. **What's at `g_LightBufferPool[0xb] + 0x2cdf8`?**
   - Pre-computed light values?
   - Vertex positions for light volume geometry?
   - Texture/color data?

## Recommendations for Decompilation

### Option 1: Single Structure with Union
```c
typedef struct SPrimitive {
    int primitive_type;
    int vertex_count;
    union {
        SClipPlane surface_normal;  // For geometry
        struct {
            int light_param_a;
            int light_buffer_ptr;
            int light_flags;
            int light_param_d;
        } light_data;  // For fire/lights
    };
    union {
        int vertex_indices[3];      // For geometry
        int* light_vertex_ptr;      // For lights (reuses first index slot)
    };
    int padding;
} SPrimitive;
```

### Option 2: Separate Structures with Same Size
```c
typedef struct SPrimitive_Geometry {
    int primitive_type;
    int vertex_count;
    SClipPlane surface_normal;
    int vertex_indices[3];
    int padding;
} SPrimitive_Geometry;

typedef struct SPrimitive_LightVolume {
    int light_type_flag;      // 0x80000
    int light_volume_flag;    // 0x80000
    int light_param_a;
    int light_buffer_ptr;
    int light_flags;
    int light_param_d;
    int light_vertex_ptr;
    int unknown[2];
} SPrimitive_LightVolume;

_Static_assert(sizeof(SPrimitive_Geometry) == sizeof(SPrimitive_LightVolume));
```

### Option 3: Keep Original Structure, Document Dual Use
```c
// This structure is used for BOTH geometry and light volumes!
// Field meanings depend on primitive_type:
// - primitive_type < 10: Normal geometry (vertex_count = actual count)
// - primitive_type = 0x80000: Light volume (fields repurposed)
typedef struct SPrimitive {
    int primitive_type;              // Type/flags
    int vertex_count;                // Vertex count OR flags
    SClipPlane surface_normal;       // Plane OR light parameters
    int vertex_indices[3];           // Indices OR light data
    int padding;
} SPrimitive;
```

**Recommended**: Option 3 with extensive comments, since the game treats it as a single type.

## Summary

✅ **Fire primitives are 40 bytes** (same as CDemonSet)
✅ **Same structure, different meanings** (polymorphism via field reuse)
✅ **primitive_type and vertex_count** act as discriminators
✅ **0x80000** is a magic value for light volumes
✅ **Renderer reads vertex_indices as sequential array** regardless of content
⚠️ **Exact meaning of light parameters** still unknown
⚠️ **Why pointer duplication** still unknown

The mystery of the fire primitive format is **partially solved**: it uses the same 40-byte structure as CDemonSet, but repurposes the fields for completely different data!
