# All Primitive Struct Variations - Complete Mapping

## Summary Table

| Struct Name | Size (bytes) | Vertex Storage | UV Storage | Used By | Rendering Path |
|-------------|--------------|----------------|------------|---------|----------------|
| **SPrimitive_CDemonSet** | **40 (0x28)** | 3 embedded indices | External buffer | Level geometry (cubes) | buildAndRenderTrianglePrimitive → renderBasicTextured |
| **MRGL_Primitive_Triangle** | **60 (0x3C)** | 3 embedded indices | External buffer | Skeletal models (DFM) | CDeformableModel → renderBasicTexturedVariant |
| **MRGL_Primitive_Quad** | **72 (0x48)** | 4 embedded indices + UVs | Embedded | Keyframe models (KFM) | CKeyFramedModel → renderPrimitiveBatch |
| **MRGL_Primitive_Variable** | **N×12+24** | N embedded indices + UVs | Embedded | Generic polygons | Various → API layer functions |
| **SPrimitive_Fire** | **~40?** | Custom format | Custom | Fire/flame effects | Fire system → custom renderers |

---

## Detailed Structure Definitions

### 1. SPrimitive_CDemonSet (40 bytes)

**Used for**: Static level geometry from CDemonSet voxels

```c
typedef struct SPrimitive_CDemonSet {
    int primitive_type;              // 0x00: Type/flags (unused)
    int vertex_count;                // 0x04: Number of vertices (3 for triangles)
    SClipPlane surface_normal;       // 0x08: 16 bytes (A, B, C, D)
    int vertex_indices[3];           // 0x18: 3 vertex indices (12 bytes)
    int padding;                     // 0x24: 4 bytes padding
    // Total: 40 bytes (0x28)
} SPrimitive_CDemonSet;
```

**Characteristics**:
- Stack-allocated per triangle
- Indices only (no UVs embedded)
- Minimal overhead for static geometry
- Surface normal often zeroed (backface culling disabled)

**Renderer functions**:
```c
void renderBasicTextured(CDemonRenderer* renderer, SPrimitive_CDemonSet* prim);
void clipAndFillPoly(CDemonRenderer* renderer, int vertex_count, int* vertex_indices);
```

---

### 2. MRGL_Primitive_Triangle (60 bytes)

**Used for**: Skeletal/deformable models (DFM format)

```c
typedef struct MRGL_Primitive_Triangle {
    int type;                        // 0x00: MRGL type (0x18, 0x29, 0x41, 0x42)
    int element_count;               // 0x04: 3 (triangles)
    SClipPlane surface_normal;       // 0x08: 16 bytes (often uninitialized)

    // Vertex data (36 bytes = 3 × 12)
    struct {
        int vertex_index;            // Index into deformed vertex buffer
        int texture_u;               // UV U (NOT WRITTEN by DFM code)
        int texture_v;               // UV V (NOT WRITTEN by DFM code)
    } vertices[3];                   // 0x18-0x3B: 36 bytes

    // Total: 60 bytes (0x3C)
} MRGL_Primitive_Triangle;
```

**Characteristics**:
- Stack-allocated per frame during skeletal deformation
- **Degenerate format**: Only vertex_index is populated, UVs are uninitialized
- UVs fetched from separate vertex buffer during rendering
- Type and surface_normal often uninitialized

**Size formula**: `3 × 12 + 24 = 60 bytes`

**Renderer functions**:
```c
void renderBasicTexturedVariant(CDemonRenderer* renderer, MRGL_Primitive_Triangle* prim);
```

---

### 3. MRGL_Primitive_Quad (72 bytes)

**Used for**: Keyframed animated models (KFM format)

```c
typedef struct MRGL_Primitive_Quad {
    int type;                        // 0x00: MRGL type (0x18, 0x29, 0x41, 0x42)
    int element_count;               // 0x04: 4 (quads)
    SClipPlane surface_normal;       // 0x08: 16 bytes

    // Vertex data (48 bytes = 4 × 12)
    struct {
        int vertex_index;            // Index into transformed vertex buffer
        int texture_u;               // UV U coordinate (16.16 fixed-point)
        int texture_v;               // UV V coordinate (16.16 fixed-point)
    } vertices[4];                   // 0x18-0x47: 48 bytes

    // Total: 72 bytes (0x48)
} MRGL_Primitive_Quad;
```

**Characteristics**:
- Pre-built in heap (loaded from .KFM file)
- **Complete format**: All fields populated (indices + UVs)
- Self-contained primitive data
- Batched rendering with fixed 72-byte stride

