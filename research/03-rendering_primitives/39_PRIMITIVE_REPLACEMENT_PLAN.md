# Primitive Type Replacement Plan

## Current Situation

The codebase has generic primitive structures that were defined before we understood the specific MRGL types:

### Generic Structures (To Be Replaced)

1. **SPrimitiveGeometry** (12 bytes)
   ```c
   typedef struct SPrimitiveGeometry {
       int vertex_count;        // 0x0
       CVector3i* vertex_array; // 0x4
       int primitive_type;      // 0x8
   } SPrimitiveGeometry;
   ```

2. **SPrimitiveLit** (36 bytes)
   ```c
   typedef struct SPrimitiveLit {
       char field_0[4];                // 0x0
       int type;                       // 0x4
       SClipPlane clip_plane;          // 0x8 (16 bytes)
       SPrimitiveGeometry primitive;   // 0x18 (12 bytes)
   } SPrimitiveLit;
   ```

### Specific MRGL Types (Available Now)

We now have concrete MRGL primitive types defined:

- **SMRGLHeaderBasic** (8 bytes) - type, count
- **SMRGLHeaderExtended** (12 bytes) - type, size, child_count
- **SMRGLHeaderPrimitive** (12 bytes) - type, count, texture_id
- **SSurfaceNormal** (60 bytes) - type 0x18, flat-shaded triangles
- **SSurfacePackedNormal** (variable) - type 0x19, packed normals
- **SSurfacePlane** (84 bytes) - type 0x29, plane-based surfaces
- **SMRGLPrimitiveTriangle** (24 bytes) - type 0x0D, textured triangle
- **SMRGLPrimitiveTriangleIndex** (24 bytes) - type 0x0E, indexed triangle
- **SMRGLPrimitiveQuad** (32 bytes) - type 0x11, textured quad
- **SMRGLPrimitiveQuadIndex** (32 bytes) - type 0x12, indexed quad

## Files Using Generic Primitives

### 1. Rendering Functions
**File**: `annotations/nocedit.exe/pseudocode/src/engine/drender.cpp/CDemonRenderer_renderLitObject_FUN_0048c8d0.cpp`

**Function**: `CDemonRenderer::renderLitObject(CDemonRenderer* this_ptr, SPrimitiveLit* obj, RenderScanlineFunc* scanline_renderer)`

**Usage**:
- Line 37: Checks `obj->clip_plane` for visibility culling
- Line 41: Checks `obj->type` for rendering mode
- Line 47: Passes `&(obj->primitive).vertex_count` to geometry transform

**Replacement Strategy**: This is a **runtime polymorphic interface**. The function receives different MRGL types cast to `SPrimitiveLit*`. We should:
- Keep `SPrimitiveLit` as a union or abstract base
- OR use `SMRGLHeaderExtended*` and cast based on type field

### 2. Lighting Functions
**Files**:
- `annotations/nocedit.exe/pseudocode/src/core/dlight.cpp/FUN_004758d0.cpp`
- `annotations/nocedit.exe/pseudocode/src/core/dlight.cpp/FUN_004736c0.cpp`
- `annotations/nocedit.exe/pseudocode/src/core/dlight.cpp/FUN_00471400.cpp`

**Usage**: Creates `SPrimitiveLit` objects on the stack, populates them, and passes to `renderLitObject`

**Replacement Strategy**: These functions **construct** primitives. They need to know the specific type being created.

### 3. Set Rendering
**File**: `annotations/nocedit.exe/pseudocode/src/core/set.cpp/FUN_00570770.cpp`

**Usage**: Calls `renderLitObject` with constructed primitives

**Replacement Strategy**: Similar to lighting functions

## Prototype Definitions
**File**: `annotations/nocedit.exe/pseudocode/prototypes/engine/drender.h`

Many functions already use `SMRGLHeaderPrimitive*`:
```c
void CDemonRenderer::renderBasicTextured(SMRGLHeaderPrimitive* polygon_info);
void CDemonRenderer::renderBasicTexturedVariant(SMRGLHeaderPrimitive* polygon_info);
void CDemonRenderer::renderAlternativeDepth(SMRGLHeaderPrimitive* polygon_info);
int CDemonRenderer::renderStandardTextured(SMRGLHeaderPrimitive* polygon_info);
```

But one uses `SPrimitiveLit*`:
```c
void CDemonRenderer::renderLitObject(SPrimitiveLit* obj, RenderScanlineFunc* scanline_renderer);
```

## Proposed Solution

### Option 1: Union-Based Approach
Keep `SPrimitiveLit` but define it as a union of all possible MRGL types:

