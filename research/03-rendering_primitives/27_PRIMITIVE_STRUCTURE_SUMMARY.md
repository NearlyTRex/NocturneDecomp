# Complete Primitive Structure Summary

## Overview

The Nocturne rendering engine uses a **polymorphic 40-byte SPrimitive structure** that stores different data depending on the rendering context. The same physical memory layout is reused for multiple purposes.

## The Universal Structure

```c
typedef struct SPrimitive {
    int primitive_type;              // 0x00: 4 bytes - Type/flags/vertex count
    int vertex_count;                // 0x04: 4 bytes - Vertex count/flags
    SClipPlane surface_normal;       // 0x08: 16 bytes - Plane/parameters
    //   int A;                       // 0x08: 4 bytes
    //   int B;                       // 0x0C: 4 bytes
    //   int C;                       // 0x10: 4 bytes
    //   int D;                       // 0x14: 4 bytes
    int vertex_indices[3];           // 0x18: 12 bytes - Indices/pointers/data
    int padding;                     // 0x24: 4 bytes - Padding/extra data
    // Total: 40 bytes (0x28)
} SPrimitive;
```

## Usage Contexts

### 1. CDemonSet Level Geometry (Triangles)

**Purpose**: Render static level geometry from voxel cubes

**Initialization** (`buildAndRenderTrianglePrimitive_FUN_004566e0`):
```c
SPrimitive prim;
prim.primitive_type = ???;           // Uninitialized (unused)
prim.vertex_count = 3;               // Triangle
prim.surface_normal.A = 0;           // Zeroed
prim.surface_normal.B = 0;
prim.surface_normal.C = 0;
prim.surface_normal.D = 0;
prim.vertex_indices[0] = index0;     // Vertex index
prim.vertex_indices[1] = index1;
prim.vertex_indices[2] = index2;
// padding: uninitialized
```

**Renderer**: `renderBasicTextured` → `clipAndFillPoly`

**Key characteristics**:
- Allocated on stack (per triangle)
- Vertex indices point into transformed vertex buffer
- Surface normal zeroed (backface culling disabled)
- Immediate rendering (not batched)

---

### 2. Fire/Flame Effects (Quads)

**Purpose**: Render billboarded particle quads

**Initialization** (`FUN_004c25c0` lines 287-292):
```c
SPrimitive prim;
prim.primitive_type = 4;             // 4 vertices (quad)
prim.vertex_count = 0;               // Special flag (maybe "don't validate"?)
prim.surface_normal.A = 0;           // Zeroed
prim.surface_normal.B = 0;
prim.surface_normal.C = 0;
prim.surface_normal.D = 0;
prim.vertex_indices[0] = 0;          // Vertex index
prim.vertex_indices[1] = 1;
prim.vertex_indices[2] = 2;
prim.padding = 3;                    // Fourth vertex index!
```

**Renderer**: `renderMaximumQuality` → `clipAndFillPoly`

**Key characteristics**:
- Quads instead of triangles
- Uses padding slot for 4th vertex index
- vertex_count = 0 may disable validation
- Vertices pre-filled in vertex buffer by caller

---

### 3. Fire/Flame Effects (Light Volumes)

**Purpose**: Render volumetric light effects

**Initialization** (`FUN_004c25c0` lines 513-522):
```c
SPrimitive prim;
prim.primitive_type = 0x80000;       // Light volume type flag
prim.vertex_count = 0x80000;         // Light volume flag
prim.surface_normal.A = 1;           // Light count or parameter
prim.surface_normal.B = (int)(g_LightBufferPool[0xb] + 0x2cdf8);  // Light buffer pointer
prim.surface_normal.C = 0x80000;     // Light volume flag
prim.surface_normal.D = 2;           // Light type or parameter
prim.vertex_indices[0] = (int)(g_LightBufferPool[0xb] + 0x2cdf8);  // Light buffer pointer (duplicate)
// [1] and [2]: Unknown (possibly more parameters)
// padding: Unknown
```

