#pragma once

// Forward declarations
struct CWerewolf;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMorph.h"
#include "types/classes/CNPC.h"

// Structure: CPassenger
// Ghidra size: 0x20448 (132168 bytes)
#pragma pack(push, 1)
typedef struct CPassenger {
    CNPC base; // 0x0
    char transform_event[100]; // 0x1f708
    char wolf_model_name[32]; // 0x1f76c
    char name_of_wolf[32]; // 0x1f78c
    char transform_wav[100]; // 0x1f7ac
    struct CWerewolf* werewolf_actor; // 0x1f810
    CMorph morph; // 0x1f814
    float morph_time; // 0x20440
    float wolf_size; // 0x20444
} CPassenger;
#pragma pack(pop)

