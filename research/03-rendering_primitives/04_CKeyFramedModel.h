#pragma once

// CKeyFramedModel - CORRECTED ANALYSIS
// Based on detailed analysis of file I/O and assembly code
// Total size: 0x56d8 (22232 bytes)
//
// This is a confirmed class (has Watcom type info)
// Analysis sources:
// - core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 (assembly)
// - core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
// - core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
// - Example KFM files in example_files/

typedef struct CKeyFramedModel {
    // === FILENAMES (0x000 - 0x0EF) ===
    // Offset 0x000: Primary model filename (120 bytes)
    char model_filename[120];

    // Offset 0x078: Secondary/alternate filename (120 bytes)
    char other_filename[120];

    // Offset 0x0F0: Unknown 16-byte region
    // Purpose unclear, may be padding or rarely-used data
    char unknown_0xf0[16];

    // === ANIMATION & GEOMETRY COUNTS (0x100 - 0x123) ===
    // Offset 0x100: Number of animation frames
    // Assembly: 00477c33 MOV [EBX + 0x100],EAX (param6 of allocate)
    int frame_count;

    // Offset 0x104: Number of vertices per frame (max 2000)
    // Assembly: 00477c05 MOV [EBX + 0x104],EAX (param2 of allocate)
    // Used at: 00477c70, 00477dfb (vertex_count * frame_count * 0xc allocation)
    int vertex_count;

    // Offset 0x108: Pointer to vertex normal list
    // Only allocated for single-frame models (frame_count == 1)
    // Size when allocated: vertex_count * 12 bytes (3 ints per normal)
    // Assembly: 00477e1a MOV [EBX + 0x108],EAX
    CVector3i** vertex_normal_list;

    // Offset 0x10C: Pointer to vertex position data for ALL frames
    // Size: frame_count * vertex_count * 12 bytes (3 ints per vertex)
    // Assembly: 00477ca4 MOV [EBX + 0x10c],EAX
    CVector3i** vertex_list;

    // Offset 0x110: Number of polygons (max 2000)
    // Assembly: 00477c0f MOV [EBX + 0x110],EAX (param3 of allocate)
    // Used at: 00477c9e, 00477cd4 (poly allocation)
    int poly_count;

    // Offset 0x114: Pointer to polygon vertex lists
    // Size: poly_count * 0x48 (72 bytes per polygon)
    // Each polygon has vertex indices and UV coordinates
    // Assembly: 00477cc9 MOV [EBX + 0x114],EAX
    CKeyFramedModelPolyVertexList** poly_vert_list;

    // Offset 0x118: Pointer to polygon texture index list
    // Maps each polygon to a texture index
    // Size: poly_count * 4 bytes (one int per polygon)
    // Assembly: 00477cee MOV [EBX + 0x118],EAX
    int* poly_texture_index_list;

    // Offset 0x11C: Pointer to environment map opacity list
    // Purpose: Controls environment mapping per-polygon
    // Allocated separately when env map feature is used
    char* env_map_opac_list;

    // === TEXTURES (0x120 - 0x5583) ===
    // Offset 0x120: Number of textures/materials (max 300)
    // Assembly: 00477c19 MOV [EBX + 0x120],EAX (param4 of allocate)
    // Checked at: 00477c39 CMP EDX,0x12c (compared to 300)
    int texture_count;

    // Offset 0x124: Texture array (300 textures * 0x48 bytes each = 21,600 bytes)
    //
    // CRITICAL: These are MRGL type 0x40 blocks (72 bytes), NOT custom structs!
    // See: docs/MRGL-file-format.md and guesses/kfm_structs/MRGL_TEXTURE_DISCOVERY.md
    //
    // File format: Reads 0x18 (24 bytes) per texture as MRGL type 0x0d (STexture)
    // Runtime format: Expands to 0x48 (72 bytes) as MRGL type 0x40 (MRGLTextureBlock)
    //
    // Structure (MRGL type 0x40):
    //   0x00: int type (0x40 - MRGL type discriminator)
    //   0x04: int size (0x48 - block size)
    //   0x08: int texture_type (format/flags)
    //   0x0C: int texture_index (cache index)
    //   0x10: char texture_name[16] (filename)
    //   0x20: char runtime_data[48] (cached handles, state, dimensions)
    //
    // Evidence:
    // - Assembly: 0047a3f9 PUSH 0x40 (passes MRGL type to texture function)
    // - Assembly: 0047a4e8 ADD EAX,0x48 (72-byte stride in loops)
    // - Binary read: 00477073 reads 0x18 bytes (type 0x0d format from file)
    //
    // This follows Nocturne's polymorphic MRGL dispatch pattern where
    // structures can be safely cast based on the type field at offset 0x00.
    //
    // Use the proper struct from MRGL_FixedSizeStructs.h:
    SMRGLTexture0x40 texture_list[300];  // 300 × 72 bytes = 21,600 bytes

    // === PARTS (0x5584 - 0x5677) ===
    // Offset 0x5584: Number of model parts (max 30)
    // Parts divide the model into logical sections
    // Assembly: 00477c23 MOV [EBX + 0x5584],EAX (param5 of allocate)
    // Checked at: 00477c45 CMP [EBX + 0x5584],0x1e (compared to 30)
    int part_count;

    // Offset 0x5588: Part list array (30 parts * 8 bytes = 240 bytes)
    // Each part specifies a range of vertices and polygons
    // Binary read: 004770d8 LEA EAX,[EBX + 0x5588]
    // Assembly: 00477a05 MOV EAX,[EAX + 0x558c] (reads part[0].poly_count)
    struct {
        int vertex_count;  // Number of vertices in this part
        int poly_count;    // Number of polygons in this part
    } part_list[30];

    // === BOUNDING BOX (0x5678 - 0x568F) ===
    // Offset 0x5678: Model bounding box (24 bytes total)
    // Assembly: 0047802f LEA EAX,[EBP + 0x5678] (loads bounds)
    // Assembly: 00478679 LEA ESI,[EDI + 0x5678] (in intersectCylinder)
    // Used for frustum culling and collision broad-phase
    CVector3f bounds_min;  // 0x5678: Minimum extents (12 bytes)
    CVector3f bounds_max;  // 0x5684: Maximum extents (12 bytes)

    // === PER-FRAME DATA (0x5690 - 0x569B) ===
    // Offset 0x5690: Pointer to per-frame bounding box data
    // Allocation: (frame_count * 0x18 + 4) bytes
    // Format: [count:4][frame0_min:12,frame0_max:12][frame1_min:12,frame1_max:12]...
    // Pointer is adjusted +4 after allocation to skip the count header
    // Assembly: 00477d29 MOV [EBX + 0x5690],EAX
    // Assembly: 00477d20 MOV [EAX + -0x4],ESI (stores frame_count at -4)
    int* frame_bounds_list;

    // Offset 0x5694: Collision triangle count (per frame)
    // Used with collision_triangle_list
    // Assembly: 0047885a MOV [EBX + 0x5694],0x0
    // Assembly: 004788a0 MOV ESI,[EBX + 0x5694]
    int collision_triangle_count;

    // Offset 0x5698: Pointer to collision triangle list
    // Size: frame_count * collision_triangle_count * sizeof(CDemonTriangle)
    // Assembly: 004778c0 MOV EAX,[EBX + 0x5698]
    // Assembly: 00478696 CMP [EDI + 0x5698],0x0
    CDemonTriangle* collision_triangle_list;

    // === FLAGS (0x569C - 0x56A3) ===
    // Offset 0x569C: Transparent pixel handling flag
    // Controls how transparent pixels in textures are handled
    // Text file: "transparentPixelFlag"
    // Assembly: 0047780c MOV [EBX + 0x569c],0x0
    int transparent_pixel_flag;

    // Offset 0x56A0: Disable backface culling flag
    // When set, both sides of polygons are rendered
    // Text file: "disableBackfaceCulling"
    // Assembly: 00477816 MOV [EBX + 0x56a0],0x0
    // Assembly: 00477997 CMP [ESI + 0x56a0],0x0
    int disable_backface_culling;

    // === COLLISION TRANSFORM (0x56A4 - 0x56AF) ===
    // Offset 0x56A4: Transform vector for collision system (12 bytes)
    // Cached transform used to determine if collision data needs rebuild
    // Assembly: 00478679 LEA ESI,[EDI + 0x56a4]
    // Assembly: 0047867f FLD float ptr [ESI] (loads transform.x)
    // Compared against input transform to detect changes
    CVector3f transform_vector;

    // === COLLISION WORKSPACE (0x56B0 - 0x56D7) ===
    // Offset 0x56B0: Collision workspace buffer (40 bytes)
    // Temporary buffer used during collision calculations
    // Exact usage unclear - may be scratch space for algorithms
    char collision_workspace[40];

    // Total size: 0x56D8 (22,232 bytes)
} CKeyFramedModel;

