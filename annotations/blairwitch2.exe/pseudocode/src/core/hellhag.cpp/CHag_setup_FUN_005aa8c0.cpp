// Name: core_hellhag.cpp_CHag_setup_FUN_005aa8c0
// Address: 005aa8c0
// Address Range: [[005aa8c0, 005aa967]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_setup_FUN_005aa8c0(CHag *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_hellhag_cpp_CHag_setup_FUN_005aa8c0(CHag *this_ptr)

{
  CSimpleParticleSystem *pCVar1;
  CSkeleton *this_ptr_00;
  int iVar2;
  
  core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(&this_ptr->base);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    ((this_ptr->base).skeleton,"Bip01 Head",1);
  this_ptr_00 = (this_ptr->base).skeleton;
  this_ptr->head_bone = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  this_ptr->hand_bone = iVar2;
  pCVar1 = (this_ptr->base).base.base.base.particle_systems;
  (this_ptr->base).base.base.eye_glow_bone = this_ptr->head_bone;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(pCVar1,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(pCVar1,this_ptr);
  core_bwspart_cpp_CSimpleParticleSystem_start_FUN_005a80d0(pCVar1,0);
  pCVar1 = (this_ptr->base).base.base.base.particle_systems + 4;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(pCVar1,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(pCVar1,this_ptr);
  core_bwspart_cpp_CSimpleParticleSystem_start_FUN_005a80d0(pCVar1,0);
  return;
}
