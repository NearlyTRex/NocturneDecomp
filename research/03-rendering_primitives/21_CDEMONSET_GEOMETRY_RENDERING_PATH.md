# CDemonSet Geometry Rendering Path - Complete Flow

## Overview

CDemonSet level geometry is stored in a **spatial acceleration structure** (CDemonRaytrace) made up of **CDemonCube** voxels. Each cube contains triangle data that is dynamically rendered using 40-byte stack-allocated primitives.

## Complete Rendering Flow

### High-Level Flow

```
CDemonSet_renderSceneGeometry
    ↓
CDemonRaytrace_renderFrustumCubes
    ↓
CDemonRaytrace_renderPVSCubes (renders visible cubes)
    ↓
CDemonCube_rotateVertices (per visible cube)
    ↓
buildAndRenderTrianglePrimitive (per triangle in cube)
    ↓
CDemonSet_renderPrimitiveList (40-byte primitive)
    ↓
renderBasicTextured
    ↓
clipAndFillPoly
    ↓
Scanline renderers
```

## Detailed Analysis

### 1. CDemonSet_renderSceneGeometry (0x0056a190)

**Purpose**: Main scene rendering entry point

**File**: `core/set.cpp/CDemonSet_renderSceneGeometry_FUN_0056a190.c`

**What it does**:
1. Sets up lighting (light direction, intensity)
2. Calls `CDemonRaytrace_renderFrustumCubes` to render level geometry
3. Renders environment models (sky, water, terrain)
4. Handles mirror rendering

**Key calls**:
```c
// Line 88-89: Render main geometry
core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
    (&g_CDemonRaytraceInstance, frustum_param, render_mode);

// Line 102: Render environment models
core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850(&g_CKeyFramedModelInstance);

// Line 111: Render water
core_water_cpp_FUN_005ea320();

// Line 127-128: Mirror reflection pass
core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
    (&g_CDemonRaytraceInstance, frustum_param, 0);
```

**Called by**:
- `CDemonSet_initScene` (0x0056aa10)
- `CDemonSet_setCameraView` (0x0056ae50)
- Mission/editor functions

---

### 2. CDemonRaytrace_renderFrustumCubes (0x00497e50)

**Purpose**: Determines which cubes are visible based on frustum culling and PVS (Potentially Visible Set)

**File**: `core/dtrace.cpp/CDemonRaytrace_renderFrustumCubes_FUN_00497e50.cpp`

**What it does**:
1. Performs frustum culling to find visible cubes
2. Builds list of visible cubes (`g_PVSCubePointers`, `g_PVSCubePositions`)
3. Calls `CDemonRaytrace_renderPVSCubes` to render the visible cubes

**Spatial Acceleration**:
- Uses voxel grid structure
- Each cube contains a subset of level triangles
- Only visible cubes are processed

**Called by**:
- `CDemonSet_renderSceneGeometry` (multiple times for mirrors)

---

### 3. CDemonRaytrace_renderPVSCubes (0x004990f0)

**Purpose**: Iterate over all visible cubes and render their geometry

**File**: `core/dtrace.cpp/CDemonRaytrace_renderPVSCubes_FUN_004990f0.cpp`

**What it does**:
```c
for (int i = 0; i < g_PVSDrawnCubeCount; i++) {
    CDemonCube* cube = g_PVSCubePointers[i];
    CVector3f* world_pos = &g_PVSCubePositions[i];

    // Set camera-relative position
    CDemonRenderer_processCameraRelativeVertex(g_CDemonRendererPtr, world_pos);

    // Render this cube's triangles
    CDemonCube_rotateVertices(cube, 0);

    // Sync point (frame rate management)
    sync();
}
```

**Assembly evidence**:
```asm
00499125: PUSH EBX                    ; Push cube world position
00499126: MOV EBP,[0x006703e8]        ; g_CDemonRendererPtr
0049912d: CALL processCameraRelativeVertex
00499137: MOV EAX,[EDI + 0x2ca03ac]   ; Load cube pointer
0049913d: PUSH EAX
0049913e: CALL CDemonCube_rotateVertices
```

