#pragma once

// Structure: CParticle_vtable
// Ghidra size: 0x10 (16 bytes)
typedef struct CParticle_vtable {
    CParticle_setup* setup; // 0x0
    CParticle_process* process; // 0x4
    CParticle_render* render; // 0x8
    CParticle_onCollision* onCollision; // 0xc
} CParticle_vtable;

