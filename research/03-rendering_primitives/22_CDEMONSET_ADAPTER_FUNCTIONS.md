# CDemonSet Adapter Functions - Voxel to Renderer Bridge

## Overview

There are specific functions that act as **adapters** between the CDemonSet voxel geometry storage (CDemonCube) and the low-level rendering system. These functions translate the voxel-based triangle data into renderable primitives.

## Key Adapter Functions

### 1. buildAndRenderTrianglePrimitive (0x004566e0)

**Purpose**: Convert a **single CDemonCube triangle** to a 40-byte SPrimitive and render it immediately

**File**: `core/dcube.cpp/buildAndRenderTrianglePrimitive_FUN_004566e0.cpp`

**Signature**:
```c
void buildAndRenderTrianglePrimitive(CVector3f** triangle_vertex_pointers,
                                      CVector3f* vertex_buffer);
```

**What it does**:

```c
void buildAndRenderTrianglePrimitive(CVector3f** triangle_vertex_pointers,
                                      CVector3f* vertex_buffer) {
    // Allocate 40-byte primitive on stack
    SPrimitive local_30;

    // Build primitive from CDemonCube triangle data:
    local_30.vertex_count = 3;
    local_30.surface_normal.A = 0;
    local_30.surface_normal.B = 0;
    local_30.surface_normal.C = 0;
    local_30.surface_normal.D = 0;

    // Convert vertex pointers to indices
    int index0 = (triangle_vertex_pointers[0] - vertex_buffer) / 3;
    int index1 = (triangle_vertex_pointers[1] - vertex_buffer) / 3;
    int index2 = (triangle_vertex_pointers[2] - vertex_buffer) / 3;

    // Store first index as "vertex_list" pointer (actually an index)
    local_30.vertex_list = (int*)index0;

    // Pass to next layer (renderPrimitiveList)
    CDemonSet_renderPrimitiveList(g_CDemonSetPtr, &local_30, 1);
}
```

**Key conversions**:

| CDemonCube Format | → | SPrimitive Format (40 bytes) |
|-------------------|---|------------------------------|
| `CVector3f* vertices[3]` (pointers) | → | `int* vertex_list` (index cast to pointer) |
| Color stored in `vertices[3]` | → | Set via `CDemonRenderer_setRGBAColor` (external) |
| Normals computed or stored separately | → | `surface_normal` (zeroed here, unused by renderer) |

**Assembly evidence**:
```asm
004566e2: SUB ESP,0x28               ; Allocate 40 bytes for SPrimitive

// Calculate vertex index 0:
0045670d: MOV EAX,[ESI]               ; Load vertex pointer
00456711: SUB EAX,EBX                ; Subtract vertex_buffer base
00456713: DIV ECX                    ; Divide by 12 (sizeof CVector3f)
00456715: MOV [ESP + 0x18],EAX       ; Store at offset 0x18 (vertex_list)

// Calculate vertex index 1:
00456719: MOV EAX,[ESI + 0x4]
00456720: DIV ECX
00456722: MOV [ESP + 0x1c],EAX       ; Store at offset 0x1C (local var)

// Calculate vertex index 2:
00456726: MOV EAX,[ESI + 0x8]
0045672d: DIV ECX
0045672f: PUSH 0x1                   ; primitive_count = 1
00456731: LEA EAX,[ESP + 0x4]        ; Load SPrimitive address
00456739: PUSH EAX
00456741: CALL CDemonSet_renderPrimitiveList
```

**Called by**:
- `CDemonCube_rotateVertices` (0x00457650) - once per triangle in cube

**Calls**:
- `CDemonSet_renderPrimitiveList` (0x005708e0)

---

### 2. CDemonSet_renderPrimitiveList (0x005708e0)

**Purpose**: Bridge between 40-byte SPrimitive format and low-level CDemonRenderer functions

**File**: `core/set.cpp/CDemonSet_renderPrimitiveList_FUN_005708e0.cpp`

