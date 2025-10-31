#pragma once

// Non-MRGL Primitive Structure Definitions
// Based on analyses in documents 25-28
//
// These are NOT MRGL blocks - they are rendering primitives used by
// the CDemonRenderer for various effect types.
//
// All are 40 bytes but have DIFFERENT layouts depending on usage.

// =============================================================================
// CDEMONSET GEOMETRY PRIMITIVE (40 bytes)
// =============================================================================

// Simple triangle primitive for CDemonSet level geometry
// Used by: Static voxel cube rendering
//
// Stack-allocated per triangle during rendering.
typedef struct SPrimitive_Geometry {
    int primitive_type;              // 0x00: Type/flags (often uninitialized)
    int vertex_count;                // 0x04: Number of vertices (always 3 for triangles)
    SClipPlane surface_normal;       // 0x08: Surface normal plane (16 bytes)
                                     //   Often zeroed: {0,0,0,0} (backface culling disabled)
    int vertex_indices[3];           // 0x18: Indices into transformed vertex buffer (12 bytes)
    int padding;                     // 0x24: Unused padding (4 bytes)
                                     // Total: 40 bytes (0x28)
} SPrimitive_Geometry;

_Static_assert(sizeof(SPrimitive_Geometry) == 0x28, "Must be 40 bytes");

// Legacy alias
typedef SPrimitive_Geometry SPrimitive_CDemonSet;

// =============================================================================
// FIRE EFFECT QUAD PRIMITIVE (40 bytes)
// =============================================================================

// Billboarded particle quad primitive for fire/flame effects
// Used by: Fire effect rendering system
//
// Stack-allocated per particle quad during rendering.
//
// IMPORTANT: This uses the padding slot at 0x24 for the 4th vertex index!
typedef struct SPrimitive_FireQuad {
    int primitive_type;              // 0x00: 4 (indicates quad with 4 vertices)
    int vertex_count;                // 0x04: 0 (special flag, possibly "skip validation")
    SClipPlane surface_normal;       // 0x08: Usually {0,0,0,0} (16 bytes)
    int vertex_indices[4];           // 0x18: 4 vertex indices (16 bytes)
                                     //   [0] at 0x18
                                     //   [1] at 0x1C
                                     //   [2] at 0x20
                                     //   [3] at 0x24 (uses padding slot!)
                                     // Total: 40 bytes (0x28)
} SPrimitive_FireQuad;

_Static_assert(sizeof(SPrimitive_FireQuad) == 0x28, "Must be 40 bytes");

// =============================================================================
// LIGHT VOLUME PRIMITIVE (40 bytes)
// =============================================================================

// Volumetric light effect primitive
// Used by: Fire/flame light volume rendering
//
// Stack-allocated per light volume during rendering.
//
// IMPORTANT: This has a COMPLETELY DIFFERENT layout than the geometry primitives!
// The fields at 0x08-0x17 are NOT a SClipPlane - they are individual light parameters.
typedef struct SPrimitive_LightVolume {
    int light_type_flag;             // 0x00: 0x80000 (light volume type identifier)
    int light_volume_flag;           // 0x04: 0x80000 (redundant flag?)
    int light_count;                 // 0x08: Number of lights (1, 2, etc.)
    int light_buffer_ptr;            // 0x0C: Pointer to light data buffer
    int light_flags;                 // 0x10: 0x80000 (light mode flags)
    int light_type;                  // 0x14: Light type parameter (1, 2, etc.)
    int light_data_ptr;              // 0x18: Pointer to light buffer (duplicate?)
    int unknown_param_1;             // 0x1C: Unknown parameter
    int unknown_param_2;             // 0x20: Unknown parameter
    int unknown_param_3;             // 0x24: Unknown parameter
                                     // Total: 40 bytes (0x28)
} SPrimitive_LightVolume;

_Static_assert(sizeof(SPrimitive_LightVolume) == 0x28, "Must be 40 bytes");

// =============================================================================
// GENERIC 40-BYTE PRIMITIVE HEADER
// =============================================================================

// Minimal 8-byte header common to all 40-byte primitives
// Use this ONLY when you need to peek at type/count fields before
// casting to the specific type.
typedef struct SPrimitiveHeader {
    int type;                        // 0x00: Type/flags discriminator
    int count;                       // 0x04: Vertex/element count or flags
} SPrimitiveHeader;

_Static_assert(sizeof(SPrimitiveHeader) == 8, "Must be 8 bytes");

// =============================================================================
// USAGE GUIDE
// =============================================================================

