# Complete Keyframe Data Flow Analysis

## File Structure

A keyframe model file (.KFM or similar) contains:

### 1. Type 0x20 Block - SMRGLKeyframeModel (344 bytes)
```c
typedef struct SMRGLKeyframeModel {
    int type;                         // 0x00 - always 0x20
    int size;                         // 0x04 - always 0x158 (344 bytes)
    int keyframe_count;               // 0x08
    int cycle_length;                 // 0x0C
    int current_position;             // 0x10
    SMRGLHeaderExtended* base_keyframes; // 0x14 - pointer to frame 0 data
    char filenames[16][16];           // 0x18 - filenames for frames 1-15
    SMRGLHeaderExtended* loaded_frames[16]; // 0x118 - pointers to loaded frames
} SMRGLKeyframeModel; // 344 bytes (0x158)
```

### 2. Individual Keyframe Data Files

Each keyframe file (frame 0, frame 1, etc.) contains TWO consecutive MRGL blocks:

#### Block 1: Type 2 - Vertex List
```c
typedef struct SMRGLVertexList {
    int type;           // 0x00 - always 2
    int size;           // 0x04 - total size of this block
    int child_count;    // 0x08 - always 2 for keyframes (validation check)
    CVector3i vertices[]; // 0x0C - vertex array (count inferred from size)
} SMRGLVertexList;
```

Vertex count calculation: `vertex_count = (size - 0x0C) / 0x0C`

#### Block 2: Type 0x18/0x19/0x29 - Surface Primitives
These are triangle definitions that reference vertices by index.

Type 0x18 size: `count * 0xC + 0x18` (24-byte header + count * 12 bytes)

Example for type 0x18 (SSurfaceNormal):
```c
typedef struct SSurfaceNormal {
    int type;              // 0x00 - 0x18
    int count;             // 0x04 - number of surfaces
    int normal_x;          // 0x08
    int normal_y;          // 0x0C
    int normal_z;          // 0x10
    int dot_product;       // 0x14
    int vertex_index_1;    // 0x18
    char field_28[8];      // 0x1C
    int vertex_index_2;    // 0x24
    char field_40[8];      // 0x28
    int vertex_index_3;    // 0x30
    char field_52[8];      // 0x34
} SSurfaceNormal; // 60 bytes per triangle
```

#### Block 3: Null Terminator
`int 0` - marks end of MRGL chain

## Loading Process

### Step 1: Load Main Keyframe Model (type 0x20)
```c
SMRGLKeyframeModel* model = loadModelFile("model.kfm");
// This loads the 344-byte control structure
```

### Step 2: Load Base Keyframe (frame 0)
```c
if (model->base_keyframes == NULL) {
    model->base_keyframes = loadModelFile(model->filenames[0]);
}
```

### Step 3: Calculate Size of One Keyframe
```c
int size1 = getMRGLSize(model->base_keyframes);        // Size of vertex block
int size2 = getMRGLSize(model->base_keyframes + size1); // Size of surface block
int keyframe_size = size1 + size2;
```

### Step 4: Load Additional Keyframes
```c
for (int i = 0; i < model->keyframe_count; i++) {
    if (model->loaded_frames[i] == NULL) {
        model->loaded_frames[i] = loadModelChunk(model->filenames[i], keyframe_size);
    }
}
```

### Step 5: Validate All Keyframes
```c
for (int i = 0; i < model->keyframe_count; i++) {
    SMRGLHeaderExtended* frame = model->loaded_frames[i];

    // Check type 2 block
    if (frame->child_count != 2) {
        error("Bad key frame");
    }

    // Check vertex counts match
    int vertex_count_base = calculate_vertex_count(model->base_keyframes);
    int vertex_count_frame = calculate_vertex_count(frame);
    if (vertex_count_base != vertex_count_frame) {
        error("Key frame vertex mismatch");
    }
}
```

### Step 6: Interpolation (Optional)
If keyframe sizes don't match base size, scale the vertices:
```c
float scale = (float)base_size / (float)frame_size;
for (each vertex in frame) {
    vertex.x *= scale;
    vertex.y *= scale;
    vertex.z *= scale;
}
```

## Rendering Process

### Step 1: Select Current Keyframe Based on Animation Time
```c
int frame_index = (g_AnimationTimerValue / cycle_length) % keyframe_count;
```

### Step 2: Walk MRGL Block Chain
```c
SMRGLHeaderExtended* block = model->loaded_frames[frame_index];
CVector3i* vertices = NULL;
SMRGLHeaderExtended* surfaces = NULL;

while (block->type != 0) {
    if (block->type == 2) {
        // Found vertex list
        vertices = (CVector3i*)((char*)block + 0x0C);
    }
    else if (block->type == 0x18 || block->type == 0x19 || block->type == 0x29) {
        // Found surface list
        surfaces = block;
        break;
    }

    int size = getMRGLSize(block);
    block = (SMRGLHeaderExtended*)((char*)block + size);
}
```

### Step 3: Recompute Surface Normals
```c
SSurfaceNormal* surface = surfaces;
while (surface->type != 0) {
    if (surface->type == 0x18 || surface->type == 0x29) {
        calculateSurfaceNormal(vertices, surface);
        // Uses surface->vertex_index_1/2/3 to access vertices[]
    }

    int size = getMRGLSize(surface);
    surface = (SSurfaceNormal*)((char*)surface + size);
}
```

### Step 4: Submit to Renderer
```c
dispatchMRGLBlockChain(model->base_keyframes);
```

## Key Insights

1. **Type 2 != Type 0x02**: Type 2 is vertex list, not a surface primitive
2. **child_count = 2** is a validation flag, not vertex count
3. **Vertex count** is derived from block size: `(size - 0xC) / 0xC`
4. **All keyframes** in a sequence have same vertex count
5. **Surfaces** reference vertices by array index
6. **MRGL chains** are walked linearly, terminated by type 0
7. **Vertex data** starts at +0xC, not +0x14 as initially thought

## Corrected Type 2 Structure

```c
// Type 2: Vertex List Block
typedef struct SMRGLVertexListBlock {
    SMRGLHeaderExtended header; // 0x00 (12 bytes: type, size, child_count)
    CVector3i vertices[0];      // 0x0C (variable length array)
} SMRGLVertexListBlock;

// Vertex count = (header.size - 0x0C) / sizeof(CVector3i)
// For child_count check: header.child_count must == 2
```

## The Mystery Solved!

The confusion about "+0x14 vs +0x0C" came from:
- **interpolateCubicKeyframes** accesses `header[1].child_count + 0x14`
- This is NOT the vertex block! It's accessing the keyframe MODEL structure
- `header[1]` is the second 12-byte block in the file
- `child_count` offset (+0x8) in header[1] happens to store a POINTER
- That pointer + 0x14 gives you past the model's metadata

The actual vertex block (type 2) has vertices at +0xC!
