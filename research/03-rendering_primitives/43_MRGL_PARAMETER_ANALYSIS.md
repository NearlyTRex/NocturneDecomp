# MRGL Function Parameter Analysis

## Goal
Identify which functions taking `SMRGLHeaderPrimitive*` parameters could use more specific MRGL types instead.

## Categories of Functions

### 1. Dispatch/Batch Functions (MUST stay generic)

These functions iterate over mixed arrays or dispatch to different handlers:

- **`renderPrimitiveBatch`** - Iterates over array, advances by 3 headers per quad
- **`renderFaceBatch`** - Similar batch processing
- **`renderTriangleFacetList`** - Processes array with stride
- **`processVisiblePrimitive`** - Likely dispatches based on type

**Reason to stay generic**: They handle heterogeneous arrays and need to work with any MRGL type.

### 2. Type-Specific Rendering Functions (CAN be specialized)

Functions that clearly work with one specific primitive type:

#### Confirmed Quad Functions:
- **`processQuadPrimitive`** (0048d7a0)
  - Accesses `quad_primitive[2].base.type` - reading 3rd header
  - Reads specific offsets for quad vertex indices
  - **Should use**: `SMRGLPrimitiveQuad*` or keep generic but document

#### Quality/Mode Renderers:
These all seem to render a single primitive with different quality settings:
- `renderBasicTextured`
- `renderBasicTexturedVariant`
- `renderAlternativeDepth`
- `renderStandardTextured`
- `renderTexturedBasic`
- `renderTexturedLitNearPlane`
- `renderPremium` / `renderPremiumVariant`
- `renderUltraPremium`
- `renderMaximumQuality` / `renderMaximumQualityVariant`
- `renderEnhancedQuality` / `renderEnhancedQualityVariant`
- `renderComplexMultiFeature`
- `renderPerspectiveLit`

**Analysis needed**: Check if these work with all primitive types or specific ones.

#### Wireframe Functions:
- `renderWireframeDebug`
- `renderWireframeVariant`
- `renderWireframeAdvanced`
- `renderPolygonWireframe`
- `renderPolygonWireframeAntialiased`

**Likely generic**: Wireframe can work with any primitive shape.

## MRGL Storage Pattern Discovery

From the code analysis:

### Quad Storage:
```c
// A quad is stored as 3 SMRGLHeaderPrimitive structures:
SMRGLHeaderPrimitive[0]:  // Header with count, clip plane
SMRGLHeaderPrimitive[1]:  // Contains vertex data (indices, UVs)
SMRGLHeaderPrimitive[2]:  // Contains more vertex data

// Access pattern in processQuadPrimitive:
quad_primitive[0].base.count      // Vertex count
quad_primitive[0].surface_normal  // Clip plane
quad_primitive[1].base.count      // Packed vertex data
quad_primitive[1].surface_normal  // More packed data
quad_primitive[2].base.type       // Even more data
quad_primitive[2].surface_normal  // Final vertex data

// Iteration advances by 3:
primitive_array += 3;
```

This means `SMRGLPrimitiveQuad` is really:
```c
typedef struct SMRGLPrimitiveQuad {
    SMRGLHeaderPrimitive headers[3];  // 3 * 24 = 72 bytes
} SMRGLPrimitiveQuad;
```

### Our Current Definition Issue:
```c
// Current (WRONG):
typedef struct SMRGLPrimitiveQuad {
    SMRGLHeaderPrimitive base;  // 0x0 (24 bytes)
    SMRGLVertex vertices[4];    // 0x18 (48 bytes)
} SMRGLPrimitiveQuad;  // 72 bytes total
```

The vertices are NOT stored as clean `SMRGLVertex` arrays! They're **packed into the next 2 SMRGLHeaderPrimitive structures** in weird ways.

## Recommendations

### Short Term (Conservative):
1. **Keep all parameters as `SMRGLHeaderPrimitive*`**
2. **Add detailed comments** explaining what type each function expects
3. **Document the 3-header pattern** for quads

Example:
```c
// Processes a quad primitive (3 consecutive MRGL headers)
// quad_primitive[0]: Header with count and clip plane
// quad_primitive[1]: First 2 vertices packed in header fields
// quad_primitive[2]: Last 2 vertices packed in header fields
void processQuadPrimitive(
    CDemonRenderer* this_ptr,
    SMRGLHeaderPrimitive* quad_primitive,  // Points to first of 3 headers
    int render_flags
);
```

### Long Term (After Understanding Format):
1. **Revise MRGL primitive structures** to match actual storage
2. **Create proper typed structures** like:
   ```c
   typedef struct SMRGLQuadStorage {
       SMRGLHeaderPrimitive header;     // Count, clip plane
       SMRGLHeaderPrimitive vertex_data_1;  // First 2 vertices packed
       SMRGLHeaderPrimitive vertex_data_2;  // Last 2 vertices packed
   } SMRGLQuadStorage;  // 72 bytes = 3 * 24
   ```
3. **Update function signatures** to use specific types

## Investigation Priority

High priority to understand:
1. **How vertices are packed** into the MRGL headers
2. **Triangle vs Quad storage differences**
3. **Indexed vs non-indexed primitive differences**
4. **What the render quality functions expect** (all types or specific?)

Medium priority:
5. **Mirror rendering functions** - what primitive types?
6. **Glass rendering functions** - what primitive types?

## Next Steps

1. ✅ Identify all functions taking `SMRGLHeaderPrimitive*`
2. ⬜ Pick one function (e.g., `processQuadPrimitive`) and trace through assembly
3. ⬜ Document exactly how vertex data is packed in the 3 headers
4. ⬜ Create correct structure definitions for packed MRGL primitives
5. ⬜ Update function signatures once we understand the format
6. ⬜ Add helper functions to unpack MRGL data into usable vertex arrays

## Key Insight

**The MRGL format is NOT clean structs with vertex arrays!**

It's a **clever/compact packing scheme** where vertex indices and UVs are stored in the fields of multiple `SMRGLHeaderPrimitive` structures chained together. The "type", "count", and even the clip plane fields of the 2nd and 3rd headers are repurposed as vertex data storage!

This explains why:
- Functions access `primitive[1].surface_normal.C` for vertex data
- Functions shift values (`>> 8`) to extract packed bytes
- Arrays advance by `+= 3` for one logical primitive

We need to reverse-engineer the exact packing format before we can create proper typed structures.
