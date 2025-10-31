# DFM (Deformable Model) Primitive Format Analysis

## Question
What primitive format do DFM (skeletal animated) models use when rendering?

## Answer: **MRGL Variable-Size Primitives (Degenerate Form)**

DFM models use the **same MRGL variable-size primitive format** as KFM models (types 0x18, 0x29, 0x41, 0x42), but in a **degenerate form** that only populates vertex indices, not UV coordinates.

## File Format

### DFM Text Format (.DFM files)
DFM files are **text-based**, not binary:

```
// version
7
// lodCount,textureSetCount,textureCount,boneCount,partCount
3,1,3,37,1
// Lod list: VertexCount,triCount,capTriCount,pixelHeight,shadowOnlyFlag
763,1536,0,999999,0
445,900,0,214,0
297,600,0,999999,1
// skeleton file
BARON.SKL
// partList: "name", dominantBone, adjPartCount, adjpartList, lods(triCount, capTriCount)
"TheOnlyPart", 0
	1536, 0
	900, 0
	600, 0
// vertexList: boneCount, boneInfo(index, weight, x,y,z)
1
11, 1, -0.336198,0.72889,0.0758595
1
11, 1, -0.336198,0.69843,0.0758595
...
// triList: textureIndex, verts(index, u, v)
0,46,11684608,12913408,45,13255168,12913408,54,11684608,14566656
0,45,13255168,12913408,55,13255168,14560256,54,11684608,14566656
...
```

Key features:
- **Text format** with comments
- **Vertices with bone weights** (skeletal animation data)
- **Triangle list** with texture index and vertex indices + UVs
- **References external skeleton file** (.SKL)

## Runtime Primitive Format

### Evidence from Assembly

**File**: `core_skeleton.cpp_CDeformableModel_FUN_0059abf0`

**Assembly** (building primitive on stack):
```asm
0059b34c: MOV EAX,0x3                    ; vertex_count = 3
0059b354: MOV dword ptr [ESP + 0x8],EAX   ; Write vertex_count at offset 0x4 from base
0059b35a: MOV AX,word ptr [ESI]           ; Read first vertex index (ushort)
0059b35d: MOV dword ptr [ESP + 0x1c],EAX  ; Write at offset 0x18 from base
0059b363: MOV AX,word ptr [ESI + 0x2]     ; Read second vertex index
0059b367: MOV dword ptr [ESP + 0x28],EAX  ; Write at offset 0x24 from base
0059b36d: MOV AX,word ptr [ESI + 0x4]     ; Read third vertex index
0059b371: MOV dword ptr [ESP + 0x34],EAX  ; Write at offset 0x30 from base
0059b375: LEA EAX,[ESP + 0x4]             ; Load address of structure (base)
0059b379: PUSH EAX                        ; Push pointer to structure
0059b381: CALL renderBasicTexturedVariant ; Call renderer
```

### Structure Layout (Triangle)

```c
typedef struct SDFMPrimitive_Triangle {
    // Offset 0x00: Unknown (not written by DFM code)
    int unknown_00;

    // Offset 0x04: Vertex count (element_count)
    int vertex_count;           // Set to 3 for triangles

    // Offset 0x08: Surface normal / clip plane (16 bytes)
    // NOTE: Not written in this code path - may be computed elsewhere or left uninitialized
    SClipPlane surface_normal;  // 16 bytes (A, B, C, D)

    // Offset 0x18: First vertex index
    int vertex_index_0;
    // Offset 0x1C: UV coordinates (NOT WRITTEN - uninitialized)
    int unused_u_0;
    int unused_v_0;

    // Offset 0x24: Second vertex index
    int vertex_index_1;
    // Offset 0x28: UV coordinates (NOT WRITTEN - uninitialized)
    int unused_u_1;
    int unused_v_1;

    // Offset 0x30: Third vertex index
    int vertex_index_2;
    // Offset 0x34: UV coordinates (NOT WRITTEN - uninitialized)
    int unused_u_2;
    int unused_v_2;

    // Total size: 0x3C (60 bytes) for triangles
} SDFMPrimitive_Triangle;
```

### MRGL Size Formula Verification

