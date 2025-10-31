#pragma once

// Structure: CBulletHole
// Ghidra size: 0x3c (60 bytes)
typedef struct CBulletHole {
    CVector3f position; // 0x0
    int active; // 0xc
    CDemonActor* actor_ptr; // 0x10
    CVector3f surface_normal; // 0x14
    int texture_index; // 0x20
    CVector3f transformed_pos; // 0x24
    CVector3f actor_local_space; // 0x30
} CBulletHole;

