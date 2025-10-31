# Globe Primitives Are NOT True MRGL Type 0x03

## The Question

If MRGL type 0x03 uses the formula `size = child_count * 12 + 12`, why are the globe primitives always 36 bytes?

## The Answer: It's a Different Format!

**`g_GlobeTrianglePrimitives` is NOT a standard MRGL stream!** It's a specialized embedded data structure that happens to use type values 0x03 and 0x04, but doesn't follow the standard MRGL rules.

### Evidence

1. **Size Mismatch**:
   - getMRGLSize formula for type 0x03: `child_count * 12 + 12`
   - For 36 bytes: `child_count` would need to be 2
   - **But the field at offset 0x04 is 16921, not 2!**

2. **Not Processed by MRGL Dispatcher**:
   - Standard MRGL data goes through `dispatchMRGLToRenderer`
   - Globe primitives are accessed directly as an array
   - No call to `getMRGLSize` for globe data

3. **Custom Loop**:
   ```c
   // Globe code (renderCorona):
   for (i = 0; i < 84; i++) {  // Fixed count!
       primitive = &g_GlobeTrianglePrimitives[i];  // Array indexing!
       // ... process 36-byte structure
       i += 0x24;  // Hardcoded +36 bytes
   }

   // vs. Standard MRGL:
   while (cmd->type != 0) {
       size = getMRGLSize(cmd);  // Calculate variable size!
       cmd = (char*)cmd + size;  // Advance by calculated size
   }
   ```

4. **Assembly Shows Fixed Size**:
   ```asm
   0047157f: ADD EBX,0x24      ; += 0x24 (36 decimal)
   00471595: CMP EBX,0xbd0     ; 0xBD0 = 3024 = 84 * 36
   ```

## Two Different Formats

### Format 1: Embedded Globe Data (g_GlobeTrianglePrimitives)
```c
typedef struct SGlobeRenderPrimitive {
    int pseudo_type;       // 0x00: 0x03 or 0x04 (borrowed from MRGL, but not real MRGL!)
    int normal_x;          // 0x04: Surface normal X (Q16.16)
    int normal_y;          // 0x08: Surface normal Y (Q16.16)
    int normal_z;          // 0x0C: Surface normal Z (Q16.16)
    int plane_d;           // 0x10: Plane D coefficient
    int flags;             // 0x14: Flags/properties
    int vertex_indices[3]; // 0x18-0x20: Vertex indices (0-61)
    int padding_or_v3;     // 0x24: Padding or 4th vertex
} SGlobeRenderPrimitive;  // Always 36 bytes!

// Array of 84 entries in g_GlobeTrianglePrimitives
```

**Usage**: Only by globe/corona rendering (`dglobe.cpp`)
**Size**: Fixed 36 bytes
**Processing**: Direct array access, hardcoded loop

### Format 2: True MRGL Type 0x03 (in MRGL streams)
```c
typedef struct SMRGLType03 {
    int type;              // 0x00: 0x03
    int child_count;       // 0x04: Number of child elements
    int padding[2];        // 0x08-0x0C: Unknown
    // Variable-size data follows:
    struct {
        int data[3];       // 12 bytes per child
    } children[child_count];
} SMRGLType03;  // Size = child_count * 12 + 12 (variable!)
```

**Usage**: In actual MRGL files (models, effects, etc.)
**Size**: Variable based on `child_count` field
**Processing**: getMRGLSize() + dispatchMRGLToRenderer()

## Why the Confusion?

The globe code **borrows the type values 0x03/0x04** but uses them in a completely different context:
- **Type values are reused** (0x03 for triangles, 0x04 for quads)
- **But the structure is different** (fixed 36 bytes vs variable size)
- **Processing is different** (direct array access vs MRGL dispatcher)

Think of it like this:
- **Real MRGL type 0x03** = A command in the MRGL bytecode language
- **Globe primitive type 0x03** = A hardcoded data structure that happens to use the same type number

## What Does Real MRGL Type 0x03 Do?

Based on getMRGLSize and the dispatcher analysis, MRGL type 0x03 in actual files is likely:
- **"Vertex Lighting" or "Light Vertex List"** command
- Contains lighting data for vertices
- Used during model loading/processing
- Variable number of vertices based on `child_count`

Example from a .KFM file:
```c
// Type 0x03 in MRGL stream:
{
    type: 0x03,
    child_count: 5,        // 5 vertices
    // 5 * 12 = 60 bytes of vertex lighting data follows
}
// Total size: 12 + 60 = 72 bytes
```

But the globe primitives are **static data embedded in the executable**, not MRGL stream data!

## Answer to the Original Question

> "So the light vertex struct is always 36 bytes in this scenario?"

**Yes, for globe rendering specifically!** But this is because:

1. `g_GlobeTrianglePrimitives` is a **custom format**, not true MRGL type 0x03
2. It's a **fixed-size array** of 84 entries, each 36 bytes
3. The "type 0x03/0x04" values are just markers, not real MRGL types
4. The structure doesn't follow getMRGLSize rules

**No, for real MRGL type 0x03 in files!** Real MRGL type 0x03 is variable-sized:
- Formula: `size = child_count * 12 + 12`
- Can be 12, 24, 36, 48, 60, 72... bytes depending on child_count

## Recommendation

We should name these differently to avoid confusion:

```c
// For globe data (NON-MRGL):
typedef struct SGlobeRenderPrimitive {
    int render_mode;       // 0x03=triangle, 0x04=quad (NOT MRGL type!)
    // ... rest of structure
} SGlobeRenderPrimitive;  // 36 bytes

// For real MRGL streams:
typedef struct SMRGLVertexLighting {
    SMRGLBaseHeader base;  // type=0x03, child_count
    int padding[2];
    struct {
        int lighting_data[3];  // 12 bytes per vertex
    } vertices[child_count];
} SMRGLVertexLighting;  // Variable size
```

This makes it clear they're different things that happen to share a type number!