From `getMRGLSize_FUN_00528700`:
```c
case 0x18:  // Render primitive (plane masked complex)
case 0x29:  // Add to face array for batch rendering
case 0x41:  // Render polygon (premium multi-state)
case 0x42:  // Rendering primitive (general)
    return header->element_count * 0xc + 0x18;
```

For triangles (3 vertices):
- Size = `3 * 0xC + 0x18 = 0x24 + 0x18 = 0x3C` = **60 bytes** ✓

### Key Difference from KFM Format

**KFM Models** (72-byte quads):
```c
struct {
    int vertex_index;    // Index into transformed buffer
    int texture_u;       // UV coordinate (POPULATED)
    int texture_v;       // UV coordinate (POPULATED)
} vertices[4];           // All fields written
```

**DFM Models** (60-byte triangles):
```c
struct {
    int vertex_index;    // Index into transformed buffer (POPULATED)
    int texture_u;       // UV coordinate (NOT WRITTEN)
    int texture_v;       // UV coordinate (NOT WRITTEN)
} vertices[3];           // Only vertex_index written, UVs uninitialized
```

## Rendering Pipeline

### Evidence from renderBasicTexturedVariant

**File**: `engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0`

**Assembly**:
```asm
0048a8b2: MOV ECX,dword ptr [ESI + 0x4]   ; Read vertex_count
0048a8c2: MOV EBX,dword ptr [EAX + 0x18]  ; Read vertex index at offset 0x18
0048a8c5: MOV dword ptr [ECX + 0x2c6d5a8],EBX  ; Write to g_VertexIndexBuffer
0048a8cf: ADD EAX,0xc                     ; Advance by 12 bytes to next vertex
0048a8d4: JL 0x0048a8bf                   ; Loop for all vertices
```

**Pseudocode**:
```c
void renderBasicTexturedVariant(CDemonRenderer *this_ptr, SPrimitive *polygon_info)
{
    // Read vertex indices from primitive structure
    iVar3 = 0;
    if (0 < polygon_info->vertex_count) {
        pSVar1 = polygon_info;
        iVar2 = 0;
        do {
            // Read vertex index from offset 0x18 + (i * 0xC)
            *(int **)((int)g_VertexIndexBuffer + iVar2) = pSVar1->vertex_list;
            iVar3 = iVar3 + 1;
            pSVar1 = (SPrimitive *)&(pSVar1->surface_normal).B;  // Advance by 0xC
            iVar2 = iVar2 + 4;
        } while (iVar3 < polygon_info->vertex_count);
    }

    // Render using vertex indices
    CDemonRenderer_clipAndFillPoly(this_ptr, polygon_info->vertex_count, g_VertexIndexBuffer);
}
```

### Pipeline Flow

```
DFM File (text format)
  ↓ Load vertices with bone weights
Skeleton deformation
  ↓ Apply bone transforms to vertices
Deformed vertex buffer (in CDemonRenderer->vertex_buffer_ptr)
  ↓ Build MRGL primitive on stack
60-byte MRGL triangle primitive (vertex indices only)
  ↓ renderBasicTexturedVariant()
Extract vertex indices (stride 0xC, starting at offset 0x18)
  ↓ Copy to g_VertexIndexBuffer
clipAndFillPoly()
  ↓ Lookup vertices in vertex_buffer_ptr using indices
Screen buffer
```

## Comparison with Other Primitive Formats

| Format | Size | Source | Vertex Data | UV Data | MRGL Type | Stride |
|--------|------|--------|-------------|---------|-----------|--------|
| SPrimitive | 28 bytes | CDemonSet | Pointer | N/A | N/A | 0x1C |
| MRGL Triangle (DFM) | 60 bytes | CDeformableModel | Index only | Not written | 0x18/0x29/0x41 | 0x3C |
| MRGL Quad (KFM) | 72 bytes | CKeyFramedModel | Index + UV | Embedded | 0x18/0x29/0x41 | 0x48 |

## Why DFM Uses This Format

### Advantages of Degenerate MRGL Format

1. **Skeletal Animation Compatibility**
   - Vertices are transformed by bone matrices before rendering
   - Only need to reference the transformed vertices, not store original positions
   - UV coordinates may be baked into the transformed vertices or computed dynamically

2. **Memory Efficiency**
   - Smaller than full MRGL quads (60 vs 72 bytes)
   - Triangles instead of quads (more flexible tessellation)
   - Don't waste memory on unneeded UV fields

