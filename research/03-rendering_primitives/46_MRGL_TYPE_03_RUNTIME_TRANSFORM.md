# MRGL Type 0x03/0x04 Runtime Transformation

## The Question

If `g_GlobeTrianglePrimitives` contains `SMRGLLightVertex` structures (type 0x03/0x04) with lighting coordinates instead of clip planes, how does `renderCustomScanline` work, which expects an `SMRGLHeaderPrimitive` with a clip plane at offset 0x08?

## The Answer: Runtime Stack Transformation!

The `CDemonGlobe_renderCorona` function **doesn't pass the primitive directly** - it **builds a new primitive structure on the stack** first!

### Assembly Evidence (lines 256-318)

```asm
// Loop setup
00471515: XOR EBX,EBX              ; EBX = 0 (offset into array)
00471517: MOV EAX,dword ptr [EBX + 0x66f2fc]  ; Read from g_GlobeTrianglePrimitives

// Copy primitive data to stack
0047151d: MOV dword ptr [ESP + 0xc],EAX       ; Stack+0x0C = field_0x00 (type)
00471521: MOV EAX,dword ptr [EBX + 0x66f300]
00471527: MOV dword ptr [ESP + 0x10],EAX      ; Stack+0x10 = field_0x04 (light_x)
0047152b: MOV EAX,dword ptr [EBX + 0x66f304]
00471531: MOV dword ptr [ESP + 0x14],EAX      ; Stack+0x14 = field_0x08 (light_y)
00471535: MOV EAX,dword ptr [EBX + 0x66f308]
00471541: MOV dword ptr [ESP + 0x18],EAX      ; Stack+0x18 = field_0x0C (light_z)

// Use light_z for intensity calculation
0047153b: FILD dword ptr [EBX + 0x66f30c]    ; Load light_z as float
0047154b: FMUL float ptr [EBP + 0x30]        ; Multiply by radius

// Continue copying rest of data
00471545: MOV EAX,dword ptr [EBX + 0x66f310]
0047154e: MOV dword ptr [ESP + 0x20],EAX      ; Stack+0x20 = field_0x10
... (more copying)

// Push scanline function pointer
00471562: PUSH 0x450320                       ; Push renderCoronaDepthScanline

// Get address of stack-built structure
0047157b: LEA EAX,[ESP + 0xc]                 ; EAX = &stack_primitive
00471582: PUSH EAX

// Call round with the lighting calculation
00471583: CALL crt_math.c_round_FUN_005fe6b0

// Call renderCustomScanline with stack structure
00471588: PUSH ESI                            ; renderer
0047158d: CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0

// Advance to next primitive
0047157f: ADD EBX,0x24                        ; += 0x24 (36 bytes per primitive)
00471595: CMP EBX,0xbd0                       ; 0xBD0 = 3024 (84 prims * 36 bytes)
0047159b: JNZ 0x00471517                      ; Loop
```

### What's Happening

The loop:
1. **Reads** a 36-byte `SMRGLLightVertex` from `g_GlobeTrianglePrimitives[i]`
2. **Copies** the data to a stack buffer
3. **Uses** the lighting coordinates (field_0x0C) for intensity calculation
4. **Passes** the stack address to `renderCustomScanline`

### The Stack Structure Layout

When `renderCustomScanline` receives the pointer, it sees:

```c
// What's on the stack at ESP+0xC:
struct {
    int type;           // ESP+0x0C = g_GlobeTrianglePrimitives[i].type
    int field_04;       // ESP+0x10 = g_GlobeTrianglePrimitives[i].light_coord_x
    int field_08;       // ESP+0x14 = g_GlobeTrianglePrimitives[i].light_coord_y
    int field_0C;       // ESP+0x18 = g_GlobeTrianglePrimitives[i].light_coord_z
    int field_10;       // ESP+0x1C = ...
    int field_14;       // ESP+0x20 = ...
    int vertices[...];  // ESP+0x24 onwards = vertex indices
};
```

### Why This Works

`renderCustomScanline` expects:
```c
struct SMRGLHeaderPrimitive {
    SMRGLBaseHeader base;      // 0x00: type, count
    SClipPlane surface_normal; // 0x08: 16 bytes (A, B, C, D)
    // Vertex data follows at 0x18
};
```

But it's receiving the light coordinates at offset 0x08-0x14!

