// Name: core_hpbox.cpp_CParticleBox_setup_FUN_005ac8d0
// Address: 005ac8d0
// Address Range: [[005ac8d0, 005ac959]]
// Convention: __cdecl
// Signature: void __cdecl core_hpbox_cpp_CParticleBox_setup_FUN_005ac8d0(CParticleBox *this_ptr)

#include "nocturne.h"

void __cdecl core_hpbox_cpp_CParticleBox_setup_FUN_005ac8d0(CParticleBox *this_ptr)

{
  CSimpleParticleSystem *pCVar1;
  
  core_boxactor_cpp_CBoxActor_setup_FUN_0041be70(&this_ptr->base);
  pCVar1 = (this_ptr->base).base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(pCVar1,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(pCVar1,this_ptr);
  pCVar1 = (this_ptr->base).base.particle_systems + 1;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(pCVar1,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(pCVar1,this_ptr);
  pCVar1 = (this_ptr->base).base.particle_systems + 2;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(pCVar1,0x200);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(pCVar1,this_ptr);
  pCVar1 = (this_ptr->base).base.particle_systems + 3;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(pCVar1,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(pCVar1,this_ptr);
  return;
}
