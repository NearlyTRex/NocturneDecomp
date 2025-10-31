#pragma once

// Structure: CEnemy
// Ghidra size: 0xbeb4 (48820 bytes)
typedef struct CEnemy {
    CCharacter base_character; // 0x0
    float speed; // 0xbe24
    int pool_me; // 0xbe28
    int randomize_me; // 0xbe2c
    int field_48688; // 0xbe30
    float guard_distance; // 0xbe34
    char field_48696[16]; // 0xbe38
    char patrol_name_pattern[100]; // 0xbe48
    int field_48812; // 0xbeac
    float victim_height; // 0xbeb0
} CEnemy;

