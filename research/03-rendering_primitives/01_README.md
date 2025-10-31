# KFM (KeyFramed Model) Structure Analysis

This directory contains corrected structure definitions for Nocturne's keyframed model system, based on detailed assembly analysis and file I/O inspection.

## Confirmed Classes (Watcom Type Info)

- **CKeyFramedModel**: Main model data container (22,232 bytes)
- **CKeyFramedModelInstance**: Lightweight reference object (380 bytes)

## Key Findings

### 1. Field Order Correction in CKeyFramedModel

The original Ghidra analysis had incorrect field mappings in the allocate function. The correct mapping from assembly analysis (00477bf0):

```
Parameter Order:        Storage Offset:
param2 (vertex_count)   → 0x104
param3 (poly_count)     → 0x110
param4 (texture_count)  → 0x120
param5 (part_count)     → 0x5584
param6 (frame_count)    → 0x100
```

Ghidra's decompiler incorrectly shuffled these parameter names, making the pseudocode misleading.

### 2. Texture List Structure

The texture list at offset 0x124 uses **STexture** (24 bytes) in the binary file format:
- File reads 0x18 (24 bytes) per texture
- Runtime structure is 0x48 (72 bytes) per texture
- The 48-byte gap likely contains runtime state (initialized flags, cached pointers, etc.)

**STexture structure (24 bytes):**
```c
struct STexture {
    int type;              // 0x0
    int texture_index;     // 0x4
    char texture_name[16]; // 0x8
};
```

### 3. Binary File Format

**24-byte KFM header:**
```
Offset  Type   Field
0x00    int    version (3-4)
0x04    int    vertexCount
0x08    int    polyCount
0x0C    int    textureCount
0x10    int    partCount
0x14    int    frameCount
```

**File structure:**
1. Header (24 bytes)
2. Optional collision flag (4 bytes, version >= 4)
3. Vertex data (vertexCount * frameCount * 12 bytes)
4. Polygon vertex lists (polyCount * 72 bytes)
5. Polygon texture indices (polyCount * 4 bytes)
6. Texture list (textureCount * 24 bytes as STexture)
7. Part list (partCount * 8 bytes)

### 4. Polygon Structure

**CKeyFramedModelPolyVertexList (72 bytes):**
```c
struct CKeyFramedModelPolyVertexList {
    int unknown_00;              // 0x0
    int vertex_count;            // 0x4 (typically 3-4)
    char padding[16];            // 0x8
    CKeyFramedModelPolyVertex vertList[4]; // 0x18 (4 * 12 = 48 bytes)
};
```

**CKeyFramedModelPolyVertex (12 bytes):**
```c
struct CKeyFramedModelPolyVertex {
    int vertex_index;  // 0x0 - index into vertex list
    int texture_u;     // 0x4 - U coordinate (fixed-point)
    int texture_v;     // 0x8 - V coordinate (fixed-point)
};
```

### 5. Part System

Parts divide the model into logical sections (max 30):
```c
struct Part {
    int vertex_count;  // Number of vertices in this part
    int poly_count;    // Number of polygons in this part
};
```

Used for:
- Level of detail (LOD)
- Conditional rendering (hide/show parts)
- Damage states
- Animation (moving parts)

## Text File Format

Example from 32FORD.KFM:
```
// .KFM version
8
// vertexCount,polyCount,textureCount,partCount,frameCount
473,762,1,1,1
// useCollisionListFlag
0
// transparentPixelFlag
0
// disableBackfaceCulling
0
// envMapListFlag
0
// vertex list: x,y,z
-441,-596,-739
-716,-633,-739
...
```

## Analysis Methods Used

1. **Assembly Analysis**: Traced exact memory offsets and operations
2. **File I/O Analysis**: Examined read/write operations to understand format
3. **Cross-referencing**: Verified offsets across multiple functions
4. **Example Files**: Validated against real KFM files in example_files/

## Remaining Unknowns

### CKeyFramedModel
- **0x0F0-0x0FF** (16 bytes): Purpose unknown
- **Texture runtime data** (0x124 + 24 to 0x124 + 72 per texture): Exact layout unknown
- **0x56B0-0x56D7** (40 bytes): Collision workspace - exact usage unclear

### CKeyFramedModelInstance
- **0x0DC-0x177** (156 bytes): Instance state data needs investigation
  - Likely contains: current frame, animation time, transforms, etc.
  - Would benefit from analysis of rendering/animation functions

## Related Files

- `annotations/nocedit.exe/pseudocode/src/core/dmodel.cpp/*` - Original analysis
- `annotations/nocedit.exe/pseudocode/include/Nocturne/Struct/Game/STexture.h`
- `example_files/*.KFM` - Test data
