#pragma once

// Forward declarations
struct CCourseFrame;

// Dependencies
#include "system/basetypes.h"

// Structure: CCourse
// Ghidra size: 0xc (12 bytes)
#pragma pack(push, 1)
typedef struct CCourse {
    int len; // 0x0
    struct CCourseFrame* frames; // 0x4
    int loop; // 0x8
} CCourse;
#pragma pack(pop)

