#pragma once

// Forward declarations
struct CParticle_vtable;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CParticle
// Ghidra size: 0x38 (56 bytes)
#pragma pack(push, 1)
typedef struct CParticle {
    CVector3f position; // 0x0
    CVector3f velocity; // 0xc
    float lifetime_remaining; // 0x18
    float gravity_acceleration; // 0x1c
    int is_in_solid; // 0x20
    CVector3f previous_position; // 0x24
    int was_in_solid; // 0x30
    struct CParticle_vtable* vtable; // 0x34
} CParticle;
#pragma pack(pop)

