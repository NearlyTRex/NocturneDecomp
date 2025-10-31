#pragma once

// Structure: CGhoul
// Ghidra size: 0xbf38 (48952 bytes)
typedef struct CGhoul {
    CEnemy base_enemy; // 0x0
    char field_48820[20]; // 0xbeb4
    int arise_timer; // 0xbec8
    char field_48844[12]; // 0xbecc
    int lives_left; // 0xbed8
    int spasm_count; // 0xbedc
    char field_48864[88]; // 0xbee0
} CGhoul;

