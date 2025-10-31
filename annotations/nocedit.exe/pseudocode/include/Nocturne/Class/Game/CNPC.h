#pragma once

// Structure: CNPC
// Ghidra size: 0x1f708 (128776 bytes)
typedef struct CNPC {
    CCharacter base_character; // 0x0
    char* model_name; // 0xbe24
    char field_48680[80088]; // 0xbe28
    int shoot_me; // 0x1f700
    int pool_me; // 0x1f704
} CNPC;

