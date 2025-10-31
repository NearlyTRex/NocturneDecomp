# Complete Rendering Pipeline: File → Screen Buffer

## Goal
Trace the complete path of polygon data from KFM file read to screen buffer write, focusing only on assembly-level evidence.

## Pipeline Overview

```
KFM File (disk)
  ↓ [CKeyFramedModel_readBinaryModel]
Poly Data (72-byte blocks in memory)
  ↓ [CKeyFramedModel_rotateAndLightVertices]
Transformed Poly Data (72-byte blocks, modified in-place)
  ↓ [CKeyFramedModel_submitToRenderer]
Renderer Primitive Batch (72-byte stride)
  ↓ [CDemonRenderer_renderTriangleFacetList]
Vertex Buffer (UV + indices)
  ↓ [drawPolyList / renderTriangleTextured]
Screen Buffer (pixels)
```

## Step 1: File Read → Memory (CKeyFramedModel_readBinaryModel_FUN_00476f20)

### Assembly Evidence
```asm
// Reading polygon data from file
00477023: IMUL EAX,EDX,0x48          ; poly_count * 72
00477029: PUSH EAX                   ; size = poly_count * 72
0047702a: MOV EAX,dword ptr [EBX + 0x114]  ; poly_vert_list pointer
00477030: PUSH EAX                   ; destination buffer
00477031: PUSH ECX                   ; file handle
00477032: CALL crt_stdio.c_fread_FUN_005fed50  ; fread(poly_vert_list, 1, poly_count*72, file)
```

**Result**: `poly_vert_list` buffer now contains `poly_count` blocks of 72 bytes each.

**File Format** (72 bytes per polygon):
```
0x00: int unknown_00
0x04: int vertex_count (3 or 4)
0x08: char padding[16]
0x18: CKeyFramedModelPolyVertex vertList[4]  (48 bytes total)
      Each CKeyFramedModelPolyVertex:
        0x00: int vertex_index
        0x04: int texture_u
        0x08: int texture_v
```

## Step 2: Transform Preparation (CKeyFramedModel_rotateAndLightVertices_FUN_004778d0)

### Assembly Evidence
```asm
// Passing poly_vert_list to lighting function
0047791b: MOV EAX,dword ptr [EBX + 0x114]  ; poly_vert_list
00477921: PUSH EAX                          ; arg4: poly_vert_list
00477922: MOV EDX,dword ptr [EBX + 0x110]  ; poly_count
00477928: PUSH EDX                          ; arg3: poly_count
00477929: MOV ECX,dword ptr [EBX + 0x104]  ; vertex_count
0047792f: PUSH ECX                          ; arg2: vertex_count
00477937: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
```

**Function**: `lightVerticies(set_ptr, vertex_count, poly_count, poly_vert_list, ...)`

**Purpose**: This function transforms the file-format polygon data IN-PLACE:
- Calculates surface normals
- Transforms vertices to screen space
- Writes runtime pointers into the 72-byte blocks

**Result**: The 72-byte blocks are modified to contain runtime rendering data.

## Step 3: Submit to Renderer (CKeyFramedModel_submitToRenderer_FUN_00477980)

### Assembly Evidence
```asm
// Calculate offset into poly_vert_list
00477b29: IMUL EBP,EBP,0x48              ; poly_index * 72
00477b2d: MOV EAX,dword ptr [ESI + 0x114] ; poly_vert_list
00477b33: ADD EAX,EBP                     ; poly_vert_list + (index * 72)
00477b35: PUSH EAX                        ; primitive_array pointer

// Calculate count
00477b23: MOV EAX,dword ptr [ESP + 0x28]  ; end_index
00477b27: SUB EAX,EBP                     ; count = end - start
00477b2c: PUSH EAX                        ; primitive_count

00477b3d: CALL core_set.cpp_FUN_00570770  ; Dispatch to renderer
```

**Function**: `FUN_00570770(set_ptr, primitive_array, primitive_count, render_flags)`

**Key**: The 72-byte blocks from `poly_vert_list` are passed AS-IS to the renderer.

## Step 4: Rendering Dispatch (core_set_cpp_FUN_00570770)

