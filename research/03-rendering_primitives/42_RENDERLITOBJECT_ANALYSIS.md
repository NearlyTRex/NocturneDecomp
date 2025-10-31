# renderLitObject Analysis - What It Does and Why

## Function Signature

```c
void CDemonRenderer::renderLitObject(
    CDemonRenderer* this_ptr,
    SPrimitiveLit* obj,              // Should be SRenderPrimitive*
    RenderScanlineFunc* scanline_renderer
);
```

## What It Does

### Pipeline:

1. **Visibility Culling**
   - Checks `plane_culling_enabled` flag
   - Tests if clip plane is visible using `isVisiblePlane`
   - Checks if render mode (`obj->type`) is 0

2. **Geometry Transformation**
   - Sets render state flags: `RENDER_TEXTURE_COMPLEX` and `PREPROCESS_W_DEPTH_REPLACEMENT`
   - Calls `transformAndClipGeometry` with vertex data
   - Stores transformed vertices in global buffer `g_ClippedVertexBuffer`
   - Stores count in `g_ClippedVertexCount`
   - Rejects if < 3 vertices (can't form a triangle)

3. **Rasterization**
   - Calls `rasterizePolygon` with:
     - Clipped vertex buffer
     - Vertex count
     - **Custom scanline renderer function pointer**

## Why It Exists

### Two Rendering Paths:

#### 1. `renderPrimitiveBatch` - Batch Rendering
```c
int renderPrimitiveBatch(
    SMRGLHeaderPrimitive* primitive_array,
    int primitive_count,
    int render_flags
);
```
- Renders **multiple** MRGL primitives efficiently
- Used for normal geometry (static meshes, models, etc.)
- Optimized for throughput
- Uses standard scanline renderer

#### 2. `renderLitObject` - Custom Rendering
- Renders **one** primitive at a time
- Allows **custom scanline function** per primitive
- Used for special effects that need custom pixel processing
- More flexible but slower

## Use Cases

### 1. **Special Lighting Effects** (dlight.cpp functions)

Different scanline renderers for different effects:

- `FUN_00471400`: Light halos - uses `core_dcamera_cpp_FUN_00450320`
- `FUN_004736c0`: Light coronas - uses `core_dcamera_cpp_FUN_00450320`
- `FUN_004758d0`: Lens flares - uses `core_dcamera_cpp_FUN_00450440`
- `FUN_00570770`: Special geometry - uses `core_dcamera_cpp_FUN_004505e0`

Each scanline function implements different:
- Texture mapping modes
- Blending operations
- Additive/subtractive lighting
- Distance attenuation
- Color bleeding effects

### 2. **Special Geometry Rendering** (set.cpp)

From `FUN_00570770`, called by:
- **Cloth rendering** (cloth.cpp) - Needs custom shading for fabric
- **Curtain rendering** (curtain.cpp) - Needs translucency/wind effects
- **Keyframed models** (dmodel.cpp) - Needs per-primitive lighting control
- **Water actors** (wateract.cpp) - Needs reflection/refraction effects

Why not use `renderPrimitiveBatch`?
- These need **per-primitive custom effects**
- Different blend modes per primitive
- Different lighting calculations per surface
- Dynamic effects based on game state

### 3. **The Hybrid Approach in FUN_00570770**

```c
// Check if special effects are enabled
if (*(int *)(in_stack_00000004 + 0x15ac78) != 0) {
    // Render each primitive individually with custom scanline
    for (each primitive) {
        renderLitObject(renderer, &primitive, custom_scanline_func);
    }
}

// Then do normal batch rendering for rest
renderPrimitiveBatch(renderer, primitives, count, flags);
```

This suggests:
- Some primitives flagged for special rendering (bit at +0x15ac78)
- Those get custom scanline treatment
- Rest use fast batch path

## The Structure Purpose

### SPrimitiveLit / SRenderPrimitive

This structure exists to **unpack MRGL data** for the custom rendering path:

```c
// Reading from compact MRGL format:
SMRGLHeaderPrimitive[0]:  type=0x0D, count=3, surface_normal={...}
SMRGLHeaderPrimitive[1]:  (contains vertex data)
SMRGLHeaderPrimitive[2]:  (contains more data)

// Unpacking to renderable format:
SRenderPrimitive {
    render_mode = MRGL[0].count;           // 3
    clip_plane = MRGL[0].surface_normal;   // {...}
    vertex_count = MRGL[1].type;           // from next header
    vertex_array = ptr into MRGL[1] data;  // pointer to vertices
    primitive_type = MRGL[2].type;         // primitive shape
}
```

The unpacking is necessary because:
1. MRGL format is compact and file-oriented
2. Renderer needs flattened data with direct pointers
3. Different fields come from different MRGL headers
4. Need to skip over metadata and jump to vertex data

## Better Name Suggestions

Given what we know:

### Option 1: Focus on the custom rendering
```c
void CDemonRenderer::renderPrimitiveWithCustomScanline(
    CDemonRenderer* this_ptr,
    SRenderPrimitive* primitive,
    RenderScanlineFunc* scanline_renderer
);
```

### Option 2: Focus on special effects
```c
void CDemonRenderer::renderEffectPrimitive(
    CDemonRenderer* this_ptr,
    SRenderPrimitive* primitive,
    RenderScanlineFunc* effect_renderer
);
```

### Option 3: Focus on single vs batch
```c
void CDemonRenderer::renderSinglePrimitive(
    CDemonRenderer* this_ptr,
    SRenderPrimitive* primitive,
    RenderScanlineFunc* scanline_renderer
);
```

### Option 4: Keep "lit" interpretation (might be correct!)
If the scanline functions are specifically for **lighting effects**:
```c
void CDemonRenderer::renderLitPrimitive(
    CDemonRenderer* this_ptr,
    SRenderPrimitive* primitive,
    RenderScanlineFunc* lighting_func
);
```

The "Lit" might mean "with custom lighting/pixel shader function"!

## Recommendation

### For the function name:
Keep **`renderLitObject`** or change to **`renderEffectPrimitive`**

The "lit" likely refers to the custom lighting/pixel processing, not the primitive being pre-lit.

### For the structure:
**Delete SPrimitiveLit and SPrimitiveGeometry**, replace with:

```c
// Simple, accurate name for what it does
typedef struct SRenderPrimitive {
    int render_mode;          // 0x00 - 0=normal, others=special modes
    SClipPlane clip_plane;    // 0x04 - for visibility culling (16 bytes)
    int vertex_count;         // 0x14 - number of vertices
    CVector3i* vertex_array;  // 0x18 - pointer to vertices
    int primitive_type;       // 0x1c - triangle/quad/etc
} SRenderPrimitive;  // 32 bytes
```

## Next Steps

1. Examine the scanline function implementations to understand what custom effects they do
2. Check if there's a flag/enum for the different scanline function types
3. Verify the render_mode field values (when is it non-zero?)
4. Document the relationship between MRGL primitive types and scanline functions
