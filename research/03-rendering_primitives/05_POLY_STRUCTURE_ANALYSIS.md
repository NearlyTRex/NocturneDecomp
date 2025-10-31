# CKeyFramedModelPolyVertexList: 72-Byte Structure Analysis

## The Question

User asked: "Is `CKeyFramedModelPolyVertexList` (also 72 bytes) MRGL-related?"

My initial answer was: "No, coincidental size match"

User's counter: "I don't believe that 100%. The data format of the models has to get to the renderer somehow, and all of our render methods are passing SPrimitive. The data is read into memory as a single loaded file."

## Critical Evidence

### 1. File Format (From KFM Reading)

```c
// Binary read: 00477023 reads poly_count * 0x48 bytes
// Reads 72 bytes per polygon from file
struct CKeyFramedModelPolyVertexList {
    int unknown_00;                        // 0x00: 4 bytes
    int vertex_count;                      // 0x04: 4 bytes
    char padding[16];                      // 0x08: 16 bytes
    CKeyFramedModelPolyVertex vertList[4]; // 0x18: 48 bytes (4 * 12)
    // Total: 72 bytes
};
```

### 2. Runtime Usage (From Rendering)

```asm
// CKeyFramedModel_submitToRenderer_FUN_00477980
00477b29: IMUL EBP,EBP,0x48      ; Multiply poly index by 0x48 (72 bytes)
00477b2d: MOV EAX,dword ptr [ESI + 0x114]  ; Load poly_vert_list pointer
00477b33: ADD EAX,EBP            ; Add offset
00477b35: PUSH EAX               ; Pass to core_set_cpp_FUN_00570770

// core_set_cpp_FUN_00570770
00570807: ADD EBX,0x48           ; Iterate by 72 bytes
```

The 72-byte blocks from `poly_vert_list` are passed directly to rendering functions!

### 3. The Rendering Loop

From `FUN_00570770` assembly and pseudocode (lines 46-60):

```c
SPrimitive *in_stack_00000008;  // The poly_vert_list
for (int i = 0; i < in_stack_0000000c; i++) {
    local_34.type = pSVar1->vertex_count;  // Read offset 0x4
    local_34.clip_plane.A = (pSVar1->surface_normal).A;  // 0x8
    local_34.clip_plane.B = (pSVar1->surface_normal).B;  // 0xC
    local_34.clip_plane.C = (pSVar1->surface_normal).C;  // 0x10
    local_34.clip_plane.D = (pSVar1->surface_normal).D;  // 0x14
    local_34.primitive.vertex_count = (int)pSVar1->vertex_list;  // 0x18
    local_34.primitive.vertex_array = (CVector3i *)pSVar1[1].surface_normal.A;  // 0x24
    local_34.primitive.primitive_type = pSVar1[1].surface_normal.D;  // 0x30

    pSVar1 = (SPrimitive *)&pSVar1[2].surface_normal.C;  // Advance by ???
}
```

**CRITICAL**: The pseudocode is wrong! Ghidra is confused by the pointer arithmetic. Let me translate the actual assembly offsets being read.

## Assembly Offset Analysis

Looking at `FUN_00570770` assembly (lines 102-124):

```asm
005707b7: MOV EAX,dword ptr [EBX + 0x4]      ; Read from poly[i] + 0x4
005707ba: MOV dword ptr [ESP + 0x4],EAX      ; Store to local_34.type
005707be: MOV EAX,dword ptr [EBX + 0x8]      ; Read poly[i] + 0x8
005707c1: MOV dword ptr [ESP + 0x8],EAX      ; Store to local_34.clip_plane.A
005707c5: MOV EAX,dword ptr [EBX + 0xc]      ; Read poly[i] + 0xC
005707c8: MOV dword ptr [ESP + 0xc],EAX      ; Store to local_34.clip_plane.B
005707cc: MOV EAX,dword ptr [EBX + 0x10]     ; Read poly[i] + 0x10
005707cf: MOV dword ptr [ESP + 0x10],EAX     ; Store to local_34.clip_plane.C
005707d3: MOV EAX,dword ptr [EBX + 0x14]     ; Read poly[i] + 0x14
005707d6: MOV dword ptr [ESP + 0x14],EAX     ; Store to local_34.clip_plane.D
005707da: MOV EAX,dword ptr [EBX + 0x18]     ; Read poly[i] + 0x18
005707dd: MOV dword ptr [ESP + 0x18],EAX     ; Store to local_34.primitive.vertex_count
005707e1: MOV EAX,dword ptr [EBX + 0x24]     ; Read poly[i] + 0x24
005707e4: MOV dword ptr [ESP + 0x1c],EAX     ; Store to local_34.primitive.vertex_array
005707e8: MOV EAX,dword ptr [EBX + 0x30]     ; Read poly[i] + 0x30
005707eb: MOV dword ptr [ESP + 0x20],EAX     ; Store to local_34.primitive.primitive_type
...
00570807: ADD EBX,0x48                       ; Advance to next poly (+ 72 bytes)
```

## Discovered Runtime Layout

So the 72-byte blocks are being read with this layout:

