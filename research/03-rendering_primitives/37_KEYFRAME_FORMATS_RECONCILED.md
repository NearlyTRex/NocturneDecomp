# Keyframe File Formats - Complete Reconciliation

## There Are TWO Different Systems!

### System 1: CKeyFramedModel (Runtime C++ Class)
**File Format**: Binary .KFM files (type 0x04 or similar, NOT type 0x20)
**Class**: `CKeyFramedModel` (22232 bytes)
**Purpose**: Main game runtime model system

This is the primary model format used by the game engine during gameplay.

**Structure**:
```c
typedef struct CKeyFramedModel {
    char model_filename[120];              // 0x00
    char other_filename[120];              // 0x78
    char field_240[16];                    // 0xF0
    int frame_count;                       // 0x100
    int vertex_count;                      // 0x104
    CVector3i** vertex_normal_list;        // 0x108
    CVector3i** vertex_list;               // 0x10C
    int poly_count;                        // 0x110
    CKeyFramedModelPolyVertexList** poly_vert_list; // 0x114
    int* poly_texture_index_list;          // 0x118
    char* env_map_opac_list;               // 0x11C
    int texture_count;                     // 0x120
    SMRGLTextureExtended texture_list[300]; // 0x124
    int part_count;                        // 0x5584
    CKeyFramedModelPart part_list[30];     // 0x5588
    CVector3f bounds_min;                  // 0x5678
    CVector3f bounds_max;                  // 0x5684
    // ... more fields
} CKeyFramedModel; // 22232 bytes
```

**Binary .KFM files** contain serialized model data that gets loaded into this class.

### System 2: SMRGLKeyframeModel (MRGL Animation System)
**File Format**: Binary MRGL files (type 0x20 + type 2 vertex blocks)
**Class**: `SMRGLKeyframeModel` (344 bytes)
**Purpose**: Specialized animation/interpolation system

This is a DIFFERENT system used for animated MRGL models!

**Structure**:
```c
typedef struct SMRGLKeyframeModel {
    int type;                                // 0x00 - always 0x20
    int size;                                // 0x04 - always 0x158 (344 bytes)
    int keyframe_count;                      // 0x08
    int cycle_length;                        // 0x0C
    int current_position;                    // 0x10
    SMRGLHeaderExtended* base_keyframes;     // 0x14
    char filenames[16][16];                  // 0x18
    SMRGLHeaderExtended* loaded_frames[16];  // 0x118
} SMRGLKeyframeModel; // 344 bytes
```

Each referenced frame file contains:
1. Type 2 vertex block (vertices at +0x0C)
2. Type 0x18/0x19/0x29 surface blocks
3. Null terminator

## Text .KFM Files (Tool Format Only)

The text .KFM files in `example_files/` are **NOT** loaded by the game!

They are source files for content creation tools that get converted to binary.

Example header from text .KFM:
```
// .KFM version
8
// vertexCount,polyCount,textureCount,partCount,frameCount
26,24,1,1,1
// useCollisionListFlag
0
// vertex list: x,y,z
42,319,0
42,277,159
...
```

The game loader specifically **rejects** files with '.T' as second char in extension:
```c
if (toupper(filename[extension+1]) == 'T') {
    displayErrorAndQuit("modelStruct not supported");
}
```

## How They Relate

**CKeyFramedModel** (type 0x04 binary):
- Primary model format for game objects
- Contains all geometry, textures, collision data
- Frame animation is handled by swapping vertex arrays
- Files loaded via `loadModelFile()` -> type validation (0x14 or 0x20)

**SMRGLKeyframeModel** (type 0x20 MRGL chain):
- Specialized animation system
- Interpolates between keyframe vertex positions
- Each frame is a separate MRGL chain (type 2 + surfaces)
- Used for smooth morphing animations
- Files loaded via `loadModelFile()` for control struct
- Individual frames loaded via `loadModelChunk()`

## When Type 0x20 is Used

Looking at `initializeMRGLModel`:
```c
void initializeMRGLModel(SMRGLHeaderExtended* mrgl) {
    if (mrgl->type == 0x20) {
        // This is an MRGL keyframe animation!
        loadAndInterpolateKeyframes((SMRGLKeyframeModel*)mrgl);
        loadMRGLTextures(mrgl[1].child_count); // Load textures from frame data
    } else {
        // Regular model
        loadMRGLTextures(mrgl);
    }
}
```

So type 0x20 is specifically for **MRGL-based animated models**, not the main CKeyFramedModel system!

## Summary

1. **Text .KFM** → Tool format only, NOT loaded by game
2. **Binary .KFM** (type 0x04) → CKeyFramedModel, main game model format
3. **Binary .MRGL** (type 0x20) → SMRGLKeyframeModel, animation interpolation system

The analysis I did was correct for **SMRGLKeyframeModel (type 0x20)**, which is a separate specialized system from the main **CKeyFramedModel** runtime class!

## Previous Knowledge Still Valid

Our previous knowledge about CKeyFramedModel and DFM loading is still correct - that's a DIFFERENT system. The type 0x20 MRGL keyframe system we just analyzed is an additional animation mechanism, not a replacement.

Both systems exist in the codebase and serve different purposes:
- **CKeyFramedModel**: Full-featured game model with all data
- **SMRGLKeyframeModel**: Lightweight MRGL animation interpolator
