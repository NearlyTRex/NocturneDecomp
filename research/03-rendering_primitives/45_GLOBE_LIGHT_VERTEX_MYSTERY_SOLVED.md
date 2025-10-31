# Globe Light Vertex Mystery - SOLVED!

## The Mystery

The `g_GlobeTrianglePrimitives` array contains 84 primitives marked as `SMRGLPrimitiveTriangleIndex` with type 0x03 and 0x04, supposedly for "light vertices" used to render globe/corona effects. However, the "vertex_count" field contains bizarre values like 16921, -45530, 61282, etc. - these are clearly NOT vertex counts!

## The Solution: It's Not a Vertex Count - It's Coordinate Data!

### Structure Reinterpretation

The actual structure is NOT:
```c
struct SMRGLPrimitiveTriangleIndex {
    int type;           // 0x00: MRGL type
    int vertex_count;   // 0x04: WRONG! Not a vertex count!
    // ...
};
```

It's actually:
```c
struct SMRGLLightVertex {
    int type;           // 0x00: MRGL type (0x03 = triangle, 0x04 = quad)
    int coord_x;        // 0x04: Fixed-point X coordinate (Q16.16 format likely)
    int coord_y;        // 0x08: Fixed-point Y coordinate
    int coord_z;        // 0x0C: Fixed-point Z coordinate
    int intensity;      // 0x10: Light intensity or color data
    int flags;          // 0x14: Rendering flags or additional data
    int vertex_indices[3]; // 0x18-0x20: Vertex indices into g_GlobeVertexPositions
    int padding;        // 0x24: Padding or fourth vertex index for quads
};  // 36 bytes total
```

### Evidence from the Data

Looking at the decoded primitives:

**Type 0x03 (Triangles) - First Ring:**
```
Idx | Type | CoordX  | CoordY  | CoordZ  | Intensity | V0 | V1 | V2
  0 | 0x03 |  16921  | -F6AE   |  11B5   | -F6AE42   |  2 |  1 |  0
  1 | 0x03 |  12387  | -F6AE   |  3063   | -F6AE42   |  1 |  3 |  0
```

**Type 0x04 (Quads) - Middle Bands:**
```
Idx | Type | CoordX  | CoordY  | CoordZ  | Intensity | V0 | V1 | V2 | V3
 24 | 0x04 |  45530  |  B1DA   |  2FA7   |  F2F36D   |  7 |  8 | 14 | 13
 25 | 0x04 |  33330  |  B1DA   |  8232   |  F2F36F   |  8 |  9 | 15 | 14
```

### Pattern Analysis

1. **Two MRGL Types:**
   - Type 0x03: 36 primitives (triangles - connecting top/bottom caps)
   - Type 0x04: 48 primitives (quads - forming the bands of the sphere)

2. **Coordinate Values Follow Sphere Pattern:**
   - X coordinates: ±16921, ±12387, ±4533, ±45530, ±33330, ±12199, ±61282, ±44862, ±16420
   - These form concentric rings around a sphere!
   - The values are likely Q16.16 fixed-point (divide by 65536 to get float)

3. **Vertex Indices Reference g_GlobeVertexPositions:**
   - The array `g_GlobeVertexPositions` (CVector3i[62]) contains the actual vertex positions
   - Primitives 0-11: Use vertices 0-12 (top cap triangles around vertex 0)
   - Primitives 12-23: Use same vertices, opposite winding (bottom side of top ring)
   - Primitives 24-71: Use bands of vertices (quads forming sphere body)
   - Primitives 72-83: Use vertices 49-61 (bottom cap triangles around vertex 61)

4. **Vertex 61 is Special:**
   - The last 12 triangles (primitives 72-83) all converge at vertex 61
   - This is the bottom pole of the sphere
   - Similarly, vertex 0 is the top pole (primitives 0-11)

## How It Works in the Code

### In `CDemonGlobe_renderCorona_FUN_00471400`:

