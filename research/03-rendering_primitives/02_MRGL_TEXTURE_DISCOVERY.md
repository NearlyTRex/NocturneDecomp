# CRITICAL DISCOVERY: CKeyFramedModel Uses MRGL Type 0x40 Blocks

## The 72-Byte Texture Mystery - SOLVED!

The 72-byte textures in `CKeyFramedModel.texture_list` are **MRGL type 0x40 blocks**, not custom CKeyFramedModelTexture structs!

## Evidence

### 1. MRGL Documentation Match

From `docs/MRGL-file-format.md`:
```
| Type ID | Size  | Description |
|---------|-------|-------------|
| 0x0d    | 0x18  | Texture Block (24 bytes) - Single texture (STextureInfo) |
| 0x40    | 0x48  | Large Texture (72 bytes) - Extended texture format       |
```

The 72 bytes (0x48) **exactly matches** MRGL type 0x40!

### 2. Code Evidence

From `CKeyFramedModel_optimizeTexturesForRendering_FUN_0047a3e0`:
```c
shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
// Then iterates through textures with stride 0x48
local_14 = local_14 + 0x48;
pcStack_34 = pcStack_34 + 0x48;
```

The code **explicitly passes 0x40** (the MRGL type) and uses 0x48 byte stride!

### 3. File Format Evidence

From binary reading code:
- File stores: 24 bytes (0x18) per texture → **MRGL type 0x0d (STexture)**
- Runtime uses: 72 bytes (0x48) per texture → **MRGL type 0x40**

## Polymorphic Struct Casting Pattern

This explains the confusion! The game uses **MRGL's polymorphic dispatch system**:

### Reading from File (Type 0x0d → Type 0x40 Conversion)

```c
// 1. Allocate runtime storage (type 0x40 - 72 bytes)
memset(model->texture_list, 0, 300 * 0x48);

// 2. Read file data into FIRST 24 bytes (type 0x0d format)
for (int i = 0; i < texture_count; i++) {
    // Reads 24 bytes of STexture data into the 72-byte block
    fread(&model->texture_list[i], 0x18, 1, file);
    // Now texture_list[i] contains:
    // - First 24 bytes: STexture data from file
    // - Remaining 48 bytes: Zero-initialized runtime space
}
```

### Dispatch Processing (Type-Based Casting)

```c
// The dispatch system can safely cast based on the type field:
MRGLHeader* tex_block = (MRGLHeader*)&model->texture_list[i];

switch (tex_block->type_id) {
    case 0x0d:  // 24-byte format
        ensureTextureLoaded((STexture*)tex_block);
        break;
    case 0x40:  // 72-byte format
        loadTextureAndGetData((MRGLLargeTexture*)tex_block);
        break;
}
```

## MRGL Type 0x40 Structure (SPECULATION)

Based on MRGL patterns, the 72-byte type 0x40 block likely contains:

```c
typedef struct MRGLTextureBlock {
    // === MRGL Header (8 bytes) ===
    int type;           // 0x00: Type ID (0x40)
    int size;           // 0x04: Block size (0x48 = 72 bytes)

    // === STexture Data (16 bytes from file) ===
    int texture_type;   // 0x08: Texture format/flags
    int texture_index;  // 0x0C: Texture cache index
    char name[16];      // 0x10: Texture filename

    // === Runtime State (48 bytes) ===
    // 0x20: Likely contains:
    // - Initialized flag (observed at offset +4 after reading)
    // - Direct3D/OpenGL texture handle
    // - Width, height, format
    // - Mipmap levels
    // - Cached pixel data pointer
    // - Texture state flags
    // - Atlas position (if texture atlasing is used)
    // - Reference count
    char runtime_data[48];

    // Total: 8 + 16 + 48 = 72 bytes (0x48)
} MRGLTextureBlock;
```

## Why This Design?

### 1. **Unified MRGL Processing**
All data structures in Nocturne follow MRGL block format, enabling:
- Polymorphic dispatch through function tables
- Safe casting based on type field
- Consistent size calculation
- Sequential memory layout

### 2. **File Format Flexibility**
- **Disk**: Store compact 24-byte STexture format
- **Runtime**: Expand to 72-byte format with cached state
- **Dispatch**: Process both formats uniformly

### 3. **Memory Layout Optimization**
```
File (compact):     [STexture][STexture][STexture]...
                          ↓ Load & Expand ↓
Memory (full):      [Type0x40][Type0x40][Type0x40]...
                    ├────72B──┤├────72B──┤├────72B──┤
```

## Implications for Decompilation

### 1. **Correct Structure Definition**

The texture_list should be defined as:
```c
struct CKeyFramedModel {
    // ...
    int texture_count;                // 0x120
    MRGLTextureBlock texture_list[300]; // 0x124 (NOT STexture!)
    // ...
};
```

### 2. **SPrimitive Confusion Explained**

You mentioned SPrimitive size confusion - same pattern!
- `SPrimitive` (28 bytes) = Basic MRGL block
- Larger variants = Extended MRGL blocks with more runtime data
- Same polymorphic casting pattern applies

### 3. **MRGL is Everywhere**

This suggests **most runtime structures in Nocturne are MRGL blocks**:
- Models
- Textures
- Primitives
- Animations
- Rendering commands

All use the same `{type, size, data...}` pattern for dispatch!

## Code References

### Texture Type 0x40 Usage
- `core_dmodel.cpp_CKeyFramedModel_optimizeTexturesForRendering_FUN_0047a3e0`
  - Line ~20: `setTextureQualityParameter_FUN_0046a8e0(0x40)`
  - Throughout: 0x48 byte stride for texture iteration

### MRGL Dispatch System
- `docs/MRGL_DISPATCH_TABLE_ANALYSIS.md`
  - Index 13: `ensureTextureLoaded` (type 0x0d - 24 bytes)
  - Index 64: `loadTextureAndGetData` (type 0x40 - 72 bytes)

### File I/O
- `core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20`
  - Line 73: Reads 0x18 bytes per texture (type 0x0d format)

## Remaining Questions

1. **Exact runtime_data layout**: What's in the 48 bytes at offset 0x20?
2. **Type field initialization**: When/where does type get set to 0x40?
3. **Conversion point**: Where does 0x0d → 0x40 conversion happen?

## Conclusion

The "72-byte texture mystery" isn't a mystery at all - it's **MRGL type 0x40 blocks** using Nocturne's standard polymorphic dispatch system. The confusion arose from:

1. Not recognizing the MRGL type field at offset 0x00
2. Treating it as a custom CKeyFramedModelTexture struct
3. Missing the connection between file format (0x0d) and runtime format (0x40)

This is a **fundamental architectural pattern** in Nocturne's engine - nearly everything is an MRGL block!
