// Name: core_mine.cpp_CSpiritMine_setup_FUN_005ad4f0
// Address: 005ad4f0
// Address Range: [[005ad4f0, 005ad52a]]
// Convention: __cdecl
// Signature: void __cdecl core_mine_cpp_CSpiritMine_setup_FUN_005ad4f0(CSpiritMine *this_ptr)

#include "nocturne.h"

void __cdecl core_mine_cpp_CSpiritMine_setup_FUN_005ad4f0(CSpiritMine *this_ptr)

{
  CSimpleParticleSystem *this_ptr_00;
  
  core_boxactor_cpp_CBoxActor_setup_FUN_0041be70(&this_ptr->base);
  this_ptr_00 = (this_ptr->base).base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(this_ptr_00,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(this_ptr_00,this_ptr);
  core_bwspart_cpp_CSimpleParticleSystem_start_FUN_005a80d0(this_ptr_00,0);
  return;
}