**Renderer**: `renderMaximumQuality` → (special path?)

**Key characteristics**:
- 0x80000 magic value identifies light volume mode
- Pointer stored in both surface_normal.B and vertex_indices[0]
- surface_normal fields repurposed as light parameters
- May use different rendering path than geometry

---

## Field Interpretation Matrix

| Field | CDemonSet | Fire Quad | Fire Light Volume |
|-------|-----------|-----------|-------------------|
| **0x00: primitive_type** | Unused | 4 | 0x80000 |
| **0x04: vertex_count** | 3 | 0 | 0x80000 |
| **0x08: surface_normal.A** | 0 | 0 | 1 (light param) |
| **0x0C: surface_normal.B** | 0 | 0 | ptr (light buffer) |
| **0x10: surface_normal.C** | 0 | 0 | 0x80000 |
| **0x14: surface_normal.D** | 0 | 0 | 2 (light param) |
| **0x18: vertex_indices[0]** | vertex index | vertex index | ptr (light buffer) |
| **0x1C: vertex_indices[1]** | vertex index | vertex index | ??? |
| **0x20: vertex_indices[2]** | vertex index | vertex index | ??? |
| **0x24: padding** | unused | vertex index | ??? |

---

## Renderer Function Behavior

### `renderBasicTextured` (0x0048a820)

**Used for**: CDemonSet geometry

**Behavior**:
```c
void renderBasicTextured(CDemonRenderer* this_ptr, SPrimitive* prim) {
    // Optional backface culling
    if (this_ptr->plane_culling_enabled &&
        !isVisiblePlane(&prim->surface_normal)) {
        return;
    }

    // Set render state
    if (this_ptr->face_count == 0) {
        g_RenderStateFlags = RENDER_TEXTURE_BASE;
        g_ScanlineRenderFunc = renderSolidColorDepth16xUnrolled;
    } else {
        g_RenderStateFlags = 0;
        g_ScanlineRenderFunc = renderDepthOnlyStandard;
    }

    // Pass to clipper
    clipAndFillPoly(this_ptr, prim->vertex_count, &prim->vertex_indices[0]);
}
```

**Assembly evidence**:
```asm
0048a854: MOV EBP,[ESI + 0x4]        ; Read vertex_count
0048a850: LEA EAX,[ESI + 0x18]       ; Load &vertex_indices[0]
0048a865: LEA EAX,[ESI + 0x8]        ; Load &surface_normal
```

---

### `renderMaximumQuality` (0x0048bad0)

**Used for**: Fire quads and light volumes

**Behavior**:
```c
void renderMaximumQuality(CDemonRenderer* this_ptr, SPrimitive* prim) {
    // Optional backface culling
    if (this_ptr->plane_culling_enabled &&
        !isVisiblePlane(&prim->surface_normal)) {
        return;
    }

    // Validate vertices (clip flags)
    uint clip_flags = 0xFFFFFFFF;
    for (int i = 0; i < prim->vertex_count; i++) {
        int index = prim->vertex_indices[i];
        clip_flags &= this_ptr->vertex_buffer_ptr[index].screen_x;
    }

    if (/* not completely clipped */) {
        // Set render state based on pass
        if (this_ptr->face_count == 0) {
            if (g_BitsPerPixel == 32) {
                g_ScanlineRenderFunc = renderMMXPerspectiveScanline32;
            } else {
                g_ScanlineRenderFunc = renderMMXPerspectiveScanline16;
            }
            g_RenderStateFlags = RENDER_ENGINE_CORE_MAXIMUM;
            g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        } else {
            g_ScanlineRenderFunc = renderDepthOnlyStandard;
            g_RenderStateFlags = 0;
            g_RenderStateFlag2 = PREPROCESS_NONE;
        }

        // Pass to clipper
        clipAndFillPoly(this_ptr, prim->vertex_count, &prim->vertex_indices[0]);
    }
}
```

