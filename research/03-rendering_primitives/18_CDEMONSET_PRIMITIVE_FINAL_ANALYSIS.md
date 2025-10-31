# CDemonSet Primitive Format - Final Analysis

## Executive Summary

The CDemonSet primitive structure is **exactly 40 bytes (0x28)** as proven by assembly analysis. However, **only 28 bytes contain meaningful data** that is actually used by renderers. The remaining **12 bytes (0x1C-0x27) appear to be padding or unused fields**.

## Size Verification

### From buildAndRenderTrianglePrimitive (0x004566e0)

```asm
004566e2: SUB ESP,0x28        ; Allocate 40 bytes (0x28) for SPrimitive
...
00456735: LEA EAX,[ESP + 0x4]
00456739: PUSH EAX             ; Pass structure pointer to renderPrimitiveList
```

**Proof**: Function allocates exactly 40 bytes on stack for `SPrimitive local_30`.

### From renderPrimitiveList (0x005708e0)

```asm
// Mirror rendering path:
00570922: ADD ESI,0x28        ; Advance primitive pointer by 40 bytes

// Normal rendering path:
0057094b: ADD EBX,0x28        ; Advance primitive pointer by 40 bytes
```

**Proof**: Array iteration uses 40-byte stride in both code paths.

## Structure Layout

### Complete 40-Byte Structure

```c
typedef struct SPrimitive_CDemonSet {
    // === Used Fields (28 bytes) ===
    int primitive_type;             // 0x00: Type/flags (4 bytes)
    int vertex_count;               // 0x04: Number of vertices (4 bytes)
    SClipPlane surface_normal;      // 0x08: Surface normal/clip plane (16 bytes)
    //   int A;                      // 0x08
    //   int B;                      // 0x0C
    //   int C;                      // 0x10
    //   int D;                      // 0x14
    int* vertex_list;               // 0x18: Pointer to vertex indices (4 bytes)

    // === Unused/Padding Fields (12 bytes) ===
    int unknown_or_padding_0x1C;    // 0x1C: Not read by any renderer
    int unknown_or_padding_0x20;    // 0x20: Not read by any renderer
    int unknown_or_padding_0x24;    // 0x24: Not read by any renderer

    // Total: 40 bytes (0x28) ← VERIFIED BY ASSEMBLY
} SPrimitive_CDemonSet;
```

## Field Usage Analysis

### What Fields Are Actually Used?

Analysis of `renderBasicTextured_FUN_0048a820` shows it **ONLY** reads:

```asm
0048a850: LEA EAX,[ESI + 0x18]      ; Load address of vertex_list (offset 0x18)
0048a854: MOV EBP,dword ptr [ESI + 0x4]  ; Read vertex_count (offset 0x04)
0048a865: LEA EAX,[ESI + 0x8]       ; Load address of surface_normal (offset 0x08)
```

**Fields used by renderBasicTextured**:
- `vertex_count` (0x04) ✓ USED
- `surface_normal` (0x08-0x17) ✓ USED
- `vertex_list` (0x18) ✓ USED

**Fields NOT used**:
- `primitive_type` (0x00) ✗ NOT READ
- Unknown fields (0x1C-0x27) ✗ NOT READ

### Primitive Construction Example

From `buildAndRenderTrianglePrimitive`:

```c
// Allocate 40-byte structure on stack
SPrimitive local_30;

// Initialize ONLY the fields that are actually used:
local_30.vertex_count = 3;
local_30.surface_normal.A = 0;
local_30.surface_normal.B = 0;
local_30.surface_normal.C = 0;
local_30.surface_normal.D = 0;
local_30.vertex_list = (int*)vertex_index_0;

// Note: primitive_type is NOT initialized (left as stack garbage)
// Note: Offsets 0x1C-0x27 are NOT initialized (left as stack garbage)

// Pass to renderer
CDemonSet_renderPrimitiveList(g_CDemonSetPtr, &local_30, 1);
```

**Key observation**: The cube rendering code **does not initialize** `primitive_type` or the 12 unknown bytes!

## Why Is It 40 Bytes If Only 28 Are Used?

### Hypothesis 1: Structure Padding

The 12 extra bytes might be padding added by the compiler for alignment:

```c
// 28 bytes of data + 12 bytes padding = 40 bytes (aligned to 8-byte boundary?)
// 28 = 0x1C
// 40 = 0x28
// Difference: 12 bytes (0xC)
```

However, 12 bytes of padding seems excessive for typical alignment.

### Hypothesis 2: Union with Larger Format

The structure might be a union with MRGL formats that need more space:

```c
typedef struct SPrimitive_Union {
    // Common header
    int primitive_type;             // 0x00
    int element_count;              // 0x04
    SClipPlane surface_normal;      // 0x08

    // Variant data
    union {
        // CDemonSet variant (pointer-based)
        struct {
            int* vertex_list;       // 0x18
            int padding[3];         // 0x1C: Padding to match largest variant
        } cdemonset;

        // MRGL variant (embedded data)
        struct {
            int vertex_indices[3];  // 0x18: Three vertex indices (12 bytes)
            // Could extend further in other variants
        } mrgl;
    };

    // Total: 40 bytes minimum to accommodate all variants
} SPrimitive_Union;
```

