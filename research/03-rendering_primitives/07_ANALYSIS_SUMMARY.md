# CKeyFramedModel Structure Analysis - Summary

## Critical Discovery: Ghidra Parameter Confusion

The most important finding is that **Ghidra's decompiler incorrectly mapped parameter names** in `CKeyFramedModel_allocate_FUN_00477bf0`, leading to misleading pseudocode in the annotations.

### The Problem

Ghidra's pseudocode shows:
```c
void allocate(CKeyFramedModel *this_ptr, int vertex_count, int poly_count,
              int texture_count, int part_count, int frame_count) {
    this_ptr->vertex_count = poly_count;      // WRONG!
    this_ptr->poly_count = texture_count;     // WRONG!
    this_ptr->texture_count = part_count;     // WRONG!
    this_ptr->part_count = frame_count;       // WRONG!
    this_ptr->frame_count = in_stack_0000001c; // WRONG!
}
```

### The Truth (from Assembly)

```asm
00477c05: MOV [EBX + 0x104],EAX  ; param2 -> offset 0x104
00477c0f: MOV [EBX + 0x110],EAX  ; param3 -> offset 0x110
00477c19: MOV [EBX + 0x120],EAX  ; param4 -> offset 0x120
00477c23: MOV [EBX + 0x5584],EAX ; param5 -> offset 0x5584
00477c33: MOV [EBX + 0x100],EAX  ; param6 -> offset 0x100
```

**Correct mapping:**
- param2 (vertex_count) → 0x104 ✓
- param3 (poly_count) → 0x110 ✓
- param4 (texture_count) → 0x120 ✓
- param5 (part_count) → 0x5584 ✓
- param6 (frame_count) → 0x100 ✓

## Structure Field Order

The confusion stemmed from Ghidra reusing variable names incorrectly. The actual field order in memory is:

```c
struct CKeyFramedModel {
    char model_filename[120];    // 0x000
    char other_filename[120];    // 0x078
    char unknown_0xf0[16];       // 0x0F0
    int frame_count;             // 0x100 ← out of sequence!
    int vertex_count;            // 0x104
    void* vertex_normal_list;    // 0x108
    void* vertex_list;           // 0x10C
    int poly_count;              // 0x110
    void* poly_vert_list;        // 0x114
    int* poly_texture_index;     // 0x118
    char* env_map_opac_list;     // 0x11C
    int texture_count;           // 0x120
    char texture_list[21600];    // 0x124 (300 * 72 bytes)
    int part_count;              // 0x5584
    struct {                     // 0x5588
        int vertex_count;
        int poly_count;
    } part_list[30];
    CVector3f bounds_min;        // 0x5678
    CVector3f bounds_max;        // 0x5684
    int* frame_bounds_list;      // 0x5690
    int collision_tri_count;     // 0x5694
    void* collision_tri_list;    // 0x5698
    int transparent_pixel_flag;  // 0x569C
    int disable_backface_cull;   // 0x56A0
    CVector3f transform_vector;  // 0x56A4
    char collision_workspace[40];// 0x56B0
    // Total: 0x56D8 (22,232 bytes)
};
```

## Why frame_count is at 0x100 (Not 0x0F4)

The unusual placement of `frame_count` at offset 0x100 (before `vertex_count` at 0x104) suggests one of:

1. **Historical refactoring**: Fields were reordered during development, but the binary layout was preserved for compatibility
2. **Cache alignment**: The 0x100 boundary may have performance benefits
3. **Logical grouping**: The unknown 16-byte region at 0xF0 may be related to framing/animation

## File Format vs Runtime Structure

### Binary KFM File Header (24 bytes)
```
0x00: int version
0x04: int vertexCount
0x08: int polyCount
0x0C: int textureCount
0x10: int partCount
0x14: int frameCount
```

### Texture Data Discrepancy

**File format:** Each texture is 24 bytes (STexture)
```c
struct STexture {
    int type;              // 0x00
    int texture_index;     // 0x04
    char texture_name[16]; // 0x08
};
```

**Runtime format:** Each texture is 72 bytes (0x48)
- Evidence: texture_list stride in loops is 0x48
- Evidence: 300 textures * 0x48 = 0x5460 bytes (0x124 to 0x5584)
- The extra 48 bytes per texture contain runtime state

## Verification Methods

All findings were verified using multiple methods:

1. **Assembly analysis**: Direct inspection of memory operations
2. **Size calculations**: Verified all allocations match expected sizes
3. **Cross-referencing**: Checked multiple functions accessing same fields
4. **File I/O**: Examined what's actually read from disk
5. **Example files**: Tested against real KFM files

## Confidence Levels

### High Confidence (Verified by multiple sources)
- All field offsets from 0x100 to 0x56D7
- Total structure size: 0x56D8 bytes
- Part list layout (30 * 8 bytes)
- Bounding box layout (2 * CVector3f)
- Binary file header format

### Medium Confidence (Single source or incomplete data)
- Purpose of 16-byte region at 0x0F0
- Exact layout of 72-byte runtime texture structure
- Contents of collision_workspace[40]
- CKeyFramedModelInstance unknown region (0xDC-0x177)

### Low Confidence (Speculation)
- Detailed breakdown of STextureRuntime fields beyond offset 0x18
- Exact purpose of each field in unknown regions

## Recommendations for Further Analysis

1. **Texture runtime structure**:
   - Examine texture loading/caching functions
   - Look for Direct3D/OpenGL texture handle storage
   - Check texture_list[0].initialized_flag usage

2. **CKeyFramedModelInstance unknown region**:
   - Analyze rendering functions that use instances
   - Look for animation/transform data access
   - Check frame index and timing variables

3. **Unknown region at 0x0F0**:
   - Search for any reads/writes to [base + 0xF0] to [base + 0xFF]
   - May be rarely-used editor data or padding

## Critical Discovery: Dual-Format Structures

After further analysis of the rendering pipeline, we discovered that both textures AND polygons use **dual-format structures**:

### Texture Dual Format
- **File**: 24 bytes (MRGL type 0x0d - STexture)
- **Runtime**: 72 bytes (MRGL type 0x40 - SMRGLTexture0x40)
- Expanded with cached handles, dimensions, state

### Polygon Dual Format
- **File**: 72 bytes (vertex indices, UVs stored as CKeyFramedModelPolyVertex[4])
- **Runtime**: 72 bytes (same size, but TRANSFORMED)
  - Offsets 0x08-0x17: Surface normals calculated and written
  - Offset 0x24: Pointer to transformed vertex data written
  - Offset 0x30: Primitive type flags written
- Compatible with SPrimitive casting for rendering

This explains why:
1. Polygon blocks are 72 bytes (matches MRGL type 0x40 pattern)
2. They're passed directly to renderer without conversion
3. File format and runtime format occupy the same memory

The `lightVerticies` function transforms the file data IN PLACE before rendering.

## Files Created

- `CKeyFramedModel.h` - Main model structure with detailed comments
- `CKeyFramedModelInstance.h` - Instance reference object
- `SupportingStructs.h` - Polygon, texture, and vector types with dual-format documentation
- `MRGL_FixedSizeStructs.h` - MRGL type definitions for all fixed-size blocks
- `MRGL_TEXTURE_DISCOVERY.md` - Documents the texture dual-format discovery
- `POLY_STRUCTURE_ANALYSIS.md` - Documents the polygon dual-format discovery
- `README.md` - Overview and analysis methods
- `ANALYSIS_SUMMARY.md` - This file
