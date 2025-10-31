#pragma once

// Structure: CNetGame
// Ghidra size: 0x174 (372 bytes)
typedef struct CNetGame {
    int connection_type; // 0x0
    int network_mode; // 0x4
    char network_data[20]; // 0x8
    int player_count; // 0x1c
    SNetPlayer players[2]; // 0x20
    char padding[4]; // 0x110
    int local_player_index; // 0x114
    char field_280[92]; // 0x118
} CNetGame;

