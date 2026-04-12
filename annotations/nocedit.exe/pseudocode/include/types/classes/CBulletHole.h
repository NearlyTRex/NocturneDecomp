#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CBulletHole
// Ghidra size: 0x3c (60 bytes)
#pragma pack(push, 1)
typedef struct CBulletHole {
    CVector3f position; // 0x0
    int active; // 0xc
    struct CDemonActor* actor_ptr; // 0x10
    CVector3f euler_angles; // 0x14
    int texture_index; // 0x20
    CVector3f transformed_pos; // 0x24
    CVector3f actor_local_space; // 0x30
} CBulletHole;
#pragma pack(pop)

