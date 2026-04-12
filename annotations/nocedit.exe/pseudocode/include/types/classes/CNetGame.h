#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winsock.h"
#include "types/enums/EConnectionType.h"
#include "types/enums/ENetworkMode.h"
#include "types/structs/SNetPlayer.h"

// Structure: CNetGame
// Ghidra size: 0x174 (372 bytes)
#pragma pack(push, 1)
typedef struct CNetGame {
    EConnectionType connection_type; // 0x0, 0=none,1=server,2=client
    ENetworkMode network_mode; // 0x4, 0=disconnected,1=lobby,2=syncing,3=in-game
    char player_name[20]; // 0x8
    int player_count; // 0x1c
    SNetPlayer players[2]; // 0x20
    int server_player_index; // 0x110
    int local_player_index; // 0x114
    char mission_name[80]; // 0x118
    int has_pending_sim_frame; // 0x168
    uint random_seed; // 0x16c
    _SOCKET socket; // 0x170
} CNetGame;
#pragma pack(pop)