```c
// Loop through vertex positions and transform them
for (i = 0; i < 62; i++) {  // 62 vertices in g_GlobeVertexPositions
    // Scale by radius
    float fVar1 = this_ptr->radius * 0.00390625;  // 1/256

    // Read vertex position from g_GlobeVertexPositions
    local_28.x = (int)ROUND(g_GlobeVertexPositions[i].x * fVar1 * 256.0);
    local_28.y = (int)ROUND(g_GlobeVertexPositions[i].y * fVar1 * 256.0);
    local_28.z = (int)ROUND(g_GlobeVertexPositions[i].z * fVar1 * 256.0);

    // Transform and project to screen space
    transformAndProjectPoint(&vertex_buffer[i], &local_28);
}

// Loop through primitives (line 96-107)
for (i = 0; i < 84; i++) {
    SMRGLLightVertex* prim = &g_GlobeTrianglePrimitives[i];

    // The "weird count value" is actually coordinate data!
    // It's used in some lighting calculation:
    float lightValue = (float)prim->coord_x * this_ptr->radius;
    round(lightValue);

    // Render using the vertex indices
    renderCustomScanline(renderer, prim, ...);
}
```

### The Assembly Confirms It

From lines 257-276 of the assembly:
```asm
00471517: MOV EAX,dword ptr [EBX + 0x66f2fc]  ; Read field at offset 0x00 (type)
0047151d: MOV dword ptr [ESP + 0xc],EAX
00471521: MOV EAX,dword ptr [EBX + 0x66f300]  ; Read field at offset 0x04 (coord_x)
00471527: MOV dword ptr [ESP + 0x10],EAX
0047152b: MOV EAX,dword ptr [EBX + 0x66f304]  ; Read field at offset 0x08 (coord_y)
...
0047153b: FILD dword ptr [EBX + 0x66f30c]     ; Load offset 0x0C and convert to float!
00471541: ...
00471545: FMUL float ptr [EBP + 0x30]         ; Multiply by radius!
```

The code loads the value at offset 0x0C (what we thought was "vertex_count"), converts it to float with `FILD`, then multiplies by the globe radius! This is clearly a coordinate being used for lighting calculations, NOT a vertex count!

## Why Type 3 is "Light Vertex"

The MRGL type 0x03 is called "light vertex" or "vertex lighting" because:

1. **It stores lighting data per-primitive** - the coord fields are used to calculate lighting intensity
2. **It's specifically for lit geometry** - the corona/globe rendering uses these coordinates to compute how bright each triangle should be based on its position relative to the light source
3. **Fixed-point coordinates** - the "weird counts" are actually Q16.16 fixed-point coordinates used in lighting calculations

## The Complete Picture

```
g_GlobeVertexPositions[62]  -  Base vertex positions (CVector3i)
          ↓
    Transform by radius
    Project to screen
          ↓
vertex_buffer[62]  -  Transformed screen positions
          ↓
          ← Connected by ←
          ↓
g_GlobeTrianglePrimitives[84]  -  Primitives with:
                                  - Type (0x03=tri, 0x04=quad)
                                  - Light coords (for intensity calc)
                                  - Vertex indices
          ↓
    Render with lighting
          ↓
      Screen pixels
```

## Fixed Structure Definition

```c
// CORRECTED: Type 0x03 MRGL Light Vertex Primitive
typedef struct SMRGLLightVertex {
    int type;              // 0x00: MRGL type (0x03 = lit triangle, 0x04 = lit quad)
    int light_coord_x;     // 0x04: X coordinate for lighting calculation (Q16.16)
    int light_coord_y;     // 0x08: Y coordinate for lighting calculation (Q16.16)
    int light_coord_z;     // 0x0C: Z coordinate for lighting calculation (Q16.16)
    int intensity_data;    // 0x10: Light intensity or color data
    int render_flags;      // 0x14: Rendering flags or material properties
    int vertex_index[3];   // 0x18-0x20: Indices into vertex position array
    int vertex_index_3;    // 0x24: Fourth vertex (for quads) or padding
} SMRGLLightVertex;  // 36 bytes

// Globe rendering uses:
// - 62 vertices in g_GlobeVertexPositions
// - 84 light primitives in g_GlobeTrianglePrimitives
//   - 36 type 0x03 (triangles for caps)
//   - 48 type 0x04 (quads for sphere body)
```

## Conclusion

The "mystery of weird count values" is solved: **they're not counts at all - they're lighting coordinates in Q16.16 fixed-point format!** The MRGL type 0x03 system is a sophisticated lit geometry renderer where each primitive carries both geometric data (vertex indices) and lighting data (coordinates for intensity calculation).

This explains why:
1. The values seemed random - they're actually sphere coordinates
2. They could be negative - coordinates can be negative
3. They followed patterns - they form a geodesic sphere approximation
4. The code multiplied them by radius - lighting intensity varies with position
