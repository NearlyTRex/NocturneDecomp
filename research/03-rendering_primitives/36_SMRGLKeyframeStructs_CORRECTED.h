// CORRECTED SMRGLKeyframe Structures
// Based on complete assembly analysis of keyframe loading and rendering pipeline
//
// File Structure:
// - Main file (.kfm): Type 0x20 SMRGLKeyframeModel (344 bytes)
// - Individual frames: Type 2 vertex block + Type 0x18/0x19/0x29 surface blocks + null terminator
//
// Key Findings:
// - Type 2 blocks have vertices starting at +0xC (after 12-byte header)
// - child_count=2 is a validation flag, not vertex count
// - Vertex count derived from size: (size - 0xC) / 12
// - All keyframes in sequence have same vertex count

#pragma once

#include "SMRGLHeaderExtended.h"
#include "CVector3i.h"

// ============================================================================
// Type 0x20: Keyframe Model Control Structure (344 bytes)
// ============================================================================

typedef struct SMRGLKeyframeModel {
    int type;                         // 0x00 - always 0x20
    int size;                         // 0x04 - always 0x158 (344 bytes)
    int keyframe_count;               // 0x08 - number of keyframes in animation
    int cycle_length;                 // 0x0C - time units per frame cycle
    int current_position;             // 0x10 - current animation position
    SMRGLHeaderExtended* base_keyframes; // 0x14 - pointer to frame 0 data
    char filenames[16][16];           // 0x18 - filenames for frames 1-15
    SMRGLHeaderExtended* loaded_frames[16]; // 0x118 - pointers to loaded frame data
} SMRGLKeyframeModel; // 344 bytes (0x158)

// ============================================================================
// Type 2: Vertex List Block Header (12 bytes + variable vertex data)
// ============================================================================

typedef struct SMRGLVertexListHeader {
    int type;           // 0x00 - always 2 for vertex lists
    int size;           // 0x04 - total size of this block (header + vertices)
    int child_count;    // 0x08 - always 2 for keyframes (validation flag)
    // Vertices follow immediately at +0x0C
    // Vertex count = (size - 0x0C) / sizeof(CVector3i)
    // Vertex count = (size - 12) / 12
} SMRGLVertexListHeader; // 12 bytes

// ============================================================================
// Concrete vertex data structure (not actually used as array, but for clarity)
// ============================================================================

typedef struct SMRGLVertexListData {
    SMRGLVertexListHeader header; // 0x00
    CVector3i vertex;             // 0x0C - single vertex (actual data has N vertices)
} SMRGLVertexListData; // 24 bytes per vertex entry

// Usage pattern:
//   SMRGLVertexListHeader* vertex_block = ...;
//   int vertex_count = (vertex_block->size - 12) / 12;
//   CVector3i* vertices = (CVector3i*)((char*)vertex_block + 12);
//   for (int i = 0; i < vertex_count; i++) {
//       process_vertex(&vertices[i]);
//   }

// ============================================================================
// OLD INCORRECT DEFINITION (for reference)
// ============================================================================

/*
// This was WRONG - vertices do NOT start at +0x14!
typedef struct SMRGLKeyframe_OLD {
    SMRGLHeaderExtended header; // 0x0 (12 bytes)
    int unknown_0C;             // 0x0C
    int vertex_count;           // 0x10
    CVector3i vertices[0];      // 0x14 - WRONG OFFSET!
} SMRGLKeyframe_OLD;
*/

// ============================================================================
// NOTES
// ============================================================================

// 1. The "+0x14" offset seen in interpolateCubicKeyframes was accessing
//    header[1].child_count + 0x14, which is a completely different pointer
//    calculation involving the SMRGLKeyframeModel structure layout

// 2. getMRGLSize(type=2, child_count=2) returns 36 bytes:
//    12 + (2 * 12) = 36 bytes
//    This is 12-byte header + 24 bytes of vertex data (2 vertices)
//    The child_count=2 means the block CONTAINS 2 vertices minimum for validation

// 3. Actual keyframe vertex blocks have variable vertex counts determined by
//    the size field, not by child_count

// 4. Surface blocks (type 0x18, 0x19, 0x29) follow the vertex block and
//    reference vertices by index into the vertex array
