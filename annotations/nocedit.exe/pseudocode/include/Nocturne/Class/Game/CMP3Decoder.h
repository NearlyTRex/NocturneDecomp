#pragma once

// Structure: CMP3Decoder
// Ghidra size: 0x8630 (34352 bytes)
typedef struct CMP3Decoder {
    char filename[256]; // 0x0
    int sample_rate; // 0x100
    int num_channels; // 0x104
    int available_samples; // 0x108
    short* decode_buffer_pos; // 0x10c
    short decode_buffer[2304]; // 0x110
    CMemoryBitStream memory_bitstream; // 0x1310
    CFileBitStream file_bitstream; // 0x5320
    int field_21324; // 0x534c
    float synthesis_v_buffer[2][1024]; // 0x5350
    int synthesis_buffer_index[2]; // 0x7350
    int layer3_scalefactors[45]; // 0x7358
    char field_29708[36]; // 0x740c
    float synthesis_history[2][16][18]; // 0x7430
    char field_32048[2304]; // 0x7d30
} CMP3Decoder;

