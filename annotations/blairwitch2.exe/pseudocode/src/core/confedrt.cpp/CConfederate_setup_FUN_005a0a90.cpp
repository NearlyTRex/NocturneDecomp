// Name: core_confedrt.cpp_CConfederate_setup_FUN_005a0a90
// Address: 005a0a90
// Address Range: [[005a0a90, 005a0b18]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_setup_FUN_005a0a90(CConfederate *this_ptr)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_setup_FUN_005a0a90(CConfederate *this_ptr)

{
  CSimpleParticleSystem *this_ptr_00;
  CSkeleton *pCVar1;
  int iVar2;
  
  core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(&this_ptr->base);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     (&(this_ptr->base).base.base.model);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 gun1",1);
  this_ptr->gun_bone = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 gun12",1);
  pCVar1 = (this_ptr->base).skeleton;
  this_ptr->gun2_bone = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 Spine",1);
  this_ptr_00 = (this_ptr->base).base.base.base.particle_systems;
  this_ptr->spine_bone = iVar2;
  unkaddr_005a7eb0_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(this_ptr_00,0x100);
  unkaddr_005a7eb0_cpp_CSimpleParticleSystem_attach_FUN_005a8050(this_ptr_00,this_ptr);
  return;
}
