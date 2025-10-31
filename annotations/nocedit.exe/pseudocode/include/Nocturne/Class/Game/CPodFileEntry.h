#pragma once

// Structure: CPodFileEntry
// Ghidra size: 0x39c (924 bytes)
typedef struct CPodFileEntry {
    char filename[256]; // 0x0
    char field_256[364]; // 0x100
    char checkout_user[100]; // 0x26c
    char* description_ptr; // 0x2d0
    char field_724[156]; // 0x2d4
    int action_type; // 0x370
    int status_or_timestamp; // 0x374
    int action_index; // 0x378
    int status_field2; // 0x37c
    char field_896[28]; // 0x380
} CPodFileEntry;