### Assembly Evidence
```asm
// Iterate through 72-byte blocks
005707b7: MOV EAX,dword ptr [EBX + 0x4]      ; Read offset +0x4 (vertex_count/type)
005707ba: MOV dword ptr [ESP + 0x4],EAX      ; Store to SPrimitiveLit.type
005707be: MOV EAX,dword ptr [EBX + 0x8]      ; Read offset +0x8 (clip_plane.A)
005707c1: MOV dword ptr [ESP + 0x8],EAX      ; Store to clip_plane.A
005707c5: MOV EAX,dword ptr [EBX + 0xc]      ; Read offset +0xC (clip_plane.B)
005707c8: MOV dword ptr [ESP + 0xc],EAX      ; Store to clip_plane.B
005707cc: MOV EAX,dword ptr [EBX + 0x10]     ; Read offset +0x10 (clip_plane.C)
005707cf: MOV dword ptr [ESP + 0x10],EAX     ; Store to clip_plane.C
005707d3: MOV EAX,dword ptr [EBX + 0x14]     ; Read offset +0x14 (clip_plane.D)
005707d6: MOV dword ptr [ESP + 0x14],EAX     ; Store to clip_plane.D
005707da: MOV EAX,dword ptr [EBX + 0x18]     ; Read offset +0x18
005707dd: MOV dword ptr [ESP + 0x18],EAX     ; Store to primitive.vertex_count
005707e1: MOV EAX,dword ptr [EBX + 0x24]     ; Read offset +0x24 (POINTER!)
005707e4: MOV dword ptr [ESP + 0x1c],EAX     ; Store to primitive.vertex_array
005707e8: MOV EAX,dword ptr [EBX + 0x30]     ; Read offset +0x30
005707eb: MOV dword ptr [ESP + 0x20],EAX     ; Store to primitive.primitive_type

// Call renderer
00570807: ADD EBX,0x48                       ; Advance by 72 bytes
0057080b: CALL engine_drender.cpp_CDemonRenderer_renderLitObject_FUN_0048c8d0
```

**Runtime Layout Discovered** (72 bytes):
```
0x00: int unknown_00        (not read by this code path)
0x04: int type              (vertex count, 3 or 4)
0x08: SClipPlane clip_plane (16 bytes - surface normal)
0x18: int vertex_count      (or primitive data)
0x1C: char unknown[8]
0x24: CVector3i* vertex_array  (POINTER to transformed vertices)
0x28: char unknown[8]
0x30: int primitive_type    (rendering flags)
0x34: char remaining[20]
```

**Key Insight**: The 72-byte blocks contain **pointers at offset 0x24** pointing to transformed vertex data.

Then calls:
```asm
00570826: PUSH EBP                 ; primitive_count
00570827: MOV EBX,dword ptr [0x006703ec]  ; g_CDemonRendererPtr
0057082d: PUSH EBX
0057082e: CALL engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
```

## Step 5: Primitive Batch (CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90)

### Assembly Evidence
```asm
// Pass 72-byte stride to triangle renderer
0048cee5: PUSH EDI                  ; render_flags
0048cee6: PUSH 0x48                 ; ← HARDCODED 72-byte stride!
0048cee8: PUSH EBP                  ; primitive_count
0048cee9: PUSH ESI                  ; primitive_array
0048ceea: PUSH EBX                  ; renderer ptr
0048ceeb: CALL engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
```

**Function**: `renderTriangleFacetList(renderer, primitive_array, count, 0x48, flags)`

**Key**: The renderer **expects 72-byte stride primitives**!

Alternative path (texture capture mode):
```asm
0048ceba: PUSH EDI                  ; render_flags
0048cebb: PUSH ESI                  ; primitive
0048cebc: MOV EAX,dword ptr [ESP + 0x1c]
0048cec0: PUSH EAX                  ; renderer ptr
0048cec1: INC EBX
0048cec2: CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
0048cec7: ADD ESI,0x48              ; ← Advance by 72 bytes
```

## Step 6: Triangle Facet List (CDemonRenderer_renderTriangleFacetList_FUN_0048cf00)

### Assembly Evidence - Reading 72-Byte Blocks

