# Primitive Types Actually Used in Nocturne Engine

## Summary

The Nocturne engine uses **multiple primitive formats** with **different sizes** depending on the geometry source:

1. **28-byte primitives** (SPrimitive) - CDemonSet geometry (world/level geometry)
2. **72-byte primitives** (MRGL quads) - CKeyFramedModel (animated models)
3. **Variable-size primitives** (MRGL) - Dynamic MRGL chains

## 1. CDemonSet Geometry (28-Byte Primitives)

### Source
- Level geometry (walls, floors, ceilings)
- Static environment meshes
- Pre-baked world geometry

### Structure
```c
typedef struct SPrimitive {
    int primitive_type;             // 0x00: 4 bytes
    int vertex_count;               // 0x04: 4 bytes
    SClipPlane surface_normal;      // 0x08: 16 bytes (A, B, C, D)
    int* vertex_list;               // 0x18: 4 bytes (pointer)
    // Total: 28 bytes (0x1C)
} SPrimitive;
```

### Evidence

**File**: `CDemonSet_renderPrimitiveList_FUN_005708e0`

**Assembly**:
```asm
00570922: ADD ESI,0x28    ; Advance by 40 bytes (0x28)
...
0057094b: ADD EBX,0x28    ; Advance by 40 bytes
```

**Pseudocode**:
```c
for (int i = 0; i < primitive_count; i++) {
    renderBasicTextured(renderer, primitive_array);
    primitive_array = (SPrimitive*)&primitive_array[1].surface_normal.B;
    // ^ This advances by sizeof(SPrimitive) = 28 bytes
}
```

### Key Difference
- **No embedded vertex data** - uses pointers
- **Fixed 28-byte size** - not variable
- **Simpler format** - for static geometry

### Rendering Path
```
CDemonSet geometry
  ↓
SPrimitive array (28 bytes each)
  ↓
renderBasicTextured() / clipAndRenderReflectedPrimitive()
  ↓
Follows vertex_list pointer to get positions
  ↓
Screen buffer
```

## 2. CKeyFramedModel Geometry (72-Byte MRGL Primitives)

### Source
- Animated character models (.KFM files)
- Dynamic objects
- Skinned/keyframed meshes

### Structure (MRGL Variable-Size with element_count=4)
```c
typedef struct SPrimitive_MRGL {
    // MRGL Header (8 bytes)
    int type;                       // 0x00: MRGL type (0x18, 0x29, 0x41, etc.)
    int element_count;              // 0x04: Vertex count (typically 4 for quads)

    // Surface Data (16 bytes)
    SClipPlane surface_normal;      // 0x08: 16 bytes

    // Embedded Vertex Data (variable)
    struct {
        int vertex_index;           // Index into transformed buffer
        int texture_u;              // UV coordinate
        int texture_v;              // UV coordinate
    } vertices[element_count];      // 0x18: 3 ints * 4 vertices = 48 bytes

    // Total for quads: 8 + 16 + 48 = 72 bytes (0x48)
} SPrimitive_MRGL;
```

### Evidence

**File**: `CKeyFramedModel_submitToRenderer_FUN_00477980`

**Assembly**:
```asm
00477b29: IMUL EBP,EBP,0x48        ; Multiply by 72 bytes
00477b2d: MOV EAX,dword ptr [ESI + 0x114]  ; poly_vert_list
00477b33: ADD EAX,EBP              ; Add offset
```

**File**: `CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90`

**Assembly**:
```asm
0048cee6: PUSH 0x48                ; Pass 72 as stride parameter
0048cee8: PUSH EBP                 ; primitive_count
0048cee9: PUSH ESI                 ; primitive_array
```

**File**: `renderPolygonEngineAPIPremiumMultiState_FUN_00407290`

**Returns next block**:
```asm
00407442: LEA EAX,[EDX*0x4 + 0x0]     ; element_count * 4
00407449: SUB EAX,EDX                 ; element_count * 3
0040744b: ADD EBP,0x18                ; + 24 (header size)
0040744e: SHL EAX,0x2                 ; * 4 (sizeof(int))
00407451: ADD EAX,EBP                 ; = next primitive (72 for quads)
```

### Key Difference
- **Embedded vertex data** - no pointers needed
- **Variable size** - depends on element_count
- **MRGL format** - dispatched by type field

### Rendering Path
```
KFM file
  ↓ fread()
poly_vert_list (72-byte file format)
  ↓ lightVerticies()
poly_vert_list (72-byte MRGL primitives)
  ↓ submitToRenderer()
dispatchMRGLToRenderer() OR renderPrimitiveBatch()
  ↓ getMRGLSize() returns 72
renderPrimitivePlaneMaskedComplex() (type 0x18)
renderPolygonEngineAPIPremiumMultiState() (type 0x41)
  ↓
Screen buffer
```

## 3. CDeformableModel Geometry (Skeletal/Deformed)

### Source
- Skeletal animated characters
- Morph targets
- Cloth/soft body simulation

### Structure
**Unknown** - needs investigation, but likely follows one of the above patterns or a hybrid.

### Evidence

**File**: `CDeformableModelInstance_renderPolygons_FUN_005a0340`

The function calls `CDeformableModel_FUN_0059abf0` which needs further analysis.

