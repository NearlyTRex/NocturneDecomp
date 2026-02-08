#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoxActor.h"

// Structure: CTempleStone
// Ghidra size: 0x670 (1648 bytes)
typedef struct CTempleStone {
    CBoxActor base; // 0x0
    struct CDemonActor* dest_actor; // 0x66c
} CTempleStone;

