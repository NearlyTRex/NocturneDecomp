#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EHeroType.h"
#include "types/structs/SNetworkAddr.h"

// Structure: SGameSettingsPlayer
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct SGameSettingsPlayer {
    char name[20]; // 0x0
    SNetworkAddr addr; // 0x14
    EHeroType hero_number; // 0x1c
    uint aim_mode; // 0x20
    int ready_flag; // 0x24
} SGameSettingsPlayer;
#pragma pack(pop)

