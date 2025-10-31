#pragma once

// Supporting structures for KeyFramed Model system
// These structures are NOT confirmed classes (no Watcom type info)
// They are likely POD structs used within CKeyFramedModel

// =============================================================================
// POLYGON STRUCTURES
// =============================================================================

// CKeyFramedModelPolyVertex - Single vertex reference within a polygon
// Size: 0xC (12 bytes)
// Used in: CKeyFramedModelPolyVertexList
typedef struct CKeyFramedModelPolyVertex {
    // Offset 0x0: Index into model's vertex_list
    // Range: 0 to (vertex_count - 1)
    int vertex_index;

    // Offset 0x4: Texture U coordinate (fixed-point)
    // Typically in range 0-65536 representing 0.0-1.0
    int texture_u;

    // Offset 0x8: Texture V coordinate (fixed-point)
    // Typically in range 0-65536 representing 0.0-1.0
    int texture_v;
} CKeyFramedModelPolyVertex;

// CKeyFramedModelPolyVertexList - Polygon definition with vertex references
// Size: 0x48 (72 bytes)
//
// CRITICAL: This structure has DUAL FORMAT - file format vs runtime format
//
// File Format (what's read from disk):
//   0x00: int unknown_00
//   0x04: int vertex_count (3 or 4)
//   0x08: char padding[16] (may contain file-specific data)
//   0x18: CKeyFramedModelPolyVertex vertList[4] (48 bytes - vertex indices and UVs)
//
// Runtime Format (after processing by lightVerticies):
//   0x00: int unknown_00 (unchanged)
//   0x04: int type (vertex_count copied here, used as SPrimitiveLit.type)
//   0x08: SClipPlane clip_plane (16 bytes - CALCULATED surface normal)
//   0x18: int primitive_vertex_count (from vertex_count)
//   0x1C: char unknown_1c[8] (unknown purpose)
//   0x24: CVector3i* vertex_array (POINTER to transformed vertices)
//   0x28: char unknown_28[8] (unknown purpose)
//   0x30: int primitive_type (CALCULATED or from material flags)
//   0x34: char unknown_34[20] (remaining data - may contain UVs, colors, etc.)
//
// This dual-format design matches MRGL's texture pattern (type 0x0d → 0x40):
// - Compact file representation for storage efficiency
// - Expanded runtime representation with pointers and calculated data
// - Compatible with SPrimitive casting for rendering dispatch
//
// Evidence:
// - Binary read: 00477023 reads poly_count * 0x48 bytes from file
// - Runtime: FUN_00570770 assembly reads fields at offsets 0x04, 0x08-0x14, 0x18, 0x24, 0x30
// - Renderer: Passed directly to engine_drender functions expecting SPrimitive-compatible data
// - Transformation: lightVerticies_FUN_0056eac0 processes vertex data before rendering
//
// The 72-byte size matches MRGL type 0x40, suggesting this follows the same
// architectural pattern of runtime expansion while maintaining rendering compatibility.
//
typedef struct CKeyFramedModelPolyVertexList {
    // Offset 0x0: Unknown field
    // Not read by renderer, may be flags or padding
    int unknown_00;

    // Offset 0x4: Vertex count / Type field
    // File: Number of vertices in polygon (3 or 4)
    // Runtime: Copied to SPrimitiveLit.type during rendering
    int vertex_count;

    // Offset 0x8: Surface normal / Clip plane (16 bytes)
    // File: May be padding or preliminary data
    // Runtime: CALCULATED surface normal written here by lightVerticies
    // Copied to SPrimitiveLit.clip_plane during rendering
    SClipPlane clip_plane;

    // Offset 0x18: Vertex data or primitive vertex count
    // File: First CKeyFramedModelPolyVertex (vertex_index, u, v)
    // Runtime: May be overwritten with primitive_vertex_count
    int primitive_vertex_count_or_first_vert;

    // Offset 0x1C: Unknown (8 bytes)
    char unknown_1c[8];

    // Offset 0x24: Vertex array pointer (runtime) or vertex data (file)
    // File: Second CKeyFramedModelPolyVertex (vertex_index, u, v)
    // Runtime: POINTER to transformed vertex array for rendering
    // Copied to SPrimitiveGeometry.vertex_array
    union {
        CKeyFramedModelPolyVertex file_vertex_1;
        CVector3i* vertex_array_ptr;
    } vertex_data_1;

    // Offset 0x30: Primitive type (runtime) or vertex data (file)
    // File: Third CKeyFramedModelPolyVertex (vertex_index, u, v)
    // Runtime: Primitive type flags for rendering
    // Copied to SPrimitiveGeometry.primitive_type
    union {
        CKeyFramedModelPolyVertex file_vertex_2;
        struct {
            int primitive_type;
            char unknown_34[8];
        } runtime_data;
    } vertex_data_2;

    // Offset 0x3C: Additional data (12 bytes)
    // File: Fourth CKeyFramedModelPolyVertex (vertex_index, u, v)
    // Runtime: May contain UV coordinates, colors, or other render state
    CKeyFramedModelPolyVertex vertex_data_3;

    // Total: 72 bytes (0x48)
    // Matches MRGL type 0x40 size (Large Texture block pattern)
} CKeyFramedModelPolyVertexList;

