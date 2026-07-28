#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoxActor.h"

// Structure: CTempleStone
// Ghidra size: 0x668 (1640 bytes)
#pragma pack(push, 1)
typedef struct CTempleStone {
    CBoxActor base; // 0x0
    struct CDemonActor* dest_actor; // 0x664
} CTempleStone;
#pragma pack(pop)

