# CDemonSet Primitive Format - Corrected Analysis

## Critical Discovery

The CDemonSet primitive format is **NOT 28 bytes** as previously thought. Assembly analysis proves it is **40 bytes (0x28)**.

## Assembly Evidence

### From `CDemonSet_renderPrimitiveList_FUN_005708e0`

**Lines 93, 121**: Array iteration with 40-byte stride
```asm
// Mirror rendering path (line 93):
00570922: ADD ESI,0x28        ; Advance by 40 bytes (0x28)

// Normal rendering path (line 121):
0057094b: ADD EBX,0x28        ; Advance by 40 bytes (0x28)
```

Both paths advance the primitive pointer by **0x28 (40 bytes)**, not 0x1C (28 bytes).

### From `CDemonRenderer_renderBasicTextured_FUN_0048a820`

**Lines 72-74**: Structure field access
```asm
0048a850: LEA EAX,[ESI + 0x18]      ; Load address of vertex_list (offset 0x18)
0048a854: MOV EBP,dword ptr [ESI + 0x4]  ; Read vertex_count (offset 0x04)
```

The renderer:
1. Reads `vertex_count` at offset `0x04`
2. Loads pointer to `vertex_list` at offset `0x18`
3. Passes `[ESI + 0x18]` to `clipAndFillPoly`

## Structure Layout

### Known Fields (28 bytes)

```c
// Offsets 0x00-0x1B (28 bytes)
struct SPrimitive_Known {
    int primitive_type;             // 0x00: 4 bytes
    int vertex_count;               // 0x04: 4 bytes
    SClipPlane surface_normal;      // 0x08: 16 bytes
    int* vertex_list;               // 0x18: 4 bytes (pointer)
    // Total: 28 bytes (0x1C)
};
```

### Missing Fields (12 bytes)

**Stride is 0x28 (40 bytes)**, so there are **12 bytes of unknown fields** after `vertex_list`:

```
0x1C - 0x27: ??? (12 bytes unknown)
```

## Corrected Full Structure

```c
typedef struct SPrimitive_CDemonSet {
    // === Header (8 bytes) ===
    int primitive_type;             // 0x00: Primitive type/flags
    int vertex_count;               // 0x04: Number of vertices (3-4 typically)

    // === Surface Data (16 bytes) ===
    SClipPlane surface_normal;      // 0x08: Surface normal/clip plane
    //   int A;                      // 0x08
    //   int B;                      // 0x0C
    //   int C;                      // 0x10
    //   int D;                      // 0x14

    // === Vertex Data (4 bytes) ===
    int* vertex_list;               // 0x18: Pointer to vertex array

    // === Unknown Fields (12 bytes) ===
    int unknown_0x1C;               // 0x1C: Unknown field 1
    int unknown_0x20;               // 0x20: Unknown field 2
    int unknown_0x24;               // 0x24: Unknown field 3

    // Total: 40 bytes (0x28)
} SPrimitive_CDemonSet;
```

## Hypothesis: What Are The Unknown Fields?

### Hypothesis 1: Texture/Material Data
```c
int* texture_ptr;                   // 0x1C: Pointer to texture
int material_flags;                 // 0x20: Material/render flags
int lighting_index;                 // 0x24: Lighting/color index
```

### Hypothesis 2: Additional Pointers
```c
int* normal_list;                   // 0x1C: Pointer to vertex normals
int* uv_list;                       // 0x20: Pointer to UV coordinates
int render_flags;                   // 0x24: Rendering flags
```

### Hypothesis 3: Inline Data
```c
CVector3f center;                   // 0x1C: Primitive center (12 bytes: x, y, z)
```

### Hypothesis 4: Padding
```c
int padding[3];                     // 0x1C: Unused padding (12 bytes)
```

## Why Was This Missed?

### Ghidra Decompiler Confusion

**Pseudocode Line 35/47**:
```c
primitive_array = (SPrimitive *)&primitive_array[1].surface_normal.B;
```

This is **Ghidra's incorrect interpretation**. The decompiler tried to explain the 40-byte stride using existing struct fields, resulting in nonsensical pointer arithmetic.