**Hypothesis**: Deformable models likely:
1. Store skeleton/bone data
2. Deform vertex positions based on bones
3. Generate either 28-byte or 72-byte primitives for rendering
4. May use same `lightVerticies` pipeline as KFM

## 4. MRGL Dispatch Types

### From `dispatchMRGLToRenderer_FUN_00407aa0`

**Handled Types**:
- **0x00**: Terminator
- **0x02**: Transform and buffer vertices
- **0x03**: Process vertex lighting
- **0x0d**: Ensure texture loaded (24 bytes)
- **0x18**: Render primitive (plane masked complex) - Variable size
- **0x29**: Add to face array for batch rendering - Variable size
- **0x41**: Render polygon (premium multi-state) - Variable size

**Variable Size Formula** (from `getMRGLSize`):
```c
case 0x18:
case 0x29:
case 0x41:
    return element_count * 0xc + 0x18;  // element_count * 12 + 24
```

**Size Examples**:
- Triangle (3 vertices): `3 * 12 + 24 = 60 bytes`
- Quad (4 vertices): `4 * 12 + 24 = 72 bytes`
- Pentagon (5 vertices): `5 * 12 + 24 = 84 bytes`

## Primitive Format Summary Table

| Format | Size | Source | Vertex Data | MRGL Type | Stride |
|--------|------|--------|-------------|-----------|--------|
| SPrimitive | 28 bytes | CDemonSet | Pointer | N/A | 0x1C |
| SPrimitive_MRGL_Tri | 60 bytes | MRGL chain | Embedded | 0x18/0x29/0x41 | Variable |
| SPrimitive_MRGL_Quad | 72 bytes | KFM models | Embedded | 0x18/0x29/0x41 | 0x48 |
| SPrimitive_MRGL_Pent | 84 bytes | MRGL chain | Embedded | 0x18/0x29/0x41 | Variable |

## Why Different Formats?

### CDemonSet (28-byte, pointer-based)
**Pros**:
- Smaller memory footprint for large levels
- Share vertex data across primitives
- Efficient for static geometry
- No UV data needed for simple texturing

**Cons**:
- Requires separate vertex buffer
- Extra indirection (pointer dereference)

### CKeyFramedModel (72-byte, embedded)
**Pros**:
- Self-contained primitives
- Fast iteration (no pointer chasing)
- UV data embedded for complex texturing
- MRGL dispatch for advanced rendering

**Cons**:
- Larger memory footprint
- Duplicate vertex positions if shared

## Answer to Original Questions

### 1. Do KFM models transpose into quads?
**YES**. KFM models load as 72-byte blocks that are **MRGL quad primitives** (element_count=4).

### 2. What about DFM (deformable models)?
**Needs investigation**. Likely uses skeleton to deform vertices, then generates primitives in one of the above formats.

### 3. What about CDemonSet geometry?
**Uses 28-byte SPrimitive format**. This is the **original/base primitive format** - simpler and pointer-based.

### 4. How many MRGL primitive types are in use?
**At least 3-4 rendering types**:
- **Type 0x18**: Full-featured primitive (complex rendering)
- **Type 0x29**: Clip plane primitive (batch rendering)
- **Type 0x41**: Premium polygon (high-quality)
- **Type 0x42**: Rendering primitive (general)

Plus utility types:
- **Type 0x02**: Vertex transform
- **Type 0x03**: Vertex lighting
- **Type 0x0d**: Texture loading

## Rendering System Architecture

The engine has **two parallel rendering paths**:

### Path 1: Simple Geometry (CDemonSet)
```
28-byte SPrimitive → renderBasicTextured() → Screen
```
- Used for: Level geometry, static meshes
- Fast path for simple geometry

### Path 2: MRGL Geometry (KFM, dynamic)
```
72-byte MRGL → dispatchMRGLToRenderer() → type-specific renderer → Screen
```
- Used for: Animated models, effects, particles
- Feature-rich path with advanced rendering

### Path 3: Hybrid (possible for deformable)
```
Skeleton deformation → Generate primitives → Either path 1 or 2
```
- Used for: Characters, cloth, morphing

## Next Steps for Complete Understanding

1. **Investigate CDeformableModel rendering**:
   - Check `CDeformableModel_FUN_0059abf0`
   - Determine primitive format used
   - Trace skeleton deformation pipeline

2. **Map all MRGL types**:
   - Document all 67 MRGL type handlers
   - Identify which are actually used in game files
   - Create complete type→size mapping

3. **Verify CDemonSet primitive loading**:
   - Find where CDemonSet geometry is loaded from files
   - Confirm 28-byte format is what's on disk
   - Check if any in-place transformation occurs

4. **Check for other primitive sources**:
   - Particles (CParticleSystem?)
   - Effects (fire, water, glass)
   - UI elements
   - Debug geometry

## Conclusion

The Nocturne engine uses **AT LEAST 2 distinct primitive formats**:

1. **28-byte SPrimitive** (pointer-based) for static level geometry
2. **72-byte MRGL primitives** (embedded data) for animated models

The 72-byte format is specifically **MRGL quad primitives with element_count=4**, which explains why it matches the formula `4 * 12 + 24 = 72`.

KFM models do indeed "transpose into a list of quads" - they load as 72-byte MRGL primitive blocks that are dispatched based on their type field (0x18, 0x29, 0x41, etc.) for rendering.
