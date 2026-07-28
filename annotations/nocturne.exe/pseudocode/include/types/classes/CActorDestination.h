#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CActorDestination
// Ghidra size: 0x1ec (492 bytes)
#pragma pack(push, 1)
typedef struct CActorDestination {
    CDemonActor base; // 0x0
    struct CDemonActor* dest_actor; // 0x150
    char dest_class[40]; // 0x154
    int triggered; // 0x17c
    char what_event[100]; // 0x180
    int persistent_event_flag; // 0x1e4
    int needs_actor_search; // 0x1e8
} CActorDestination;
#pragma pack(pop)

