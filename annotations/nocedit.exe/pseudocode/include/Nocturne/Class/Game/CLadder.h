#pragma once

// Structure: CLadder
// Ghidra size: 0x300 (768 bytes)
typedef struct CLadder {
    CDemonActor base_actor; // 0x0
    char* model; // 0x158
    char field_348[376]; // 0x15c
    CVector3f ladder_size; // 0x2d4
    char master_actor[4]; // 0x2e0
    char field_740[24]; // 0x2e4
    int ground_type; // 0x2fc
} CLadder;