### Hypothesis 3: Reserved for Future Use

The fields may have been reserved for texture/material data that was never implemented:

```c
int* texture_ptr;                   // 0x1C: Reserved for texture (not used)
int material_flags;                 // 0x20: Reserved for material (not used)
int lighting_or_color;              // 0x24: Reserved for color (not used)
```

### Hypothesis 4: Used by Other Code Paths

The fields might be used by:
- Set editor tools (not runtime rendering)
- Export/import functions
- Debugging/visualization code
- Legacy code paths

## Search for Unknown Field Usage

Searched for reads from offsets 0x1C, 0x20, 0x24 in renderer code:

```bash
grep -rn "ESI + 0x1[cC]\|ESI + 0x20\|ESI + 0x24" engine/drender.cpp/*.cpp
```

**Result**: No reads found in any renderer function.

**Conclusion**: The 12 unknown bytes **are not read by the rendering pipeline**.

## Comparison with MRGL Formats

| Format | Size | Layout |
|--------|------|--------|
| **CDemonSet** | **40 bytes** | Pointer-based + 12 padding |
| MRGL Quad (KFM) | 72 bytes | Embedded 4×12 vertex data |
| MRGL Triangle (DFM) | 60 bytes | Embedded 3×12 vertex data |

The CDemonSet format is the smallest because it uses **pointers to shared vertex arrays** rather than embedding vertex data directly.

## Stack vs. Heap Allocation

### Stack-Allocated Primitives

Cube rendering builds primitives **on the stack**:

```c
void buildAndRenderTrianglePrimitive(...) {
    SPrimitive local_30;  // Stack allocation
    // ... initialize only 28 bytes ...
    renderPrimitiveList(..., &local_30, 1);
}
```

The extra 12 bytes are **uninitialized stack garbage** in this case.

### Heap-Allocated Primitive Arrays

If CDemonSet had persistent primitive arrays (not found in CDemonSet struct), they would be allocated with 40-byte stride:

```c
SPrimitive* primitives = malloc(count * 0x28);  // 40 bytes each
```

## Recommended Structure Definition

For decompilation purposes, define the structure as:

```c
typedef struct SPrimitive_CDemonSet {
    // === Active Fields (28 bytes) ===
    int primitive_type;             // 0x00: Type/flags (often uninitialized)
    int vertex_count;               // 0x04: Number of vertices
    SClipPlane surface_normal;      // 0x08: 16 bytes (A, B, C, D)
    int* vertex_list;               // 0x18: Pointer to vertex array

    // === Padding (12 bytes) ===
    // These fields are NOT used by the rendering pipeline.
    // They may be padding, reserved fields, or used by editor tools only.
    int padding_or_unused_0x1C;
    int padding_or_unused_0x20;
    int padding_or_unused_0x24;

    // Total: 40 bytes (0x28)
} SPrimitive_CDemonSet;
```

**Alternative**: Use a flexible size:

```c
typedef struct SPrimitive_CDemonSet_Compact {
    int primitive_type;             // 0x00
    int vertex_count;               // 0x04
    SClipPlane surface_normal;      // 0x08 (16 bytes)
    int* vertex_list;               // 0x18
    // Total: 28 bytes (0x1C) - minimal used size
} SPrimitive_CDemonSet_Compact;

// But remember: array iteration uses 40-byte stride!
// Use this macro for array access:
#define SPRIMITIVE_STRIDE 0x28  // 40 bytes
```

## Key Takeaways

1. **Size**: CDemonSet primitives are **40 bytes** (assembly-verified)
2. **Used fields**: Only **28 bytes** are actually used by renderers
3. **Unused bytes**: The remaining **12 bytes** are not read by any renderer
4. **Allocation**: Cube rendering builds primitives **on the stack** with **uninitialized padding**
5. **Array stride**: When iterating primitive arrays, use **40-byte stride** (`ADD ESI, 0x28`)

## Investigation Status

- [x] Verified structure size via assembly (40 bytes)
- [x] Identified which fields are used by renderers (28 bytes)
- [x] Confirmed unknown fields are NOT read by renderers
- [ ] Determine if unknown fields are used by non-rendering code (editor, export, etc.)
- [ ] Find if there are heap-allocated primitive arrays in .GEO files
- [ ] Check if .SET files store primitives with all 40 bytes

## Next Steps

To fully understand the 12 unknown bytes:

1. Search editor code for writes to offsets 0x1C, 0x20, 0x24
2. Examine .GEO file format to see if primitives are stored on disk
3. Check export/import functions for full structure usage
4. Look for structure initialization in CDemonSet constructor

Until then, treat the 12 bytes as **padding or reserved fields**.
