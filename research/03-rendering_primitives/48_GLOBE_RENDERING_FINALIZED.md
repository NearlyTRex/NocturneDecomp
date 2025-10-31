# Globe/Corona Rendering - Finalized Analysis

## Function: `CDemonGlobe_renderCorona`

**Original**: `core_dglobe.cpp_CDemonGlobe_render_FUN_00471400`
**Corrected**: `core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400`

### Purpose
Renders a spherical corona/halo effect around light sources. Uses a geodesic sphere mesh with 62 vertices and 84 faces (36 triangles + 48 quads).

### Globals Used

```c
// Constants
extern double DOUBLE_0061ec4a;           // = 0.00390625 (1/256) - radius scale factor
extern float FLOAT_0065c8c0;             // = 256.0 - coordinate scale factor

// Geometry data
extern CVector3i g_GlobeVertexPositions[62];        // Base vertex positions for sphere
extern SGlobeRenderPrimitive g_GlobeFacePrimitives[84];  // Triangle and quad faces

// Renderer
extern CDemonRenderer* g_CDemonRendererPtr;

// Corona rendering buffers (used by initCoronaBuffers)
extern int g_CoronaLeftExtent[240];      // Left screen extent per scanline
extern int g_CoronaRightExtent[240];     // Right screen extent per scanline
extern int g_CoronaDepthBuffer[240][320]; // Depth buffer for corona (307200 bytes)
```

### Helper Function: `initCoronaBuffers`

**Original**: `core_dcamera.cpp_FUN_004502e0`
**Corrected**: `core_dcamera.cpp_initCoronaBuffers_FUN_004502e0`

**Purpose**: Initializes corona rendering buffers before drawing

```c
void core_dcamera_cpp_initCoronaBuffers_FUN_004502e0(void)
{
    // Clear depth buffer to max depth
    memset(g_CoronaDepthBuffer, 0x7F, 0x4B000);  // 307200 bytes

    // Initialize scanline extents
    for (int i = 0; i < 240; i++) {
        g_CoronaRightExtent[i] = 0x13F;  // 319 (rightmost pixel)
        g_CoronaLeftExtent[i] = 0;       // 0 (leftmost pixel)
    }
}
```

**Screen Resolution**: 320x240 pixels

### Data Structures

#### Globe Vertex Positions (62 vertices)
```c
typedef struct CVector3i {
    int x;  // Q16.16 fixed-point coordinate
    int y;  // Q16.16 fixed-point coordinate
    int z;  // Q16.16 fixed-point coordinate
} CVector3i;  // 12 bytes

// Array of 62 vertices forming a geodesic sphere
extern CVector3i g_GlobeVertexPositions[62];  // 744 bytes total
```

#### Globe Face Primitives (84 faces)
```c
typedef struct SGlobeRenderPrimitive {
    int type;              // 0x00: 0x03 (triangle) or 0x04 (quad)
    int normal_x;          // 0x04: Surface normal X (Q16.16, for lighting & culling)
    int normal_y;          // 0x08: Surface normal Y (Q16.16)
    int normal_z;          // 0x0C: Surface normal Z (Q16.16)
    int plane_d;           // 0x10: Plane distance coefficient
    int vertex_index_0;    // 0x14: First vertex (0-61)
    int vertex_index_1;    // 0x18: Second vertex (0-61)
    int vertex_index_2;    // 0x1C: Third vertex (0-61)
    int vertex_index_3;    // 0x20: Fourth vertex for quads, 0 for triangles
} SGlobeRenderPrimitive;  // 36 bytes = 0x24

// Array of 84 faces:
// - 36 triangles (type 0x03)
// - 48 quads (type 0x04)
extern SGlobeRenderPrimitive g_GlobeFacePrimitives[84];  // 3024 bytes total
```

**Key insight**: The normal data serves **dual purpose**:
1. **Lighting calculation**: `normal_z * radius` = light intensity
2. **Backface culling**: Normals form the clip plane equation for visibility testing

### Rendering Algorithm

