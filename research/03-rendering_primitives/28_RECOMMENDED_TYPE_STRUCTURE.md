# Recommended Type Structure for Primitive Polymorphism

## Philosophy

The primitive structures in Nocturne use **C-style polymorphism** (casting through a common header), not C++ virtual functions. Each usage context knows exactly what type it's working with at compile time.

**Key principle**: Individual functions should use **specific types** for clarity. Only dispatcher/generic functions should use the common header type.

---

## Recommended Type Hierarchy

### 1. Common Header (for dispatchers only)

```c
// Common header for all primitive types
// ONLY use this in:
// - Dispatcher functions that need to route based on type
// - Generic iteration where the actual type is determined at runtime
typedef struct SPrimitiveHeader {
    int primitive_type;              // 0x00: Type/flags
    int vertex_count;                // 0x04: Vertex count or flags
    // ... rest of structure depends on actual type
} SPrimitiveHeader;
```

**Usage**: Only in functions that **must** handle multiple types generically.

---

### 2. CDemonSet Geometry Primitives (40 bytes)

```c
// Used for: Static level geometry from voxel cubes
// Stack-allocated per triangle
typedef struct SPrimitive_CDemonSet {
    int primitive_type;              // 0x00: Unused (uninitialized)
    int vertex_count;                // 0x04: Always 3 for triangles
    SClipPlane surface_normal;       // 0x08: Usually {0,0,0,0} (culling disabled)
    int vertex_indices[3];           // 0x18: Indices into transformed vertex buffer
    int padding;                     // 0x24: Unused
} SPrimitive_CDemonSet;
```

**Functions that should use this specific type**:
```c
// Instead of: void renderBasicTextured(CDemonRenderer* this_ptr, SPrimitive* polygon_info);
// Use:
void renderBasicTextured(CDemonRenderer* this_ptr, SPrimitive_CDemonSet* primitive);

// Instead of: void buildAndRenderTrianglePrimitive(..., SPrimitive* prim);
// Use:
void buildAndRenderTrianglePrimitive(CVector3f** triangle_vertices,
                                      CVector3f* vertex_buffer);
// (allocates SPrimitive_CDemonSet internally)
```

---

### 3. Fire Effect Primitives - Quad Mode (40 bytes)

```c
// Used for: Billboarded particle quads
// Stack-allocated per effect
typedef struct SPrimitive_FireQuad {
    int primitive_type;              // 0x00: 4 (quad vertex count)
    int vertex_count;                // 0x04: 0 (special flag)
    SClipPlane surface_normal;       // 0x08: Usually {0,0,0,0}
    int vertex_indices[4];           // 0x18: 4 vertex indices (uses padding slot!)
    // Total: 40 bytes
} SPrimitive_FireQuad;

// Alternative declaration showing the padding reuse:
typedef struct SPrimitive_FireQuad {
    int primitive_type;              // 0x00: 4
    int vertex_count;                // 0x04: 0
    SClipPlane surface_normal;       // 0x08: {0,0,0,0}
    union {
        struct {
            int vertex_indices[3];   // 0x18-0x20: First 3 indices
            int vertex_index_3;      // 0x24: Fourth index in padding slot
        };
        int all_indices[4];          // 0x18-0x24: All 4 indices as array
    };
} SPrimitive_FireQuad;
```

**Functions that should use this specific type**:
```c
// Fire rendering functions that build quads
void renderFireEffect(CVector3f* position, SPrimitive_FireQuad* quad);
```

---

### 4. Fire Effect Primitives - Light Volume Mode (40 bytes)