// =============================================================================
// PART STRUCTURE (Embedded in CKeyFramedModel, not a separate class)
// =============================================================================

// Part definition - divides model into logical sections
// Size: 8 bytes
// Used for LOD, visibility, damage states, animation
// Array of 30 parts embedded in CKeyFramedModel at offset 0x5588
//
// Parts define ranges within the vertex and polygon lists:
// - part[0] covers vertices 0 to part[0].vertex_count-1
// - part[0] covers polygons 0 to part[0].poly_count-1
// - part[1] covers next part[1].vertex_count vertices, etc.
//
// Note: This is NOT a typedef because it's embedded directly in CKeyFramedModel
// as an anonymous struct array at offset 0x5588

// =============================================================================
// TEXTURE STRUCTURE
// =============================================================================

// STexture - Texture reference (24 bytes)
// This is the format stored in KFM files
// Runtime may extend this to 72 bytes (0x48) per texture
//
// From: annotations/nocedit.exe/pseudocode/include/Nocturne/Struct/Game/STexture.h
// Binary read: 00477073 reads 0x18 (24 bytes) per texture
typedef struct STexture {
    // Offset 0x0: Texture type/flags
    // May indicate:
    // - Texture format (RGB, RGBA, paletted, etc.)
    // - Filtering mode
    // - Wrapping mode
    int type;

    // Offset 0x4: Texture index or ID
    // May be:
    // - Index into global texture cache
    // - Direct3D/OpenGL texture handle at runtime
    // - Palette index
    int texture_index;

    // Offset 0x8: Texture filename (16 bytes)
    // Typically references a .RAW or .BMP file
    // Null-terminated string
    char texture_name[16];
} STexture;

// Runtime texture structure (SPECULATION - needs verification)
// The CKeyFramedModel.texture_list uses 0x48 (72 bytes) per texture
// The extra 48 bytes beyond STexture may contain:
typedef struct STextureRuntime {
    STexture base;              // 0x00: File data (24 bytes)

    // Runtime fields (SPECULATIVE - 48 bytes remaining)
    int initialized_flag;       // 0x18: Set to 0 after loading (confirmed at 00476eab)
    void* cached_texture_ptr;   // 0x1C: Pointer to loaded texture data
    int width;                  // 0x20: Texture width
    int height;                 // 0x24: Texture height
    int format;                 // 0x28: Runtime pixel format
    char unknown[28];           // 0x2C: Additional runtime state

    // Total: 24 + 48 = 72 bytes (0x48)
} STextureRuntime;

// =============================================================================
// COLLISION STRUCTURE
// =============================================================================

// CDemonTriangle - Collision triangle
// Size: Unknown (referenced by pointer at 0x5698)
// Allocated as: frame_count * collision_triangle_count * sizeof(CDemonTriangle)
//
// Used for:
// - Model-level collision detection
// - Ray casting
// - Cylinder intersection tests
//
// Analysis: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
// This structure needs further investigation

// =============================================================================
// VECTOR TYPES (Common math types)
// =============================================================================

// CVector3i - Integer 3D vector
// Size: 12 bytes (3 * 4)
// Used for: Fixed-point vertex positions and normals
typedef struct CVector3i {
    int x;  // 0x0
    int y;  // 0x4
    int z;  // 0x8
} CVector3i;

// CVector3f - Floating-point 3D vector
// Size: 12 bytes (3 * 4)
// Used for: Bounding boxes, transforms, calculated positions
typedef struct CVector3f {
    float x;  // 0x0
    float y;  // 0x4
    float z;  // 0x8
} CVector3f;

// =============================================================================
// NOTES
// =============================================================================

// Coordinate System:
// - Vertices stored as integer fixed-point values
// - Scale factor: g_FixedPointScale (typically 1/65536)
// - Conversion: float_value = int_value * g_FixedPointScale
//
// Texture Coordinates:
// - UVs stored as integer fixed-point values
// - Range: 0-65536 typically maps to 0.0-1.0
// - May support tiling with values > 65536
//
// Memory Layout:
// - All structures use 4-byte alignment
// - Watcom C++ 11.0 uses minimal padding
// - No virtual tables in these POD structures
