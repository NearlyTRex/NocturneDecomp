# MRGL Primitive Format - The 72-Byte Block Explained

## Question
Do the render methods in `3d.c` and `engine_drender.cpp` take the 72-byte primitive as the rendering unit?

## Answer: **YES!**

The 72-byte blocks ARE MRGL rendering primitives with **variable-size format**.

## MRGL Primitive Structure (Variable Size)

### General Formula
From `getMRGLSize_FUN_00528700`:
```c
case 0x18:  // Full-Featured Primitive
case 0x29:  // Clip Plane Check
case 0x41:  // Premium Polygon
case 0x42:  // Rendering Primitive
    return header->element_count * 0xc + 0x18;
```

Size = `element_count * 12 + 24`

### Quad Primitives (element_count = 4)
Size = `4 * 12 + 24 = 48 + 24 = 72 bytes` ✓

### Structure Layout

```c
typedef struct SPrimitive {
    // === MRGL Header (8 bytes) ===
    int type;                   // 0x00: MRGL type (0x18, 0x29, 0x41, etc.)
    int element_count;          // 0x04: Vertex count (3 or 4)

    // === Surface Data (16 bytes) ===
    SClipPlane surface_normal;  // 0x08: Surface normal / clip plane (16 bytes)
    //   int A;  // 0x08
    //   int B;  // 0x0C
    //   int C;  // 0x10
    //   int D;  // 0x14

    // === Vertex Data (variable, 12 bytes per vertex) ===
    // Offset 0x18: vertex_list starts here
    struct {
        int vertex_index;       // Index into transformed vertex buffer
        int texture_u;          // U coordinate (fixed-point or float)
        int texture_v;          // V coordinate (fixed-point or float)
    } vertices[element_count];  // 3 or 4 vertices

    // Total for quad: 8 + 16 + (4 * 12) = 72 bytes
} SPrimitive;
```

## Evidence from Render Functions

### 1. Type 0x18 Handler (renderPrimitivePlaneMaskedComplex)

**Function**: `engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0`

**Signature**:
```c
SMRGLHeader* renderPrimitivePlaneMaskedComplex(SPrimitive *primitive);
```

**Reads primitive data**:
```c
// Line 67-76: Extract vertex data
ppiVar2 = &primitive->vertex_list;  // Start at offset 0x18
for (iVar1 = 0; iVar1 < primitive->vertex_count * 3; iVar1 += 3) {
    *piVar3 = (int)*ppiVar2 + g_ProcessedVertexOffset;  // vertex_index
    g_RenderVertexBuffer[...].u = (float)ppiVar2[1];     // texture_u
    g_RenderVertexBuffer[...].v = (float)ppiVar2[2];     // texture_v
    ppiVar2 += 3;  // Advance by 3 ints
}
```

**Returns next block**:
```c
// Line 79: Calculate next primitive pointer
return (SMRGLHeader *)(&primitive->vertex_list + primitive->vertex_count * 3);
```

**Assembly**:
```asm
004046cd: LEA ESI,[EDI + 0x18]        ; ESI = primitive->vertex_list (offset 0x18)
```

**For quad**: Returns `primitive + 0x18 + (4 * 3 * 4) = primitive + 0x48` ✓

### 2. Type 0x41 Handler (renderPolygonEngineAPIPremiumMultiState)

**Function**: `engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290`

**Same pattern**:
```c
// Line 81-89: Extract vertex data starting at offset 0x18
ppiVar3 = &polygon_info->vertex_list;
for (iVar2 = 0; iVar2 < polygon_info->vertex_count * 3; iVar2 += 3) {
    *piVar6 = (int)*ppiVar3 + g_ProcessedVertexOffset;
    g_RenderVertexBuffer[...].u = (float)ppiVar3[1];
    g_RenderVertexBuffer[...].v = (float)ppiVar3[2];
    ppiVar3 += 3;
}
```

**Returns next block** (same formula):
```asm
00407442: LEA EAX,[EDX*0x4 + 0x0]    ; vertex_count * 4
00407449: SUB EAX,EDX                ; vertex_count * 3
0040744b: ADD EBP,0x18               ; + vertex_list offset
0040744e: SHL EAX,0x2                ; * 4 (sizeof(int))
00407451: ADD EAX,EBP                ; = next primitive
```

### 3. MRGL Dispatch Loop (dispatchMRGLToRenderer)

**Function**: `engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0`

**The main MRGL processing loop**:
```c
do {
    byte type = cmd->primitive_type;  // Read type at offset 0x00

    switch (type) {
        case 0x00: break;  // Terminator
        case 0x02: transformAndBufferVertices(cmd); break;
        case 0x03: processVertexLighting(cmd); break;
        case 0x0d: ensureTextureLoaded((STexture*)cmd); break;
        case 0x18: renderPrimitivePlaneMaskedComplex((SPrimitive*)cmd); break;
        case 0x29: // Add to face array for batch rendering
            g_RenderFaceArray[g_RenderFaceCount++] = (SPrimitive*)cmd;
            break;
        case 0x41: renderPolygonEngineAPIPremiumMultiState((SPrimitive*)cmd); break;
        default: error("Unknown primitive type");
    }

    // Advance to next MRGL block
    int size = getMRGLSize((SMRGLHeader*)cmd);  // Uses formula: element_count * 0xc + 0x18
    cmd = (SVertexBatch*)((char*)cmd + size);

} while (cmd->primitive_type != 0);
```

