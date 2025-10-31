#pragma once

// MRGL Primitive Structure Definitions
// Based on analyses in documents 25-28
//
// Design philosophy: Composition-based structs (like SMRGLTexture0x0d/0x40)
// - Common headers are embedded as members
// - No unions, no polymorphism
// - Different structs for different layouts

// =============================================================================
// COMMON VERTEX FORMAT
// =============================================================================

// Generic 12-byte vertex element used by all MRGL primitives
typedef struct SVertexElement {
    int vertex_index;                // 0x00: Index into vertex buffer
    int texture_u;                   // 0x04: UV U coordinate (16.16 fixed-point)
    int texture_v;                   // 0x08: UV V coordinate (16.16 fixed-point)
} SVertexElement;

_Static_assert(sizeof(SVertexElement) == 12, "Must be 12 bytes");

// =============================================================================
// MRGL PRIMITIVE BASE HEADER (24 bytes)
// =============================================================================

// Common 24-byte header for all MRGL primitive types
// This is the base that all MRGL primitives start with
typedef struct SMRGLPrimitiveHeader {
    int type;                        // 0x00: MRGL type (0x18, 0x29, 0x41, 0x42, etc.)
    int element_count;               // 0x04: Number of vertices in this primitive
    SClipPlane surface_normal;       // 0x08: Surface normal plane (16 bytes)
                                     //   int A;  // 0x08
                                     //   int B;  // 0x0C
                                     //   int C;  // 0x10
                                     //   int D;  // 0x14
} SMRGLPrimitiveHeader;

_Static_assert(sizeof(SMRGLPrimitiveHeader) == 24, "Must be 24 bytes");

// =============================================================================
// MRGL PRIMITIVE - TRIANGLE (60 bytes)
// =============================================================================

// MRGL Triangle primitive (60 bytes)
// Used by: DFM skeletal/deformable models
//
// NOTE: In DFM rendering, only vertex_index is populated in each vertex element.
// The texture_u and texture_v fields are UNINITIALIZED and ignored.
// UVs are fetched from a separate vertex buffer during rendering.
//
// Size formula: 24 + (3 × 12) = 60 bytes
typedef struct SMRGLPrimitive_Triangle {
    SMRGLPrimitiveHeader header;     // 0x00: 24-byte header (type, element_count=3, normal)
    SVertexElement vertices[3];      // 0x18: 3 vertices × 12 bytes = 36 bytes
                                     // Total: 60 bytes (0x3C)
} SMRGLPrimitive_Triangle;

_Static_assert(sizeof(SMRGLPrimitive_Triangle) == 0x3C, "Must be 60 bytes");

// =============================================================================
// MRGL PRIMITIVE - QUAD (72 bytes)
// =============================================================================

// MRGL Quad primitive (72 bytes)
// Used by: KFM keyframed animated models
//
// NOTE: In KFM rendering, ALL fields are populated.
// Both vertex_index and texture UV coordinates are fully initialized.
//
// Size formula: 24 + (4 × 12) = 72 bytes
typedef struct SMRGLPrimitive_Quad {
    SMRGLPrimitiveHeader header;     // 0x00: 24-byte header (type, element_count=4, normal)
    SVertexElement vertices[4];      // 0x18: 4 vertices × 12 bytes = 48 bytes
                                     // Total: 72 bytes (0x48)
} SMRGLPrimitive_Quad;

_Static_assert(sizeof(SMRGLPrimitive_Quad) == 0x48, "Must be 72 bytes");

// =============================================================================
// MRGL PRIMITIVE - VARIABLE (N × 12 + 24 bytes)
// =============================================================================

// MRGL Variable primitive (flexible size)
// Used by: Generic MRGL primitive handling
//
// Size formula: 24 + (element_count × 12) bytes
//
// Examples:
// - element_count=3 (triangle): 60 bytes (0x3C)
// - element_count=4 (quad):     72 bytes (0x48)
// - element_count=5 (pentagon): 84 bytes (0x54)
// - element_count=N:            (N × 12 + 24) bytes
typedef struct SMRGLPrimitive_Variable {
    SMRGLPrimitiveHeader header;     // 0x00: 24-byte header
    SVertexElement vertices[];       // 0x18: Variable-length array (element_count × 12 bytes)
                                     // Flexible array member (C99)
} SMRGLPrimitive_Variable;

