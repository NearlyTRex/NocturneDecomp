#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CActorDestination
// Ghidra size: 0x1f4 (500 bytes)
#pragma pack(push, 1)
typedef struct CActorDestination {
    CDemonActor base; // 0x0
    struct CDemonActor* dest_actor; // 0x158
    char dest_class[40]; // 0x15c
    int triggered; // 0x184
    char what_event[100]; // 0x188
    int persistent_event_flag; // 0x1ec
    int needs_actor_search; // 0x1f0
} CActorDestination;
#pragma pack(pop)