**What it actually is**:
```c
primitive_array = (SPrimitive *)((char*)primitive_array + 0x28);  // Advance 40 bytes
```

### Assembly Shows Truth

The assembly never lies:
```asm
ADD ESI,0x28    ; ESI = primitive pointer, advance by 40 bytes
```

This is a simple pointer increment, not complex field offsetting.

## Impact on Previous Analysis

### Documents That Need Correction

1. **PRIMITIVE_TYPES_IN_USE.md** - Lists SPrimitive as 28 bytes ❌
2. **RENDERING_ARCHITECTURE_COMPLETE.md** - Shows 28-byte struct ❌
3. **RENDERER_PRIMITIVE_STRUCT_MAPPING.md** - Based on 28-byte assumption ❌

### What Remains Correct

- **KFM models**: Still 72-byte MRGL quads ✓
- **DFM models**: Still 60-byte MRGL triangles ✓
- **Water/Fire**: Analysis remains valid ✓
- **Rendering paths**: Call chains are correct ✓

Only the **CDemonSet primitive size** was wrong.

## Next Steps to Identify Unknown Fields

### Method 1: Search for Structure Initialization

Find where CDemonSet primitives are created/populated:
```bash
grep -r "primitive.*=" set.cpp | grep "0x1[cC-fF]"
grep -r "primitive.*=" set.cpp | grep "0x2[0-4]"
```

### Method 2: Search for Field Writes

Look for assembly that writes to offsets 0x1C, 0x20, 0x24:
```asm
MOV dword ptr [EAX + 0x1c], ...
MOV dword ptr [EAX + 0x20], ...
MOV dword ptr [EAX + 0x24], ...
```

### Method 3: Examine Set File Format

Check the .SET file loading code to see what data is read per-primitive.

### Method 4: Check Cross-References

Search for functions that access fields beyond 0x18:
```bash
grep "ESI + 0x1[cC-fF]" *.cpp
grep "ESI + 0x2[0-4]" *.cpp
```

## Comparison with MRGL Formats

| Format | Size | Structure |
|--------|------|-----------|
| **CDemonSet** | **40 bytes** | Pointer-based + 12 unknown |
| MRGL Quad (KFM) | 72 bytes | Embedded vertex data |
| MRGL Triangle (DFM) | 60 bytes | Embedded indices only |

CDemonSet remains the **smallest format** but is **not as small as initially thought**.

## Corrected Usage Example

```c
// CDemonSet rendering loop
SPrimitive_CDemonSet* prim = primitive_array;
for (int i = 0; i < primitive_count; i++) {
    // Access known fields
    int vertex_count = prim->vertex_count;              // Offset 0x04
    SClipPlane* normal = &prim->surface_normal;         // Offset 0x08
    int** vertices = &prim->vertex_list;                // Offset 0x18

    // Unknown fields at 0x1C, 0x20, 0x24
    int unknown1 = prim->unknown_0x1C;
    int unknown2 = prim->unknown_0x20;
    int unknown3 = prim->unknown_0x24;

    // Render
    renderBasicTextured(renderer, prim);

    // Advance by ACTUAL size (40 bytes, not 28!)
    prim = (SPrimitive_CDemonSet*)((char*)prim + 0x28);
}
```

## Critical Takeaway

**Always trust assembly over pseudocode.** Ghidra's decompiler can produce misleading C code when dealing with:
- Array strides
- Structure sizes
- Pointer arithmetic
- Cast operations

The assembly clearly shows `ADD ESI,0x28` which is unambiguous: **40-byte stride**.

## Verification Checklist

To confirm this analysis, check:
- [ ] Find where CDemonSet allocates primitive arrays (should allocate `count * 40`)
- [ ] Find where primitives are initialized (should write to offsets 0x1C/0x20/0x24)
- [ ] Find other functions that iterate primitive arrays (should use 40-byte stride)
- [ ] Check .SET file format documentation (should show 40 bytes per primitive)
- [ ] Search for field accesses beyond offset 0x18

Until these checks are done, the unknown 12 bytes remain a mystery.