**Key observation**: This is where we transition from **spatial structure** (cubes) to **geometry rendering** (triangles).

---

### 4. CDemonCube_rotateVertices (0x00457650)

**Purpose**: Transform cube vertices to screen space and render all triangles in the cube

**File**: `core/dcube.cpp/CDemonCube_rotateVertices_FUN_00457650.cpp`

**What it does**:

**Phase 1: Vertex Transformation (lines 74-87)**
```c
SRenderVertex* output = g_CDemonRendererPtr->vertex_buffer_ptr;
for (int i = 0; i < this_ptr->vertex_count; i++) {
    CVector3i screen_pos;
    screen_pos.x = (int)ROUND(vertex_buffer[i].x * g_CubeWorldToScreenScale);
    screen_pos.y = (int)ROUND(vertex_buffer[i].y * g_CubeWorldToScreenScale);
    screen_pos.z = (int)ROUND(vertex_buffer[i].z * g_CubeWorldToScreenScale);

    // Transform and project to screen coordinates
    transformAndProjectPoint(&output->projected_vertex, &screen_pos);

    output++;
}
```

**Phase 2: Triangle Rendering (lines 100-132)**
```c
for (int i = 0; i < this_ptr->triangle_count; i++) {
    CDemonCubeTriangle* tri = &this_ptr->triangle_buffer[i];

    // Extract triangle color
    float r = tri->vertices[3].x * g_CubeColorScaleFactor;
    float g = tri->vertices[3].y * g_CubeColorScaleFactor;
    float b = tri->vertices[3].z * g_CubeColorScaleFactor;

    CDemonRenderer_setRGBAColor(g_CDemonRendererPtr, r, g, b);

    // Build and render triangle primitive
    buildAndRenderTrianglePrimitive(tri->vertices, this_ptr->vertex_buffer);
}
```

**Key structures**:

```c
typedef struct CDemonCube {
    // ... other fields ...
    int vertex_count;                    // 0x20: Number of vertices
    CVector3f* vertex_buffer;            // 0x24: Vertex positions
    int triangle_count;                  // 0x28: Number of triangles
    CDemonCubeTriangle* triangle_buffer; // 0x2C: Triangle data
} CDemonCube;

typedef struct CDemonCubeTriangle {
    CVector3f* vertices[4];  // 3 vertex pointers + 1 color/normal vector
} CDemonCubeTriangle;
```

**Assembly evidence**:
```asm
00457656: SUB ESP,0x38               ; Allocate stack frame
004576a0: MOV EAX,[EBP + 0x14]       ; Load CDemonCube* this_ptr
004576b7: MOV EDX,[EAX + 0x20]       ; Load vertex_count
004576ae: MOV ESI,[ESI + 0x24]       ; Load vertex_buffer pointer

// Triangle rendering loop:
00457127: CALL buildAndRenderTrianglePrimitive
```

---

### 5. buildAndRenderTrianglePrimitive (0x004566e0)

**Purpose**: Build a 40-byte SPrimitive structure on the stack and immediately render it

**File**: `core/dcube.cpp/buildAndRenderTrianglePrimitive_FUN_004566e0.cpp`

**What it does**:
```c
void buildAndRenderTrianglePrimitive(CVector3f** triangle_vertex_pointers,
                                      CVector3f* vertex_buffer) {
    // Allocate 40-byte primitive on stack
    SPrimitive local_30;

    // Initialize only the used fields (28 bytes)
    local_30.vertex_count = 3;
    local_30.surface_normal.A = 0;
    local_30.surface_normal.B = 0;
    local_30.surface_normal.C = 0;
    local_30.surface_normal.D = 0;

    // Calculate vertex indices (cast pointer to index)
    int index0 = (triangle_vertex_pointers[0] - vertex_buffer) / 3;
    int index1 = (triangle_vertex_pointers[1] - vertex_buffer) / 3;
    int index2 = (triangle_vertex_pointers[2] - vertex_buffer) / 3;

    local_30.vertex_list = (int*)index0;  // Store as "pointer" (actually index)

    // Note: local_14 and local_10 store the other indices as separate variables
    // These are NOT part of the SPrimitive structure!

    // Render the primitive (40-byte structure)
    CDemonSet_renderPrimitiveList(g_CDemonSetPtr, &local_30, 1);
}
```