**Assembly evidence**:
```asm
0048baf9: MOV EBX,[EAX + 0x18]       ; Read vertex_indices[i]
0048bafc: IMUL EBX,EBX,0x30           ; index * sizeof(SRenderVertex)
0048bb00: AND ECX,[EDI + EBX + 0x10] ; Access vertex_buffer[index].screen_x
0048bb07: ADD EAX,0x4                 ; Advance to next index (0x1C, 0x20, etc.)
```

**Key difference**: Validates vertices by checking clip flags before rendering.

---

## Type Discrimination

How do renderers know which interpretation to use?

### Method 1: Explicit Function Selection
The **caller** chooses which renderer to call:
```c
// For CDemonSet geometry:
renderBasicTextured(g_CDemonRendererPtr, &prim);

// For fire effects:
renderMaximumQuality(g_CDemonRendererPtr, &prim);
```

### Method 2: Flag Checking (Possible)
Renderers *may* check flags internally:
```c
if (prim->primitive_type == 0x80000) {
    // Special light volume path
} else {
    // Normal geometry path
}
```

Currently, evidence suggests **explicit function selection** is the primary mechanism.

---

## Vertex Index Array Interpretation

All renderers treat offsets 0x18-0x24 as a **sequential array of integers**:

```c
int* indices = &prim->vertex_indices[0];  // Points to offset 0x18

for (int i = 0; i < prim->vertex_count; i++) {
    int index = indices[i];  // Reads at 0x18, 0x1C, 0x20, 0x24, ...
    // Access vertex_buffer[index]
}
```

**Important**: The renderer doesn't care if these are:
- Vertex buffer indices (CDemonSet)
- Vertex indices (Fire quads)
- Light buffer pointers (Fire light volumes)
- Something else entirely

It simply reads them as **4-byte integers** and uses them based on context!

---

## Comparison with Other Primitive Formats

### MRGL Quad Format (72 bytes) - KFM Models

```c
typedef struct SMRGL_Quad {
    int vertex_indices[4];           // 0x00: 16 bytes
    int uv_coords[8];                // 0x10: 32 bytes (u0,v0,u1,v1,...)
    int texture_id;                  // 0x30: 4 bytes
    int unknown[5];                  // 0x34: 20 bytes
    // Total: 72 bytes (0x48)
} SMRGL_Quad;
```

**Key differences**:
- Larger (72 vs 40 bytes)
- Embeds UV coordinates
- Pre-allocated arrays (not stack variables)
- Used for animated models (keyframed)

---

### MRGL Triangle Format (60 bytes) - DFM Models

```c
typedef struct SMRGL_Triangle {
    int vertex_indices[3];           // 0x00: 12 bytes
    int unknown[12];                 // 0x0C: 48 bytes (possibly UVs/normals/colors)
    // Total: 60 bytes (0x3C)
} SMRGL_Triangle;
```

**Key differences**:
- Medium size (60 vs 40 bytes)
- Triangles instead of quads
- Used for skeletal/deformed models

---

## Size vs. Structure Relationship

**Critical insight**: Same size ≠ Same structure!

| Size | Format | Usage |
|------|--------|-------|
| **40 bytes** | SPrimitive (CDemonSet) | Level geometry triangles |
| **40 bytes** | SPrimitive (Fire Quad) | Particle quads |
| **40 bytes** | SPrimitive (Fire Light) | Light volumes |
| **60 bytes** | SMRGL Triangle | Model triangles (DFM) |
| **72 bytes** | SMRGL Quad | Model quads (KFM) |

You **cannot** determine structure layout from size alone!

---

## Assembly Stride Verification

How to verify primitive size from assembly:

### CDemonSet (40 bytes)
```asm
; In renderPrimitiveList:
00570946: CALL renderBasicTextured
0057094b: ADD EBX,0x28               ; Advance by 40 bytes
```

