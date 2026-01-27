#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CActorDestination
// Ghidra size: 0x1f4 (500 bytes)
typedef struct CActorDestination {
    CDemonActor base_actor; // 0x0
    int dest_actor; // 0x158
    char dest_class[44]; // 0x15c
    char what_event[100]; // 0x188
    int persistent_event_flag; // 0x1ec
    int unk; // 0x1f0
} CActorDestination;

