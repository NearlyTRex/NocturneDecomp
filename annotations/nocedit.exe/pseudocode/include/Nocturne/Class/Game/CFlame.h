#pragma once

// Structure: CFlame
// Ghidra size: 0x2a4 (676 bytes)
typedef struct CFlame {
    CDemonActor base_actor; // 0x0
    CVector3f flame_size; // 0x158
    char field_356[68]; // 0x164
    int which_flame; // 0x1a8
    float globe_scalar; // 0x1ac
    char field_432[4]; // 0x1b0
    int flame_state; // 0x1b4
    char field_440[200]; // 0x1b8
    float intensity; // 0x280
    float randomness; // 0x284
    int burn_hero; // 0x288
    int burn_enemy; // 0x28c
    char field_656[20]; // 0x290
} CFlame;