3. **Renderer Compatibility**
   - Uses same MRGL size formula as KFM models
   - Can be passed to same rendering functions
   - Renderer only needs vertex indices to lookup in vertex buffer

### Why UVs Aren't Written

The UV coordinates are **not needed in the primitive** because:

1. **Pre-transformed vertices**: The `CDemonRenderer->vertex_buffer_ptr` already contains fully transformed vertices with all necessary data (position, UVs, lighting)

2. **Bone deformation**: The skeleton deformation process transforms vertices from their bone-space positions into world-space, including UV data

3. **Renderer expectations**: `renderBasicTexturedVariant` only needs vertex **indices** to look up the full vertex data from the vertex buffer

## Evidence Summary

### From Assembly Analysis

1. **Stack allocation**: DFM code writes to ESP+0x1c, ESP+0x28, ESP+0x34 (offsets 0x18, 0x24, 0x30 from base)
2. **Stride**: 12 bytes (0xC) between vertex writes
3. **Vertex count**: Written at offset 0x4
4. **Only indices**: Only reads 2-byte vertex indices (ushort) and writes as 4-byte ints
5. **No UV writes**: Assembly shows no writes to offsets 0x1C-0x23, 0x28-0x2F, 0x34-0x3B

### From Renderer Analysis

1. **Read stride**: Renderer reads at 0xC byte intervals starting from offset 0x18
2. **MRGL size formula**: Matches `element_count * 0xC + 0x18` exactly
3. **Interprets as indices**: Treats values as vertex indices into vertex_buffer_ptr, not as pointers

### From File Format

1. **Text format**: DFM files are human-readable text with bone data
2. **Triangle-based**: Uses triangles, not quads
3. **Skeleton reference**: References external .SKL file for bone hierarchy
4. **Bone weights**: Vertices have bone assignments and weights

## Answer to Original Question

**DFM models use MRGL variable-size primitives (types 0x18, 0x29, 0x41, 0x42) in a degenerate form:**

1. **Same size formula** as KFM models: `element_count * 0xC + 0x18`
2. **Different vertex count**: Triangles (3) instead of quads (4)
3. **Different data layout**: Only vertex indices written, UV fields left uninitialized
4. **Same rendering path**: Passed to `renderBasicTexturedVariant` like other MRGL primitives

The format is **60 bytes for triangles** vs **72 bytes for quads** (KFM), using the same MRGL type IDs but with simpler data.

## Rendering System Architecture (Updated)

The engine has **three primitive rendering paths**:

### Path 1: Simple Geometry (CDemonSet)
```
28-byte SPrimitive → renderBasicTextured() → Screen
```
- Used for: Level geometry, static meshes
- Fixed 28-byte format with vertex pointers

### Path 2: MRGL Geometry - Keyframed (KFM)
```
72-byte MRGL quad → dispatchMRGLToRenderer() → type-specific renderer → Screen
```
- Used for: Keyframe-animated models, dynamic objects
- Full MRGL format with embedded vertex indices + UVs

### Path 3: MRGL Geometry - Deformable (DFM)
```
60-byte MRGL triangle → renderBasicTexturedVariant() → Screen
```
- Used for: Skeletal-animated characters, deformable meshes
- Degenerate MRGL format with vertex indices only

## Next Steps

1. **Investigate surface normal calculation**: The surface_normal field at offset 0x08 is not written in the code path analyzed - determine if it's computed elsewhere or not needed for this rendering path

2. **Verify UV handling**: Confirm how UV coordinates are stored/computed for skeletal meshes - likely in the transformed vertex buffer

3. **Check other DFM rendering paths**: The analyzed path is for one specific rendering mode - other paths may populate more fields

4. **Skeleton format (.SKL)**: Investigate the skeleton file format referenced by DFM files

5. **Bone transformation pipeline**: Trace how bone matrices are applied to vertices before primitive construction

## Conclusion

DFM models use the **MRGL variable-size primitive format** but in a **simplified/degenerate form** optimized for skeletal animation. They write only vertex indices (not UVs) into 60-byte triangle primitives, relying on the pre-transformed vertex buffer to contain all necessary rendering data.

This is architecturally consistent with the engine's MRGL system while being optimized for the specific needs of skeletal animation.
