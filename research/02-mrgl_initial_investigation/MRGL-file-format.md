# MRGL File Format Analysis

## Overview

MRGL (Model Resource Graphics Language) is the binary file format used by Nocturne for storing 3D models, textures, animations, and rendering commands. The format uses a **block-based sequential structure** where data is organized as a chain of typed blocks in memory.

## Core Architecture

### Block-Based Structure

MRGL files consist of sequentially-packed blocks in memory, each with a common header structure:

```c
typedef struct MRGLHeader {
    int type_id;        // Block type discriminator (0x00-0x42)
    int size;           // Total size of this block in bytes
    // ... type-specific data follows
} MRGLHeader;
```

### Block Chain Navigation

The format uses **size-based navigation** rather than pointers:

```c
MRGLHeader* current_block = (MRGLHeader*)loaded_file_buffer;
while (current_block->type_id != 0x00) {
    // Process this block based on type
    processBlock(current_block);

    // Jump to next block using size
    current_block = (MRGLHeader*)((char*)current_block + current_block->size);
}
```

**Key Benefits:**
- **Memory efficient**: No pointer overhead
- **Cache-friendly**: Sequential memory access
- **Simple**: Pointer arithmetic for navigation
- **Portable**: No address fixups needed

## File Loading Process

### 1. File Loading (`loadModelFile_FUN_00527ec0`)

```c
MRGLHeader* loadModelFile(char* filename) {
    // 1. Get file size
    size_t file_size = getFileSize("models", filename);

    // 2. Allocate one contiguous memory block
    MRGLHeader* buffer = malloc(file_size);

    // 3. Read entire file into memory at once
    fread(buffer, 1, file_size, file);

    // 4. Validate MRGL magic bytes (0x14 or 0x20)
    if (buffer->type_id != 0x14 && buffer->type_id != 0x20) {
        error("Invalid model");
    }

    return buffer; // Return pointer to start of block chain
}
```

### 2. Model Initialization (`initializeMRGLModel_FUN_00528940`)

The system uses **polymorphic dispatch** based on the first block's type:

```c
void initializeMRGLModel(MRGLHeader* mrgl) {
    if (mrgl->type_id == 0x20) {
        // Path 1: Keyframe Models
        // Process animation data first
        loadAndInterpolateKeyframes((MRGLKeyframeModel*)mrgl);

        // Then process textures from the loaded keyframe data
        MRGLKeyframeModel* kf_model = (MRGLKeyframeModel*)mrgl;
        loadMRGLTextures(kf_model->base_keyframes);
    } else {
        // Path 2: Static Models
        // Process textures directly from this block
        loadMRGLTextures(mrgl);
    }
}
```

### 3. Block Chain Processing (`loadMRGLTextures_FUN_00528870`)

Iterates through the entire block chain, handling each block by type:

```c
void loadMRGLTextures(MRGLHeader* blocks) {
    MRGLHeader* current = blocks;

    while (current->type_id != 0x00) {
        switch (current->type_id) {
            case 0x0d:
            case 0x40:
                // Load single texture
                ensureTextureLoaded((STextureInfo*)current);
                break;

            case 0x1d:
                // Load texture list (multiple textures in one block)
                processTextureList((STextureList*)current);
                break;

            case 0x26:
                // Unsupported legacy format
                modelStructNotSupported();
                return;
        }

        // Navigate to next block
        current = (MRGLHeader*)((char*)current + getMRGLSize(current));
    }
}
```

## MRGL Type System

### Complete Type ID Reference