**Size formula**: `4 × 12 + 24 = 72 bytes`

**Renderer functions**:
```c
void renderPrimitiveBatch(CDemonRenderer* renderer,
                          MRGL_Primitive_Quad* array,
                          int count,
                          int stride);  // stride = 0x48
```

---

### 4. MRGL_Primitive_Variable (N × 12 + 24 bytes)

**Used for**: Generic MRGL primitives with variable vertex counts

```c
typedef struct MRGL_Primitive_Variable {
    int type;                        // 0x00: MRGL type
    int element_count;               // 0x04: N (number of vertices)
    SClipPlane surface_normal;       // 0x08: 16 bytes

    // Vertex data (N × 12 bytes)
    struct {
        int vertex_index;            // Index into vertex buffer
        int texture_u;               // UV U coordinate
        int texture_v;               // UV V coordinate
    } vertices[/*element_count*/];   // 0x18+: N × 12 bytes

    // Total: element_count × 12 + 24 bytes
} MRGL_Primitive_Variable;
```

**Size examples**:
| Vertices | Size Calculation | Total Size |
|----------|------------------|------------|
| 3 (tri)  | 3 × 12 + 24      | 60 (0x3C)  |
| 4 (quad) | 4 × 12 + 24      | 72 (0x48)  |
| 5 (pent) | 5 × 12 + 24      | 84 (0x54)  |
| 6 (hex)  | 6 × 12 + 24      | 96 (0x60)  |

**Size formula**: `element_count × 12 + 24`

**Renderer functions**: Many! This is the "generic" MRGL format that most API-level renderers accept.

---

### 5. SPrimitive_Fire (Custom format, ~40 bytes?)

**Used for**: Fire and flame particle effects

```c
typedef struct SPrimitive_Fire {
    int primitive_type;              // 0x00: 0x80000 (fire type flag)
    int vertex_count;                // 0x04: Usually 4
    SClipPlane surface_normal;       // 0x08: 16 bytes
    // ... (exact layout needs more investigation)
    // Likely similar to CDemonSet format but with different type
} SPrimitive_Fire;
```

**Characteristics**:
- Stack-allocated per particle/quad
- Custom primitive type (0x80000)
- May share similar layout to SPrimitive_CDemonSet

**Renderer functions**:
```c
// Various fire-specific renderers
void renderEnhancedQualityVariant(CDemonRenderer* renderer, SPrimitive_Fire* prim);
```

---

## Key Structural Differences

### Same Size, Different Structure?

**Question**: Do primitives of the same size have the same structure?

**Answer**: **NO!** Even primitives of the same size can have different layouts:

#### Case Study: 40-byte Primitives

**SPrimitive_CDemonSet** (40 bytes):
```
0x00: primitive_type
0x04: vertex_count
0x08: surface_normal (16 bytes)
0x18: vertex_indices[3] (12 bytes)
0x24: padding (4 bytes)
```

**Hypothetical SPrimitive_Fire** (40 bytes):
```
0x00: primitive_type (0x80000)
0x04: vertex_count
0x08: surface_normal (16 bytes)
0x18: ??? (possibly different vertex data format)
0x24: ??? (possibly different fields)
```

They're the same size but may have different field interpretations!

#### Case Study: 60-byte Primitives

**MRGL_Primitive_Triangle** (60 bytes):
- Has MRGL header (type, element_count)
- Vertices at 12-byte intervals
- UVs present but uninitialized

**No other 60-byte format exists** (as far as we know), but if there were one, it would be a coincidence of size, not structure.

---

## MRGL Format Family

The MRGL formats (Triangle, Quad, Variable) share a common structure pattern:

```c
// Common MRGL header (24 bytes)
int type;                            // 0x00: MRGL type identifier
int element_count;                   // 0x04: Number of vertices
SClipPlane surface_normal;           // 0x08: 16 bytes

// Variable vertex data (element_count × 12 bytes)
struct {
    int vertex_index;
    int texture_u;
    int texture_v;
} vertices[element_count];
```

**Size formula**: Always `element_count × 12 + 24`

This means:
- **MRGL_Primitive_Triangle** (element_count=3) = 60 bytes
- **MRGL_Primitive_Quad** (element_count=4) = 72 bytes
- All MRGL formats can be handled by polymorphic code that reads `element_count`

---

## Renderer Function → Struct Type Mapping

