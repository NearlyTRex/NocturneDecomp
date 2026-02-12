#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMorphPart
// Ghidra size: 0x10 (16 bytes)
typedef struct SMorphPart {
    int vertex_count; // 0x0
    int face_count; // 0x4
    int start_vertex; // 0x8
    int start_face; // 0xc
} SMorphPart;