The function signature shows:
```c
int renderTriangleFacetList(CDemonRenderer *this_ptr,
                           SPrimitive *primitive_array,
                           int primitive_count,
                           int render_flags,
                           int primitive_stride);  // = 0x48 (72)
```

**External Renderer Path** (lines 91-122):
```asm
// Build visible face pointer array
0048d038: MOV EDX,dword ptr [ESP + 0x14]     ; local_1c (face pointer index)
0048d03c: MOV dword ptr [EDX + 0x687ea8],EBX ; g_VisibleFacePointers[i] = primitive
0048d042: MOV EAX,dword ptr [ESP + 0x3c]     ; render_flags (used as stride here)
0048d046: ADD EBX,EAX                         ; primitive += stride (72 bytes)
...
// Call external renderer
0048d064: PUSH EDX                ; g_RenderStateFlags
0048d065: PUSH EAX                ; face_count
0048d066: PUSH 0x687ea8            ; g_VisibleFacePointers
0048d06b: MOV ECX,dword ptr [ESI + 0x18]  ; vertex_buffer_ptr
0048d06e: PUSH ECX
0048d06f: CALL wincore_windll.cpp_drawPolyList_FUN_005b7640  ; ← TO SCREEN!
```

**Software Renderer Path** (lines 64-89):
```asm
// Extract vertex indices from 72-byte block
0048cf4c: MOV ECX,dword ptr [EBX + 0x18]     ; Read offset +0x18 (vertex indices)
0048cf4f: MOV dword ptr [ESP + 0x18],ECX     ; local_28 = vertex_list
0048cf53: MOV EDX,dword ptr [EBX + 0x24]     ; Read offset +0x24
0048cf56: MOV dword ptr [ESP + 0x14],EDX     ; local_24 = second vertex
0048cf5a: MOV EAX,dword ptr [EBX + 0x30]     ; Read offset +0x30
0048cf5d: MOV dword ptr [ESP + 0x10],EAX     ; local_20 = third vertex

// Check if quad (4 vertices)
0048cf61: CMP dword ptr [EBX + 0x4],0x4      ; Check vertex_count field
0048cf65: JNZ LAB_0048cf70
0048cf67: MOV ECX,dword ptr [EBX + 0x3c]     ; Read offset +0x3C (fourth vertex)
0048cf6a: MOV dword ptr [ESP + 0xc],ECX      ; local_1c = fourth vertex

// Copy UV coordinates to vertex buffer
0048cf76: MOV EAX,dword ptr [ESI + 0x18]     ; this_ptr->vertex_buffer_ptr
0048cf79: MOV ECX,dword ptr [ESP + 0x18]     ; local_28 (first vertex index)
0048cf7d: MOV EDX,dword ptr [EBX + 0x28]     ; Read offset +0x28 (U coord?)
0048cf80: MOV dword ptr [EAX + ECX*0x1],EDX  ; vertex_buffer[v0].u = ...

// Continue reading UV data from various offsets
0048cf83: MOV EDX,dword ptr [EBX + 0x2c]     ; Read offset +0x2C (V coord?)
0048cf86: MOV dword ptr [EAX + ECX*0x1 + 0x4],EDX  ; vertex_buffer[v0].v = ...
...

// Advance to next primitive
0048cfd8: MOV ECX,dword ptr [ESP + 0x38]     ; primitive_stride (72)
0048cfdc: LEA EBX,[EBX + ECX*0x1]            ; primitive_array += stride
...

// Call texture renderer
0048cfe3: CALL engine_drender.cpp_renderTriangleTextured_FUN_00483370  ; ← SOFTWARE RENDER
```

**Key Offsets Read** (from 72-byte blocks):
- `+0x04`: vertex_count (3 or 4)
- `+0x18`: First vertex index (or vertex data start)
- `+0x24`: Second vertex index
- `+0x28`: UV coordinate U (first vertex)
- `+0x2C`: UV coordinate V (first vertex)
- `+0x30`: Third vertex index
- `+0x34`: UV data for second vertex
- `+0x38`: UV data continued
- `+0x3C`: Fourth vertex index (if quad)

## Step 7: Screen Buffer Write