```c
void CDemonGlobe_renderCorona(CDemonGlobe* this_ptr)
{
    // 1. Transform globe position to camera space
    CDemonRenderer_processCameraRelativeVertex(g_CDemonRendererPtr, &this_ptr->position);

    // 2. Get camera position
    CVector3 camera_pos;
    CDemonRenderer_getCameraOriginScaled(g_CDemonRendererPtr, &camera_pos);

    // 3. Calculate distance from camera to globe
    CVector3 delta = camera_pos - this_ptr->position;
    float dist_squared = delta.x*delta.x + delta.y*delta.y + delta.z*delta.z;

    // 4. Only render if outside globe (camera not inside)
    if (dist_squared <= this_ptr->radius_squared) {
        initCoronaBuffers();  // Clear buffers if inside
        return;
    }

    // 5. Transform and project all 62 vertices
    float scale = this_ptr->radius * (1.0f / 256.0f);  // DOUBLE_0061ec4a
    for (int i = 0; i < 62; i++) {
        CVector3i local_vertex;
        local_vertex.x = (int)round(g_GlobeVertexPositions[i].x * scale * 256.0f);  // FLOAT_0065c8c0
        local_vertex.y = (int)round(g_GlobeVertexPositions[i].y * scale * 256.0f);
        local_vertex.z = (int)round(g_GlobeVertexPositions[i].z * scale * 256.0f);

        transformAndProjectPoint(&vertex_buffer[i], &local_vertex);
    }

    // 6. Render all 84 faces
    for (int i = 0; i < 84; i++) {
        SGlobeRenderPrimitive* face = &g_GlobeFacePrimitives[i];

        // Calculate lighting intensity from normal
        float intensity = face->normal_z * this_ptr->radius;
        round(intensity);

        // Build SMRGLHeaderPrimitive on stack from face data
        // (copies normal as clip plane, vertex indices to proper offsets)

        // Render using custom scanline renderer
        CDemonRenderer_renderCustomScanline(
            g_CDemonRendererPtr,
            &stack_primitive,
            renderCoronaDepthScanline  // 0x00450320
        );
    }
}
```

### Constants Explanation

**DOUBLE_0061ec4a = 0.00390625 = 1/256**
- Initial scale down to prevent overflow
- Suggests original vertex coordinates are in a normalized space

**FLOAT_0065c8c0 = 256.0**
- Scales back up after radius multiplication
- Net effect: `vertex * (radius / 256) * 256 = vertex * radius`
- The division and multiplication by 256 likely exists for numerical precision

**Why this pattern?**
```c
// Without the 1/256 factor:
result = vertex * radius;  // Might overflow if vertex and radius are large

// With the factor:
result = (vertex * (radius / 256)) * 256;  // Intermediate result is smaller
```

### Scanline Renderer

**Function**: `core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450320`

This is passed as a function pointer to `renderCustomScanline`. It renders each scanline of the corona with depth testing against `g_CoronaDepthBuffer`.

### Memory Layout

```
0x0066f014: g_GlobeVertexPositions[62]     (744 bytes = 62 * 12)
0x0066f2fc: g_GlobeFacePrimitives[84]      (3024 bytes = 84 * 36)
0x01576fa4: g_CoronaLeftExtent[240]        (960 bytes = 240 * 4)
0x01577364: g_CoronaRightExtent[240]       (960 bytes = 240 * 4)
0x01577728: g_CoronaDepthBuffer[240][320]  (307200 bytes = 240 * 320 * 4)
```

### Geodesic Sphere Structure

- **62 vertices**: Forms an icosphere/geodesic sphere approximation
  - Vertex 0: Top pole (primitives 0-11 converge here)
  - Vertex 61: Bottom pole (primitives 72-83 converge here)
  - Vertices 1-60: Form concentric rings around the sphere

- **84 faces**:
  - Top cap: 12 triangles (primitives 0-11, type 0x03)
  - Top ring (back): 12 triangles (primitives 12-23, type 0x03)
  - Middle bands: 48 quads (primitives 24-71, type 0x04)
  - Bottom ring: 12 triangles (primitives 72-83, type 0x03)

### Usage

Called from camera rendering when processing light globes and corona effects:
- `core_dcamera.cpp_CDemonCamera_FUN_004518f0` at `0x00451bcb`

The corona creates a glowing halo effect around bright light sources in the game.
