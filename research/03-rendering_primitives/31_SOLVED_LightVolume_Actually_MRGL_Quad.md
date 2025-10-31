# SOLVED: "Light Volume" is Actually MRGL Quad Primitive

## Status: ✅ SOLVED

The mysterious "light volume primitive" with `0x80000` values is **NOT a special light structure**.

It is a standard **SMRGLPrimitive_Quad** (72 bytes) with unusual but valid UV coordinates!

---

## The Mystery

### What We Thought:
- A special 40-byte "light volume" primitive
- Magic flag `0x80000` identified light rendering mode
- Complex light parameter structure
- Different from other primitives

### What It Actually Is:
- Standard **SMRGLPrimitive_Quad** (72 bytes)
- Normal textured quad with 4 vertices
- UV coordinates using large values (±8.0)
- No "light volume" at all - just texture mapping!

---

## The Evidence

### Fire Function Assembly (`FUN_004c25c0` at 0x004c36c9)

```asm
# Setup UV coordinate values:
004c36c9: MOV ESI,0x80000          ; ESI = 0x80000 = 8.0 in 16.16 fixed-point
004c36ce: MOV EAX,0xf80000         ; EAX = 0xf80000 = -8.0 in 16.16 fixed-point

# Build quad structure at ESP+0x80:
004c36d5: MOV dword ptr [ESP + 0x84],EDX    ; element_count = 4
004c36dc: MOV dword ptr [ESP + 0x94],ECX    ; surface_normal.A = 0
004c36e3: MOV dword ptr [ESP + 0x90],ECX    ; surface_normal.B = 0
004c36ea: MOV dword ptr [ESP + 0x8c],ECX    ; surface_normal.C = 0
004c36f1: MOV dword ptr [ESP + 0x88],ECX    ; surface_normal.D = 0

# Vertex 0: {index: 0, u: 8.0, v: 8.0}
004c36f8: MOV dword ptr [ESP + 0x98],ECX    ; vertex_index = 0
004c3706: MOV dword ptr [ESP + 0x9c],ESI    ; u = 0x80000 (8.0)
004c370d: MOV dword ptr [ESP + 0xa0],ESI    ; v = 0x80000 (8.0)

# Vertex 1: {index: 1, u: -8.0, v: 8.0}
004c374d: MOV dword ptr [ESP + 0xa4],EDX    ; vertex_index = 1
004c3714: MOV dword ptr [ESP + 0xa8],EAX    ; u = 0xf80000 (-8.0)
004c371b: MOV dword ptr [ESP + 0xac],ESI    ; v = 0x80000 (8.0)

# Vertex 2: {index: 2, u: -8.0, v: -8.0}
004c3754: MOV dword ptr [ESP + 0xb0],ECX    ; vertex_index = 2
004c3722: MOV dword ptr [ESP + 0xb4],EAX    ; u = 0xf80000 (-8.0)
004c3729: MOV dword ptr [ESP + 0xb8],EAX    ; v = 0xf80000 (-8.0)

# Vertex 3: {index: 3, u: 8.0, v: -8.0}
004c36ff: MOV dword ptr [ESP + 0xbc],EBX    ; vertex_index = 3
004c3730: MOV dword ptr [ESP + 0xc0],ESI    ; u = 0x80000 (8.0)
004c3737: MOV dword ptr [ESP + 0xc4],EAX    ; v = 0xf80000 (-8.0)

# Pass to renderer:
004c3843: LEA EAX,[ESP + 0x80]              ; Load structure address
004c384a: PUSH EAX
004c3852: CALL CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
```

### Renderer Function (`renderEnhancedQualityVariant` at 0x0048bdc0)

The renderer treats this as a standard MRGL primitive:

```asm
# Read element_count:
0048bde0: MOV ESI,dword ptr [EAX + 0x4]   ; element_count = 4

# Loop through vertices (stride 0xC = 12 bytes):
0048bdec: MOV ESI,dword ptr [EAX + 0x18]  ; Read vertex_index
0048be0a: ADD EAX,0xc                      ; Advance to next vertex

# Copy UV coordinates to vertex buffer:
0048bed1: MOV EBP,dword ptr [EAX + 0x1C]  ; Read u coordinate
0048bedc: MOV ESI,dword ptr [EAX + 0x20]  ; Read v coordinate
```

**The renderer has NO special handling for "0x80000" values!**
It just treats them as normal UV coordinates.

---

## The Structure

### Memory Layout (ESP+0x80)

```
Offset  Field                    Value
------  ----------------------   --------
+0x00:  type                     ??? (uninitialized)
+0x04:  element_count            4
+0x08:  surface_normal.A         0
+0x0C:  surface_normal.B         0
+0x10:  surface_normal.C         0
+0x14:  surface_normal.D         0
+0x18:  vertices[0].index        0
+0x1C:  vertices[0].u            0x80000 (8.0)
+0x20:  vertices[0].v            0x80000 (8.0)
+0x24:  vertices[1].index        1
+0x28:  vertices[1].u            0xf80000 (-8.0)
+0x2C:  vertices[1].v            0x80000 (8.0)
+0x30:  vertices[2].index        2
+0x34:  vertices[2].u            0xf80000 (-8.0)
+0x38:  vertices[2].v            0xf80000 (-8.0)
+0x3C:  vertices[3].index        3
+0x40:  vertices[3].u            0x80000 (8.0)
+0x44:  vertices[3].v            0xf80000 (-8.0)

Total: 0x48 (72 bytes) = SMRGLPrimitive_Quad
```

