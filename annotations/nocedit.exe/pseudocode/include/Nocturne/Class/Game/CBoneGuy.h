#pragma once

// Structure: CBoneGuy
// Ghidra size: 0xc4e4 (50404 bytes)
typedef struct CBoneGuy {
    CEnemy base_enemy; // 0x0
    char field_48820[128]; // 0xbeb4
    float recombine_time; // 0xbf34
    int box_count; // 0xbf38
    CVector3f box_list_pos; // 0xbf3c
    CVector3f box_list_orient; // 0xbf48
    CQuaternion4f box_list_dest_orient; // 0xbf54
    CQuaternion4f box_list_start_orient; // 0xbf64
    CVector3f source_pos; // 0xbf74
    char field_49024[1372]; // 0xbf80
    int blown_up; // 0xc4dc
    float param; // 0xc4e0
} CBoneGuy;

