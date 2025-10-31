#pragma once

// Structure: SMirror
// Ghidra size: 0x120 (288 bytes)
typedef struct SMirror {
    SMirrorReflection reflection; // 0x0
    char field_148[4]; // 0x94
    SClipPlane clip_planes[5]; // 0x98
    char additional_data[56]; // 0xe8
} SMirror;