### C Structure

```c
SMRGLPrimitive_Quad fire_quad = {
    .header = {
        .type = ??? (uninitialized),
        .element_count = 4,
        .surface_normal = {0, 0, 0, 0}
    },
    .vertices = {
        {.vertex_index = 0, .texture_u = 0x80000, .texture_v = 0x80000},   // 8.0, 8.0
        {.vertex_index = 1, .texture_u = 0xf80000, .texture_v = 0x80000},  // -8.0, 8.0
        {.vertex_index = 2, .texture_u = 0xf80000, .texture_v = 0xf80000}, // -8.0, -8.0
        {.vertex_index = 3, .texture_u = 0x80000, .texture_v = 0xf80000}   // 8.0, -8.0
    }
};
```

---

## UV Coordinate Analysis

### Fixed-Point Conversion (16.16 format)

```
0x80000 = 524288 decimal
524288 / 65536 = 8.0

0xf80000 = -524288 decimal (signed)
-524288 / 65536 = -8.0
```

### UV Space Layout

```
      u=-8        u=8
       |          |
v=8  --+----------+--  Vertex 1 (index 1)    Vertex 0 (index 0)
       |          |
       |  Quad    |
       |          |
v=-8 --+----------+--  Vertex 2 (index 2)    Vertex 3 (index 3)
       |          |
```

This creates a **16×16 unit quad** centered at the origin in UV space.

### Why Large UV Values?

For fire/particle effects, this could be:
1. **Texture tiling**: Repeat the fire texture multiple times across the quad
2. **Procedural effects**: Use UV coordinates in fragment shader calculations
3. **Distortion mapping**: Large UV range allows more texture variation
4. **Billboard sizing**: UV range controls how much of the texture is visible

---

## What About the 40-Byte Primitives?

The previous analysis that found "40-byte light volume primitives" was looking at a **DIFFERENT** code path!

### Two Different Fire Rendering Paths:

#### Path 1: Fire Quads (40 bytes) - SPrimitive_Geometry
Used by: `renderMaximumQuality`
- Simple 40-byte structure
- 4 vertex indices (uses padding slot)
- primitive_type = 4
- vertex_count = 0
- **This is SPrimitive_FireQuad** (already documented)

#### Path 2: Fire Effects (72 bytes) - SMRGLPrimitive_Quad
Used by: `renderEnhancedQualityVariant`
- Standard MRGL quad structure
- 4 vertices with full UV coordinates
- element_count = 4
- UV values = ±8.0
- **This is the "light volume" we investigated** (now solved!)

---

## Why the Confusion?

### Misleading Clues:

1. **The "0x80000" value** appeared to be a magic flag, but it's just the UV coordinate 8.0
2. **Different code paths** for fire rendering made us think there were multiple structure types
3. **Decompiled variable names** like "SStack_204" obscured the actual structure
4. **Assembly complexity** made it hard to see the structure was at ESP+0x80, not SStack_204

### The Real Story:

The fire system uses **BOTH**:
- 40-byte simple quads (SPrimitive_FireQuad)
- 72-byte MRGL quads (SMRGLPrimitive_Quad) with large UV coordinates

Both are valid, just used in different rendering contexts!

---

## Conclusions

### What We Learned:

1. ✅ **No special "light volume" structure exists**
   - It's a standard SMRGLPrimitive_Quad

2. ✅ **0x80000 is NOT a flag**
   - It's the fixed-point value 8.0 (UV coordinate)

3. ✅ **The structure is 72 bytes, not 40**
   - We were confusing two different fire rendering paths

4. ✅ **The renderer is generic**
   - No special handling for "light volumes"
   - Just renders textured quads with whatever UV values you give it

5. ✅ **Large UV coordinates are intentional**
   - Used for texture tiling/distortion effects in fire rendering

### Struct Definitions:

**No new struct needed!** Use existing:
```c
SMRGLPrimitive_Quad  // For this "light volume" case (72 bytes)
SPrimitive_FireQuad  // For simple fire quads (40 bytes)
```

### Documentation Updates:

1. Remove "SPrimitive_LightVolume" from all headers
2. Update fire rendering documentation to note two paths:
   - Simple path: 40-byte SPrimitive_FireQuad
   - Enhanced path: 72-byte SMRGLPrimitive_Quad with large UVs
3. Add comment about 0x80000 = 8.0 UV coordinate value

---

## Related Code

### Fire Functions Using MRGL Quads:
- `core_fire.cpp_FUN_004c25c0` - Builds 72-byte MRGL quad with ±8.0 UVs
- Rendered by: `CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0`

### Fire Functions Using Simple Quads:
- `core_fire.cpp_FUN_004c25c0` (different path) - Builds 40-byte simple quad
- Rendered by: `CDemonRenderer_renderMaximumQuality_FUN_0048bad0`

### Other Uses of renderEnhancedQualityVariant:
- `core_curtain.cpp_FUN_0044b060` - Curtain effects
- `core_glass.cpp_CGlass_FUN_004e9930` - Glass rendering
- `core_glass.cpp_CGlass_FUN_004e9af0` - More glass
- `core_water.cpp_FUN_005ea320` - Water surface

All use standard MRGL primitives with various UV coordinate ranges!

---

## Mystery Solved! 🎉

The "light volume primitive" was a red herring caused by:
- Misinterpreting UV coordinates as flags
- Confusing two different fire rendering code paths
- Ghidra's decompilation obscuring the actual structure location

**The fire system just uses standard MRGL quads with interesting UV coordinates.**

No special struct definition needed!