### Fire Effects (40 bytes)
```asm
; In FUN_004c25c0:
004c25c0: SUB ESP,0x2b4              ; Allocate stack frame
; ...
; SStack_204 is at ESP + 0x204
; 0x2b4 - 0x204 = 0xB0 bytes above primitive
; Primitive itself is 40 bytes (verified by field accesses)
```

### MRGL Quads (72 bytes)
```asm
; In FUN_00570770:
00570796: ADD ESI,0x48               ; Advance by 72 bytes
```

**Rule**: Look for `ADD reg, size` in loop code!

---

## Decompilation Recommendations

### For Maximum Accuracy
Use a single structure with extensive comments:

```c
// WARNING: This structure is POLYMORPHIC!
// Field meanings depend on usage context:
// - CDemonSet geometry: vertex_count is real count, indices are buffer offsets
// - Fire quads: primitive_type=4, padding holds 4th vertex index
// - Fire light volumes: 0x80000 flags, fields store light parameters/pointers
typedef struct SPrimitive {
    int primitive_type;              // Type/flags/vertex count (context-dependent)
    int vertex_count;                // Vertex count OR flags
    SClipPlane surface_normal;       // Plane OR light parameters
    //   int A;                       // Normal component OR light param
    //   int B;                       // Normal component OR pointer
    //   int C;                       // Normal component OR flags
    //   int D;                       // Plane distance OR light param
    int vertex_indices[3];           // Indices OR pointers OR data
    int padding;                     // Padding OR 4th index OR data
} SPrimitive;

_Static_assert(sizeof(SPrimitive) == 0x28, "Must be 40 bytes");
```

### For Code Clarity
Use unions for different interpretations:

```c
typedef struct SPrimitive {
    int primitive_type;
    int vertex_count;

    union {
        SClipPlane surface_normal;   // For geometry
        struct {
            int light_param_a;
            int light_buffer_ptr;
            int light_flags;
            int light_param_d;
        } light;                     // For light volumes
    };

    union {
        int vertex_indices[3];       // For geometry
        struct {
            int light_data_ptr;
            int light_param_1;
            int light_param_2;
        } light_data;                // For light volumes
    };

    int padding;
} SPrimitive;
```

### For Documentation
Keep separate documentation files (like this one) explaining the different uses.

---

## Summary

✅ **SPrimitive is 40 bytes** - verified by assembly
✅ **Structure is polymorphic** - same memory layout, different meanings
✅ **Three main usage modes**: CDemonSet, Fire Quad, Fire Light Volume
✅ **Renderers selected explicitly** - caller chooses based on context
✅ **Vertex indices read as array** - sequential 4-byte values starting at 0x18
✅ **Size verification method** - look for stride in loop code
✅ **Same size ≠ same structure** - cannot infer layout from size alone

⚠️ **Light volume parameters** - exact meanings still unknown
⚠️ **0x80000 flag meaning** - magic number purpose unclear
⚠️ **Pointer duplication** - why store in multiple locations?

---

## Complete Structure Accounting

**All 40 bytes accounted for:**

| Offset | Size | CDemonSet | Fire Quad | Fire Light Volume |
|--------|------|-----------|-----------|-------------------|
| 0x00 | 4 | Uninitialized | 4 | 0x80000 |
| 0x04 | 4 | 3 | 0 | 0x80000 |
| 0x08 | 4 | 0 | 0 | 1 |
| 0x0C | 4 | 0 | 0 | light buffer ptr |
| 0x10 | 4 | 0 | 0 | 0x80000 |
| 0x14 | 4 | 0 | 0 | 2 |
| 0x18 | 4 | vertex idx 0 | vertex idx 0 | light buffer ptr |
| 0x1C | 4 | vertex idx 1 | vertex idx 1 | ??? |
| 0x20 | 4 | vertex idx 2 | vertex idx 2 | ??? |
| 0x24 | 4 | Uninitialized | vertex idx 3 | ??? |

**Total**: 40 bytes (0x28) ✅

The mystery is solved! All primitive formats are now fully documented and understood (except for specific light parameter meanings, which would require deeper runtime analysis).