### External Renderer (drawPolyList_FUN_005b7640)
This calls Windows/DirectX APIs to draw polygons directly to screen buffer.

### Software Renderer (renderTriangleTextured_FUN_00483370)
Performs software rasterization:
1. Triangle setup (edge equations)
2. Scanline iteration
3. Per-pixel texture sampling
4. Write to frame buffer

## Key Discoveries

### 1. The 72-Byte Format is Dual-Purpose

**File Format** (what's stored on disk):
```c
struct {
    int unknown_00;                        // 0x00
    int vertex_count;                      // 0x04: 3 or 4
    char padding[16];                      // 0x08
    CKeyFramedModelPolyVertex verts[4];    // 0x18: indices + UVs (48 bytes)
};
```

**Runtime Format** (after lightVerticies transform):
```c
struct {
    int unknown_00;                 // 0x00: unchanged
    int type;                       // 0x04: vertex_count (3 or 4)
    SClipPlane clip_plane;          // 0x08: CALCULATED surface normal (16 bytes)
    int vertex_data_start;          // 0x18: start of vertex/UV data
    char uv_or_data[8];             // 0x1C-0x23: UV coords or pointers
    CVector3i* vertex_array;        // 0x24: POINTER to transformed vertices
    float uv_data[2];               // 0x28-0x2F: UV coordinates
    int vertex_indices[3];          // 0x30-0x3B: vertex indices or data
    int fourth_vertex_or_data;      // 0x3C: fourth vertex if quad
    char remaining[8];              // 0x40-0x47: additional data
};
```

### 2. MRGL Relationship

**The 72-byte blocks are NOT MRGL type 0x40** (which is specifically for textures), BUT:

**They COULD be MRGL rendering primitive types with element_count=4:**

Types that use formula `element_count * 0xc + 0x18`:
- Type 0x0e: Rendering Primitive
- Type 0x11: Rendering Primitive
- Type **0x18: Full-Featured Primitive**
- Type 0x1e: Rendering Primitive
- Type 0x22: Rendering Primitive
- Type 0x29: Clip Plane
- Type 0x33-0x34: Rendering Primitives
- Type 0x38: Rendering Primitive
- Type 0x3e: Rendering Primitive
- Type **0x41: Premium Polygon**
- Type 0x42: Rendering Primitive

With `element_count = 4`: `4 * 12 + 24 = 72 bytes` ✓

**Most Likely Candidate: Type 0x18 (Full-Featured Primitive)**
- From MRGL docs: "Complex rendering"
- Used in rendering dispatch: `renderPrimitiveFullFeatured((SPrimitive*)current)`
- Size matches exactly with 4 elements

### 3. The Transform Pipeline

```
File Read:
  72 bytes = [vertex_count, padding, 4x(index,u,v)]

↓ lightVerticies() - IN-PLACE TRANSFORMATION

Runtime:
  72 bytes = [type, clip_plane, vertex_data, pointers, UVs, indices]

↓ submitToRenderer()

Renderer expects:
  72-byte stride primitives with specific layout
```

The transformation happens **in-place** - the same 72-byte buffer is reused, with runtime data overwriting file data.

### 4. Multiple Possible MRGL Types

**Hypothesis**: The KFM polygon blocks may be **compatible with multiple MRGL primitive types**:

- **Type 0x18** for full-featured rendering (lighting, textures, effects)
- **Type 0x29** for clip plane testing
- **Type 0x41** for premium quality polygons

The renderer casts them based on context, using the **polymorphic layout** where:
- Offset 0x00 would be type discriminator (if MRGL)
- Offset 0x04 is element_count / vertex_count
- Offset 0x08+ is type-specific data

## Conclusion

The 72-byte polygon blocks follow **MRGL architectural principles** even if they're not explicitly MRGL blocks:

1. **Fixed-size runtime format** (72 bytes)
2. **Dual-format design** (file vs runtime)
3. **In-place transformation** (efficiency)
4. **Polymorphic casting** (same data, multiple interpretations)
5. **Size formula match** (element_count * 0xc + 0x18 with count=4)

The renderer is designed to accept **72-byte stride primitives** throughout the entire pipeline, from file load to screen buffer write.
