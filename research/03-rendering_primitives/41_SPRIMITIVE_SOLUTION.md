# SPrimitiveLit Solution - The Real Story

## The Discovery

After analyzing the assembly in `FUN_00570770` (set.cpp), we discovered that **SPrimitiveLit is an adapter structure** that unpacks MRGL primitive data for rendering.

## Critical Assembly Evidence

From `FUN_00570770` at 005707b7:

```assembly
// EBX points to SMRGLHeaderPrimitive in memory
005707b7: MOV EAX,dword ptr [EBX + 0x4]   // Read MRGL count field
005707ba: MOV dword ptr [ESP + 0x4],EAX   // Store to LOCAL +0x4 (NOT +0x0!)

005707be: MOV EAX,dword ptr [EBX + 0x8]   // Read MRGL clip_plane.A
005707c1: MOV dword ptr [ESP + 0x8],EAX   // Store to LOCAL +0x8

// ... copies rest of clip_plane (16 bytes total) ...

005707da: MOV EAX,dword ptr [EBX + 0x18]  // Read next MRGL header
005707dd: MOV dword ptr [ESP + 0x18],EAX  // Store to LOCAL +0x18

005707e1: MOV EAX,dword ptr [EBX + 0x24]  // Read from MRGL +0x24
005707e4: MOV dword ptr [ESP + 0x1c],EAX  // Store vertex_array pointer

005707e8: MOV EAX,dword ptr [EBX + 0x30]  // Read from MRGL +0x30
005707eb: MOV dword ptr [ESP + 0x20],EAX  // Store primitive_type

// Call renderLitObject with ESP+0x4 (skipping first 4 bytes!)
005707fb: LEA EAX,[ESP + 0x4]
005707ff: PUSH EAX
```

**The pointer passed is `ESP+0x4`, NOT `ESP+0x0`!**

## The Problem with SPrimitiveLit

```c
typedef struct SPrimitiveLit {
    char field_0[4];              // 0x00 - THIS DOESN'T EXIST!
    int type;                     // 0x04
    SClipPlane clip_plane;        // 0x08
    SPrimitiveGeometry primitive; // 0x18
} SPrimitiveLit;
```

The `field_0[4]` was added by Ghidra's decompiler, but **the actual data structure doesn't include it**. The assembly constructs the struct starting at what Ghidra thinks is offset +0x04.

## What's Really Happening

### Actual Stack Layout:
```
ESP+0x00: [uninitialized/unused]
ESP+0x04: type (int) - from MRGL.count at +0x4
ESP+0x08: clip_plane (16 bytes) - from MRGL.surface_normal at +0x8
ESP+0x18: vertex_count (int) - from next MRGL header at +0x18
ESP+0x1c: vertex_array (ptr) - pointer constructed from MRGL data
ESP+0x20: primitive_type (int) - from MRGL data at +0x30
```

### Where Data Comes From:

The code reads from **MRGL primitive arrays** like this:

```c
SMRGLHeaderPrimitive* pSVar1 = in_stack_00000008;  // Array of MRGL primitives

// Copy data from MRGL to temporary stack structure:
local_34.type = (pSVar1->base).count;                    // MRGL +0x4
local_34.clip_plane = (pSVar1->surface_normal);          // MRGL +0x8 to +0x17
local_34.primitive.vertex_count = pSVar1[1].base.type;   // Next MRGL at +0x18
local_34.primitive.vertex_array = (CVector3i *)pSVar1[1].surface_normal.B;  // +0x24
local_34.primitive.primitive_type = pSVar1[2].base.type; // +0x30

// Advance by 3 MRGL headers (0x48 = 72 bytes = 3 * 24 bytes)
pSVar1 = pSVar1 + 3;
```

This is reading **3 consecutive MRGL headers** and extracting specific fields!

## The Real Structure

What `renderLitObject` actually receives is:

```c
typedef struct SRenderablePrimitive {
    int render_mode;          // 0x00 - from MRGL count field
    SClipPlane clip_plane;    // 0x04 - from MRGL surface_normal
    int vertex_count;         // 0x14 - from next MRGL type field
    CVector3i* vertex_array;  // 0x18 - pointer into MRGL data
    int primitive_type;       // 0x1c - from third MRGL header
} SRenderablePrimitive;  // 32 bytes, not 36!
```

## Solution: Delete SPrimitiveLit and SPrimitiveGeometry

**Yes, you're right - they shouldn't exist!**

### What to do:

1. **Change `renderLitObject` signature** from:
   ```c
   void renderLitObject(CDemonRenderer* this_ptr,
                       SPrimitiveLit* obj,
                       RenderScanlineFunc* scanline_renderer);
   ```

   To something like:
   ```c
   void renderLitObject(CDemonRenderer* this_ptr,
                       int render_mode,
                       SClipPlane* clip_plane,
                       int vertex_count,
                       CVector3i* vertex_array,
                       int primitive_type,
                       RenderScanlineFunc* scanline_renderer);
   ```

   OR keep a simplified struct:
   ```c
   typedef struct SRenderPrimitive {
       int render_mode;          // 0x00
       SClipPlane clip_plane;    // 0x04
       int vertex_count;         // 0x14
       CVector3i* vertex_array;  // 0x18
       int primitive_type;       // 0x1c
   } SRenderPrimitive;  // 32 bytes
   ```

2. **Update call sites** in:
   - `FUN_00570770` (set.cpp) - already builds this correctly on stack
   - `FUN_004758d0` (dlight.cpp) - builds on stack for lighting
   - `FUN_004736c0` (dlight.cpp) - builds on stack for coronas
   - `FUN_00471400` (dlight.cpp) - builds on stack for halos

3. **Benefit**: The structure will actually match what the code does!

## Why This Happened

Ghidra's decompiler inferred the wrong struct size:
- Saw `renderLitObject` being called with stack pointers
- Analyzed field accesses at +0x04, +0x08, +0x18
- Incorrectly assumed there must be something at +0x00
- Generated `field_0[4]` as padding/unknown data

But the assembly clearly shows the pointer passed is `ESP+0x4`, skipping that phantom first field entirely!

## Recommendation

**DELETE** both SPrimitiveLit.h and SPrimitiveGeometry.h, and replace with:

```c
// SRenderPrimitive.h
typedef struct SRenderPrimitive {
    int render_mode;          // 0x00 - 0=normal, other values change rendering
    SClipPlane clip_plane;    // 0x04 - surface normal for culling
    int vertex_count;         // 0x14 - number of vertices
    CVector3i* vertex_array;  // 0x18 - pointer to vertex array
    int primitive_type;       // 0x1c - type of primitive (tri/quad/etc)
} SRenderPrimitive;  // 32 bytes
```

This accurately represents what the code actually does!