```c
// Used for: Volumetric light rendering
// Stack-allocated per light volume
typedef struct SPrimitive_LightVolume {
    int light_type_flag;             // 0x00: 0x80000 (light volume identifier)
    int light_volume_flag;           // 0x04: 0x80000 (redundant flag?)
    int light_count;                 // 0x08: Number of lights (1, 2, etc.)
    int light_buffer_ptr;            // 0x0C: Pointer to light data buffer
    int light_flags;                 // 0x10: 0x80000 (light mode flags)
    int light_type;                  // 0x14: Light type (1, 2, etc.)
    int light_data_ptr;              // 0x18: Duplicate pointer to light buffer
    int unknown_param_1;             // 0x1C: Unknown parameter
    int unknown_param_2;             // 0x20: Unknown parameter
    int unknown_param_3;             // 0x24: Unknown parameter
} SPrimitive_LightVolume;
```

**Functions that should use this specific type**:
```c
// Fire/light rendering functions that use light volumes
void renderLightVolume(CDemonRenderer* renderer, SPrimitive_LightVolume* volume);
```

---

### 5. MRGL Quad Primitives (72 bytes)

```c
// Used for: Keyframed animated model rendering (KFM format)
// Pre-allocated arrays, not stack variables
typedef struct SMRGL_Quad {
    int type;                        // 0x00: MRGL type (0x18, 0x29, 0x41, 0x42)
    int element_count;               // 0x04: Always 4 for quads
    SClipPlane surface_normal;       // 0x08: Computed from vertices

    // Vertex data: 4 × 12 bytes = 48 bytes
    struct {
        int vertex_index;            // Index into keyframe vertex buffer
        int texture_u;               // UV U (16.16 fixed-point)
        int texture_v;               // UV V (16.16 fixed-point)
    } vertices[4];                   // 0x18-0x47

    // Total: 72 bytes (0x48)
} SMRGL_Quad;
```

**Functions that should use this specific type**:
```c
// Instead of: void renderPrimitiveBatch(CDemonRenderer* this_ptr, SPrimitive* primitive_array, ...);
// Use:
void renderMRGL_QuadBatch(CDemonRenderer* renderer,
                          SMRGL_Quad* quad_array,
                          int quad_count,
                          int render_flags);
```

---

### 6. MRGL Triangle Primitives (60 bytes)

```c
// Used for: Skeletal/deformable model rendering (DFM format)
// Stack-allocated during deformation pass
typedef struct SMRGL_Triangle {
    int type;                        // 0x00: Often uninitialized
    int element_count;               // 0x04: Always 3 for triangles
    SClipPlane surface_normal;       // 0x08: Often uninitialized

    // Vertex data: 3 × 12 bytes = 36 bytes
    // NOTE: Only vertex_index is written by DFM code!
    // UVs are fetched from vertex buffer during rendering
    struct {
        int vertex_index;            // Index into deformed vertex buffer
        int texture_u;               // UNINITIALIZED (ignored)
        int texture_v;               // UNINITIALIZED (ignored)
    } vertices[3];                   // 0x18-0x3B

    // Total: 60 bytes (0x3C)
} SMRGL_Triangle;
```

**Functions that should use this specific type**:
```c
// Instead of: void renderBasicTexturedVariant(CDemonRenderer* this_ptr, SPrimitive* polygon_info);
// Use:
void renderMRGL_Triangle(CDemonRenderer* renderer,
                         SMRGL_Triangle* triangle);
```

---

## Function Signature Recommendations

### Specific Functions (use specific types)

```c
// CDemonSet geometry rendering
void buildAndRenderTrianglePrimitive(CVector3f** triangle_vertices,
                                      CVector3f* vertex_buffer);
// Internally: SPrimitive_CDemonSet prim; (stack-allocated)

void renderBasicTextured(CDemonRenderer* renderer,
                        SPrimitive_CDemonSet* primitive);

// Fire effect rendering
void renderFireQuad(CDemonRenderer* renderer,
                   SPrimitive_FireQuad* quad);

void renderLightVolume(CDemonRenderer* renderer,
                      SPrimitive_LightVolume* volume);

void renderMaximumQuality(CDemonRenderer* renderer,
                         SPrimitive_FireQuad* quad);  // Fire quads only

// MRGL model rendering
void renderMRGL_QuadBatch(CDemonRenderer* renderer,
                         SMRGL_Quad* quad_array,
                         int quad_count,
                         int render_flags);

void renderMRGL_Triangle(CDemonRenderer* renderer,
                        SMRGL_Triangle* triangle);

// Low-level clipper (agnostic to primitive type)
void clipAndFillPoly(CDemonRenderer* renderer,
                    int vertex_count,
                    int* vertex_indices);
```