### Core Engine Functions (Type-Specific)

| Function | Address | Takes | Size |
|----------|---------|-------|------|
| **renderBasicTextured** | 0x0048a820 | SPrimitive_CDemonSet* | 40 bytes |
| **renderBasicTexturedVariant** | 0x0048a8a0 | MRGL_Primitive_Triangle* | 60 bytes |
| **renderPrimitiveBatch** | 0x0048ce90 | MRGL_Primitive_Quad* array + stride | 72 bytes |

### API Layer Functions (Generic MRGL)

These functions accept **MRGL_Primitive_Variable*** (any MRGL format):

| Function | Address | Notes |
|----------|---------|-------|
| renderPremium | 0x0048b1e0 | Reads element_count dynamically |
| renderUltraPremium | 0x0048b970 | Reads element_count dynamically |
| renderEnhancedQuality | 0x0048bcf0 | Reads element_count dynamically |
| renderMaximumQuality | 0x0048bad0 | Reads element_count dynamically |
| renderPerspectiveLit | 0x0048b550 | Reads element_count dynamically |
| renderSpecialDepth | 0x0048b420 | Reads element_count dynamically |

These work with any MRGL format because they read `element_count` to determine size.

### Low-Level Functions (Format-Agnostic)

These work with **vertex indices** (not full primitives):

| Function | Address | Takes |
|----------|---------|-------|
| clipAndFillPoly | 0x0048a740 | int vertex_count, int* vertex_indices |
| renderTriangleTextured | 0x00483370 | int* vertex_indices, int vertex_count |
| renderTriangleSimple | 0x004839f0 | int* vertex_indices, int vertex_count |

These don't care about primitive format - they just need vertex indices!

---

## Complete Rendering Path Matrix

| Geometry Type | Struct Type | Size | Build Function | Renderer Entry | Low-Level |
|---------------|-------------|------|----------------|----------------|-----------|
| **CDemonSet cubes** | SPrimitive_CDemonSet | 40 | buildAndRenderTrianglePrimitive | renderBasicTextured | clipAndFillPoly |
| **DFM models** | MRGL_Primitive_Triangle | 60 | CDeformableModel_FUN_0059abf0 | renderBasicTexturedVariant | clipAndFillPoly |
| **KFM models** | MRGL_Primitive_Quad | 72 | (pre-built in file) | renderPrimitiveBatch | (internal) |
| **Water tiles** | MRGL_Primitive_Variable | 60-72 | (stack build) | renderEnhancedQualityVariant | clipAndFillPoly |
| **Fire particles** | SPrimitive_Fire | ~40 | (stack build) | renderEnhancedQualityVariant | clipAndFillPoly |
| **Generic MRGL** | MRGL_Primitive_Variable | N×12+24 | Various | API layer (polymorphic) | clipAndFillPoly |

---

## Struct Type Decision Tree

```
Is it from a CDemonCube?
├─ YES → SPrimitive_CDemonSet (40 bytes)
└─ NO → Is it MRGL format?
    ├─ YES → Check element_count field
    │   ├─ element_count = 3 → MRGL_Primitive_Triangle (60 bytes)
    │   ├─ element_count = 4 → MRGL_Primitive_Quad (72 bytes)
    │   └─ element_count = N → MRGL_Primitive_Variable (N×12+24 bytes)
    └─ NO → Check primitive_type field
        ├─ primitive_type = 0x80000 → SPrimitive_Fire (~40 bytes)
        └─ Other → Unknown format
```

---

## Recommended Type Definitions for Decompilation

### Approach 1: Separate Structs (Type-Safe)

```c
// CDemonSet format (40 bytes)
typedef struct SPrimitive_CDemonSet {
    int primitive_type;
    int vertex_count;
    SClipPlane surface_normal;
    int vertex_indices[3];
    int padding;
} SPrimitive_CDemonSet;

// MRGL Triangle (60 bytes)
typedef struct MRGL_Primitive_Triangle {
    int type;
    int element_count;
    SClipPlane surface_normal;
    struct { int vertex_index; int u; int v; } vertices[3];
} MRGL_Primitive_Triangle;

// MRGL Quad (72 bytes)
typedef struct MRGL_Primitive_Quad {
    int type;
    int element_count;
    SClipPlane surface_normal;
    struct { int vertex_index; int u; int v; } vertices[4];
} MRGL_Primitive_Quad;
```

**Pros**: Type-safe, explicit sizes
**Cons**: Need separate function declarations for each type

