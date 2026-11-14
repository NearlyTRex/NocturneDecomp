// Name: core_weaver.cpp_CRobin_setup_FUN_005a6030
// Address: 005a6030
// Address Range: [[005a6030, 005a60c1]]
// Convention: __cdecl
// Signature: void __cdecl core_weaver_cpp_CRobin_setup_FUN_005a6030(CRobin *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_weaver_cpp_CRobin_setup_FUN_005a6030(CRobin *this_ptr)

{
  CSimpleParticleSystem *pCVar1;
  CSkeleton *this_ptr_00;
  int iVar2;
  
  core_basicnpc_cpp_CBasicNPC_setup_FUN_005a4870(&this_ptr->base);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    ((this_ptr->base).base.skeleton,"Bip01 Head",1);
  this_ptr_00 = (this_ptr->base).base.skeleton;
  this_ptr->head_bone = iVar2;
  (this_ptr->base).base.base.base.eye_glow_bone = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  pCVar1 = (this_ptr->base).base.base.base.base.particle_systems;
  this_ptr->hand_bone = iVar2;
  (this_ptr->base).base.base.base.carry_hands[0].bone_index = iVar2;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(pCVar1,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(pCVar1,this_ptr);
  pCVar1 = (this_ptr->base).base.base.base.base.particle_systems + 1;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(pCVar1,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(pCVar1,this_ptr);
  return;
}
