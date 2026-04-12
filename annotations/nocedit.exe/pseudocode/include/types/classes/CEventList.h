#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SActorVarBlock.h"
#include "types/structs/SCounterBlock.h"
#include "types/structs/SEventNameBlock.h"
#include "types/structs/SSfxBlock.h"
#include "types/structs/STimerBlock.h"

// Structure: CEventList
// Ghidra size: 0x514c (20812 bytes)
#pragma pack(push, 1)
typedef struct CEventList {
    SEventNameBlock events; // 0x0
    SEventNameBlock current_events; // 0xc84
    SEventNameBlock game_flags; // 0x1908
    SEventNameBlock persistent_events; // 0x258c
    STimerBlock timers; // 0x3210
    SCounterBlock counters; // 0x337c
    SActorVarBlock actor_vars; // 0x34e8
    SSfxBlock sfx_handles; // 0x3ac8
} CEventList;
#pragma pack(pop)

