#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CActorProperty.h"

// Structure: CActorPropertyList
// Ghidra size: 0x2504 (9476 bytes)
#pragma pack(push, 1)
typedef struct CActorPropertyList {
    struct CDemonActor* owner; // 0x0
    int count; // 0x4
    CActorProperty properties[40]; // 0x8
    int total_width; // 0x24e8
    int total_height; // 0x24ec
    int name_column_x; // 0x24f0
    int value_column_x; // 0x24f4
    int left_x; // 0x24f8
    int right_x; // 0x24fc
    int top_y; // 0x2500
} CActorPropertyList;
#pragma pack(pop)

