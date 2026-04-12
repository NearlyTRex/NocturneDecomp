#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SGameSettingsPlayer.h"
#include "types/structs/SNetPacketHeader.h"

// Structure: SNetPacket_GameSettings
// Ghidra size: 0xb1 (177 bytes)
#pragma pack(push, 1)
typedef struct SNetPacket_GameSettings {
    SNetPacketHeader header; // 0x0
    int settings_version; // 0x5
    int random_seed; // 0x9
    char mission_name[80]; // 0xd
    int player_count; // 0x5d
    SGameSettingsPlayer players[2]; // 0x61
} SNetPacket_GameSettings;
#pragma pack(pop)

