# CDemonRenderer Function Type Analysis

## Goal
Determine which CDemonRenderer functions taking `SMRGLHeaderPrimitive*` parameters can be upgraded to use more specific MRGL types (like `SMRGLPrimitiveTriangle*` or `SMRGLPrimitiveQuad*`).

## Analysis Summary

After examining the render functions, they fall into three categories:

### Category 1: MUST Stay Generic (SMRGLHeaderPrimitive*)

These functions work with **variable vertex counts** and only read common header fields:

#### 1.1 Vertex Index Extractors

These loop `count` times, extract vertex indices, and advance by 12 bytes:

- **`renderBasicTextured`** (0048a820)
  - Reads: `polygon_info->base.count`, `polygon_info->surface_normal`
  - Passes: `(polygon_info + 1)` as vertex data pointer
  - Assembly: `LEA EAX,[ESI + 0x18]` - passes data after header
  - **GENERIC**: Directly passes vertex data without iterating

- **`renderBasicTexturedVariant`** (0048a8a0)
  - Reads: `polygon_info->base.count`
  - Loop: `pSVar1[1].base.type` - reads vertex index from +0x18
  - Advance: `pSVar1 = &(pSVar1->surface_normal).B` - advances by 0xC
  - **GENERIC**: Works with any vertex count (3, 4, or more)

- **`renderAlternativeDepth`** (0048a950)
  - Same pattern as `renderBasicTexturedVariant`
  - Additional: checks screen coordinates for frustum culling
  - **GENERIC**: Variable vertex count support

- **`renderPremium`** (0048b1e0)
  - Loop pattern: reads from `in_stack_0000000c + 0x18`, advances by `0xc`
  - Extracts vertex indices AND UV coordinates
  - **GENERIC**: Handles any polygon size

#### 1.2 Primitive Type Dispatchers

- **`processVisiblePrimitive`** (0048d700)
  - Reads from: `primitive[1]` and `primitive[2]` offsets
  - Unpacks vertex indices with bit shifts (`>> 8`)
  - **TRIANGLE SPECIFIC**: Reads exactly 3 vertices from packed format
  - **NOTE**: Despite being triangle-specific, it's called from batch processor, so stays generic for now

- **`processQuadPrimitive`** (0048d7a0)
  - Reads: `quad_primitive[0].base.count`
  - Checks: `if (count < 4)` - handles both triangles and quads!
  - Accesses: `quad_primitive[1]`, `quad_primitive[2]` offsets
  - **GENERIC**: Handles variable count (triangles OR quads)

### Category 2: Wireframe Functions (GENERIC)

These work with any primitive shape:

- **`renderWireframeDebug`**
- **`renderWireframeVariant`**
- **`renderWireframeAdvanced`**

**Reasoning**: Wireframe rendering only needs edge vertices, doesn't care about primitive type.

### Category 3: Quality Renderers (NEED INVESTIGATION)

These are named for rendering quality, not primitive type:

- `renderTexturedLitNearPlane`
- `renderSpecialDepth`
- `renderPerspectiveLit`
- `renderUltraPremium`
- `renderMaximumQuality` / `renderMaximumQualityVariant`
- `renderEnhancedQuality` / `renderEnhancedQualityVariant`
- `renderComplexMultiFeature`
- `renderPremiumVariant`

**Current Assessment**: Likely generic (work with any primitive type), but need to verify by examining their implementations.

## Key Observations

### MRGL Storage Pattern (Confirmed)

From `processVisiblePrimitive` and `processQuadPrimitive`:

```c
// Vertex indices are packed into 3 consecutive SMRGLHeaderPrimitive structures:
primitive[0].base.type           // (unused - MRGL type code)
primitive[0].base.count          // Vertex count
primitive[0].surface_normal      // Clip plane

primitive[1].base.type           // Vertex 0 index (low byte)
primitive[1].base.count          // UV or other data (with >> 8)
primitive[1].surface_normal.A    // Vertex data (with >> 8)
primitive[1].surface_normal.B    // Vertex 1 index
primitive[1].surface_normal.C    // Vertex data (with >> 8)
primitive[1].surface_normal.D    // Vertex data (with >> 8)

primitive[2].base.type           // Vertex 2 index (low byte)
primitive[2].base.count          // Vertex data (with >> 8)
primitive[2].surface_normal.B    // Vertex 3 index (for quads)
primitive[2].surface_normal.C    // Vertex data (with >> 8)
```

