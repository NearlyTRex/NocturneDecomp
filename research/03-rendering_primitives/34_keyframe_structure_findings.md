# SMRGLKeyframe Structure - Definitive Findings

## Key Facts from Assembly:

### 1. Keyframe vertex data layout:
- +0x00 to +0x07: SMRGLHeaderBasic (type, count)
- +0x08: child_count (must be 2 for valid keyframes)
- +0x0C: unknown field
- +0x10: vertex_count
- +0x14: vertices[] array (CVector3i, 12 bytes each)

### 2. MRGL Type 2/3 size calculation:
From getMRGLSize line 42-44:
```c
case 2:
case 3:
    return header->child_count * 0xc + 0xc;
```
Size = 12 + (child_count * 12)
For child_count=2: size = 36 bytes

This is NOT the vertex data! This is the size of a type 2/3 MRGL block.

### 3. Keyframe files contain multiple MRGL blocks:
From interpolateCubicKeyframes, the structure appears to be:
- Block 0: Control/metadata (SMRGLKeyframeModel-like data)
- Block 1: Another metadata block (has pointers)
- Block N: Actual vertex data (type 2, child_count=2)
- Block N+1: Surface/primitive data (triangles/quads referencing vertices by index)

### 4. "child_count = 2" means:
Looking at type 2/3 blocks: 12 + (2 * 12) = 36 bytes
This suggests each type 2/3 block contains 2 sub-elements of 12 bytes each after the header.

Could this be:
- Header (12 bytes)
- Sub-block 1 (12 bytes)
- Sub-block 2 (12 bytes)

Perhaps type 2 = vertex list header and type 3 = surface list header?

### 5. Actual keyframe usage:
- Vertices are accessed as `vertex_data[index]` where vertex_data points to +0x14 offset
- Surfaces (SSurfaceNormal) contain vertex indices (vertex_index_1/2/3)
- Each keyframe file has SAME vertex count across all frames
- Interpolation scales vertices between keyframes

## Proposed Concrete Structure:

The actual vertex data block should be:

```c
typedef struct SMRGLVertexListHeader {
    int type;           // 0x00 - always 2 or 3?
    int size;           // 0x04 - total size
    int child_count;    // 0x08 - always 2 for vertex lists
    int unknown_0C;     // 0x0C
    int vertex_count;   // 0x10
    // vertices follow at +0x14
} SMRGLVertexListHeader; // 20 bytes (0x14)
```

But this conflicts with getMRGLSize which says type 2/3 is 36 bytes for child_count=2.

## The Mystery:
How can type 2/3 with child_count=2 be 36 bytes (per getMRGLSize)
but vertices start at +0x14 (20 bytes) and are variable count?

**Answer**: They're DIFFERENT block types!
- Type 2/3 blocks with size=36 are metadata/header blocks
- The actual vertex data might be a DIFFERENT type
- Need to check what type code the vertex block actually has

## Next Steps:
1. Check assembly to see what type code is at the vertex data +0x00
2. Verify if there are multiple consecutive MRGL blocks in a keyframe file
3. Understand the relationship between "child_count=2" and actual structure