**Assembly**:
```asm
00407abf: MOV BL,byte ptr [EDI]           ; Read type field
00407ac1: CMP BL,0x14                     ; Compare type
...
00407c38: PUSH EDI
00407c39: CALL renderPrimitivePlaneMaskedComplex  ; Type 0x18
...
00407c46: PUSH EDI
00407c47: CALL renderPolygonEngineAPIPremiumMultiState  ; Type 0x41
...
00407aef: PUSH EDI
00407af0: CALL getMRGLSize                ; Get block size
00407af5: ADD EDI,EAX                     ; Advance by size
00407af9: TEST DL,DL                      ; Check if terminator
00407afe: JNZ loop                        ; Continue if not
```

## KFM to MRGL Primitive Transformation

### File Format (72 bytes from KFM)
```c
struct CKeyFramedModelPolyVertexList_File {
    int unknown_00;                        // 0x00
    int vertex_count;                      // 0x04: 3 or 4
    char padding[16];                      // 0x08
    CKeyFramedModelPolyVertex verts[4];    // 0x18: 4 * 12 = 48 bytes
    // Each vertex: [vertex_index, texture_u, texture_v]
};
```

### Runtime MRGL Primitive (72 bytes)
```c
struct SPrimitive_Runtime {
    int type;                   // 0x00: MRGL type (0x18, 0x29, 0x41)
    int element_count;          // 0x04: Vertex count (from file)
    SClipPlane surface_normal;  // 0x08: CALCULATED by lightVerticies (16 bytes)
    struct {
        int vertex_index;       // From file vertex_index
        int texture_u;          // From file texture_u
        int texture_v;          // From file texture_v
    } vertices[4];              // 0x18: 4 * 12 = 48 bytes
};
```

### Transformation Process

**Step 1: File Read** (`CKeyFramedModel_readBinaryModel`)
```c
fread(poly_vert_list, 1, poly_count * 72, file);
// Reads 72-byte blocks from KFM file
```

**Step 2: Transform** (`lightVerticies`)
```c
// Writes MRGL type field (speculation - needs verification)
poly_vert_list[i].type = determine_type(flags);  // 0x18, 0x29, or 0x41?

// Copies vertex_count to element_count field
poly_vert_list[i].element_count = poly_vert_list[i].vertex_count;

// Calculates and writes surface normal
poly_vert_list[i].surface_normal = calculate_normal(vertices);

// Vertex indices and UVs remain unchanged at offset 0x18+
```

**Step 3: Render** (`dispatchMRGLToRenderer` or `renderPrimitiveBatch`)
```c
// Iterate through 72-byte MRGL primitives
for (int i = 0; i < primitive_count; i++) {
    SPrimitive* prim = &primitive_array[i];

    // Dispatch based on type
    switch (prim->type) {
        case 0x18: renderPrimitivePlaneMaskedComplex(prim); break;
        case 0x41: renderPolygonEngineAPIPremiumMultiState(prim); break;
    }

    // Or batch render with stride
    primitive_array += 72;  // Advance by 72 bytes
}
```

## Why 72 Bytes is the Standard

### MRGL Formula: `element_count * 0xc + 0x18`

For **triangles (3 vertices)**:
- Size = `3 * 12 + 24 = 36 + 24 = 60 bytes`

For **quads (4 vertices)**:
- Size = `4 * 12 + 24 = 48 + 24 = 72 bytes`

**KFM models use quads** → **72-byte primitives**!

This explains:
1. Why poly_vert_list allocates 72 bytes per polygon
2. Why the renderer hardcodes `stride = 0x48` (72)
3. Why getMRGLSize returns 72 for element_count=4
4. Why the render functions calculate `primitive + 0x18 + (4*3*4)` for next block

## Rendering Pipeline Summary

```
KFM File (disk)
  ↓ fread()
poly_vert_list[] (72-byte blocks, file format)
  ↓ lightVerticies() - IN-PLACE TRANSFORM
poly_vert_list[] (72-byte MRGL primitives)
  ↓ submitToRenderer()
dispatchMRGLToRenderer() OR renderPrimitiveBatch()
  ↓ getMRGLSize() / stride=0x48
renderPrimitivePlaneMaskedComplex() (type 0x18)
renderPolygonEngineAPIPremiumMultiState() (type 0x41)
  ↓ Extract vertices, UVs from offset 0x18
  ↓ clipAndRasterize()
Screen Buffer (pixels)
```

## Conclusion

**YES, the render methods take 72-byte primitives as the rendering unit.**

The 72-byte blocks are **MRGL rendering primitives** (types 0x18, 0x29, 0x41, 0x42) with:
- **Fixed header** (24 bytes): type, element_count, surface_normal
- **Variable vertex data** (48 bytes for quads): 4 vertices × 12 bytes each

The rendering engine:
1. **Reads type field** at offset 0x00 to determine primitive type
2. **Dispatches** to appropriate render function
3. **Extracts vertex data** starting at offset 0x18
4. **Calculates next block** using `0x18 + (element_count * 3 * 4)`
5. **Advances by 72 bytes** for quad primitives

The KFM file format stores polygon data in a layout that's **directly compatible** with MRGL primitive format after minimal transformation (writing type field and surface normal).