---

### Generic Functions (use SPrimitiveHeader* with casting)

**Only** these functions should use generic types:

```c
// Dispatcher that routes based on primitive type
void renderPrimitiveDispatcher(CDemonRenderer* renderer,
                              SPrimitiveHeader* primitive) {
    if (primitive->primitive_type == 0x80000) {
        // Cast to specific type
        renderLightVolume(renderer, (SPrimitive_LightVolume*)primitive);
    } else if (primitive->primitive_type == 4) {
        // Cast to specific type
        renderFireQuad(renderer, (SPrimitive_FireQuad*)primitive);
    } else {
        // Cast to specific type
        renderBasicTextured(renderer, (SPrimitive_CDemonSet*)primitive);
    }
}

// Generic iteration over primitive array
void renderPrimitiveList(CDemonSet* set,
                        SPrimitiveHeader* primitive_array,
                        int primitive_count) {
    SPrimitiveHeader* current = primitive_array;

    for (int i = 0; i < primitive_count; i++) {
        // Determine type and cast appropriately
        if (current->primitive_type == 0x80000) {
            renderLightVolume(g_CDemonRendererPtr, (SPrimitive_LightVolume*)current);
        } else {
            renderBasicTextured(g_CDemonRendererPtr, (SPrimitive_CDemonSet*)current);
        }

        // Advance by stride (determined at runtime)
        current = (SPrimitiveHeader*)((byte*)current + 0x28);  // 40 bytes
    }
}

// Batch renderer that doesn't know primitive type
void renderPrimitiveBatch(CDemonRenderer* renderer,
                         SPrimitiveHeader* primitive_array,
                         int primitive_count,
                         int render_flags) {
    // Examine first primitive to determine batch type
    int stride;
    if (primitive_array->vertex_count == 4) {
        stride = 0x48;  // MRGL quads
        // Cast and render as MRGL_Quad array
        renderMRGL_QuadBatch(renderer, (SMRGL_Quad*)primitive_array,
                            primitive_count, render_flags);
    } else if (primitive_array->vertex_count == 3) {
        stride = 0x3C;  // MRGL triangles
        // Cast and render as MRGL_Triangle array
        for (int i = 0; i < primitive_count; i++) {
            SMRGL_Triangle* tri = (SMRGL_Triangle*)((byte*)primitive_array + i * stride);
            renderMRGL_Triangle(renderer, tri);
        }
    }
}
```

---

## Casting Rules

### Safe Casting (always valid)

```c
// Any specific type can cast UP to SPrimitiveHeader
SPrimitive_CDemonSet prim;
SPrimitiveHeader* header = (SPrimitiveHeader*)&prim;  // SAFE

SMRGL_Quad quad;
SPrimitiveHeader* header = (SPrimitiveHeader*)&quad;  // SAFE

// Can always cast to void* or byte*
void* generic_ptr = (void*)&prim;  // SAFE
byte* byte_ptr = (byte*)&prim;     // SAFE
```

### Unsafe Casting (requires runtime check)

```c
// Casting DOWN from SPrimitiveHeader to specific type
SPrimitiveHeader* header = getSomePrimitive();

// WRONG - no type check!
SPrimitive_CDemonSet* prim = (SPrimitive_CDemonSet*)header;

// RIGHT - check type first
if (header->primitive_type != 0x80000 && header->vertex_count == 3) {
    SPrimitive_CDemonSet* prim = (SPrimitive_CDemonSet*)header;
    renderBasicTextured(renderer, prim);
}

// WRONG - size mismatch!
SMRGL_Quad* quad = (SMRGL_Quad*)header;  // Header might be 40 bytes, not 72!

// RIGHT - verify size first
if (header->vertex_count == 4 && /* other checks */) {
    SMRGL_Quad* quad = (SMRGL_Quad*)header;
    renderMRGL_QuadBatch(renderer, quad, 1, 0);
}
```

