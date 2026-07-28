#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CPlatform.h"
#include "types/classes/CVector3f.h"

// Structure: CConveyor
// Ghidra size: 0x858 (2136 bytes)
#pragma pack(push, 1)
typedef struct CConveyor {
    CPlatform base; // 0x0
    CVector3f size; // 0x724
    CVector3f direction; // 0x730
    char start_event[100]; // 0x73c
    char stop_event[100]; // 0x7a0
    int state; // 0x804
    char actor_class[80]; // 0x808
} CConveyor;
#pragma pack(pop)

