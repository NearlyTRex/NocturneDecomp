# Mystery Solved: CDemonSet Primitive Vertex Storage

## The Question

In the CDemonSet 40-byte primitive structure, we knew that:
- Offset 0x18 contains the first vertex index
- Offsets 0x1C-0x27 were "unknown" (12 bytes)

But `clipAndFillPoly` expects a **pointer to an array of indices**:
```c
void clipAndFillPoly(CDemonRenderer* this_ptr,
                     int vertex_count,
                     int* vertex_indices);
```

And `renderTriangleTextured` accesses them as an array:
```c
g_RenderVertexBuffer + *vertex_indices,      // index[0]
g_RenderVertexBuffer + vertex_indices[1],    // index[1]
g_RenderVertexBuffer + vertex_indices[2]     // index[2]
```

**Where are indices [1] and [2] stored?**

## The Answer

The "unknown" 12 bytes at offsets 0x1C-0x27 actually contain:
- **0x1C**: vertex_indices[1]
- **0x20**: vertex_indices[2]
- **0x24**: Padding (4 bytes)

The `vertex_list` field at offset 0x18 is **not a pointer** - it's the **first element of an embedded vertex index array**!

## Assembly Evidence

From `buildAndRenderTrianglePrimitive_FUN_004566e0`:

```asm
004566e2: SUB ESP,0x28               ; Allocate 40 bytes

// Calculate and store first index at ESP + 0x18:
0045670d: MOV EAX,[ESI]               ; Load first vertex pointer
00456711: SUB EAX,EBX                ; Subtract vertex_buffer base
00456713: DIV ECX                    ; Divide by 12 (sizeof CVector3f)
00456715: MOV [ESP + 0x18],EAX       ; Write index[0] at offset 0x18

// Calculate and store second index at ESP + 0x1C:
00456719: MOV EAX,[ESI + 0x4]        ; Load second vertex pointer
00456720: DIV ECX
00456722: MOV [ESP + 0x1c],EAX       ; Write index[1] at offset 0x1C

// Calculate and store third index at ESP + 0x20:
00456726: MOV EAX,[ESI + 0x8]        ; Load third vertex pointer
0045672d: DIV ECX
0045672f: PUSH 0x1                   ; ESP -= 4 (stack moves)
00456731: MOV [ESP + 0x24],EAX       ; Write index[2] at ESP + 0x24
                                     ; = ESP_original + 0x20

// Pass structure to renderer:
00456735: LEA EAX,[ESP + 0x4]        ; Load structure base (ESP_original)
00456739: PUSH EAX
00456741: CALL renderPrimitiveList
```

**Key observation**: After the `PUSH 0x1` at line 0x2f, ESP moves down by 4 bytes. The write at `[ESP + 0x24]` is therefore writing to the original `ESP + 0x20`, not `ESP + 0x24`.

## Corrected Structure Definition

```c
typedef struct SPrimitive_CDemonSet {
    // === Header (8 bytes) ===
    int primitive_type;              // 0x00: Type/flags (UNINITIALIZED)
    int vertex_count;                // 0x04: Number of vertices (3)

    // === Surface Data (16 bytes) ===
    SClipPlane surface_normal;       // 0x08: Surface normal/clip plane
    //   int A;                       // 0x08
    //   int B;                       // 0x0C
    //   int C;                       // 0x10
    //   int D;                       // 0x14

    // === Vertex Indices (12 bytes) ===
    int vertex_indices[3];           // 0x18, 0x1C, 0x20: Indices into vertex buffer

    // === Padding (4 bytes) ===
    int padding;                     // 0x24: Unused padding

    // Total: 40 bytes (0x28) ← VERIFIED BY ASSEMBLY
} SPrimitive_CDemonSet;
```

## Why The Confusion?

### Ghidra's Pseudocode Showed

```c
local_30.vertex_list = (int *)((uint)((int)*triangle_vertex_pointers - (int)vertex_buffer) / 0xc);
local_14 = (uint)((int)triangle_vertex_pointers[1] - (int)vertex_buffer) / 0xc;
local_10 = (uint)((int)triangle_vertex_pointers[2] - (int)vertex_buffer) / 0xc;
```

This made it **appear** that:
- `vertex_list` was a single pointer/index
- `local_14` and `local_10` were **separate local variables**

### But The Assembly Shows

All three indices are written **inside the 40-byte structure**:
- Index 0 at offset 0x18
- Index 1 at offset 0x1C
- Index 2 at offset 0x20

Ghidra **misinterpreted** the stack layout because:
1. The structure base is at `ESP + 0x0` (not `ESP + 0x4` as it might have guessed)
2. The `PUSH` instruction before writing the third index confused the offset calculation
3. The field at 0x18 was **cast to a pointer** (`int*`) which hid its array nature

## Why vertex_list Is Declared As int*

In the original code, the field might have been declared as:

```c
typedef struct SPrimitive_CDemonSet {
    // ...
    int* vertex_list;               // Actually points to first element of embedded array
} SPrimitive_CDemonSet;
```

Then when passing to the renderer:

```c
clipAndFillPoly(this_ptr, prim->vertex_count, &prim->vertex_list);
```

The `&prim->vertex_list` gives you a pointer to the first element of what is effectively an array!

This is **valid C** because:
```c
int* ptr = &array[0];  // Pointer to first element
int* ptr = array;      // Also pointer to first element (implicit)
```

So `int* vertex_list` can serve double duty as:
1. A pointer type for passing to functions
2. The first element of an embedded array