```c
typedef struct RuntimePolyBlock {
    int unknown_00;                 // 0x00: 4 bytes (not read by renderer)
    int type;                       // 0x04: vertex_count (copied to SPrimitiveLit.type)
    SClipPlane clip_plane;          // 0x08: 16 bytes (surface normal / clip plane)
    int primitive_vertex_count;     // 0x18: (copied to SPrimitiveGeometry.vertex_count)
    char unknown_1c[8];             // 0x1C: 8 bytes (not read in this loop)
    CVector3i* vertex_array;        // 0x24: Pointer (copied to SPrimitiveGeometry.vertex_array)
    char unknown_28[8];             // 0x28: 8 bytes (not read)
    int primitive_type;             // 0x30: (copied to SPrimitiveGeometry.primitive_type)
    char unknown_34[20];            // 0x34: 20 bytes remaining
    // Total: 72 bytes (0x48)
};
```

## The Transformation

### File Format → Runtime Format

**File contains (24 bytes per texture):**
```c
struct CKeyFramedModelPolyVertexList_File {
    int unknown_00;                        // 0x00
    int vertex_count;                      // 0x04
    char padding[16];                      // 0x08
    CKeyFramedModelPolyVertex vertList[4]; // 0x18: 48 bytes
    // Each CKeyFramedModelPolyVertex:
    //   int vertex_index (0x0)
    //   int texture_u (0x4)
    //   int texture_v (0x8)
};
```

**Runtime contains (72 bytes with pointers and processed data):**
```c
struct CKeyFramedModelPolyVertexList_Runtime {
    int unknown_00;                 // 0x00: From file
    int type;                       // 0x04: From file (vertex_count)
    SClipPlane clip_plane;          // 0x08: CALCULATED (surface normal)
    int primitive_vertex_count;     // 0x18: From file (copy of vertex_count?)
    char unknown_1c[8];             // 0x1C: ???
    CVector3i* vertex_array;        // 0x24: POINTER to transformed vertices
    char unknown_28[8];             // 0x28: ???
    int primitive_type;             // 0x30: CALCULATED or from texture flags
    char unknown_34[20];            // 0x34: Additional runtime data
};
```

## Key Insight: Runtime Transformation

The 72-byte blocks are **NOT just file data** - they're **runtime structures** that get:

1. **Initialized from file** (first 24 bytes match file format)
2. **Enhanced with calculated data**:
   - Surface normals (clip plane at 0x08)
   - Pointers to transformed vertex data (0x24)
   - Primitive type flags (0x30)
3. **Passed directly to renderer** as compatible with SPrimitive casting

## Is This MRGL?

### Evidence FOR MRGL:
- **72 bytes = MRGL type 0x40 size** (exactly matches)
- **Direct casting pattern** (renderer treats as SPrimitive-compatible)
- **Runtime expansion** (file format → extended runtime format, like textures)
- **Polymorphic dispatch** (same block passed to multiple rendering paths)

### Evidence AGAINST MRGL:
- **No type field at offset 0x00** (first field is unknown_00, not a type discriminator)
- **Not in MRGL docs** (type 0x40 is documented as "Large Texture" only)
- **KFM-specific** (read from KFM files, not MRGL chain processing)

## Hypothesis

**The 72-byte poly blocks are NOT MRGL blocks, but they ARE designed to be compatible with MRGL rendering conventions.**

They follow the **72-byte extended block pattern** that MRGL uses (like type 0x40 textures), but:
- They're **KFM-specific structures**
- They're **expanded at load time** from file format to runtime format
- They're **compatible with SPrimitive casting** for rendering
- They may have originally been MRGL-based but evolved into a custom format

## What Happens During Load?

The `lightVerticies_FUN_0056eac0` function (called before rendering) likely:

1. Reads vertex indices from `vertList[4]` (offsets 0x18-0x47)
2. Calculates surface normals
3. Writes surface normal to offset 0x08-0x17 (clip_plane)
4. Stores pointer to transformed vertices at offset 0x24
5. Sets primitive type at offset 0x30

This transforms the file-format polygon data into a runtime-renderable format.

## Remaining Questions

1. **What's at offset 0x00?** - Not read by renderer, may be flags or padding
2. **What's at offsets 0x1C-0x23?** - 8 bytes between vertex_count and vertex_array
3. **What's at offsets 0x28-0x2F?** - 8 bytes between vertex_array and primitive_type
4. **What's at offsets 0x34-0x47?** - 20 bytes at the end

These regions may contain:
- Texture UV data (from original vertList)
- Color/lighting data
- Material flags
- Render state
- Cache data

## Conclusion

You were right to question my answer! The 72-byte polygon structure is **NOT coincidentally the same size as MRGL type 0x40** - it's following the **same architectural pattern** of:

1. Compact file format (optimized for disk)
2. Expanded runtime format (optimized for rendering)
3. Direct memory casting for dispatch

While not technically an MRGL block (no type field), it's designed to **interoperate with the MRGL rendering system** by matching the expected memory layout for primitives.

The poly blocks ARE the primitives that get passed to rendering - they just get enhanced with runtime data (normals, pointers, flags) before being submitted.
