#pragma once

// Structure: CZombie
// Ghidra size: 0xbfac (49068 bytes)
typedef struct CZombie {
    CEnemy base_enemy; // 0x0
    char field_48820[140]; // 0xbeb4
    int is_miner_zombie; // 0xbf40
    int always_chase_fast; // 0xbf44
    char field_48968[100]; // 0xbf48
} CZombie;

