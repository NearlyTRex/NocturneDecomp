#pragma once

// MRGL Fixed-Size Structure Definitions
// Based on docs/MRGL-file-format.md and assembly analysis
//
// Naming convention: SMRGLType0xNN where NN is the hex type ID
// All MRGL blocks start with type and size fields for polymorphic dispatch

// =============================================================================
// COMMON HEADER - Used by many MRGL types
// =============================================================================

// 8-byte minimal header (used by simple blocks)
typedef struct SMRGLHeaderMinimal {
    int type;    // 0x00: MRGL type discriminator
    int size;    // 0x04: Total block size in bytes
} SMRGLHeaderMinimal;

// 12-byte standard header (used by complex blocks)
// Note: This matches existing SMRGLHeader in annotations
typedef struct SMRGLHeaderStandard {
    int type;          // 0x00: MRGL type discriminator
    int element_count; // 0x04: Number of elements/children
    int child_count;   // 0x08: Number of child blocks
} SMRGLHeaderStandard;

// =============================================================================
// TEXTURE TYPES
// =============================================================================

// Type 0x0D - Base texture block (24 bytes)
// Used in: File I/O, MRGL dispatch table index 13 (ensureTextureLoaded)
// Returns: next_block = this + 0x18 (24 bytes)
typedef struct SMRGLTexture0x0d {
    int type;              // 0x00: 0x0d
    int size;              // 0x04: 0x18 (24 bytes)
    int texture_type;      // 0x08: Format/flags
    int texture_index;     // 0x0C: Cache index (set at runtime)
    char texture_name[16]; // 0x10: Filename (e.g., "WALL.RAW")
} SMRGLTexture0x0d;

// Type 0x40 - Extended texture block (72 bytes)
// Used in: CKeyFramedModel.texture_list, MRGL dispatch table index 64
// Returns: next_block = this + 0x48 (72 bytes)
// Evidence: core_dmodel.cpp pushes 0x40 to texture functions
typedef struct SMRGLTexture0x40 {
    SMRGLTexture0x0d base; // 0x00: First 24 bytes (common with 0x0d)

    // Runtime extension data (48 bytes) - SPECULATION
    // Likely contains:
    // - Direct3D/OpenGL texture handle
    // - Width, height, format
    // - Mipmap information
    // - Cached pixel data pointer
    // - Texture state flags
    char extension[48];    // 0x18: Runtime state (48 bytes)
} SMRGLTexture0x40;

// =============================================================================
// MODEL TYPES
// =============================================================================

// Type 0x01 - File header block (16 bytes)
// Used at: Start of MRGL files for metadata
typedef struct SMRGLType0x01_Header {
    int type;         // 0x00: 0x01
    int size;         // 0x04: 0x10 (16 bytes)
    int version;      // 0x08: File format version
    int reserved;     // 0x0C: Reserved/unused
} SMRGLType0x01_Header;

// Type 0x14 - Static model marker (8 bytes)
// Used to: Mark non-keyframed models
// Note: Existing SMRGLModel_Type14 is 20 bytes because it includes data!
//       This is just the minimal header for dispatch
typedef struct SMRGLType0x14_StaticMarker {
    int type;         // 0x00: 0x14
    int size;         // 0x04: 0x08 (8 bytes)
} SMRGLType0x14_StaticMarker;

// Type 0x20 - Keyframe model (344 bytes)
// Already defined in annotations as SMRGLModel_Type20
// Matches MRGL docs: 0x158 = 344 bytes

// Type 0x26 - Legacy model format (15,712 bytes)
// Already defined in annotations as SMRGLModel_Type26
// Matches MRGL docs: 0x3d60 = 15,712 bytes
// Note: Marked as unsupported in code

// =============================================================================
// SMALL FIXED BLOCKS
// =============================================================================

// Type 0x0A - Simple 8-byte block
typedef struct SMRGLType0x0a {
    int type;         // 0x00: 0x0a
    int size;         // 0x04: 0x08 (8 bytes)
} SMRGLType0x0a;