| Type ID | Size Formula | Fixed Size | Description | Usage |
|---------|-------------|------------|-------------|--------|
| **0x00** | `4` | 4 bytes | **Block Terminator** | End of block chain |
| **0x01** | `0x10` | 16 bytes | **Header Block** | File metadata |
| **0x02** | `child_count * 0xc + 0xc` | Variable | **Vertex Transform** | Transform vertex batch |
| **0x03** | `child_count * 0xc + 0xc` | Variable | **Vertex Lighting** | Apply lighting to vertices |
| **0x04** | `child_count * 8 + 0xc` | Variable | **Index Block** | Vertex indices |
| **0x05-0x08** | `element_count * 4 + 0x18` | Variable | **Data Arrays** | Generic data storage |
| **0x09** | `0x20` | 32 bytes | **Fixed Block** | Specific data structure |
| **0x0a,0x0b** | `8` | 8 bytes | **Simple Headers** | Minimal blocks |
| **0x0c** | `0x1c` | 28 bytes | **Medium Block** | Fixed structure |
| **0x0d** | `0x18` | 24 bytes | **Texture Block** | Single texture (STextureInfo) |
| **0x0e** | `element_count * 0xc + 0x18` | Variable | **Rendering Primitive** | Complex geometry |
| **0x0f** | `element_count * 4 + 0x18` | Variable | **Data Array** | 4-byte elements |
| **0x10** | `0x14` | 20 bytes | **Small Block** | Fixed structure |
| **0x11** | `element_count * 0xc + 0x18` | Variable | **Rendering Primitive** | Complex geometry |
| **0x12** | `8` | 8 bytes | **Simple Header** | Minimal block |
| **0x14** | `8` | 8 bytes | **Static Model Marker** | Non-keyframe model |
| **0x15** | `element_count * 4 + 0x18` | Variable | **Data Array** | 4-byte elements |
| **0x16** | `element_count * 4 + 8` | Variable | **Compact Array** | Smaller header |
| **0x17** | `0xc` | 12 bytes | **Tiny Block** | Minimal structure |
| **0x18** | `element_count * 0xc + 0x18` | Variable | **Full-Featured Primitive** | Complex rendering |
| **0x19-0x1b** | `element_count * 4 + 0x18` | Variable | **Data Arrays** | 4-byte elements |
| **0x1d** | `child_count * 0x20 + 0x1c` | Variable | **Texture List** | Multiple textures (32 bytes each) |
| **0x1e** | `element_count * 0xc + 0x18` | Variable | **Rendering Primitive** | Complex geometry |
| **0x1f** | `child_count * 4 + 0xc` | Variable | **Pointer Array** | 4-byte pointers |
| **0x20** | `0x158` | 344 bytes | **Keyframe Model** | MRGLKeyframeModel structure |
| **0x21** | `element_count * 4 + 0x18` | Variable | **Data Array** | 4-byte elements |
| **0x22** | `element_count * 0xc + 0x18` | Variable | **Rendering Primitive** | Complex geometry |
| **0x24-0x25** | `element_count * 4 + 0x18` | Variable | **Data Arrays** | 4-byte elements |
| **0x26** | `0x3d60` | 15,712 bytes | **Legacy Model** | Unsupported format |
| **0x29** | `element_count * 0xc + 0x18` | Variable | **Clip Plane** | Visibility culling |
| **0x2e-0x2f** | `element_count * 4 + 0x18` | Variable | **Data Arrays** | 4-byte elements |
| **0x33-0x34** | `element_count * 0xc + 0x18` | Variable | **Rendering Primitives** | Complex geometry |
| **0x38** | `element_count * 0xc + 0x18` | Variable | **Rendering Primitive** | Complex geometry |
| **0x3b** | `element_count * 4 + 0x18` | Variable | **Data Array** | 4-byte elements |
| **0x3d** | `8` | 8 bytes | **Simple Header** | Minimal block |
| **0x3e** | `element_count * 0xc + 0x18` | Variable | **Rendering Primitive** | Complex geometry |
| **0x40** | `0x48` | 72 bytes | **Large Texture** | Extended texture format |
| **0x41** | `element_count * 0xc + 0x18` | Variable | **Premium Polygon** | High-quality rendering |
| **0x42** | `element_count * 0xc + 0x18` | Variable | **Rendering Primitive** | Complex geometry |

### Structure Patterns

**Header Sizes:**
- **24 bytes (0x18)**: Complex blocks with rendering primitives
- **12 bytes (0x0c)**: Medium blocks with basic data
- **8 bytes (0x08)**: Minimal blocks with just type/size

**Element Sizes:**
- **4 bytes**: Simple data, indices, pointers
- **8 bytes**: Index pairs, small structures
- **12 bytes**: Vertices, complex primitives
- **32 bytes**: Texture entries in lists

