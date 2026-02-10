#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CInventory.h"
#include "types/classes/CPathMap.h"
#include "types/structs/SActionKeyBindings.h"

// Structure: CHero
// Ghidra size: 0x1fbd4 (130004 bytes)
typedef struct CHero {
    CCharacter base; // 0x0
    float unk1; // 0xbe24
    int control_type; // 0xbe28
    SActionKeyBindings action_bindings; // 0xbe2c
    char unk2[12]; // 0xbe4c
    CPathMap path_map; // 0xbe58
    int aim_mode; // 0x1f734
    CInventory inventory; // 0x1f738
    int is_wearing_gas_mask; // 0x1fb98
    struct CDemonActor* door_to_open; // 0x1fb9c
    struct CDemonActor* object_to_pick_up; // 0x1fba0
    struct CDemonActor* pushed_object; // 0x1fba4
    struct CDemonActor* lever_to_pull; // 0x1fba8
    struct CDemonActor* ladder_to_climb; // 0x1fbac
    char unk3[32]; // 0x1fbb0
    int ai_task; // 0x1fbd0
} CHero;

