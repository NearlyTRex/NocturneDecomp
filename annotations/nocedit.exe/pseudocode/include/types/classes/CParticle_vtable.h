#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CParticle.h"
#include "types/classes/CVector3f.h"
#include "types/funcdefs/CParticle_onCollision.h"
#include "types/funcdefs/CParticle_process.h"
#include "types/funcdefs/CParticle_render.h"
#include "types/funcdefs/CParticle_setup.h"

// Structure: CParticle_vtable
// Ghidra size: 0x10 (16 bytes)
typedef struct CParticle_vtable {
    CParticle_setup* setup; // 0x0
    CParticle_process* process; // 0x4
    CParticle_render* render; // 0x8
    CParticle_onCollision* onCollision; // 0xc
} CParticle_vtable;