// =============================================================================
// LEGACY ALIASES (for backwards compatibility with existing code)
// =============================================================================

typedef SMRGLPrimitive_Triangle SMRGL_Triangle;
typedef SMRGLPrimitive_Quad SMRGL_Quad;
typedef SMRGLPrimitive_Variable SMRGL_Primitive;

// =============================================================================
// USAGE GUIDE
// =============================================================================

/*

## When to use which struct:

### SMRGLPrimitive_Triangle (60 bytes)
Use for:
- DFM skeletal/deformable model primitives
- Pre-allocated or stack-allocated triangle arrays
- When you know element_count is always 3

Field population:
- header.type: MRGL type (often uninitialized in DFM)
- header.element_count: Always 3
- header.surface_normal: Often uninitialized
- vertices[i].vertex_index: POPULATED (index into deformed vertex buffer)
- vertices[i].texture_u: UNINITIALIZED (ignored by renderer)
- vertices[i].texture_v: UNINITIALIZED (ignored by renderer)

### SMRGLPrimitive_Quad (72 bytes)
Use for:
- KFM keyframed animated model primitives
- Pre-built quad arrays loaded from .KFM files
- When you know element_count is always 4

Field population:
- header.type: MRGL type (0x18, 0x29, 0x41, 0x42)
- header.element_count: Always 4
- header.surface_normal: Computed from vertices
- vertices[i].vertex_index: POPULATED (index into keyframe vertex buffer)
- vertices[i].texture_u: POPULATED (16.16 fixed-point)
- vertices[i].texture_v: POPULATED (16.16 fixed-point)

### SMRGLPrimitive_Variable (variable size)
Use for:
- Generic MRGL primitive arrays with unknown vertex count at compile time
- Polymorphic MRGL handling where you read element_count at runtime
- File I/O where primitive size varies

Access pattern:
```c
SMRGLPrimitive_Variable* prim = (SMRGLPrimitive_Variable*)data;
int vertex_count = prim->header.element_count;
int total_size = sizeof(SMRGLPrimitiveHeader) + vertex_count * sizeof(SVertexElement);

// Access vertices:
for (int i = 0; i < vertex_count; i++) {
    int idx = prim->vertices[i].vertex_index;
    // ...
}

// Advance to next primitive:
byte* next = (byte*)prim + total_size;
```

## Function signature recommendations:

```c
// For DFM triangle rendering
void renderDFMTriangle(CDemonRenderer* renderer, SMRGLPrimitive_Triangle* triangle);

// For KFM quad rendering
void renderKFMQuad(CDemonRenderer* renderer, SMRGLPrimitive_Quad* quad);

// For batch rendering (homogeneous arrays)
void renderTriangleBatch(CDemonRenderer* renderer,
                         SMRGLPrimitive_Triangle* array,
                         int count);

void renderQuadBatch(CDemonRenderer* renderer,
                     SMRGLPrimitive_Quad* array,
                     int count);

// For generic MRGL handling
void renderMRGLPrimitive(CDemonRenderer* renderer,
                         SMRGLPrimitive_Variable* primitive);

// Low-level (format-agnostic, just needs indices)
void clipAndFillPoly(CDemonRenderer* renderer,
                     int vertex_count,
                     int* vertex_indices);
```

## Composition pattern (like SMRGLTexture0x0d/0x40):

All MRGL primitives share the same base header (SMRGLPrimitiveHeader).
Specific primitive types embed this header and add their vertex data:

```
SMRGLPrimitiveHeader (24 bytes)
    ├─ SMRGLPrimitive_Triangle (24 + 36 = 60 bytes)
    ├─ SMRGLPrimitive_Quad (24 + 48 = 72 bytes)
    └─ SMRGLPrimitive_Variable (24 + N×12 bytes)
```

You can safely cast any specific primitive to SMRGLPrimitiveHeader* to read
the common fields (type, element_count, surface_normal).

```c
SMRGLPrimitive_Quad* quad = getQuad();
SMRGLPrimitiveHeader* header = (SMRGLPrimitiveHeader*)quad;
int vertex_count = header->element_count;  // Safe access
```

## Size calculation helper:

```c
// Calculate total size of an MRGL primitive
static inline int SMRGLPrimitive_GetSize(int element_count) {
    return sizeof(SMRGLPrimitiveHeader) + element_count * sizeof(SVertexElement);
}

// Or: 24 + element_count * 12
```

*/
