#pragma once

// Structure: CColorQuantizer
// Ghidra size: 0x4b44 (19268 bytes)
typedef struct CColorQuantizer {
    CColorQuantizer_ProgressCallback* progress_callback; // 0x0
    void* pixel_data; // 0x4
    uchar* flags_buffer; // 0x8
    void* scanline_buffer; // 0xc
    float* error_buffer_r; // 0x10
    float* error_buffer_g; // 0x14
    float* error_buffer_b; // 0x18
    float* error_buffer_i; // 0x1c
    float current_r; // 0x20
    float current_g; // 0x24
    float current_b; // 0x28
    float current_i; // 0x2c
    char field_48[4096]; // 0x30
    SPaletteEntry palette[256]; // 0x1030
    SColorBox boxes[256]; // 0x2030
    char output_region[768]; // 0x4830
    int serpentine_toggle; // 0x4b30
    int status; // 0x4b34
    int pixel_count; // 0x4b38
    int current_pixel_index; // 0x4b3c
    int num_colors; // 0x4b40
} CColorQuantizer;