---

## Example: Refactoring renderBasicTextured

### Before (using generic SPrimitive)

```c
void renderBasicTextured(CDemonRenderer* this_ptr, SPrimitive* polygon_info) {
    // What type is this really? Who knows!
    if (this_ptr->plane_culling_enabled == 0 ||
        isVisiblePlane(&polygon_info->surface_normal)) {

        if (this_ptr->face_count == 0) {
            g_RenderStateFlags = RENDER_TEXTURE_BASE;
            g_ScanlineRenderFunc = renderSolidColorDepth16xUnrolled;
        } else {
            g_RenderStateFlags = 0;
            g_ScanlineRenderFunc = renderDepthOnlyStandard;
        }

        clipAndFillPoly(this_ptr,
                       polygon_info->vertex_count,
                       &polygon_info->vertex_list);  // Is this an int* or int[3]?
    }
}
```

### After (using specific type)

```c
void renderBasicTextured(CDemonRenderer* this_ptr,
                        SPrimitive_CDemonSet* primitive) {
    // Now we KNOW it's a CDemonSet primitive!
    // - vertex_count is always 3
    // - vertex_indices is an int[3] array
    // - surface_normal is meaningful (or zeroed)

    if (this_ptr->plane_culling_enabled == 0 ||
        isVisiblePlane(&primitive->surface_normal)) {

        if (this_ptr->face_count == 0) {
            g_RenderStateFlags = RENDER_TEXTURE_BASE;
            g_ScanlineRenderFunc = renderSolidColorDepth16xUnrolled;
        } else {
            g_RenderStateFlags = 0;
            g_ScanlineRenderFunc = renderDepthOnlyStandard;
        }

        // Clear: passing array of 3 indices
        clipAndFillPoly(this_ptr, 3, primitive->vertex_indices);
    }
}
```

**Benefits**:
- ✅ Clear that this handles CDemonSet geometry
- ✅ vertex_count is known to be 3 (can use constant)
- ✅ vertex_indices is clearly an array
- ✅ Type safety: can't accidentally pass wrong primitive type
- ✅ Self-documenting code

---

## Example: Dispatcher Function

```c
// This is the ONLY function that should use SPrimitiveHeader*
void CDemonSet_renderPrimitiveList(CDemonSet* set,
                                   SPrimitiveHeader* primitive_array,
                                   int primitive_count) {
    if (g_CGamePtr->scripted_sequence_active != 0) {
        return;  // Skip rendering during cutscenes
    }

    // Iterate over generic array
    SPrimitiveHeader* current = primitive_array;

    for (int i = 0; i < primitive_count; i++) {
        // Dispatch based on type
        if (g_CDemonRendererPtr->advanced_culling_enabled != 0) {
            // Mirror rendering path (any primitive type)
            clipAndRenderReflectedPrimitive(set->mirror,
                                           (SPrimitive_CDemonSet*)current);
        } else {
            // Normal rendering path (CDemonSet primitives only)
            renderBasicTextured(g_CDemonRendererPtr,
                               (SPrimitive_CDemonSet*)current);
        }

        // Advance by stride (40 bytes for CDemonSet)
        current = (SPrimitiveHeader*)((byte*)current + 0x28);
    }
}
```

**Key point**: The dispatcher uses generic `SPrimitiveHeader*` for iteration, but **casts to specific type** before calling specialized functions.

---

## File Organization

### Recommended header structure