**Assembly evidence**:
```asm
004566e2: SUB ESP,0x28               ; Allocate 40 bytes (0x28) for primitive
004566ed: MOV EDX,0x3                ; vertex_count = 3
004566f4: MOV [ESP + 0x4],EDX        ; Write vertex_count at offset 0x04

// Zero out surface_normal:
004566f2: XOR ECX,ECX
004566f8: MOV [ESP + 0x14],ECX       ; surface_normal.D = 0
004566fc: MOV [ESP + 0x10],ECX       ; surface_normal.C = 0
00456700: MOV [ESP + 0xc],ECX        ; surface_normal.B = 0
00456704: MOV [ESP + 0x8],ECX        ; surface_normal.A = 0

// Calculate first vertex index:
0045670d: MOV EAX,[ESI]               ; Load vertex pointer
0045670f: XOR EDX,EDX
00456711: SUB EAX,EBX                ; Subtract vertex_buffer base
00456713: DIV ECX                    ; Divide by 12 (sizeof CVector3f)
00456715: MOV [ESP + 0x18],EAX       ; Store index at offset 0x18 (vertex_list)

// Calculate second vertex index:
00456719: MOV EAX,[ESI + 0x4]
00456720: DIV ECX
00456722: MOV [ESP + 0x1c],EAX       ; Store at offset 0x1C (local_14)

// Calculate third vertex index:
00456726: MOV EAX,[ESI + 0x8]
0045672d: DIV ECX
0045672f: PUSH 0x1                   ; primitive_count = 1
00456731: LEA EAX,[ESP + 0x4]        ; Load primitive address (ESP + 0x4)
00456739: PUSH EAX                   ; Push primitive pointer
0045673a: MOV EDX,[0x006810c8]       ; g_CDemonSetPtr
00456740: PUSH EDX
00456741: CALL renderPrimitiveList
```

**Critical insight**:
- The structure is **40 bytes** (verified by `SUB ESP,0x28`)
- Only **28 bytes are initialized** (vertex_count, surface_normal, vertex_list)
- The primitive is passed at `ESP + 0x4`, so the struct starts at offset +0x4
- **primitive_type is NOT initialized** (offset 0x00)
- **12 padding bytes are NOT initialized** (offsets 0x1C-0x27)

---

### 6. CDemonSet_renderPrimitiveList (0x005708e0)

**Purpose**: Iterate over an array of primitives and render each one

**File**: `core/set.cpp/CDemonSet_renderPrimitiveList_FUN_005708e0.cpp`

**What it does**:
```c
void CDemonSet_renderPrimitiveList(CDemonSet* this_ptr,
                                    SPrimitive* primitive_array,
                                    int primitive_count) {
    if (g_CDemonRendererPtr->advanced_culling_enabled == 0) {
        // Normal rendering path
        for (int i = 0; i < primitive_count; i++) {
            renderBasicTextured(g_CDemonRendererPtr, primitive_array);
            primitive_array = (SPrimitive*)((char*)primitive_array + 0x28);  // +40 bytes
        }
    } else {
        // Mirror rendering path
        for (int i = 0; i < primitive_count; i++) {
            clipAndRenderReflectedPrimitive(this_ptr->mirror, primitive_array);
            primitive_array = (SPrimitive*)((char*)primitive_array + 0x28);  // +40 bytes
        }
    }
}
```

