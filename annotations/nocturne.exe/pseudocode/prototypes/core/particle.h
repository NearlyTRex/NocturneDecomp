#pragma once

// Function prototypes for core/particle.cpp
// Generated from Ghidra function signatures

// Original: core_particle.cpp_CParticle_ctor_FUN_004ef010
// Address: 004ef010
CParticle * __cdecl CParticle::ctor(CParticle *this_ptr);

// Original: core_particle.cpp_CParticle_dtor_FUN_004ef030
// Address: 004ef030
CParticle * __cdecl CParticle::dtor(CParticle *this_ptr,uint flags);

// Original: core_particle.cpp_CParticle_setup_FUN_004ef040
// Address: 004ef040
void __cdecl CParticle::setup(CParticle *this_ptr,CVector3f *position,CVector3f *velocity);

// Original: core_particle.cpp_CParticle_process_FUN_004ef120
// Address: 004ef120
void __cdecl CParticle::process(CParticle *this_ptr);

// Original: core_particle.cpp_CParticle_render_FUN_004ef440
// Address: 004ef440
void CParticle::render(void);

// Original: core_particle.cpp_CParticle_onCollision_FUN_004ef470
// Address: 004ef470
undefined4 CParticle::onCollision(void);
