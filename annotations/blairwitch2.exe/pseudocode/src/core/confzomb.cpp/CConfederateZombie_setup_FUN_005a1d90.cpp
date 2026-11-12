// Name: core_confzomb.cpp_CConfederateZombie_setup_FUN_005a1d90
// Address: 005a1d90
// Address Range: [[005a1d90, 005a1e02]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_setup_FUN_005a1d90(CConfederateZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_confzomb_cpp_CConfederateZombie_setup_FUN_005a1d90(CConfederateZombie *this_ptr)

{
  CSimpleParticleSystem *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  
  core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(&this_ptr->base);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    ((this_ptr->base).skeleton,"Bip01 L Finger1",1);
  this_ptr_01 = (this_ptr->base).skeleton;
  this_ptr->left_finger_bone = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_01,"Bip01 R Finger1",1);
  this_ptr_00 = (this_ptr->base).base.base.base.particle_systems + 4;
  this_ptr->right_finger_bone = iVar1;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(this_ptr_00,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(this_ptr_00,this_ptr);
  core_bwspart_cpp_CSimpleParticleSystem_start_FUN_005a80d0(this_ptr_00,0);
  return;
}