/*

## Important: These are THREE DIFFERENT STRUCTS!

Even though all three are 40 bytes, they have DIFFERENT layouts:

### SPrimitive_Geometry (40 bytes)
Layout:
  0x00: int primitive_type
  0x04: int vertex_count (3)
  0x08: SClipPlane surface_normal (4 ints: A, B, C, D)
  0x18: int vertex_indices[3]
  0x24: int padding

Used by: CDemonSet level geometry rendering

### SPrimitive_FireQuad (40 bytes)
Layout:
  0x00: int primitive_type (4)
  0x04: int vertex_count (0)
  0x08: SClipPlane surface_normal (4 ints, usually zero)
  0x18: int vertex_indices[4] <-- NOTE: 4 indices, uses padding slot!

Used by: Fire effect quad rendering

### SPrimitive_LightVolume (40 bytes)
Layout:
  0x00: int light_type_flag (0x80000)
  0x04: int light_volume_flag (0x80000)
  0x08: int light_count        <-- NOT a SClipPlane!
  0x0C: int light_buffer_ptr   <-- Individual int fields
  0x10: int light_flags
  0x14: int light_type
  0x18: int light_data_ptr
  0x1C: int unknown_param_1
  0x20: int unknown_param_2
  0x24: int unknown_param_3

Used by: Fire effect light volume rendering

## When to use which struct:

### SPrimitive_Geometry
Use for:
- CDemonSet voxel cube triangle rendering
- Static level geometry
- Functions that handle basic textured triangles

Renderer:
- `renderBasicTextured()` → `clipAndFillPoly()`

### SPrimitive_FireQuad
Use for:
- Billboarded particle quads
- Fire/flame effect rendering (quad mode)
- When you need 4 vertex indices instead of 3

Renderer:
- `renderMaximumQuality()` → `clipAndFillPoly()`

### SPrimitive_LightVolume
Use for:
- Volumetric light effects
- Fire/flame effect rendering (light volume mode)
- When primitive_type == 0x80000

Renderer:
- `renderMaximumQuality()` → special light volume path

## Function signatures:

```c
// Geometry rendering
void renderBasicTextured(CDemonRenderer* renderer,
                        SPrimitive_Geometry* primitive);

void buildAndRenderTrianglePrimitive(CVector3f** triangle_vertices,
                                     CVector3f* vertex_buffer);
// ^ Allocates SPrimitive_Geometry internally

// Fire quad rendering
void renderMaximumQuality(CDemonRenderer* renderer,
                         SPrimitive_FireQuad* quad);

// Light volume rendering
void renderLightVolume(CDemonRenderer* renderer,
                      SPrimitive_LightVolume* volume);

// Generic dispatcher (uses SPrimitiveHeader to peek at type)
void renderPrimitiveDispatch(CDemonRenderer* renderer,
                            SPrimitiveHeader* prim) {
    if (prim->type == 0x80000) {
        renderLightVolume(renderer, (SPrimitive_LightVolume*)prim);
    } else if (prim->type == 4) {
        renderMaximumQuality(renderer, (SPrimitive_FireQuad*)prim);
    } else {
        renderBasicTextured(renderer, (SPrimitive_Geometry*)prim);
    }
}

// Low-level (format-agnostic)
void clipAndFillPoly(CDemonRenderer* renderer,
                    int vertex_count,
                    int* vertex_indices);
```

## Type detection at runtime:

```c
SPrimitiveHeader* header = (SPrimitiveHeader*)data;

if (header->type == 0x80000) {
    // It's a light volume
    SPrimitive_LightVolume* volume = (SPrimitive_LightVolume*)data;
    // Access volume->light_count, etc.
}
else if (header->type == 4 && header->count == 0) {
    // It's a fire quad
    SPrimitive_FireQuad* quad = (SPrimitive_FireQuad*)data;
    // Access quad->vertex_indices[0-3]
}
else if (header->count == 3) {
    // It's geometry
    SPrimitive_Geometry* geom = (SPrimitive_Geometry*)data;
    // Access geom->vertex_indices[0-2]
}
```

## WARNING: Do not confuse with MRGL primitives!

These 40-byte primitives are NOT MRGL blocks.

MRGL primitives:
- SMRGLPrimitive_Triangle: 60 bytes (24 + 3×12)
- SMRGLPrimitive_Quad: 72 bytes (24 + 4×12)
- Have SMRGLPrimitiveHeader with type/element_count/surface_normal
- Have SVertexElement arrays with embedded UVs

Non-MRGL primitives (these):
- SPrimitive_Geometry: 40 bytes (simple triangles)
- SPrimitive_FireQuad: 40 bytes (particle quads)
- SPrimitive_LightVolume: 40 bytes (light effects)
- Different layouts, different purposes
- Used by CDemonRenderer, not MRGL system

*/
