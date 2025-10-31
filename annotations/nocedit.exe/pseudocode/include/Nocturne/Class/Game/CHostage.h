#pragma once

// Structure: CHostage
// Ghidra size: 0x1faf0 (129776 bytes)
typedef struct CHostage {
    CNPC base_npc; // 0x0
    float rescue_distance; // 0x1f708
    char field_128780[936]; // 0x1f70c
    int follow_state; // 0x1fab4
    char field_129720[4]; // 0x1fab8
    int hostage_state; // 0x1fabc
    char field_129728[28]; // 0x1fac0
    int no_shadows_when_saved; // 0x1fadc
    char field_129760[16]; // 0x1fae0
} CHostage;