**Signature**:
```c
void CDemonSet_renderPrimitiveList(CDemonSet* this_ptr,
                                    SPrimitive* primitive_array,
                                    int primitive_count);
```

**What it does**:

```c
void CDemonSet_renderPrimitiveList(CDemonSet* this_ptr,
                                    SPrimitive* primitive_array,
                                    int primitive_count) {
    if (g_CGamePtr->scripted_sequence_active == 0) {
        if (g_CDemonRendererPtr->advanced_culling_enabled == 0) {
            // Normal rendering path
            for (int i = 0; i < primitive_count; i++) {
                renderBasicTextured(g_CDemonRendererPtr, primitive_array);
                primitive_array += 0x28;  // Advance 40 bytes
            }
        } else {
            // Mirror rendering path
            for (int i = 0; i < primitive_count; i++) {
                clipAndRenderReflectedPrimitive(this_ptr->mirror, primitive_array);
                primitive_array += 0x28;  // Advance 40 bytes
            }
        }
    }
}
```

**Key conversions**:

| SPrimitive Format (40 bytes) | → | CDemonRenderer Input |
|------------------------------|---|----------------------|
| `vertex_count` (offset 0x04) | → | Polygon vertex count |
| `surface_normal` (offset 0x08) | → | Backface culling plane |
| `vertex_list` (offset 0x18) | → | Pointer to vertex indices |

**Assembly evidence**:
```asm
// Normal rendering loop:
00570946: CALL renderBasicTextured
0057094b: ADD EBX,0x28               ; Advance by 40 bytes

// Mirror rendering loop:
00570922: ADD ESI,0x28               ; Advance by 40 bytes
```

**Called by**:
- `buildAndRenderTrianglePrimitive` (0x004566e0) - for CDemonCube geometry
- `clipAndRenderReflectedPrimitive` (0x00522560) - for mirror reflections

**Calls**:
- `renderBasicTextured` (0x0048a820) - normal rendering
- `clipAndRenderReflectedPrimitive` (0x00522560) - mirror rendering

---

### 3. CDemonRenderer_renderBasicTextured (0x0048a820)

**Purpose**: Low-level entry point for rendering a 40-byte SPrimitive

**File**: `engine/drender.cpp/CDemonRenderer_renderBasicTextured_FUN_0048a820.cpp`

**Signature**:
```c
void renderBasicTextured(CDemonRenderer* this_ptr, SPrimitive* polygon_info);
```

**What it does**:

```c
void renderBasicTextured(CDemonRenderer* this_ptr, SPrimitive* polygon_info) {
    // Optional backface culling
    if (this_ptr->plane_culling_enabled == 0 ||
        isVisiblePlane(&polygon_info->surface_normal)) {

        // Set render state based on pass
        if (this_ptr->face_count == 0) {
            g_RenderStateFlags = RENDER_TEXTURE_BASE;
            g_ScanlineRenderFunc = renderSolidColorDepth16xUnrolled;
        } else {
            g_RenderStateFlags = 0;
            g_ScanlineRenderFunc = renderDepthOnlyStandard;
        }

        // Pass to polygon clipper/rasterizer
        clipAndFillPoly(this_ptr,
                        polygon_info->vertex_count,
                        &polygon_info->vertex_list);
    }
}
```

**Key conversions**:

| SPrimitive Fields | → | Clipper/Rasterizer Input |
|-------------------|---|--------------------------|
| `vertex_count` | → | Number of polygon vertices |
| `vertex_list` | → | Pointer to vertex indices (into transformed buffer) |
| `surface_normal` | → | Used for backface culling only |

**Fields actually READ**:
```asm
0048a854: MOV EBP,[ESI + 0x4]        ; Read vertex_count (offset 0x04)
0048a850: LEA EAX,[ESI + 0x18]       ; Load vertex_list pointer (offset 0x18)
0048a865: LEA EAX,[ESI + 0x8]        ; Load surface_normal (offset 0x08)
```

