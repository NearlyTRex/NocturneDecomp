#pragma once

// Structure: CPendulum
// Ghidra size: 0x444 (1092 bytes)
typedef struct CPendulum {
    CDemonActor base_actor; // 0x0
    char* model_name; // 0x158
    char field_348[376]; // 0x15c
    int start_event; // 0x2d4
    char field_728[96]; // 0x2d8
    int stop_event; // 0x338
    char field_828[96]; // 0x33c
    int moving; // 0x39c
    float param; // 0x3a0
    char field_932[4]; // 0x3a4
    float max_angle; // 0x3a8
    char* swoosh_sound; // 0x3ac
    char field_944[28]; // 0x3b0
    float swoosh_phase_bias; // 0x3cc
    char* creak_1_sound; // 0x3d0
    char field_980[28]; // 0x3d4
    char* creak_2_sound; // 0x3f0
    char field_1012[52]; // 0x3f4
    int kill_hero; // 0x428
    int kill_enemy; // 0x42c
    float decay; // 0x430
    float decay_timer; // 0x434
    int ground_type; // 0x438
    int one_shot; // 0x43c
    int field_1088; // 0x440
} CPendulum;