## Polymorphic Dispatch System

### Common Header Pattern

All MRGL blocks share the same header structure, enabling **safe casting**:

```c
// All these structures start with the same header
typedef struct MRGLHeader    { int type; int size; ... } MRGLHeader;
typedef struct STextureInfo  { int type; int size; ... } STextureInfo;
typedef struct SPrimitive    { int type; int size; ... } SPrimitive;
typedef struct MRGLKeyframeModel { int type; int size; ... } MRGLKeyframeModel;
```

### Type-Safe Casting

Functions can safely cast between types to access common header fields:

```c
void processAnyBlock(MRGLHeader* block) {
    switch (block->type) {
        case 0x0d:
        case 0x40:
            // Safe to cast to texture type
            ensureTextureLoaded((STextureInfo*)block);
            break;
        case 0x29:
        case 0x41:
            // Safe to cast to primitive type
            renderPrimitive((SPrimitive*)block);
            break;
        case 0x20:
            // Safe to cast to keyframe type
            processKeyframes((MRGLKeyframeModel*)block);
            break;
    }
}
```

## Key Data Structures

### MRGLKeyframeModel (Type 0x20)

```c
typedef struct MRGLKeyframeModel {
    int type;                           // 0x20 - Type identifier
    int size;                           // 0x158 (344 bytes)
    int keyframe_count;                 // Number of keyframes
    int cycle_length;                   // Animation cycle duration
    int current_position;               // Current animation position
    MRGLModel_Keyframe* base_keyframes; // Pointer to loaded keyframe data
    char filenames[16][16];             // Keyframe file names
    MRGLModel_Keyframe* loaded_frames[16]; // Pointers to loaded frames
} MRGLKeyframeModel;
```

### STextureInfo (Type 0x0d, 0x40)

```c
typedef struct STextureInfo {
    int type;               // 0x0d or 0x40
    int size;               // Block size
    int texture_index;      // Index in texture cache
    char texture_name[16];  // Texture filename
    void* texture_data;     // Pointer to loaded texture
} STextureInfo;
```

## MRGL Block Processing System

The MRGL system uses a sophisticated **dual-dispatch architecture** for processing blocks:

### 1. Direct Dispatch (`dispatchMRGLToRenderer_FUN_00407aa0`)

Handles immediate rendering operations with switch-based dispatch:

```c
void dispatchMRGLToRenderer(MRGLHeader* cmd) {
    MRGLHeader* current = cmd;

    while (current->type_id != 0x00) {
        switch (current->type_id) {
            case 0x02: transformAndBufferVertices((SVertexBatch*)current); break;
            case 0x03: processVertexLighting((SVertexBatch*)current); break;
            case 0x0d: ensureTextureLoaded((STextureInfo*)current); break;
            case 0x18: renderPrimitiveFullFeatured((SPrimitive*)current); break;
            case 0x29: checkClipPlane((SClipPlane*)current); break;
            case 0x41: renderPolygonPremiumQuality((SPrimitive*)current); break;
            default: error("Unknown primitive type");
        }

        // Navigate to next block using size
        current = (MRGLHeader*)((char*)current + getMRGLSize(current));
    }
}
```

### 2. Function Table Dispatch (`dispatchMRGLBlockChain_FUN_00407890`)

Uses a **function table** for complex processing pipelines:

```c
typedef MRGLHeader* (*MRGLBlockHandler)(MRGLHeader* block);
MRGLBlockHandler g_MRGLBlockHandlerTable[67];

void dispatchMRGLBlockChain(MRGLHeader* chain) {
    MRGLHeader* current = chain;

    while (current->type_id != 0x00) {
        // Bounds check: types 1-66 supported
        if (current->type_id < 1 || current->type_id > 0x42) {
            error("Bad block type");
        }

        // Call specialized handler - returns next block to process
        current = (*g_MRGLBlockHandlerTable[current->type_id])(current);
    }
}
```

### Handler Function Pattern

Each function in `g_MRGLBlockHandlerTable` follows a standardized pattern:

