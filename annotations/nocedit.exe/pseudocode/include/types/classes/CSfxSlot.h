#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/iostream.h"
#include "system/stdio.h"
#include "types/classes/CFileBitStream.h"
#include "types/classes/CMP3Decoder.h"
#include "types/classes/CMemoryBitStream.h"
#include "types/classes/CSampleInfo.h"
#include "types/classes/CSfxOptions.h"
#include "types/classes/CSfxSample.h"

// Structure: CSfxSlot
// Ghidra size: 0x128 (296 bytes)
typedef struct CSfxSlot {
    CSfxOptions options; // 0x0
    int hardware_buffer_handle; // 0x70
    int playback_state; // 0x74
    struct CSfxSample* sample; // 0x78
    float effective_frequency; // 0x7c
    float distance_to_speakers[8]; // 0x80
    float channel_volumes[8]; // 0xa0
    int channel_target_buffer_offsets[8]; // 0xc0
    int channel_current_buffer_offsets[8]; // 0xe0
    float reference_distance; // 0x100
    float min_distance; // 0x104
    float max_distance; // 0x108
    float fade_target_volume; // 0x10c
    float fade_time_remaining; // 0x110
    int stop_after_fade; // 0x114
    int is_active; // 0x118
    double prev_hardware_playback_pos; // 0x11c
    int loop_marker_index; // 0x124
} CSfxSlot;