**Assembly evidence**:
```asm
// Normal rendering loop:
00570946: CALL renderBasicTextured
0057094b: ADD EBX,0x28               ; Advance by 40 bytes

// Mirror rendering loop:
00570922: ADD ESI,0x28               ; Advance by 40 bytes
```

**Key observation**: This is where we see the **40-byte stride** in action for array iteration.

---

### 7. renderBasicTextured (0x0048a820)

**Purpose**: Render a single primitive with basic textured rendering

**File**: `engine/drender.cpp/CDemonRenderer_renderBasicTextured_FUN_0048a820.cpp`

**What it does**:
```c
void renderBasicTextured(CDemonRenderer* this_ptr, SPrimitive* polygon_info) {
    // Check if plane is visible (backface culling)
    if (this_ptr->plane_culling_enabled == 0 ||
        isVisiblePlane(&polygon_info->surface_normal)) {

        // Set render state
        if (this_ptr->face_count == 0) {
            g_RenderStateFlags = RENDER_TEXTURE_BASE;
            g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
            g_ScanlineRenderFunc = renderSolidColorDepth16xUnrolled;
        } else {
            g_RenderStateFlags = 0;
            g_RenderStateFlag2 = PREPROCESS_NONE;
            g_ScanlineRenderFunc = renderDepthOnlyStandard;
        }

        // Clip and rasterize
        clipAndFillPoly(this_ptr,
                        polygon_info->vertex_count,
                        &polygon_info->vertex_list);
    }
}
```

**Assembly evidence**:
```asm
0048a854: MOV EBP,[ESI + 0x4]        ; Read vertex_count (offset 0x04)
0048a850: LEA EAX,[ESI + 0x18]       ; Load vertex_list address (offset 0x18)
0048a865: LEA EAX,[ESI + 0x8]        ; Load surface_normal address (offset 0x08)

// No reads from offsets 0x00 (primitive_type) or 0x1C-0x27 (padding)!
```

**Fields actually used**:
- `vertex_count` (0x04) ✓
- `surface_normal` (0x08-0x17) ✓
- `vertex_list` (0x18) ✓

**Fields NOT used**:
- `primitive_type` (0x00) ✗
- Unknown/padding (0x1C-0x27) ✗

---

### 8. clipAndFillPoly → Scanline Renderers

**Purpose**: Low-level polygon clipping and rasterization

**Flow**:
```
clipAndFillPoly
    ↓
(Clip to screen bounds, split if needed)
    ↓
g_ScanlineRenderFunc
    ↓
renderSolidColorDepth16xUnrolled (first pass)
renderDepthOnlyStandard (subsequent passes)
    ↓
Write to framebuffer and Z-buffer
```

---

## Key Data Structures

### CDemonRaytrace (Spatial Acceleration Structure)

```c
typedef struct CDemonRaytrace {
    int grid_x;                      // Voxel grid dimensions
    int grid_y;
    int grid_z;
    CDemonCube* cube_list;           // Array of cubes
    // ... PVS data, bounding boxes, etc ...
} CDemonRaytrace;
```

**Purpose**: Divides the level into a spatial grid for fast visibility culling

### CDemonCube (Voxel Geometry Container)

```c
typedef struct CDemonCube {
    int vertex_count;                // Number of vertices in this cube
    CVector3f* vertex_buffer;        // Vertex positions
    int triangle_count;              // Number of triangles in this cube
    CDemonCubeTriangle* triangle_buffer;  // Triangle indices + colors
    // Total: ~0x34 bytes + dynamically allocated buffers
} CDemonCube;
```

**Purpose**: Contains a subset of level triangles that fall within a voxel

### SPrimitive_CDemonSet (Rendering Primitive)

```c
typedef struct SPrimitive_CDemonSet {
    int primitive_type;              // 0x00: Type/flags (uninitialized)
    int vertex_count;                // 0x04: Number of vertices (3)
    SClipPlane surface_normal;       // 0x08: Surface normal (zeroed)
    int* vertex_list;                // 0x18: Vertex index (cast to pointer)
    char padding[12];                // 0x1C: Unused padding
    // Total: 40 bytes (0x28)
} SPrimitive_CDemonSet;
```