### Approach 2: Union (Flexible)

```c
typedef struct SPrimitive_Common {
    int primitive_type_or_mrgl_type;
    int vertex_count_or_element_count;
    SClipPlane surface_normal;
} SPrimitive_Common;

typedef struct SPrimitive {
    SPrimitive_Common header;
    union {
        struct {
            int vertex_indices[3];
            int padding;
        } cdemonset;

        struct {
            struct { int index; int u; int v; } verts[3];
        } mrgl_tri;

        struct {
            struct { int index; int u; int v; } verts[4];
        } mrgl_quad;

        struct {
            struct { int index; int u; int v; } verts[1];  // Variable length
        } mrgl_var;
    };
} SPrimitive;
```

**Pros**: Single type, flexible access
**Cons**: Union size = largest variant, not exact

### Approach 3: Base + Derived (OOP-style)

```c
// Base header (24 bytes)
typedef struct SPrimitive_Header {
    int type_or_primitive_type;
    int count_or_vertex_count;
    SClipPlane surface_normal;
} SPrimitive_Header;

// Derived: CDemonSet (40 bytes total)
typedef struct SPrimitive_CDemonSet {
    SPrimitive_Header header;
    int vertex_indices[3];
    int padding;
} SPrimitive_CDemonSet;

// Derived: MRGL (variable size)
typedef struct MRGL_Primitive {
    SPrimitive_Header header;
    struct { int index; int u; int v; } vertices[];  // Flexible array member
} MRGL_Primitive;
```

**Pros**: Inheritance-like structure
**Cons**: Flexible array members require C99+

---

## Function Signature Recommendations

### Type-Specific Functions

```c
// CDemonSet rendering
void renderBasicTextured(CDemonRenderer* renderer,
                        SPrimitive_CDemonSet* prim);

// DFM rendering
void renderBasicTexturedVariant(CDemonRenderer* renderer,
                               MRGL_Primitive_Triangle* prim);

// KFM rendering
void renderPrimitiveBatch(CDemonRenderer* renderer,
                         MRGL_Primitive_Quad* array,
                         int count,
                         int stride);
```

### Generic MRGL Functions

```c
// API layer (accepts any MRGL format)
void renderPremium(CDemonRenderer* renderer,
                  MRGL_Primitive_Variable* prim);

void renderUltraPremium(CDemonRenderer* renderer,
                       MRGL_Primitive_Variable* prim);
```

### Format-Agnostic Low-Level

```c
// Works with any format (just needs indices)
void clipAndFillPoly(CDemonRenderer* renderer,
                    int vertex_count,
                    int* vertex_indices);
```

---

## Summary

### Distinct Struct Types: **4 primary + 1 special**

1. **SPrimitive_CDemonSet** (40 bytes) - Level geometry
2. **MRGL_Primitive_Triangle** (60 bytes) - Skeletal models
3. **MRGL_Primitive_Quad** (72 bytes) - Keyframe models
4. **MRGL_Primitive_Variable** (N×12+24 bytes) - Generic polygons
5. **SPrimitive_Fire** (~40 bytes) - Fire effects

### Key Insights

✅ **Same size ≠ Same structure**: 40-byte CDemonSet and 40-byte Fire formats are different!

✅ **MRGL family shares structure**: Triangle, Quad, and Variable all follow `element_count × 12 + 24` formula

✅ **Renderer functions are type-specific**: Each format has its own entry point

✅ **Low-level functions are format-agnostic**: Once you extract indices, format doesn't matter

✅ **Total vertex data**: CDemonSet (12 bytes for 3 indices), MRGL Triangle (36 bytes), MRGL Quad (48 bytes)

### Recommended Approach for Decompilation

Use **separate structs for each format** with explicit sizes and `_Static_assert` checks:

```c
typedef struct SPrimitive_CDemonSet { /*...*/ } SPrimitive_CDemonSet;
typedef struct MRGL_Primitive_Triangle { /*...*/ } MRGL_Primitive_Triangle;
typedef struct MRGL_Primitive_Quad { /*...*/ } MRGL_Primitive_Quad;

_Static_assert(sizeof(SPrimitive_CDemonSet) == 0x28, "Must be 40 bytes");
_Static_assert(sizeof(MRGL_Primitive_Triangle) == 0x3C, "Must be 60 bytes");
_Static_assert(sizeof(MRGL_Primitive_Quad) == 0x48, "Must be 72 bytes");
```

This provides maximum type safety and matches the actual engine architecture!
