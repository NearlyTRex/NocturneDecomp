#pragma once

// Structure: CActorProperty
// Ghidra size: 0xec (236 bytes)
typedef struct CActorProperty {
    int type; // 0x0
    char name[80]; // 0x4
    int enabled_flag; // 0x54
    int auto_update_flag; // 0x58
    int min_or_index; // 0x5c
    void* min_ptr_or_choice; // 0x60
    int max_or_param; // 0x64
    void* data_ptr; // 0x68
    char field_108[124]; // 0x6c
    void* validator_or_callback; // 0xe8
} CActorProperty;

