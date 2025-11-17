#pragma once

// Structure: SMixBuffer
// Ghidra size: 0x2c (44 bytes)
typedef struct SMixBuffer {
    float* channel_buffers[8]; // 0x0
    int num_output_samples; // 0x20
    int num_channels; // 0x24
    int output_sample_rate; // 0x28
} SMixBuffer;

