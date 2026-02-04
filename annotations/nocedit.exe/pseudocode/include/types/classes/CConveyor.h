#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CPlatform.h"
#include "types/classes/CVector3f.h"

// Structure: CConveyor
// Ghidra size: 0x860 (2144 bytes)
typedef struct CConveyor {
    CPlatform base; // 0x0
    CVector3f size; // 0x72c
    CVector3f direction; // 0x738
    char start_event[100]; // 0x744
    char stop_event[100]; // 0x7a8
    int state; // 0x80c
    char actor_class[80]; // 0x810
} CConveyor;

