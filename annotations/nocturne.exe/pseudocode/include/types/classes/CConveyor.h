#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CPlatform.h"
#include "types/classes/CVector3f.h"

// Structure: CConveyor
// Ghidra size: 0x854 (2132 bytes)
#pragma pack(push, 1)
typedef struct CConveyor {
    CPlatform base; // 0x0
    CVector3f size; // 0x720
    CVector3f direction; // 0x72c
    char start_event[100]; // 0x738
    char stop_event[100]; // 0x79c
    int state; // 0x800
    char actor_class[80]; // 0x804
} CConveyor;
#pragma pack(pop)

