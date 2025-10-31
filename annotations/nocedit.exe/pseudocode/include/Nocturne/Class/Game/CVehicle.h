#pragma once

// Structure: CVehicle
// Ghidra size: 0x1078 (4216 bytes)
typedef struct CVehicle {
    CDemonActor base_actor; // 0x0
    char field_344[2016]; // 0x158
    int tire_count; // 0x938
    char field_2364[1776]; // 0x93c
    float cur_time; // 0x102c
    float total_time; // 0x1030
    char field_4148[68]; // 0x1034
} CVehicle;