// Type 0x0B - Simple 8-byte block
typedef struct SMRGLType0x0b {
    int type;         // 0x00: 0x0b
    int size;         // 0x04: 0x08 (8 bytes)
} SMRGLType0x0b;

// Type 0x12 - Simple 8-byte block
typedef struct SMRGLType0x12 {
    int type;         // 0x00: 0x12
    int size;         // 0x04: 0x08 (8 bytes)
} SMRGLType0x12;

// Type 0x3D - Simple 8-byte block
typedef struct SMRGLType0x3d {
    int type;         // 0x00: 0x3d
    int size;         // 0x04: 0x08 (8 bytes)
} SMRGLType0x3d;

// Type 0x17 - Tiny block (12 bytes)
typedef struct SMRGLType0x17 {
    int type;         // 0x00: 0x17
    int size;         // 0x04: 0x0C (12 bytes)
    int data;         // 0x08: Unknown purpose
} SMRGLType0x17;

// Type 0x10 - Small block (20 bytes)
typedef struct SMRGLType0x10 {
    int type;         // 0x00: 0x10
    int size;         // 0x04: 0x14 (20 bytes)
    int data1;        // 0x08: Unknown
    int data2;        // 0x0C: Unknown
    int data3;        // 0x10: Unknown
} SMRGLType0x10;

// Type 0x0C - Medium block (28 bytes)
typedef struct SMRGLType0x0c {
    int type;         // 0x00: 0x0c
    int size;         // 0x04: 0x1C (28 bytes)
    int data1;        // 0x08: Unknown
    int data2;        // 0x0C: Unknown
    int data3;        // 0x10: Unknown
    int data4;        // 0x14: Unknown
    int data5;        // 0x18: Unknown
} SMRGLType0x0c;

// Type 0x09 - Fixed block (32 bytes)
typedef struct SMRGLType0x09 {
    int type;         // 0x00: 0x09
    int size;         // 0x04: 0x20 (32 bytes)
    char data[24];    // 0x08: Unknown structure data
} SMRGLType0x09;

// =============================================================================
// TERMINATOR
// =============================================================================

// Type 0x00 - Block chain terminator (4 bytes)
// Marks end of MRGL block sequence
typedef struct SMRGLType0x00_Terminator {
    int type;         // 0x00: 0x00 (terminator)
} SMRGLType0x00_Terminator;

// =============================================================================
// USAGE NOTES
// =============================================================================

// Polymorphic Dispatch Pattern:
// All MRGL blocks can be cast to SMRGLHeaderMinimal to read type/size
// Then cast to specific type based on type field:
//
//   SMRGLHeaderMinimal* block = (SMRGLHeaderMinimal*)ptr;
//   switch (block->type) {
//       case 0x0d: processTexture((SMRGLTexture0x0d*)block); break;
//       case 0x40: processLargeTexture((SMRGLTexture0x40*)block); break;
//       // etc...
//   }
//
// Navigation to next block:
//   next = (SMRGLHeaderMinimal*)((char*)block + block->size);
//
// The dispatch handlers return the next block pointer, so:
//   next = handler(block);  // Handler knows the block size

// Variable-Size Types:
// Many MRGL types have variable sizes based on element_count/child_count.
// See docs/MRGL-file-format.md for size formulas.
// Common patterns:
//   - element_count * 4 + 0x18   (4-byte elements with 24-byte header)
//   - element_count * 0xc + 0x18 (12-byte elements with 24-byte header)
//   - child_count * 0x20 + 0x1c  (32-byte children with 28-byte header)

// Existing Annotations:
// The annotations/ folder already has some MRGL structs defined:
//   - SMRGLHeader (12 bytes) - standard header
//   - SMRGLModel_Type14 (20 bytes) - static model with header + data
//   - SMRGLModel_Type20 (344 bytes) - keyframe model
//   - SMRGLModel_Type26 (15712 bytes) - legacy format
//
// These can coexist with the definitions here. The naming difference:
//   - Existing: SMRGLModel_TypeNN (descriptive names)
//   - New: SMRGLType0xNN (systematic hex naming)