**Purpose**: Temporary structure for passing triangle data to renderer

---

## Performance Characteristics

### Spatial Culling

**CDemonRaytrace voxel grid**:
- Level divided into 3D grid of cubes
- Only cubes in view frustum are processed
- PVS (Potentially Visible Set) further reduces cubes

**Benefit**: O(visible_cubes) instead of O(all_triangles)

### Stack Allocation

**buildAndRenderTrianglePrimitive**:
- Primitives built on stack (40 bytes each)
- No heap allocation overhead
- Immediate rendering (no batching)

**Tradeoff**:
- Fast allocation
- No cache locality between primitives
- Per-triangle function call overhead

### Vertex Transformation

**CDemonCube_rotateVertices**:
- All cube vertices transformed once
- Stored in `g_CDemonRendererPtr->vertex_buffer_ptr`
- Triangles reference transformed vertices by index

**Benefit**: Each vertex transformed once, even if shared by multiple triangles

---

## Comparison with Other Geometry Types

| Geometry Type | Storage | Rendering Path | Primitive Format |
|---------------|---------|----------------|------------------|
| **CDemonSet (Level)** | CDemonCube voxels | Stack-allocated primitives | 40-byte pointer-based |
| **KFM Models** | Keyframe arrays | Pre-built MRGL arrays | 72-byte embedded data |
| **DFM Models** | Skeletal meshes | Stack-built per frame | 60-byte degenerate MRGL |
| **Water** | Tile grid | Stack-built per frame | Custom primitive |
| **Fire** | Particle system | Stack-built per particle | Custom primitive |

**CDemonSet is unique** in using a spatial acceleration structure (voxel grid) rather than storing primitives directly.

---

## Summary: Why CDemonSet Uses This Architecture

### Level Geometry Requirements

1. **Static but large**: Levels contain thousands of triangles
2. **Spatially coherent**: Triangles cluster in 3D space
3. **View-dependent**: Only small fraction visible at once

### Architectural Decisions

1. **Voxel grid (CDemonRaytrace)**: Spatial acceleration for fast visibility culling
2. **Per-cube storage (CDemonCube)**: Group nearby triangles for locality
3. **Stack primitives**: Minimal overhead, immediate rendering
4. **40-byte format**: Pointer-based (not embedded) to share vertex buffers

### Result

- **Fast visibility culling**: Only process visible cubes
- **Minimal memory**: No pre-built primitive arrays
- **Simple rendering**: Stack allocation + immediate render
- **Shared vertices**: Multiple triangles reference same transformed vertices

---

## Complete Call Chain Summary

```
Game Loop
    ↓
CDemonSet_renderSceneGeometry          [High-level scene rendering]
    ↓
CDemonRaytrace_renderFrustumCubes      [Spatial culling: which cubes are visible?]
    ↓
CDemonRaytrace_renderPVSCubes          [Iterate visible cubes]
    ↓
CDemonCube_rotateVertices              [Transform cube vertices, render triangles]
    ↓
buildAndRenderTrianglePrimitive        [Build 40-byte primitive on stack]
    ↓
CDemonSet_renderPrimitiveList          [40-byte stride iteration]
    ↓
renderBasicTextured                    [Read 28 bytes: vertex_count, normal, vertex_list]
    ↓
clipAndFillPoly                        [Clip to screen bounds]
    ↓
Scanline Renderers                     [Write pixels to framebuffer]
```

**Total overhead per triangle**:
- 6 function calls
- 40-byte stack allocation (uninitialized padding)
- Vertex index calculation
- No heap allocation
- No batching

**Key insight**: The 40-byte primitive format is **optimized for immediate rendering**, not for storage or batching. The extra 12 bytes are likely unused padding to maintain structure alignment or reserve space for future features.
