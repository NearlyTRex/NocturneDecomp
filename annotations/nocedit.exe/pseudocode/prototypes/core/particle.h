#pragma once

// Function prototypes for core/particle.cpp
// Generated from Ghidra function signatures

// Original: core_particle.cpp_CParticle_ctor_FUN_00545650
// Address: 00545650
CParticle * CParticle::ctor(CParticle * this_ptr);

// Original: core_particle.cpp_CParticle_dtor_FUN_00545670
// Address: 00545670
CParticle * CParticle::dtor(CParticle * this_ptr);

// Original: core_particle.cpp_CParticle_setup_FUN_00545680
// Address: 00545680
void CParticle::setup(CParticle * this_ptr, CVector3f * position, CVector3f * velocity);

// Original: core_particle.cpp_CParticle_process_FUN_00545760
// Address: 00545760
void CParticle::process(CParticle * this_ptr);

// Original: core_particle.cpp_CParticle_render_FUN_00545a80
// Address: 00545a80
void CParticle::render(CParticle * this_ptr);

// Original: core_particle.cpp_CParticle_onCollision_FUN_00545ab0
// Address: 00545ab0
int CParticle::onCollision(CParticle * this_ptr, CVector3f * collision_normal);