```c
// include/Nocturne/Struct/Render/SPrimitiveHeader.h
typedef struct SPrimitiveHeader {
    int primitive_type;
    int vertex_count;
} SPrimitiveHeader;

// include/Nocturne/Struct/Render/SPrimitive_CDemonSet.h
#include "SPrimitiveHeader.h"
typedef struct SPrimitive_CDemonSet {
    int primitive_type;              // Matches SPrimitiveHeader
    int vertex_count;                // Matches SPrimitiveHeader
    SClipPlane surface_normal;
    int vertex_indices[3];
    int padding;
} SPrimitive_CDemonSet;

// include/Nocturne/Struct/Render/SPrimitive_FireQuad.h
#include "SPrimitiveHeader.h"
typedef struct SPrimitive_FireQuad {
    int primitive_type;              // Matches SPrimitiveHeader
    int vertex_count;                // Matches SPrimitiveHeader
    SClipPlane surface_normal;
    int vertex_indices[4];
} SPrimitive_FireQuad;

// include/Nocturne/Struct/Render/SMRGL_Quad.h
#include "SPrimitiveHeader.h"
typedef struct SMRGL_Quad {
    int type;                        // Matches SPrimitiveHeader.primitive_type
    int element_count;               // Matches SPrimitiveHeader.vertex_count
    SClipPlane surface_normal;
    struct {
        int vertex_index;
        int texture_u;
        int texture_v;
    } vertices[4];
} SMRGL_Quad;
```

---

## Decision Tree: Which Type to Use?

```
Q: Does the function NEED to handle multiple primitive types?
├─ YES: Use SPrimitiveHeader* and cast to specific type after type check
│   Examples:
│   - renderPrimitiveList (iterates generic array)
│   - renderPrimitiveBatch (determines type at runtime)
│   - Dispatcher functions
│
└─ NO: Use the specific type the function actually expects
    Examples:
    - renderBasicTextured → SPrimitive_CDemonSet*
    - renderMaximumQuality → SPrimitive_FireQuad*
    - renderMRGL_QuadBatch → SMRGL_Quad*
    - buildAndRenderTrianglePrimitive → SPrimitive_CDemonSet (local var)

Q: Is this a low-level function that doesn't care about structure layout?
└─ YES: Use primitive data types (int*, int count)
    Example:
    - clipAndFillPoly(renderer, vertex_count, vertex_indices)
      (Takes int* array, doesn't care about surrounding structure)
```

---

## Migration Strategy

### Phase 1: Add specific types (non-breaking)
1. Create new type definitions (SPrimitive_CDemonSet, etc.)
2. Keep old SPrimitive as alias to SPrimitiveHeader
3. Code still compiles with old types

### Phase 2: Update function signatures
1. Change specific functions to use specific types
   - renderBasicTextured → SPrimitive_CDemonSet*
   - renderMRGL_QuadBatch → SMRGL_Quad*
2. Update callers to cast appropriately
   - buildAndRenderTrianglePrimitive: Cast local var
   - renderPrimitiveList: Cast during iteration

### Phase 3: Remove generic SPrimitive alias
1. Rename SPrimitive → SPrimitiveHeader (for clarity)
2. Only generic/dispatcher functions use SPrimitiveHeader*
3. All specific functions use specific types

---

## Summary

### DO:
- ✅ Use **specific types** (SPrimitive_CDemonSet*, SMRGL_Quad*, etc.) in functions that know what they're handling
- ✅ Use **SPrimitiveHeader*** only in dispatchers/iterators that must handle multiple types
- ✅ Cast to specific type **immediately** after determining type in dispatcher
- ✅ Document which functions expect which types
- ✅ Use type-specific field names (not unions) within each struct

### DON'T:
- ❌ Use generic SPrimitive* in functions that only handle one type
- ❌ Use unions within primitive structures (separate types instead)
- ❌ Cast DOWN without runtime type checking
- ❌ Assume size from vertex_count alone (40-byte fire quad vs 40-byte geometry!)

### Result:
- **Self-documenting code**: Function signature tells you what it handles
- **Type safety**: Harder to pass wrong primitive type
- **Cleaner code**: No confusing unions or generic pointers
- **Maintainable**: Each structure has clear, specific field names
- **Correct polymorphism**: C-style casting through common header, not C++ virtual functions

This matches the original game's design: **explicit type knowledge** at each call site, with polymorphism only at dispatch boundaries.
