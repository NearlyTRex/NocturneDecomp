#pragma once

// Structure: CSfxOptions
// Ghidra size: 0x70 (112 bytes)
typedef struct CSfxOptions {
    int status; // 0x0
    CVector3d position; // 0x4
    CVector3d* position_source_ptr; // 0x1c
    int position_format; // 0x20
    CVector3d velocity; // 0x24
    CVector3d* velocity_source_ptr; // 0x3c
    int velocity_format; // 0x40
    float current_volume; // 0x44
    float base_frequency; // 0x48
    double delay_remaining; // 0x4c
    int userdata[2]; // 0x54
    uint flags; // 0x5c
    double trigger_time; // 0x60
    int trigger_id; // 0x68
    int field_108; // 0x6c
} CSfxOptions;

