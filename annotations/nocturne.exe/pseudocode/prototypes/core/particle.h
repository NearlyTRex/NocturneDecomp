#pragma once

// Function prototypes for core/particle.cpp
// Generated from Ghidra function signatures

// Original: core_particle.cpp_CParticle_ctor_FUN_004ef010
// Address: 004ef010
void __cdecl CParticle::ctor(int param_1);

// Original: core_particle.cpp_CParticle_dtor_FUN_004ef030
// Address: 004ef030
void __cdecl CParticle::dtor(int param_1);

// Original: core_particle.cpp_CParticle_setup_FUN_004ef040
// Address: 004ef040
void __cdecl CParticle::setup(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);

// Original: core_particle.cpp_CParticle_process_FUN_004ef120
// Address: 004ef120
void __cdecl CParticle::process(float *param_1);

// Original: core_particle.cpp_CParticle_render_FUN_004ef440
// Address: 004ef440
void CParticle::render(void);

// Original: core_particle.cpp_CParticle_onCollision_FUN_004ef470
// Address: 004ef470
undefined4 CParticle::onCollision(void);
