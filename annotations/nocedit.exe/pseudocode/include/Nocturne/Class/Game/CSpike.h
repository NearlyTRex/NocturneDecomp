#pragma once

// Structure: CSpike
// Ghidra size: 0x560 (1376 bytes)
typedef struct CSpike {
    CDemonActor base_actor; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int spike_type; // 0x2d4
    int spike_state; // 0x2d8
    int are_we_active; // 0x2dc
    char field_736[12]; // 0x2e0
    float extend_distance; // 0x2ec
    char* start_event; // 0x2f0
    char field_756[96]; // 0x2f4
    char* stop_event; // 0x354
    char field_856[96]; // 0x358
    char* extend_event; // 0x3b8
    char field_956[96]; // 0x3bc
    char* retract_event; // 0x41c
    char field_1056[96]; // 0x420
    float extend_time; // 0x480
    float retract_time; // 0x484
    char field_1160[4]; // 0x488
    char* extend_sound; // 0x48c
    char field_1168[96]; // 0x490
    char* retract_sound; // 0x4f0
    char field_1268[96]; // 0x4f4
    float period; // 0x554
    float damage_strength; // 0x558
    float param; // 0x55c
} CSpike;