```c
typedef union UMRGLPrimitive {
    SMRGLHeaderExtended header;
    SSurfaceNormal surface_normal;
    SSurfacePackedNormal surface_packed;
    SSurfacePlane surface_plane;
    SMRGLPrimitiveTriangle triangle;
    SMRGLPrimitiveTriangleIndex triangle_indexed;
    SMRGLPrimitiveQuad quad;
    SMRGLPrimitiveQuadIndex quad_indexed;
} UMRGLPrimitive;

typedef struct SPrimitiveLit {
    // Metadata added by lighting system
    char field_0[4];
    int type;
    SClipPlane clip_plane;
    // Actual MRGL primitive data follows
    UMRGLPrimitive primitive;
} SPrimitiveLit;
```

**Pros**: Maintains existing function signatures
**Cons**: Union is large, may not match actual memory layout

### Option 2: Polymorphic Pointer Approach (RECOMMENDED)
Use `SMRGLHeaderExtended*` as the base pointer type and cast based on type field:

```c
// Change function signature to:
void CDemonRenderer::renderLitObject(
    CDemonRenderer* this_ptr,
    SMRGLHeaderExtended* primitive,  // Changed from SPrimitiveLit*
    SClipPlane* clip_plane,          // Separate parameter
    RenderScanlineFunc* scanline_renderer
);

// Usage:
SSurfaceNormal* surface = ...;
renderLitObject(renderer, &surface->header, &clip_plane, scanline_func);
```

**Pros**:
- Matches actual MRGL polymorphic design
- No memory layout issues
- Clear separation of concerns

**Cons**:
- Requires updating call sites
- Need to verify `clip_plane` isn't part of MRGL structure

### Option 3: Keep Generic, Document Mapping
Keep `SPrimitiveLit` and `SPrimitiveGeometry` as generic wrappers, but document which MRGL types they represent:

```c
// SPrimitiveLit is a runtime wrapper around any MRGL primitive type
// Used by lighting and rendering systems to add metadata
typedef struct SPrimitiveLit {
    char field_0[4];              // 0x0 - flags or padding
    int type;                     // 0x4 - MRGL type code
    SClipPlane clip_plane;        // 0x8 - culling plane
    // At offset 0x18, actual MRGL structure begins:
    // - Can be SSurfaceNormal (type 0x18)
    // - Can be SMRGLPrimitiveTriangle (type 0x0D)
    // - Can be SMRGLPrimitiveQuad (type 0x11)
    // - etc.
    SPrimitiveGeometry primitive; // 0x18 - placeholder for MRGL data
} SPrimitiveLit;
```

**Pros**:
- No code changes needed
- Maintains backward compatibility

**Cons**:
- Doesn't leverage our improved type knowledge
- Still using opaque structures

## Recommendation

**Use Option 2** for the following reasons:

1. It matches how MRGL actually works (polymorphic based on type field)
2. Allows call sites to use specific types (SSurfaceNormal, etc.)
3. Renderer can dispatch based on header.type field
4. Better type safety and documentation

## Implementation Steps

1. ✅ Verify all MRGL primitive types are defined
2. ⬜ Update `renderLitObject` signature to use `SMRGLHeaderExtended*`
3. ⬜ Update lighting functions to create specific MRGL types
4. ⬜ Update call sites in set.cpp and dlight.cpp
5. ⬜ Add type-based dispatch in `renderLitObject` if needed
6. ⬜ Remove or deprecate `SPrimitiveLit` and `SPrimitiveGeometry`

## Type Dispatch Pattern

```c
void renderLitObject(CDemonRenderer* this_ptr,
                     SMRGLHeaderExtended* primitive,
                     SClipPlane* clip_plane,
                     RenderScanlineFunc* scanline_renderer) {
    // Check clip plane
    if (!isVisiblePlane(clip_plane)) return;

    // Dispatch based on MRGL type
    switch (primitive->base.type) {
        case 0x18: // SSurfaceNormal
            renderSurfaceNormal(this_ptr, (SSurfaceNormal*)primitive, scanline_renderer);
            break;
        case 0x0D: // SMRGLPrimitiveTriangle
            renderTriangle(this_ptr, (SMRGLPrimitiveTriangle*)primitive, scanline_renderer);
            break;
        case 0x11: // SMRGLPrimitiveQuad
            renderQuad(this_ptr, (SMRGLPrimitiveQuad*)primitive, scanline_renderer);
            break;
        // ... other types
    }
}
```

## Next Actions

To proceed with this task, we need to:

1. Examine the actual assembly of the lighting functions to see how they construct primitives
2. Determine if `clip_plane` is actually part of the MRGL structure or added separately
3. Create a test implementation for one function to validate the approach
4. Document the type codes and their corresponding structures