// Size verification:
// 0x000-0x077: 120 (model_filename)
// 0x078-0x0EF: 120 (other_filename)
// 0x0F0-0x0FF: 16  (unknown)
// 0x100-0x103: 4   (frame_count)
// 0x104-0x107: 4   (vertex_count)
// 0x108-0x10B: 4   (vertex_normal_list ptr)
// 0x10C-0x10F: 4   (vertex_list ptr)
// 0x110-0x113: 4   (poly_count)
// 0x114-0x117: 4   (poly_vert_list ptr)
// 0x118-0x11B: 4   (poly_texture_index_list ptr)
// 0x11C-0x11F: 4   (env_map_opac_list ptr)
// 0x120-0x123: 4   (texture_count)
// 0x124-0x5583: 21600 (texture_list: 300 * 0x48)
// 0x5584-0x5587: 4   (part_count)
// 0x5588-0x5677: 240 (part_list: 30 * 8)
// 0x5678-0x5683: 12  (bounds_min)
// 0x5684-0x568F: 12  (bounds_max)
// 0x5690-0x5693: 4   (frame_bounds_list ptr)
// 0x5694-0x5697: 4   (collision_triangle_count)
// 0x5698-0x569B: 4   (collision_triangle_list ptr)
// 0x569C-0x569F: 4   (transparent_pixel_flag)
// 0x56A0-0x56A3: 4   (disable_backface_culling)
// 0x56A4-0x56AF: 12  (transform_vector)
// 0x56B0-0x56D7: 40  (collision_workspace)
// Total: 0x56D8 = 22232 bytes ✓