**Fields NOT read**:
- `primitive_type` (0x00) - Never accessed
- Unknown bytes (0x1C-0x27) - Never accessed

**Called by**:
- `CDemonSet_renderPrimitiveList` (0x005708e0)

**Calls**:
- `isVisiblePlane` (0x00403950) - backface culling
- `clipAndFillPoly` (0x0048a740) - clipping and rasterization

---

## Comparison: CDemonSet vs. KFM Rendering Paths

### CDemonSet Path (40-byte primitives, single triangle)

```
CDemonCube triangle data
    ↓
buildAndRenderTrianglePrimitive [ADAPTER 1: Cube → 40-byte primitive]
    ↓
CDemonSet_renderPrimitiveList [ADAPTER 2: 40-byte → CDemonRenderer]
    ↓
renderBasicTextured [Low-level renderer entry]
    ↓
clipAndFillPoly
    ↓
Scanline renderers
```

### KFM Path (72-byte primitives, batched)

```
KFM model MRGL array
    ↓
FUN_00570770 [ADAPTER: MRGL → CDemonRenderer]
    ↓
renderPrimitiveBatch [Batched renderer entry]
    ↓
(internal batching)
    ↓
clipAndFillPoly
    ↓
Scanline renderers
```

### Key Differences

| Aspect | CDemonSet Path | KFM Path |
|--------|---------------|----------|
| **Input format** | CDemonCube triangles | MRGL quad array |
| **Adapter function** | buildAndRenderTrianglePrimitive | FUN_00570770 |
| **Primitive size** | 40 bytes (28 used) | 72 bytes (fully used) |
| **Batching** | None (immediate per-triangle) | Yes (batch array) |
| **Allocation** | Stack (per triangle) | Heap (pre-built) |
| **Stride** | 0x28 (40 bytes) | 0x48 (72 bytes) |
| **Renderer entry** | renderBasicTextured | renderPrimitiveBatch |

---

## Data Flow: CDemonCube → SPrimitive

### Input: CDemonCube Triangle

```c
typedef struct CDemonCubeTriangle {
    CVector3f* vertices[4];  // 3 vertex pointers + 1 color vector
} CDemonCubeTriangle;

// vertices[0] → First vertex pointer
// vertices[1] → Second vertex pointer
// vertices[2] → Third vertex pointer
// vertices[3] → Color/normal data (x=r, y=g, z=b)
```

### Transformation Steps

**Step 1**: Extract vertex pointers
```c
CVector3f* v0 = triangle->vertices[0];
CVector3f* v1 = triangle->vertices[1];
CVector3f* v2 = triangle->vertices[2];
```

**Step 2**: Convert pointers to indices
```c
int index0 = (v0 - vertex_buffer) / sizeof(CVector3f);  // Divide by 0xC (12)
int index1 = (v1 - vertex_buffer) / sizeof(CVector3f);
int index2 = (v2 - vertex_buffer) / sizeof(CVector3f);
```

**Step 3**: Build SPrimitive (40 bytes, 28 initialized)
```c
SPrimitive prim;
prim.primitive_type = ???;           // 0x00: Uninitialized
prim.vertex_count = 3;               // 0x04: Triangle
prim.surface_normal = {0,0,0,0};     // 0x08: Zeroed (not used)
prim.vertex_list = (int*)index0;     // 0x18: First index (cast to pointer)
// 0x1C-0x27: Uninitialized padding
```

**Step 4**: Pass to renderer
```c
CDemonSet_renderPrimitiveList(g_CDemonSetPtr, &prim, 1);
```

### Output: CDemonRenderer Input

The renderer receives:
- `vertex_count = 3`
- `vertex_list` pointing to transformed vertex buffer
- `surface_normal` for optional backface culling