### Function Access Patterns

#### Pattern A: Direct Pointer Pass
```c
// renderBasicTextured at 0048a850
LEA EAX,[ESI + 0x18]              // Point to data after first header
PUSH EAX                          // Pass as vertex array pointer
```
**Interpretation**: Treats data as contiguous vertex array, doesn't unpack.

#### Pattern B: Iterative Unpacking
```assembly
// renderBasicTexturedVariant at 0048a8c2
MOV EBX,dword ptr [EAX + 0x18]    // Read vertex index
ADD EAX,0xc                        // Advance by 12 bytes
```
**Interpretation**: Steps through packed MRGL headers, extracting indices.

#### Pattern C: Multi-Header Read
```c
// processVisiblePrimitive - reads specific offsets
primitive[1].base.type            // +0x18 from start
primitive[1].surface_normal.B     // +0x24
primitive[2].base.type            // +0x30
```
**Interpretation**: Knows exact packed layout, extracts from multiple headers.

## Recommendations

### Short Term
**ALL functions should stay as `SMRGLHeaderPrimitive*`** because:

1. **Design Pattern**: MRGL uses polymorphic headers - functions are meant to be generic
2. **Vertex Count Flexibility**: Most handle variable counts (3, 4, or more vertices)
3. **Dispatch System**: Called from batch processors that iterate over mixed primitive types
4. **Packed Format**: Vertices aren't stored as clean arrays - specific structs would mislead

### Medium Term
Once we fully understand the MRGL packing format:

1. **Document each function** with comments explaining what primitive types it supports
2. **Add assertions** for expected vertex counts where applicable
3. **Create helper macros** for unpacking vertex data:
   ```c
   #define MRGL_GET_VERTEX_INDEX_0(prim) ((prim)[1].base.type)
   #define MRGL_GET_VERTEX_INDEX_1(prim) ((prim)[1].surface_normal.B)
   #define MRGL_GET_VERTEX_UV_U(prim, idx) (((prim)[1].base.count >> 8) & 0xFF)
   ```

### Long Term
Consider creating **adapter functions** that convert MRGL packed format to clean structures:

```c
typedef struct SUnpackedTriangle {
    uint16_t vertex_indices[3];
    uint16_t uv_indices[3];
    SClipPlane clip_plane;
} SUnpackedTriangle;

void unpackMRGLTriangle(SMRGLHeaderPrimitive* mrgl, SUnpackedTriangle* out);
```

## Functions Requiring Further Analysis

Need to examine implementations to confirm they're generic:

- [ ] `renderTexturedLitNearPlane` (0048aa50)
- [ ] `renderSpecialDepth`
- [ ] `renderPerspectiveLit`
- [ ] `renderUltraPremium`
- [ ] `renderMaximumQuality`
- [ ] `renderMaximumQualityVariant`
- [ ] `renderEnhancedQuality`
- [ ] `renderEnhancedQualityVariant`
- [ ] `renderComplexMultiFeature`
- [ ] `renderPremiumVariant`
- [ ] Multiple `renderSomething` functions

## Conclusion

**Answer: NO, none of the CDemonRenderer functions should be changed to use more specific types.**

The generic `SMRGLHeaderPrimitive*` parameter is **intentional design** - the MRGL system uses polymorphic headers where the type is determined at runtime by the `type` field, not by C++ type system.

The functions either:
1. Work with any vertex count (generic polygon processors)
2. Dispatch based on runtime type checks
3. Use the 3-header packed format that doesn't match our struct definitions yet

Once we create accurate MRGL packed primitive structs (like the 3-header triangle/quad format), we could potentially specialize **internal helper functions**, but the public renderer API should stay generic.