## Alternative Valid Interpretation

The structure could also be correctly defined as:

```c
typedef struct SPrimitive_CDemonSet {
    int primitive_type;              // 0x00
    int vertex_count;                // 0x04
    SClipPlane surface_normal;       // 0x08 (16 bytes)
    union {
        int* vertex_list;            // 0x18: Pointer interpretation
        int vertex_indices[3];       // 0x18: Array interpretation
    };
    int padding;                     // 0x24
} SPrimitive_CDemonSet;
```

Or even simpler - just declare it as an array from the start:

```c
typedef struct SPrimitive_CDemonSet {
    int primitive_type;              // 0x00
    int vertex_count;                // 0x04
    SClipPlane surface_normal;       // 0x08 (16 bytes)
    int vertex_indices[3];           // 0x18: Array of 3 indices
    int padding;                     // 0x24
} SPrimitive_CDemonSet;
```

Then pass it as:
```c
clipAndFillPoly(this_ptr, prim->vertex_count, prim->vertex_indices);
```

Arrays decay to pointers when passed to functions, so this works perfectly!

## Data Flow: CDemonCube → Renderer

### Step 1: CDemonCube Triangle
```c
CDemonCubeTriangle triangle;
triangle.vertices[0] = &vertex_buffer[5];   // Pointer to vertex 5
triangle.vertices[1] = &vertex_buffer[12];  // Pointer to vertex 12
triangle.vertices[2] = &vertex_buffer[27];  // Pointer to vertex 27
```

### Step 2: Build SPrimitive
```c
SPrimitive prim;
prim.vertex_count = 3;
prim.surface_normal = {0, 0, 0, 0};

// Convert pointers to indices:
prim.vertex_indices[0] = 5;   // (vertices[0] - vertex_buffer) / 12
prim.vertex_indices[1] = 12;  // (vertices[1] - vertex_buffer) / 12
prim.vertex_indices[2] = 27;  // (vertices[2] - vertex_buffer) / 12
```

### Step 3: Pass to Renderer
```c
// This is actually the same thing:
clipAndFillPoly(renderer, prim.vertex_count, &prim.vertex_indices[0]);
clipAndFillPoly(renderer, prim.vertex_count, prim.vertex_indices);
```

### Step 4: Renderer Uses Indices
```c
void renderTriangleTextured(int* vertex_indices, int vertex_count) {
    SRenderVertex* v0 = &g_RenderVertexBuffer[vertex_indices[0]];  // vertex 5
    SRenderVertex* v1 = &g_RenderVertexBuffer[vertex_indices[1]];  // vertex 12
    SRenderVertex* v2 = &g_RenderVertexBuffer[vertex_indices[2]];  // vertex 27

    // Rasterize triangle using these vertices
}
```

## Mystery Solved: What Are The 12 Unknown Bytes?

**They are NOT unknown! They contain:**

| Offset | Size | Content | Purpose |
|--------|------|---------|---------|
| 0x18 | 4 bytes | `vertex_indices[0]` | First vertex index |
| 0x1C | 4 bytes | `vertex_indices[1]` | Second vertex index |
| 0x20 | 4 bytes | `vertex_indices[2]` | Third vertex index |
| 0x24 | 4 bytes | Padding | Unused |

**Total: 12 bytes at offsets 0x18-0x23, plus 4 bytes padding at 0x24-0x27**

The "mystery" was caused by:
1. Misinterpreting `vertex_list` as a pointer instead of the first array element
2. Not recognizing that offsets 0x1C and 0x20 contain the other indices
3. Ghidra showing `local_14` and `local_10` as separate variables instead of structure fields

## Final Structure (No More Mysteries!)

```c
typedef struct SPrimitive_CDemonSet {
    // === Header (8 bytes) ===
    int primitive_type;              // 0x00: Type/flags (often uninitialized)
    int vertex_count;                // 0x04: Number of vertices (3 for triangles)

    // === Surface Data (16 bytes) ===
    SClipPlane surface_normal;       // 0x08: Surface normal for backface culling
    //   int A;                       // 0x08
    //   int B;                       // 0x0C
    //   int C;                       // 0x10
    //   int D;                       // 0x14

    // === Vertex Data (16 bytes) ===
    int vertex_indices[3];           // 0x18: Array of vertex buffer indices
    int padding;                     // 0x24: Alignment padding

    // Total: 40 bytes (0x28)
} SPrimitive_CDemonSet;
```

**All 40 bytes accounted for:**
- 8 bytes: Header
- 16 bytes: Surface normal
- 12 bytes: Vertex indices
- 4 bytes: Padding

**Usage pattern:**
```c
SPrimitive_CDemonSet prim;
prim.vertex_count = 3;
prim.surface_normal = {0, 0, 0, 0};
prim.vertex_indices[0] = 5;
prim.vertex_indices[1] = 12;
prim.vertex_indices[2] = 27;

// Pass to renderer (array decays to pointer)
renderPrimitiveList(set, &prim, 1);
    ↓
renderBasicTextured(renderer, &prim);
    ↓
clipAndFillPoly(renderer, prim.vertex_count, prim.vertex_indices);
```

## Key Takeaways

1. **The 12 "unknown" bytes contained vertex indices all along!**
2. **vertex_list is not a pointer - it's the first element of an embedded array**
3. **Only 4 bytes are truly padding** (offset 0x24-0x27)
4. **36 out of 40 bytes have defined purposes**
5. **Always check assembly when pseudocode seems confusing!**

The mystery is now completely resolved! 🎉