The renderer fetches actual vertex data from:
```c
SRenderVertex* transformed = g_CDemonRendererPtr->vertex_buffer_ptr;
SRenderVertex* v0 = &transformed[prim.vertex_list];
SRenderVertex* v1 = &transformed[prim.vertex_list + 1];  // WRONG - see below
```

Actually, looking at the code, `vertex_list` is treated as a **single pointer**, not an array! The other indices are stored in `local_14` and `local_10` as **separate stack variables** that are NOT part of the structure.

This means the 40-byte primitive only contains **ONE vertex index** at offset 0x18, and the renderer must be accessing the other vertices differently!

Let me check `clipAndFillPoly` to see how it reads the vertices...

Actually, looking at the assembly at line 72 in buildAndRenderTrianglePrimitive:
```asm
00456722: MOV dword ptr [ESP + 0x1c],EAX       ; Write at offset 0x1C
```

This is writing **inside the stack frame** but at an offset that would be **inside the SPrimitive structure**!

So the structure might actually be:
```c
typedef struct SPrimitive_CDemonSet_Actual {
    int primitive_type;              // 0x00: Uninitialized
    int vertex_count;                // 0x04: 3
    SClipPlane surface_normal;       // 0x08: {0,0,0,0}
    int vertex_indices[3];           // 0x18, 0x1C, 0x20: THREE indices
    int padding[1];                  // 0x24: Padding
    // Total: 40 bytes
} SPrimitive_CDemonSet_Actual;
```

But then why does Ghidra show `local_14` and `local_10` as separate variables? Let me trace more carefully...

Looking at line 80:
```asm
00456735: LEA EAX,[ESP + 0x4]
```

The structure starts at `ESP + 0x4`. So:
- `ESP + 0x18` is at structure offset `0x14` (not 0x18!)
- `ESP + 0x1C` is at structure offset `0x18`
- `ESP + 0x24` is at structure offset `0x20`

Wait no, let me recalculate:
- Stack base: `ESP` (after SUB ESP, 0x28)
- Structure base: `ESP + 0x4` (passed to function)
- Write at `ESP + 0x18`: offset `0x18 - 0x4 = 0x14` in structure
- Write at `ESP + 0x1C`: offset `0x1C - 0x4 = 0x18` in structure
- Write at `ESP + 0x24`: offset `0x24 - 0x4 = 0x20` in structure

So the writes ARE at structure offsets 0x14, 0x18, and 0x20!

But offset 0x14 is inside `surface_normal.D` (which ends at 0x17)!

This is confusing. Let me look at what clipAndFillPoly actually expects...

---

## Analysis: Vertex Index Storage Mystery

There's a discrepancy in how vertex indices are stored vs. how the pseudocode shows it. Further investigation needed to determine:

1. Are all 3 indices stored in the 40-byte structure?
2. Or is only 1 index stored, with others passed separately?
3. How does `clipAndFillPoly` read the vertex data?

This will require examining `clipAndFillPoly` (0x0048a740) to understand its expected input format.

---

## Summary: Adapter Function Hierarchy

```
Level: Voxel Storage
    CDemonCube (voxel containing triangles)
        ↓
    [ADAPTER LAYER]
        ↓
    buildAndRenderTrianglePrimitive
        Convert: CDemonCube triangle → 40-byte SPrimitive
        ↓
    CDemonSet_renderPrimitiveList
        Bridge: SPrimitive array → CDemonRenderer calls
        ↓
Level: Low-Level Renderer
    renderBasicTextured
        Extract: vertex_count, vertex_list, surface_normal
        ↓
    clipAndFillPoly
        Clip and rasterize polygon
        ↓
    Scanline renderers
        Write pixels
```

The key adapter functions are:
1. **buildAndRenderTrianglePrimitive** - Converts voxel triangle to primitive
2. **CDemonSet_renderPrimitiveList** - Routes primitives to appropriate renderer
3. **renderBasicTextured** - Receives primitive and calls clipper

These three functions form the **bridge** between the CDemonSet spatial storage format and the low-level rendering pipeline.