```c
// Example handler signatures (input type shows expected block, output is always MRGLHeader*)
MRGLHeader* ensureTextureLoaded(STextureInfo* texture);
MRGLHeader* interpolateKeyframes(MRGLKeyframeModel* model);
MRGLHeader* transformVertices(SVertexBatch* vertices);
MRGLHeader* renderPolygon(SPrimitive* primitive);
MRGLHeader* badMRGLStruct(SPrimitive* primitive);  // Error handler

// Universal pattern:
MRGLHeader* handlerFunction(SpecificBlockType* block) {
    // 1. Process the block (type-specific operation)
    processMyBlockType(block);

    // 2. Calculate and return pointer to next block
    return calculateNextBlock(block);  // Various calculation methods
}
```

### Next Block Calculation Methods

Handler functions use different strategies to find the next block:

1. **Field Offset Navigation**:
   ```c
   return (MRGLHeader*)&block->some_field;  // Next block at field offset
   ```

2. **Size-Based Navigation**:
   ```c
   return (MRGLHeader*)((char*)block + getMRGLSize(block));  // Standard size jump
   ```

3. **Variable Size Navigation**:
   ```c
   return (MRGLHeader*)((char*)block + calculated_size);  // Custom size calculation
   ```

4. **Same Block (Error Cases)**:
   ```c
   return (MRGLHeader*)block;  // Stay on current block
   ```

### Function Table Contents

The `g_MRGLBlockHandlerTable` contains diverse function types, all unified by the common return pattern:

| Index | Function Type | Example |
|-------|---------------|---------|
| **Rendering** | Polygon/primitive rendering | `renderPolygonPremiumQuality` |
| **Resources** | Texture/asset loading | `ensureTextureLoaded` |
| **Animation** | Keyframe processing | `interpolateCubicKeyframes` |
| **Geometry** | Vertex operations | `transformAndBufferVertices` |
| **Scene Setup** | Camera/coordinates | `setRelativeCoord` |
| **Error Handling** | Invalid blocks | `badMRGLStruct` |

This design enables a **complete graphics pipeline** to be expressed as a sequence of MRGL blocks, each dispatched to specialized handlers while maintaining efficient block-to-block navigation.
```

## Memory Management

### Single Allocation Strategy

MRGL files use a **single malloc()** for the entire file:

- **Allocation**: One large block for entire file
- **Navigation**: Pointer arithmetic through blocks
- **Deallocation**: Single free() call
- **Benefits**: No fragmentation, excellent cache locality

### Block Size Calculation

The `getMRGLSize_FUN_00528700` function uses a **jump table** for O(1) size calculation:

```c
int getMRGLSize(MRGLHeader* header) {
    switch (header->type_id) {
        case 0x00: return 4;                               // Terminator
        case 0x0d: return 0x18;                            // Texture block
        case 0x20: return 0x158;                           // Keyframe model
        case 0x02: return header->child_count * 0xc + 0xc; // Variable size
        // ... 40+ more cases
        default: error("Unknown MRGL type");
    }
}
```

## File Format Evolution

The MRGL format shows evidence of **evolutionary development**:

1. **Legacy Support**: Type 0x26 (15KB blocks) marked as "unsupported"
2. **Texture Evolution**: Types 0x0d (24 bytes) vs 0x40 (72 bytes)
3. **Rendering Complexity**: Simple primitives vs full-featured (0x18)
4. **Animation**: Static models (0x14) vs keyframe models (0x20)

This suggests the format grew organically as the engine's capabilities expanded.

## Usage Patterns

### Model Loading Flow

1. **File Load**: Read entire MRGL file into memory
2. **Type Check**: Examine first block type (0x14 static vs 0x20 keyframe)
3. **Specialized Processing**:
   - Static: Direct texture loading
   - Keyframe: Animation setup → texture loading
4. **Block Iteration**: Process remaining blocks in sequence
5. **Rendering**: Dispatch blocks to appropriate renderers

### Performance Characteristics

- **Memory**: Single allocation, minimal overhead
- **CPU**: Sequential access, good cache performance
- **I/O**: Single file read, no seeking required
- **Parsing**: O(1) size calculation, linear block traversal

The MRGL format represents a well-engineered solution for 1990s game development constraints, balancing flexibility with performance.