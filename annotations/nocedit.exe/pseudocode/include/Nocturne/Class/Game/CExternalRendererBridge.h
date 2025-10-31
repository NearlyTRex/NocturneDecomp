#pragma once

// Structure: CExternalRendererBridge
// Ghidra size: 0x8c (140 bytes)
typedef struct CExternalRendererBridge {
    int* red_bit_position; // 0x0
    int* red_scale_factor; // 0x4
    int* red_bit_count; // 0x8
    int* green_bit_position; // 0xc
    int* green_scale_factor; // 0x10
    int* green_bit_count; // 0x14
    int* blue_bit_position; // 0x18
    int* blue_scale_factor; // 0x1c
    int* blue_bit_count; // 0x20
    int* blend_mode; // 0x24
    int* current_lighting; // 0x28
    int* current_alpha; // 0x2c
    int* console_text_color; // 0x30
    int* clip_left; // 0x34
    int* clip_top; // 0x38
    int* clip_right; // 0x3c
    int* clip_bottom; // 0x40
    int* texture_filtering; // 0x44
    int* texture_dimension; // 0x48
    int* texture_bits; // 0x4c
    int* system_memory_size; // 0x50
    int* video_memory_size; // 0x54
    int* max_texture_size; // 0x58
    void** frame_buffer_ptr; // 0x5c
    int* system_initialized; // 0x60
    int* pod_system_version; // 0x64
    int* processor_type; // 0x68
    int* rendering_quality; // 0x6c
    uint sizeof1; // 0x70
    uint sizeof2; // 0x74
    uint sizeof4; // 0x78
    uint sizeof5; // 0x7c
    uint sizeof7; // 0x80
    uint sizeof6; // 0x84
    uint sizeof3; // 0x88
} CExternalRendererBridge;

