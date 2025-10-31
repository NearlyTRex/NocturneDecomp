#pragma once

// Structure: CDemonActor
// Ghidra size: 0x158 (344 bytes)
typedef struct CDemonActor {
    char actor_name[32]; // 0x0
    CLocation location; // 0x20
    COrientation orient; // 0x30
    CMatrix3x3f orient_matrix; // 0x3c
    int runtime_state; // 0x60
    int health; // 0x64
    int field_104; // 0x68
    int field_108; // 0x6c
    int was_created; // 0x70
    float create_prob; // 0x74
    char create_event[100]; // 0x78
    int field_220; // 0xdc
    CVector3f field_224; // 0xe0
    CVector3f field_236; // 0xec
    int field_248; // 0xf8
    int is_transparent; // 0xfc
    int field_256; // 0x100
    int field_260; // 0x104
    CVector3i scale; // 0x108
    int field_276; // 0x114
    int field_280; // 0x118
    int field_284; // 0x11c
    int field_288; // 0x120
    int field_292; // 0x124
    CDemonActorClassMetadata metadata; // 0x128
} CDemonActor;

