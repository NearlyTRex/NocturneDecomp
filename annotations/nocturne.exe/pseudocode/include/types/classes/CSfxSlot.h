#pragma once

// Forward declarations
struct CSfxSample;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CSfxOptions.h"

// Structure: CSfxSlot
// Ghidra size: 0x120 (288 bytes)
#pragma pack(push, 1)
typedef struct CSfxSlot {
    CSfxOptions options; // 0x0
    int hardware_buffer_handle; // 0x6c
    int playback_state; // 0x70
    struct CSfxSample* sample; // 0x74
    float effective_frequency; // 0x78
    float distance_to_speakers[8]; // 0x7c
    float channel_volumes[8]; // 0x9c
    int channel_target_buffer_offsets[8]; // 0xbc
    int channel_current_buffer_offsets[8]; // 0xdc
    float reference_distance; // 0xfc
    float min_distance; // 0x100
    float max_distance; // 0x104
    float fade_target_volume; // 0x108
    float fade_time_remaining; // 0x10c
    float stop_after_fade; // 0x110
    int is_active; // 0x114
    double prev_hardware_playback_pos; // 0x118
} CSfxSlot;
#pragma pack(pop)