**The key insight:** `renderCustomScanline` passes `&prim->surface_normal` to `isVisiblePlane`, which:
- Gets the values at offset +0x08 to +0x17 (the lighting coordinates!)
- Uses them as a clip plane equation (Ax + By + Cz + D = 0)
- **The lighting coordinates ARE being used as a clip plane!**

This is brilliant: The same coordinates that define where to calculate lighting intensity ALSO define the plane orientation for backface culling!

## The Dual Purpose of the "Light Coordinates"

The fields at offset 0x04-0x17 serve **two purposes simultaneously**:

1. **Lighting calculation**: Used to compute per-primitive light intensity
   - Loaded as float (FILD at line 0x0047153b)
   - Multiplied by radius
   - Passed to round()
   - Result used for brightness

2. **Clip plane / backface culling**: Passed to `isVisiblePlane`
   - Interprets the values as plane equation coefficients
   - Uses them for visibility testing
   - Primitives facing away from camera are culled

### This Explains the Values!

Remember those "weird" coordinate values like:
- 16921 (0x4219), 12387 (0x3063), 4533 (0x11B5)
- -16921, -12387, -4533

When interpreted as Q16.16 fixed-point:
- 16921 / 65536 ≈ 0.258
- 12387 / 65536 ≈ 0.189
- 4533 / 65536 ≈ 0.069

These are **normalized direction vectors** for sphere surface normals!

And when used as plane equation coefficients (A, B, C, D), they define the plane orientation for culling!

## Corrected Understanding

### File Format (36 bytes):
```c
typedef struct SMRGLLightVertex {
    int type;              // 0x00: MRGL type (0x03 or 0x04)
    int normal_x;          // 0x04: Surface normal X (Q16.16) - DUAL PURPOSE
    int normal_y;          // 0x08: Surface normal Y (Q16.16) - DUAL PURPOSE
    int normal_z;          // 0x0C: Surface normal Z (Q16.16) - DUAL PURPOSE
    int plane_d;           // 0x10: Plane D coefficient
    int flags;             // 0x14: Flags
    int vertex_indices[3]; // 0x18-0x20: Vertex indices
    int vertex_index_3;    // 0x24: 4th vertex or padding
} SMRGLLightVertex;  // 36 bytes
```

### How It's Used:

1. **Read from array**: `g_GlobeTrianglePrimitives[i]`
2. **Copy to stack**: Build runtime structure
3. **Use normal_z for lighting**: `light_intensity = normal_z * radius`
4. **Use normals for culling**: Pass to `isVisiblePlane(&stack_prim->surface_normal)`
5. **Render**: Use vertex indices to draw the primitive

## So Should SMRGLHeader Only Have Type?

**No!** The confusion comes from mixing two different formats:

1. **File/Data format** (`SMRGLLightVertex`):
   - Used in `g_GlobeTrianglePrimitives`
   - 36 bytes with surface normals

2. **Runtime format** (`SMRGLHeaderPrimitive`):
   - Expected by rendering functions
   - Has base header + clip plane + vertices
   - Can be 60 bytes (triangles) or 72 bytes (quads)

The `SMRGLHeader` should represent the **common header** that all MRGL types share:

```c
typedef struct SMRGLBaseHeader {
    int type;   // 0x00: MRGL command/primitive type
    int count;  // 0x04: Element count (vertices, children, etc.)
} SMRGLBaseHeader;  // 8 bytes
```

And `SMRGLHeaderPrimitive` extends it:

```c
typedef struct SMRGLHeaderPrimitive {
    SMRGLBaseHeader base;      // 0x00: type, count (8 bytes)
    SClipPlane surface_normal; // 0x08: 16 bytes (A, B, C, D)
    // Variable data follows (vertices, texture coords, etc.)
} SMRGLHeaderPrimitive;  // 24+ bytes
```

While `SMRGLLightVertex` is a **specialized 36-byte format** that gets transformed at runtime.

## Conclusion

MRGL type 0x03/0x04 uses a clever dual-purpose encoding:
- Surface normal coordinates (for lighting)
- Clip plane coefficients (for culling)
- Same data, two interpretations!

The globe rendering code:
1. Stores compact 36-byte light vertices in data
2. Copies to stack and adds runtime-calculated values
3. Passes to generic rendering functions
4. Lighting and culling use the same normal data

This is efficient and elegant - one set of coordinates serves multiple purposes!
